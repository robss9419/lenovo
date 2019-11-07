currentDate=$(date +"%F")  #date
RED="\e[0;31m"
GREEN="\e[0;32m"
BLUE="\e[0;34m"
NC="\e[0m"

function update_pack()
{
      sudo apt-get update |& tee -a log_$currentDate.log &> /dev/null
      sudo apt-get upgrade -y |& tee -a log_$currentDate.log &> /dev/null
      echo "Czynności zakończone."
}

function check_install()
{
      if [ $# -eq 0 ]; then
      echo -e "${RED}ERROR - Nie podałeś żadnego parametru!$NC"  | tee -a log_$currentDate.log
      exit 1
      fi

      for install in "$@"
      do
            dpkg -s $install &> /dev/null
                  if [ $? -eq 0 ]; then 
                        echo -e "${BLUE}MESSAGE: Nasz pakiet $install jest juz zainstalowany !$NC"  | tee -a log_$currentDate.log
                  else
                        echo -e "Pakiet $install nie jest zainstalowany, nastąpi jego instalacja!"  | tee -a log_$currentDate.log
                        sudo apt-get install -y $install  | tee -a log_$currentDate.log &> /dev/null
                        if [$? -eq 0 ]; then
                              echo -e "${GREEN}SUCCES: Pakiet $install zostal zainstalowany poprawnie.$NC"  | tee -a log_$currentDate.log
                        else 
                              echo -e "${RED}ERROR: Coś poszło nie tak, sprawdź plik logu log_${currentDate}.log$NC"  | tee -a log_$currentDate.log
                        fi
                  fi
      done
}

function main()
{
      update_pack
      check_install mc zip unzip
}

main
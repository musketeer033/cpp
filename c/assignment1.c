echo "ENTER ADDRESS BOOK NAME: "
read fname
touch $fname
echo -e "ADDRESS BOOK CREATED\n"
echo -e "NAME\t\tDIV\tBRANCH\t\tYEAR\tCGPA" >> $fname

ch=0
while [ $ch -ne 7 ]; do
    echo -e "\nADDRESS BOOK MENU:"
    echo -e "1. CREATE ADDRESS BOOK"
    echo -e "2. VIEW ADDRESS BOOK"
    echo -e "3. INSERT A RECORD"
    echo -e "4. DELETE A RECORD"
    echo -e "5. MODIFY A RECORD"
    echo -e "6. SEARCH A RECORD"
    echo -e "7. EXIT FROM ADDRESS BOOK"
    echo -e "ENTER YOUR CHOICE: "
    read ch

    case $ch in
        1)
            echo -e "Enter the number of records you want to enter: "
            read n
            for ((i = 0; i < n; i++)); do
                echo -e "ENTER NAME OF STUDENT: "
                read ename
                echo -e "ENTER DIV OF STUDENT: "
                read ediv
                echo -e "ENTER BRANCH OF STUDENT: "
                read ebranch
                echo -e "ENTER YEAR OF STUDENT: "
                read eyear
                echo -e "ENTER CGPA OF STUDENT: "
                read ecgpa
                echo -e "$ename\t$ediv\t$ebranch\t$eyear\t$ecgpa" >> $fname
            done
            ;;

        2)
            echo -e "\nVIEWING ADDRESS BOOK:"
            cat $fname
            ;;

        3)
            echo -e "ENTER NAME OF STUDENT: "
            read ename
            echo -e "ENTER DIV OF STUDENT: "
            read ediv
            echo -e "ENTER BRANCH OF STUDENT: "
            read ebranch
            echo -e "ENTER YEAR OF STUDENT: "
            read eyear
            echo -e "ENTER CGPA OF STUDENT: "
            read ecgpa
            echo -e "$ename\t$ediv\t$ebranch\t$eyear\t$ecgpa" >> $fname
            echo "Record inserted."
            ;;

        4)
            echo -e "ENTER STUDENT DIV TO BE DELETED: "
            read ediv
            if grep -wq $ediv $fname; then
                grep -wv $ediv $fname > temp && mv temp $fname
                echo "RECORD DELETED"
            else
                echo "RECORD DOES NOT EXIST"
            fi
            ;;

        5)
            echo -e "ENTER STUDENT DIV TO BE MODIFIED: "
            read ediv
            if grep -wq $ediv $fname; then
                grep -wv $ediv $fname > temp && mv temp $fname
                echo -e "Enter modified record:"
                echo -e "ENTER NAME OF STUDENT: "
                read ename
                echo -e "ENTER DIV OF STUDENT: "
                read new_div
                echo -e "ENTER BRANCH OF STUDENT: "
                read ebranch
                echo -e "ENTER YEAR OF STUDENT: "
                read eyear
                echo -e "ENTER CGPA OF STUDENT: "
                read ecgpa
                echo -e "$ename\t$new_div\t$ebranch\t$eyear\t$ecgpa" >> $fname
                echo "RECORD MODIFIED"
            else
                echo "RECORD DOES NOT EXIST"
            fi
            ;;

        6)
            echo -e "ENTER STUDENT DIV TO BE SEARCHED: "
            read ediv
            if grep -wq $ediv $fname; then
                grep -w $ediv $fname
                echo "RECORD FOUND"
            else
                echo "RECORD DOES NOT EXIST"
            fi
            ;;

        7)
            echo "EXITING ADDRESS BOOK"
            ;;

        *)
            echo "INVALID CHOICE! Please try again."
            ;;
    esac
done

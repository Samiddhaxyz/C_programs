# custom pallyndrome program for python program (string version)
def string_pallyndrome_checker(string_custom):
    d = list(string_custom)
    e =list( reversed(d))
    if d == e:
        print("the string given by the user is a palyndrome")
    else:
        print("the string given by the user is not a pallyndrome")

# custom pallyndrome program for python program ( number version)
def number_pallyndrome_checker(custom_num):
    d = str(custom_num)
    e = list(d)
    f = list(reversed(e))
    if e == f:
        print("the number given is a pallyndrome")
    else:
        print("the number given is not a pallyndrome")

# main program body 
def main(): 
 print("Choose from the following to run the string pallyndrome checker or the integer pallyndrome checker")
 print("for string pallyndrome checker type -------->     string_pal")
 print("for number pallyndrome checker type ------------->   num_pal")
 operator = input("enter the type you want to discover today!!")
 if operator == "string_pal":
     string_custom = input("Enter your desired string over here ! ")
     string_pallyndrome_checker(string_custom)
 elif operator == "num_pal":
     custom_num = int(input("Enter your desired number over here"))
     number_pallyndrome_checker(custom_num)
 else:
     print("wrong user input")

main()

# main iterative body 

for i in range(5):
    choice = input("Wish to continue ? ----> Yes/No")
    if choice == "Yes":
        main()
    elif choice == "No":
        break 
    else:
        print("user choice not given")

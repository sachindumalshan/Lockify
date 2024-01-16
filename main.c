#include <stdio.h>
#include <stdlib.h>

setMasterPassword(){
    printf("setMasterPassword()\n");
    printf("\n");
}

addPassword(){
    printf("addPassword()\n");
    printf("\n");
}

retrievePassword(){
    printf("retrievePassword()\n");
    printf("\n");
}

updatePassword(){
    printf("updatePassword()\n");
    printf("\n");
}

deletePassword(){
    printf("deletePassword()\n");
    printf("\n");
}

generatePassword(){
    printf("generatePassword()\n");
    printf("\n");
}

int main()
{
    int choice;
    printf("********** Welcome to Lockify **********\n");
    printf("\n");

    do{
        printf("1. Set Master Password\n");
        printf("2. Add Password\n");
        printf("3. Retrieve Password\n");
        printf("4. Update Password\n");
        printf("5. Delete Password\n");
        printf("6. Generate Password\n");
        printf("7. Exit\n");
        printf("\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
        case 1:
            setMasterPassword();
            break;
        case 2:
            addPassword();
            break;
        case 3:
            retrievePassword();
            break;
        case 4:
            updatePassword();
            break;
        case 5:
            deletePassword();
            break;
        case 6:
            generatePassword();
            break;
        case 7:
            printf("Exit from the system!\n");
            break;
        default:
            printf("Invalid Choice!\n");
        }
    }while(choice != 7);

    return 0;
}

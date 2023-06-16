int findMinimumCoins(int amount) 

{

    vector<int> currency = {1,2,5,10,20,50,100,500,1000};

 

    int coins = 0;

    int i=8;

    while(amount && i>=0){

       

     if(amount<currency[i]){

       i--;

       continue; 

     }

     

     coins++;

     amount-=currency[i];

 

    }

 

    return coins;

}

 
commento un po':
1. AddBranch.sci è la nuova procedura che "attacca" le funzioni all'albero SCI2CLib o USER2CLib;
2. AddLeafAtan.sci contiene tutte le combinazioni su cui poter utilizzare la funzione atan;
3. AddLeafDet.sci contiene tutte le combinazioni su cui poter utilizzare la funzione det;
4. AddLeafDotOp.sci contiene tutte le combinazioni su cui poter utilizzare le funioni "punto" e tra due operandi
5. AddLeafElementary.sci contiene tutte le combinazioni su cui poter utilizzare le funzioni "elementari" (sin cos...)
6. AddLeaf Sqrt contiene tutte le combinazioni su cui poter utilizzare la funzione sqrt;
7. main.sci crea le due liste SCI2CLib e USER2CLib e popola la prima con le varie funzioni.
8. SearchFunctionName.sci interroga l'albero (parametro di ingresso) per trovare una funzione
9. Example.sce è uno script che lancia il file main e simula la ricerca di una funzione utente e il relativo inserimento
 
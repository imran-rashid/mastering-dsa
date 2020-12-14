// Error


let perm = (str, l, h) => {
    if (l == h){
        console.log(str);
    } else {
        for(let i = l; i < h; i++){
            let t = str[l];
            str[l] = str[i];
            str[i] = t;

            perm(str, l+1, h);
            let x = str[l];
            str[l] = str[i];
            str[i] = x;
        }
    }
}

perm("ab", 0, 2);
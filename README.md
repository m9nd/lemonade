# lemonade
basic encryption algorithm that you can use to learn from

## features 
### encryption function _(zitronenpflucker)_ - 
  * encrypts a given string by adding a code value to each character and converting the sums to hexadecimal strings
  * returns a vector of encrypted strings

### decryption function _(zitruspress)_ - 
  * decrypts a vector of hexadecimal strings by subtracting a code value from each converted integer and converting them back to characters
  * returns the decrypted string

### main function -
  * demonstrates the usage of encryption and decryption functions
  * encrypts a message using zitronenpflucker and prints the encrypted message
  * decrypts the encrypted message using zitruspress and prints the decrypted message

## analyzing the code

1. encryption mechanism - the lemonade algorithm performs a simple additive encryption by adding a code value to each character and converting the sums to hexadecimal strings. this encryption mechanism is relatively basic and can be considered weak in terms of cryptographic strength. it lacks fundamental security features such as key management, strong randomness, and complex mathematical operations typically found in more secure encryption algorithms.

2. key derivation - the code value used for encryption and decryption is derived from the _"limonadezaad"_ string. The security of the algorithm heavily relies on the strength and secrecy of this seed. If an attacker can determine or guess the seed, they can easily decrypt the messages. 

3. so is it good? - absolutely not, the "custom" encryption mechanism could be cracked by a retired transgender lesbian tennis player from palestine with a fist up her ass and no reverse engineering knowledge. the hardcoded "limonadezaad" string is autism and the failed attempts at funny german words are not helping the code. the type conversion from unsigned int to char in the decryption function is a time bomb. proper handling isn't optional; it's required.

4. so how can we improve? - obviously im not going to criticize a codebase without offering a solution. first we'll start off by replacing the "custom encryption" with something better, probably AES. forsure add error handling and input validation, make actually useful function names, manage the encryption key through a HSM cuz ur a chad or just use a KMS. actually usefull comments wouldnt hurt, cut the fat - the unnecessary type conversions and stream operations are just slowing the code down. 

## credit

i was originally provided this code by the owner of companion screenshare tool, i don't know any of his socials now but if anyone does i'd be happy to credit him for this. only changes i made were i added the main.cc file and code, renamed the functions, and removed the silly goofy xor encryption.

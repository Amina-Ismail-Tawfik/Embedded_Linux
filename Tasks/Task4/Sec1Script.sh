sudo useradd amina_ismail_aly
sudo groupadd my_fam_group
sudo usermod -aG my_fam_group amina_ismail_aly
sudo cat /etc/passwd | grep amina_ismail_aly
sudo cat /etc/group | grep my_fam_group


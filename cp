- hosts: 192.168.0.7
  - name: Ansible copy file to remote server
    copy:
      src: /home/nilay/Desktop/McAfee-Endpoint-Security-for-Mac-10.5$
      dest: /Users/Shared/

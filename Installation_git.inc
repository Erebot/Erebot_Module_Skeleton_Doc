Under Linux, **from a root shell**, run the command that most closely matches
the tools provided for your distribution:

..  parsed-code:: bash

    # For apt-based distributions such as Debian or Ubuntu
    $ apt-get install git

    # For yum-based distributions such as Fedora, RHEL (RedHat) or CentOS
    $ yum install git

    # For urpmi-based distributions such as SLES (SuSE) or MES (Mandriva)
    $ urpmi git

..  note::

    Windows users may be interested in installing `Git for Windows`_ to get
    an equivalent git client. Also, make sure that the path to :file:`git.exe`
    is present on your account's :envvar:`PATH`.
    Otherwise, you'll have to replace :command:`git` by the full path to
    :file:`git.exe` on every invocation. Eg. :

    :samp:`"{C:\\Program Files\\Git\\bin\\}git.exe" clone ...`

..  _`Git for Windows`:
    http://code.google.com/p/msysgit/downloads/list

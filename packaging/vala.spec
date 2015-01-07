%define         vala_version 0.26
%define         vala_priority 26

Name:           vala
Version:        0.26.1
Release:        0
Summary:        Programming language for GNOME
License:        LGPL-2.0
Group:          Platform Development/Utilities
Url:            http://live.gnome.org/Vala
Source0:        http://download.gnome.org/sources/vala/%{vala_version}/%{name}-%{version}.tar.xz
Source1001:     %{name}.manifest

BuildRequires:  bison
BuildRequires:  fdupes
BuildRequires:  flex
BuildRequires:  glib2-devel >= 2.18.0
BuildRequires:  xz
Requires(post): update-alternatives
Requires(postun): update-alternatives

%description
Vala is a new programming language that aims to bring modern
programming language features to GNOME developers without imposing any
additional runtime requirements and without using a different ABI
compared to applications and libraries written in C.

%package -n libvala
Summary:        Programming language for GNOME
Group:          Platform Development/Utilities

%description -n libvala
Vala is a new programming language that aims to bring modern
programming language features to GNOME developers without imposing any
additional runtime requirements and without using a different ABI
compared to applications and libraries written in C.

%package -n libvala-devel
Summary:        Programming language for GNOME
Group:          Platform Development/Utilities
Requires:       libvala = %{version}-%{release}

%description -n libvala-devel
Vala is a new programming language that aims to bring modern
programming language features to GNOME developers without imposing any
additional runtime requirements and without using a different ABI
compared to applications and libraries written in C.

%prep
%setup -q
cp %{SOURCE1001} .

%build
%configure --with-pic --enable-vapigen
%__make %{?_smp_mflags}

%install
%make_install
%fdupes %{buildroot}%{_datadir}

%clean
rm -rf %{buildroot}

%post
update-alternatives \
  --install %{_bindir}/vala                          vala                     %{_bindir}/vala-%{vala_version} \
            %{vala_priority} \
  --slave   %{_bindir}/valac                         valac                    %{_bindir}/valac-%{vala_version} \
  --slave   %{_bindir}/vala-gen-introspect           vala-gen-introspect      %{_bindir}/vala-gen-introspect-%{vala_version} \
  --slave   %{_bindir}/vapicheck                     vapicheck                %{_bindir}/vapicheck-%{vala_version} \
  --slave   %{_bindir}/vapigen                       vapigen                  %{_bindir}/vapigen-%{vala_version} \
  --slave   %{_mandir}/man1/valac.1.gz               valac.1.gz               %{_mandir}/man1/valac-%{vala_version}.1.gz \
  --slave   %{_mandir}/man1/vala-gen-introspect.1.gz vala-gen-introspect.1.gz %{_mandir}/man1/vala-gen-introspect-%{vala_version}.1.gz \
  --slave   %{_mandir}/man1/vapigen.1.gz             vapigen.1.gz             %{_mandir}/man1/vapigen-%{vala_version}.1.gz \
  --slave   %{_datadir}/pkgconfig/vapigen.pc         vapigen.pc               %{_datadir}/pkgconfig/vapigen-%{vala_version}.pc

%postun
# Note: we don't use "$1 -eq 0", to avoid issues if the package gets renamed
if [ ! -f %{_bindir}/vala-%{vala_version} ]; then
  update-alternatives --remove vala %{_bindir}/vala-%{vala_version}
fi

%post -n libvala -p /sbin/ldconfig

%postun -n libvala -p /sbin/ldconfig

%files
%defattr(-,root,root,-)
%manifest %{name}.manifest
%license COPYING
%ghost %{_bindir}/vala
%ghost %{_bindir}/valac
%ghost %{_bindir}/vala-gen-introspect
%ghost %{_bindir}/vapicheck
%ghost %{_bindir}/vapigen
%ghost %{_mandir}/man1/valac.1*
%ghost %{_mandir}/man1/vala-gen-introspect.1*
%ghost %{_mandir}/man1/vapigen.1*
%ghost %{_datadir}/pkgconfig/vapigen.pc
%{_bindir}/vala-%{vala_version}
%{_bindir}/valac-%{vala_version}
%{_bindir}/vala-gen-introspect-%{vala_version}
%{_bindir}/vapicheck-%{vala_version}
%{_bindir}/vapigen-%{vala_version}
%{_mandir}/man1/valac-%{vala_version}.1*
%{_mandir}/man1/vala-gen-introspect-%{vala_version}.1*
%{_mandir}/man1/vapigen-%{vala_version}.1*
%{_datadir}/aclocal/vala.m4
%{_datadir}/aclocal/vapigen.m4
%{_datadir}/pkgconfig/vapigen-%{vala_version}.pc
%dir %{_datadir}/vala
%{_datadir}/vala/Makefile.vapigen
%{_datadir}/vala-%{vala_version}/
%{_libdir}/vala-%{vala_version}/

%files -n libvala
%defattr(-,root,root,-)
%manifest %{name}.manifest
%{_libdir}/libvala-%{vala_version}.so.*

%files -n libvala-devel
%doc AUTHORS ChangeLog NEWS README
%defattr(-,root,root,-)
%manifest %{name}.manifest
%{_includedir}/vala-%{vala_version}/
%{_libdir}/libvala-%{vala_version}.so
%{_libdir}/pkgconfig/libvala-%{vala_version}.pc

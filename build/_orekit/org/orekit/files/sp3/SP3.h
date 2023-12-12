#ifndef org_orekit_files_sp3_SP3_H
#define org_orekit_files_sp3_SP3_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {
        class SP3Header;
        class SP3;
        class SP3Segment;
        class SP3Ephemeris;
        class SP3Coordinate;
      }
      namespace general {
        class EphemerisFile;
      }
    }
    namespace frames {
      class Frame;
    }
    namespace errors {
      class OrekitException;
    }
  }
}
namespace java {
  namespace util {
    class Map;
    class Collection;
  }
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        class SP3 : public ::java::lang::Object {
         public:
          enum {
            mid_init$_fda6b007012d679a,
            mid_addSatellite_f5ffdf29129ef90a,
            mid_containsSatellite_fd2162b8a05a22fe,
            mid_getEphemeris_436340884b8e841c,
            mid_getEphemeris_5c60541aa8c904eb,
            mid_getHeader_b34b324ec840e668,
            mid_getSatelliteCount_412668abc8d889e9,
            mid_getSatellites_1e62c2f73fbdd1c4,
            mid_splice_bc34dcc3e09bb00e,
            mid_validate_5a8308d61cc2a692,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SP3(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SP3(const SP3& obj) : ::java::lang::Object(obj) {}

          SP3(jdouble, jint, const ::org::orekit::frames::Frame &);

          void addSatellite(const ::java::lang::String &) const;
          jboolean containsSatellite(const ::java::lang::String &) const;
          ::org::orekit::files::sp3::SP3Ephemeris getEphemeris(const ::java::lang::String &) const;
          ::org::orekit::files::sp3::SP3Ephemeris getEphemeris(jint) const;
          ::org::orekit::files::sp3::SP3Header getHeader() const;
          jint getSatelliteCount() const;
          ::java::util::Map getSatellites() const;
          static SP3 splice(const ::java::util::Collection &);
          void validate(jboolean, const ::java::lang::String &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {
        extern PyType_Def PY_TYPE_DEF(SP3);
        extern PyTypeObject *PY_TYPE(SP3);

        class t_SP3 {
        public:
          PyObject_HEAD
          SP3 object;
          static PyObject *wrap_Object(const SP3&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif

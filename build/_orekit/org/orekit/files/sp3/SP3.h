#ifndef org_orekit_files_sp3_SP3_H
#define org_orekit_files_sp3_SP3_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {
        class SP3Header;
        class SP3;
        class SP3Coordinate;
        class SP3Segment;
        class SP3Ephemeris;
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
            mid_init$_94ed63e1549d491c,
            mid_addSatellite_105e1eadb709d9ac,
            mid_containsSatellite_df4c65b2aede5c41,
            mid_getEphemeris_96dd0b3f83cc607f,
            mid_getEphemeris_decb43723338ca58,
            mid_getHeader_b3570a3260d46482,
            mid_getSatelliteCount_d6ab429752e7c267,
            mid_getSatellites_dbcb8bbac6b35e0d,
            mid_splice_95d9e9c9aae457c1,
            mid_validate_46b5f89dc9dc4b89,
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

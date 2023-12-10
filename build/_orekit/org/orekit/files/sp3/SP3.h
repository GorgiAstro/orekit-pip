#ifndef org_orekit_files_sp3_SP3_H
#define org_orekit_files_sp3_SP3_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {
        class SP3Header;
        class SP3;
        class SP3Ephemeris;
        class SP3Segment;
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
            mid_init$_70a4bb39cd112135,
            mid_addSatellite_d0bc48d5b00dc40c,
            mid_containsSatellite_7edad2c2f64f4d68,
            mid_getEphemeris_6f533a3154cab531,
            mid_getEphemeris_f4e447d71819a411,
            mid_getHeader_35c06998360669e6,
            mid_getSatelliteCount_570ce0828f81a2c1,
            mid_getSatellites_6f5a75ccd8c04465,
            mid_splice_d952d8777f1add1e,
            mid_validate_e180c5a079f07b98,
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

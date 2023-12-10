#ifndef org_orekit_files_sp3_SP3_H
#define org_orekit_files_sp3_SP3_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace errors {
      class OrekitException;
    }
    namespace files {
      namespace sp3 {
        class SP3Segment;
        class SP3Header;
        class SP3;
        class SP3Coordinate;
        class SP3Ephemeris;
      }
      namespace general {
        class EphemerisFile;
      }
    }
    namespace frames {
      class Frame;
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
            mid_init$_8859cbb85555e51b,
            mid_addSatellite_e939c6558ae8d313,
            mid_containsSatellite_6b161f495ea569b8,
            mid_getEphemeris_d5320b68d65f4db4,
            mid_getEphemeris_e6c169c232fc0e88,
            mid_getHeader_11aed2461124335a,
            mid_getSatelliteCount_f2f64475e4580546,
            mid_getSatellites_d6753b7055940a54,
            mid_splice_af87c3f4a89e91bb,
            mid_validate_90f9b414554a0838,
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

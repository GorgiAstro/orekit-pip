#ifndef org_orekit_files_sp3_SP3_H
#define org_orekit_files_sp3_SP3_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {
        class SP3Header;
        class SP3Ephemeris;
        class SP3;
        class SP3Coordinate;
        class SP3Segment;
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
            mid_init$_5bc611b73af713e4,
            mid_addSatellite_734b91ac30d5f9b4,
            mid_containsSatellite_cde6b28e15c96b75,
            mid_getEphemeris_322c10af64e18348,
            mid_getEphemeris_a4b1793a2b7b47f0,
            mid_getHeader_13873367895735a8,
            mid_getSatelliteCount_55546ef6a647f39b,
            mid_getSatellites_810bed48fafb0b9a,
            mid_splice_b100017156b78afe,
            mid_validate_4f735758fe3ca010,
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

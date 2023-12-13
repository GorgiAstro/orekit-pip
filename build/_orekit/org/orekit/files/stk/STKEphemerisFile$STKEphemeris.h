#ifndef org_orekit_files_stk_STKEphemerisFile$STKEphemeris_H
#define org_orekit_files_stk_STKEphemerisFile$STKEphemeris_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace orekit {
    namespace utils {
      class TimeStampedPVCoordinates;
    }
    namespace files {
      namespace stk {
        class STKEphemerisFile$STKEphemerisSegment;
      }
      namespace general {
        class EphemerisFile$SatelliteEphemeris;
      }
    }
    namespace time {
      class AbsoluteDate;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {

        class STKEphemerisFile$STKEphemeris : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f1fb3e257db4eb3d,
            mid_getId_1c1fa1e935d6cdcf,
            mid_getMu_b74f83833fdad017,
            mid_getSegments_e62d3bb06d56d7e3,
            mid_getStart_c325492395d89b24,
            mid_getStop_c325492395d89b24,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit STKEphemerisFile$STKEphemeris(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          STKEphemerisFile$STKEphemeris(const STKEphemerisFile$STKEphemeris& obj) : ::java::lang::Object(obj) {}

          STKEphemerisFile$STKEphemeris(const ::java::lang::String &, jdouble, const ::java::util::List &);

          ::java::lang::String getId() const;
          jdouble getMu() const;
          ::java::util::List getSegments() const;
          ::org::orekit::time::AbsoluteDate getStart() const;
          ::org::orekit::time::AbsoluteDate getStop() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {
        extern PyType_Def PY_TYPE_DEF(STKEphemerisFile$STKEphemeris);
        extern PyTypeObject *PY_TYPE(STKEphemerisFile$STKEphemeris);

        class t_STKEphemerisFile$STKEphemeris {
        public:
          PyObject_HEAD
          STKEphemerisFile$STKEphemeris object;
          static PyObject *wrap_Object(const STKEphemerisFile$STKEphemeris&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif

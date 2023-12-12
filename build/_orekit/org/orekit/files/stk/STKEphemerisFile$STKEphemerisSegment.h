#ifndef org_orekit_files_stk_STKEphemerisFile$STKEphemerisSegment_H
#define org_orekit_files_stk_STKEphemerisFile$STKEphemerisSegment_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace general {
        class EphemerisFile$EphemerisSegment;
      }
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class CartesianDerivativesFilter;
      class TimeStampedPVCoordinates;
    }
  }
}
namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {

        class STKEphemerisFile$STKEphemerisSegment : public ::java::lang::Object {
         public:
          enum {
            mid_init$_b15605e7b8590c64,
            mid_getAvailableDerivatives_6c4898d6ec0c3837,
            mid_getCoordinates_0d9551367f7ecdef,
            mid_getFrame_6c9bc0a928c56d4e,
            mid_getInterpolationSamples_412668abc8d889e9,
            mid_getMu_557b8123390d8d0c,
            mid_getStart_7a97f7e149e79afb,
            mid_getStop_7a97f7e149e79afb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit STKEphemerisFile$STKEphemerisSegment(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          STKEphemerisFile$STKEphemerisSegment(const STKEphemerisFile$STKEphemerisSegment& obj) : ::java::lang::Object(obj) {}

          STKEphemerisFile$STKEphemerisSegment(jdouble, const ::org::orekit::frames::Frame &, jint, const ::org::orekit::utils::CartesianDerivativesFilter &, const ::java::util::List &);

          ::org::orekit::utils::CartesianDerivativesFilter getAvailableDerivatives() const;
          ::java::util::List getCoordinates() const;
          ::org::orekit::frames::Frame getFrame() const;
          jint getInterpolationSamples() const;
          jdouble getMu() const;
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
        extern PyType_Def PY_TYPE_DEF(STKEphemerisFile$STKEphemerisSegment);
        extern PyTypeObject *PY_TYPE(STKEphemerisFile$STKEphemerisSegment);

        class t_STKEphemerisFile$STKEphemerisSegment {
        public:
          PyObject_HEAD
          STKEphemerisFile$STKEphemerisSegment object;
          static PyObject *wrap_Object(const STKEphemerisFile$STKEphemerisSegment&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif

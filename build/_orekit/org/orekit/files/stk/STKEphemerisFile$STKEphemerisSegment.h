#ifndef org_orekit_files_stk_STKEphemerisFile$STKEphemerisSegment_H
#define org_orekit_files_stk_STKEphemerisFile$STKEphemerisSegment_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class List;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace files {
      namespace general {
        class EphemerisFile$EphemerisSegment;
      }
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
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace files {
      namespace stk {

        class STKEphemerisFile$STKEphemerisSegment : public ::java::lang::Object {
         public:
          enum {
            mid_init$_59d0f64325b9d6d4,
            mid_getAvailableDerivatives_16e9a7b5414faf2d,
            mid_getCoordinates_2afa36052df4765d,
            mid_getFrame_b86f9f61d97a7244,
            mid_getInterpolationSamples_570ce0828f81a2c1,
            mid_getMu_dff5885c2c873297,
            mid_getStart_85703d13e302437e,
            mid_getStop_85703d13e302437e,
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

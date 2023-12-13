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
    namespace utils {
      class TimeStampedPVCoordinates;
      class CartesianDerivativesFilter;
    }
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
            mid_init$_e30f26dea5e0c0aa,
            mid_getAvailableDerivatives_63bfdcc4b7a0536c,
            mid_getCoordinates_e62d3bb06d56d7e3,
            mid_getFrame_2c51111cc6894ba1,
            mid_getInterpolationSamples_55546ef6a647f39b,
            mid_getMu_b74f83833fdad017,
            mid_getStart_c325492395d89b24,
            mid_getStop_c325492395d89b24,
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

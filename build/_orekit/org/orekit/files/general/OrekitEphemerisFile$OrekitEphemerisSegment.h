#ifndef org_orekit_files_general_OrekitEphemerisFile$OrekitEphemerisSegment_H
#define org_orekit_files_general_OrekitEphemerisFile$OrekitEphemerisSegment_H

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
    namespace utils {
      class CartesianDerivativesFilter;
      class TimeStampedPVCoordinates;
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
      namespace general {

        class OrekitEphemerisFile$OrekitEphemerisSegment : public ::java::lang::Object {
         public:
          enum {
            mid_init$_2702e879e387a120,
            mid_getAvailableDerivatives_237181d932324188,
            mid_getCoordinates_a6156df500549a58,
            mid_getFrame_c8fe21bcdac65bf6,
            mid_getInertialFrame_c8fe21bcdac65bf6,
            mid_getInterpolationSamples_f2f64475e4580546,
            mid_getMu_456d9a2f64d6b28d,
            mid_getStart_aaa854c403487cf3,
            mid_getStop_aaa854c403487cf3,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit OrekitEphemerisFile$OrekitEphemerisSegment(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          OrekitEphemerisFile$OrekitEphemerisSegment(const OrekitEphemerisFile$OrekitEphemerisSegment& obj) : ::java::lang::Object(obj) {}

          OrekitEphemerisFile$OrekitEphemerisSegment(const ::java::util::List &, const ::org::orekit::frames::Frame &, jdouble, jint);

          ::org::orekit::utils::CartesianDerivativesFilter getAvailableDerivatives() const;
          ::java::util::List getCoordinates() const;
          ::org::orekit::frames::Frame getFrame() const;
          ::org::orekit::frames::Frame getInertialFrame() const;
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
      namespace general {
        extern PyType_Def PY_TYPE_DEF(OrekitEphemerisFile$OrekitEphemerisSegment);
        extern PyTypeObject *PY_TYPE(OrekitEphemerisFile$OrekitEphemerisSegment);

        class t_OrekitEphemerisFile$OrekitEphemerisSegment {
        public:
          PyObject_HEAD
          OrekitEphemerisFile$OrekitEphemerisSegment object;
          static PyObject *wrap_Object(const OrekitEphemerisFile$OrekitEphemerisSegment&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif

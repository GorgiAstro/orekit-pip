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
    namespace time {
      class AbsoluteDate;
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
    namespace frames {
      class Frame;
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
            mid_init$_0a80307afd202110,
            mid_getAvailableDerivatives_b9dfc27d8c56b5de,
            mid_getCoordinates_d751c1a57012b438,
            mid_getFrame_cb151471db4570f0,
            mid_getInertialFrame_cb151471db4570f0,
            mid_getInterpolationSamples_d6ab429752e7c267,
            mid_getMu_9981f74b2d109da6,
            mid_getStart_80e11148db499dda,
            mid_getStop_80e11148db499dda,
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

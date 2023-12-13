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
      namespace general {

        class OrekitEphemerisFile$OrekitEphemerisSegment : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0d07e79c01a9eae8,
            mid_getAvailableDerivatives_63bfdcc4b7a0536c,
            mid_getCoordinates_e62d3bb06d56d7e3,
            mid_getFrame_2c51111cc6894ba1,
            mid_getInertialFrame_2c51111cc6894ba1,
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

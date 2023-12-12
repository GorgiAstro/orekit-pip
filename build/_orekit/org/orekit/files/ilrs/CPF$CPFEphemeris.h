#ifndef org_orekit_files_ilrs_CPF$CPFEphemeris_H
#define org_orekit_files_ilrs_CPF$CPFEphemeris_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        class CPF$CPFCoordinate;
        class CPF;
        class CPF$CPFEphemeris;
      }
      namespace general {
        class EphemerisFile$SatelliteEphemeris;
        class EphemerisFile$EphemerisSegment;
      }
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace utils {
      class CartesianDerivativesFilter;
    }
    namespace propagation {
      class BoundedPropagator;
    }
  }
}
namespace java {
  namespace util {
    class List;
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
      namespace ilrs {

        class CPF$CPFEphemeris : public ::java::lang::Object {
         public:
          enum {
            mid_init$_fa27d74d51a8d629,
            mid_getAvailableDerivatives_6c4898d6ec0c3837,
            mid_getCoordinates_0d9551367f7ecdef,
            mid_getEphemeridesDataLines_0d9551367f7ecdef,
            mid_getFrame_6c9bc0a928c56d4e,
            mid_getId_3cffd47377eca18a,
            mid_getInterpolationSamples_412668abc8d889e9,
            mid_getMu_557b8123390d8d0c,
            mid_getPropagator_fa108fc36df3791a,
            mid_getPropagator_587eea156586204f,
            mid_getSegments_0d9551367f7ecdef,
            mid_getStart_7a97f7e149e79afb,
            mid_getStop_7a97f7e149e79afb,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit CPF$CPFEphemeris(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          CPF$CPFEphemeris(const CPF$CPFEphemeris& obj) : ::java::lang::Object(obj) {}

          CPF$CPFEphemeris(const ::org::orekit::files::ilrs::CPF &, const ::java::lang::String &);

          ::org::orekit::utils::CartesianDerivativesFilter getAvailableDerivatives() const;
          ::java::util::List getCoordinates() const;
          ::java::util::List getEphemeridesDataLines() const;
          ::org::orekit::frames::Frame getFrame() const;
          ::java::lang::String getId() const;
          jint getInterpolationSamples() const;
          jdouble getMu() const;
          ::org::orekit::propagation::BoundedPropagator getPropagator() const;
          ::org::orekit::propagation::BoundedPropagator getPropagator(const ::org::orekit::attitudes::AttitudeProvider &) const;
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
      namespace ilrs {
        extern PyType_Def PY_TYPE_DEF(CPF$CPFEphemeris);
        extern PyTypeObject *PY_TYPE(CPF$CPFEphemeris);

        class t_CPF$CPFEphemeris {
        public:
          PyObject_HEAD
          CPF$CPFEphemeris object;
          static PyObject *wrap_Object(const CPF$CPFEphemeris&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif

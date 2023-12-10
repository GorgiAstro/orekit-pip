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
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace utils {
      class CartesianDerivativesFilter;
    }
    namespace propagation {
      class BoundedPropagator;
    }
    namespace time {
      class AbsoluteDate;
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
            mid_init$_6ad257d4efed1c41,
            mid_getAvailableDerivatives_237181d932324188,
            mid_getCoordinates_a6156df500549a58,
            mid_getEphemeridesDataLines_a6156df500549a58,
            mid_getFrame_c8fe21bcdac65bf6,
            mid_getId_0090f7797e403f43,
            mid_getInterpolationSamples_f2f64475e4580546,
            mid_getMu_456d9a2f64d6b28d,
            mid_getPropagator_e29a1189b47e1aad,
            mid_getPropagator_ecec515dedcdf4ce,
            mid_getSegments_a6156df500549a58,
            mid_getStart_aaa854c403487cf3,
            mid_getStop_aaa854c403487cf3,
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

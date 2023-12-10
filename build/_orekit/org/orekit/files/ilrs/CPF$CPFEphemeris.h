#ifndef org_orekit_files_ilrs_CPF$CPFEphemeris_H
#define org_orekit_files_ilrs_CPF$CPFEphemeris_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        class CPF$CPFCoordinate;
        class CPF$CPFEphemeris;
        class CPF;
      }
      namespace general {
        class EphemerisFile$SatelliteEphemeris;
        class EphemerisFile$EphemerisSegment;
      }
    }
    namespace propagation {
      class BoundedPropagator;
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
            mid_init$_ca8570ac889d08c9,
            mid_getAvailableDerivatives_16e9a7b5414faf2d,
            mid_getCoordinates_2afa36052df4765d,
            mid_getEphemeridesDataLines_2afa36052df4765d,
            mid_getFrame_b86f9f61d97a7244,
            mid_getId_11b109bd155ca898,
            mid_getInterpolationSamples_570ce0828f81a2c1,
            mid_getMu_dff5885c2c873297,
            mid_getPropagator_08b52de56e2dfa9a,
            mid_getPropagator_ac89b644d37ed0fc,
            mid_getSegments_2afa36052df4765d,
            mid_getStart_85703d13e302437e,
            mid_getStop_85703d13e302437e,
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

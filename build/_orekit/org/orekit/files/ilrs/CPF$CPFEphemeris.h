#ifndef org_orekit_files_ilrs_CPF$CPFEphemeris_H
#define org_orekit_files_ilrs_CPF$CPFEphemeris_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace files {
      namespace ilrs {
        class CPF$CPFCoordinate;
        class CPF$CPFEphemeris;
        class CPF;
      }
      namespace general {
        class EphemerisFile$EphemerisSegment;
        class EphemerisFile$SatelliteEphemeris;
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
            mid_init$_978d3472b061456a,
            mid_getAvailableDerivatives_63bfdcc4b7a0536c,
            mid_getCoordinates_e62d3bb06d56d7e3,
            mid_getEphemeridesDataLines_e62d3bb06d56d7e3,
            mid_getFrame_2c51111cc6894ba1,
            mid_getId_1c1fa1e935d6cdcf,
            mid_getInterpolationSamples_55546ef6a647f39b,
            mid_getMu_b74f83833fdad017,
            mid_getPropagator_2d80cda3dc1f1422,
            mid_getPropagator_9e515362e8de0afe,
            mid_getSegments_e62d3bb06d56d7e3,
            mid_getStart_c325492395d89b24,
            mid_getStop_c325492395d89b24,
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

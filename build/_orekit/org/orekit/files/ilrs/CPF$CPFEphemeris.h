#ifndef org_orekit_files_ilrs_CPF$CPFEphemeris_H
#define org_orekit_files_ilrs_CPF$CPFEphemeris_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      class AttitudeProvider;
    }
    namespace propagation {
      class BoundedPropagator;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace utils {
      class CartesianDerivativesFilter;
    }
    namespace files {
      namespace ilrs {
        class CPF$CPFEphemeris;
        class CPF;
        class CPF$CPFCoordinate;
      }
      namespace general {
        class EphemerisFile$EphemerisSegment;
        class EphemerisFile$SatelliteEphemeris;
      }
    }
    namespace frames {
      class Frame;
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
            mid_init$_bd1743e2968161dc,
            mid_getAvailableDerivatives_b9dfc27d8c56b5de,
            mid_getCoordinates_d751c1a57012b438,
            mid_getEphemeridesDataLines_d751c1a57012b438,
            mid_getFrame_cb151471db4570f0,
            mid_getId_d2c8eb4129821f0e,
            mid_getInterpolationSamples_d6ab429752e7c267,
            mid_getMu_9981f74b2d109da6,
            mid_getPropagator_6c7bb9da59d24b03,
            mid_getPropagator_b59efa08d1230cd1,
            mid_getSegments_d751c1a57012b438,
            mid_getStart_80e11148db499dda,
            mid_getStop_80e11148db499dda,
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

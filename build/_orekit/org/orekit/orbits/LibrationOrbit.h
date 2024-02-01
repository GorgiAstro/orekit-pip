#ifndef org_orekit_orbits_LibrationOrbit_H
#define org_orekit_orbits_LibrationOrbit_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class PVCoordinates;
    }
    namespace propagation {
      class SpacecraftState;
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace orbits {

      class LibrationOrbit : public ::java::lang::Object {
       public:
        enum {
          mid_applyDifferentialCorrection_ff7cb6c242604316,
          mid_getInitialPV_78e01095d7eced90,
          mid_getManifolds_62ff0c391fc6edb9,
          mid_getOrbitalPeriod_9981f74b2d109da6,
          mid_applyCorrectionOnPV_6705c201ee6823b5,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit LibrationOrbit(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        LibrationOrbit(const LibrationOrbit& obj) : ::java::lang::Object(obj) {}

        void applyDifferentialCorrection() const;
        ::org::orekit::utils::PVCoordinates getInitialPV() const;
        ::org::orekit::utils::PVCoordinates getManifolds(const ::org::orekit::propagation::SpacecraftState &, jboolean) const;
        jdouble getOrbitalPeriod() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace orbits {
      extern PyType_Def PY_TYPE_DEF(LibrationOrbit);
      extern PyTypeObject *PY_TYPE(LibrationOrbit);

      class t_LibrationOrbit {
      public:
        PyObject_HEAD
        LibrationOrbit object;
        static PyObject *wrap_Object(const LibrationOrbit&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif

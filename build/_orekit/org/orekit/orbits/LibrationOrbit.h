#ifndef org_orekit_orbits_LibrationOrbit_H
#define org_orekit_orbits_LibrationOrbit_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace propagation {
      class SpacecraftState;
    }
    namespace utils {
      class PVCoordinates;
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
          mid_applyDifferentialCorrection_0640e6acf969ed28,
          mid_getInitialPV_77bd7b3cdab2713e,
          mid_getManifolds_9f3a2589cd3feaf4,
          mid_getOrbitalPeriod_557b8123390d8d0c,
          mid_applyCorrectionOnPV_0f6106070ec4ffe8,
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

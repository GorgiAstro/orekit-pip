#ifndef org_orekit_bodies_CR3BPSystem_H
#define org_orekit_bodies_CR3BPSystem_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace bodies {
      class CelestialBody;
    }
    namespace frames {
      class Frame;
    }
    namespace utils {
      class AbsolutePVCoordinates;
      class LagrangianPoints;
    }
    namespace time {
      class AbsoluteDate;
    }
  }
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace orekit {
    namespace bodies {

      class CR3BPSystem : public ::java::lang::Object {
       public:
        enum {
          mid_init$_ae9fd1f5c4d53442,
          mid_init$_afa7dd171d632b48,
          mid_getDdim_557b8123390d8d0c,
          mid_getGamma_31acf4e2286f460f,
          mid_getLPosition_deb1609876453761,
          mid_getMassRatio_557b8123390d8d0c,
          mid_getName_3cffd47377eca18a,
          mid_getPrimary_40e74583267ad550,
          mid_getRealAPV_6d3d97b7bab0cbad,
          mid_getRotatingFrame_6c9bc0a928c56d4e,
          mid_getSecondary_40e74583267ad550,
          mid_getTdim_557b8123390d8d0c,
          mid_getVdim_557b8123390d8d0c,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit CR3BPSystem(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        CR3BPSystem(const CR3BPSystem& obj) : ::java::lang::Object(obj) {}

        CR3BPSystem(const ::org::orekit::bodies::CelestialBody &, const ::org::orekit::bodies::CelestialBody &, jdouble);
        CR3BPSystem(const ::org::orekit::bodies::CelestialBody &, const ::org::orekit::bodies::CelestialBody &, jdouble, jdouble);

        jdouble getDdim() const;
        jdouble getGamma(const ::org::orekit::utils::LagrangianPoints &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getLPosition(const ::org::orekit::utils::LagrangianPoints &) const;
        jdouble getMassRatio() const;
        ::java::lang::String getName() const;
        ::org::orekit::bodies::CelestialBody getPrimary() const;
        ::org::orekit::utils::AbsolutePVCoordinates getRealAPV(const ::org::orekit::utils::AbsolutePVCoordinates &, const ::org::orekit::time::AbsoluteDate &, const ::org::orekit::frames::Frame &) const;
        ::org::orekit::frames::Frame getRotatingFrame() const;
        ::org::orekit::bodies::CelestialBody getSecondary() const;
        jdouble getTdim() const;
        jdouble getVdim() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace bodies {
      extern PyType_Def PY_TYPE_DEF(CR3BPSystem);
      extern PyTypeObject *PY_TYPE(CR3BPSystem);

      class t_CR3BPSystem {
      public:
        PyObject_HEAD
        CR3BPSystem object;
        static PyObject *wrap_Object(const CR3BPSystem&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif

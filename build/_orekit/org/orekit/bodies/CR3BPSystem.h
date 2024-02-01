#ifndef org_orekit_bodies_CR3BPSystem_H
#define org_orekit_bodies_CR3BPSystem_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class AbsolutePVCoordinates;
      class LagrangianPoints;
    }
    namespace time {
      class AbsoluteDate;
    }
    namespace frames {
      class Frame;
    }
    namespace bodies {
      class CelestialBody;
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
          mid_init$_1c5fc8f848b2359d,
          mid_init$_9638af7be3d21a0e,
          mid_getDdim_9981f74b2d109da6,
          mid_getGamma_c86407606b360bbd,
          mid_getLPosition_859a3c975ebcfbb7,
          mid_getMassRatio_9981f74b2d109da6,
          mid_getName_d2c8eb4129821f0e,
          mid_getPrimary_a1474f5cfab89b5e,
          mid_getRealAPV_10818cec4200efce,
          mid_getRotatingFrame_cb151471db4570f0,
          mid_getSecondary_a1474f5cfab89b5e,
          mid_getTdim_9981f74b2d109da6,
          mid_getVdim_9981f74b2d109da6,
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

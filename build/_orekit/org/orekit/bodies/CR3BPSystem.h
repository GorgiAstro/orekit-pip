#ifndef org_orekit_bodies_CR3BPSystem_H
#define org_orekit_bodies_CR3BPSystem_H

#include "java/lang/Object.h"

namespace org {
  namespace orekit {
    namespace utils {
      class LagrangianPoints;
      class AbsolutePVCoordinates;
    }
    namespace frames {
      class Frame;
    }
    namespace time {
      class AbsoluteDate;
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
          mid_init$_d11347034ed276da,
          mid_init$_6d86c9a7f988a510,
          mid_getDdim_dff5885c2c873297,
          mid_getGamma_a6014739f6940e4d,
          mid_getLPosition_acea59134d6f8e06,
          mid_getMassRatio_dff5885c2c873297,
          mid_getName_11b109bd155ca898,
          mid_getPrimary_624686a38a6b107c,
          mid_getRealAPV_3e18b13cf889f713,
          mid_getRotatingFrame_b86f9f61d97a7244,
          mid_getSecondary_624686a38a6b107c,
          mid_getTdim_dff5885c2c873297,
          mid_getVdim_dff5885c2c873297,
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

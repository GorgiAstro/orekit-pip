#ifndef org_orekit_bodies_CR3BPSystem_H
#define org_orekit_bodies_CR3BPSystem_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace frames {
      class Frame;
    }
    namespace utils {
      class LagrangianPoints;
      class AbsolutePVCoordinates;
    }
    namespace bodies {
      class CelestialBody;
    }
    namespace time {
      class AbsoluteDate;
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
          mid_init$_4ea08a17df0e3a74,
          mid_init$_15b685b75bc6e517,
          mid_getDdim_456d9a2f64d6b28d,
          mid_getGamma_fc49ba8792d2b7aa,
          mid_getLPosition_070629510bda410a,
          mid_getMassRatio_456d9a2f64d6b28d,
          mid_getName_0090f7797e403f43,
          mid_getPrimary_798caa59db6076aa,
          mid_getRealAPV_6bdea4a9586f6eb5,
          mid_getRotatingFrame_c8fe21bcdac65bf6,
          mid_getSecondary_798caa59db6076aa,
          mid_getTdim_456d9a2f64d6b28d,
          mid_getVdim_456d9a2f64d6b28d,
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

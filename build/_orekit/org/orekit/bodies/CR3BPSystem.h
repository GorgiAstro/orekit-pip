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
    namespace utils {
      class AbsolutePVCoordinates;
      class LagrangianPoints;
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
          mid_init$_1b562bc47b00844a,
          mid_init$_50e610073feca062,
          mid_getDdim_b74f83833fdad017,
          mid_getGamma_ba8242c61ee7476d,
          mid_getLPosition_77c4fd1d0b7adeef,
          mid_getMassRatio_b74f83833fdad017,
          mid_getName_1c1fa1e935d6cdcf,
          mid_getPrimary_5df52e80cbb5eb85,
          mid_getRealAPV_7ffc15c037673c00,
          mid_getRotatingFrame_2c51111cc6894ba1,
          mid_getSecondary_5df52e80cbb5eb85,
          mid_getTdim_b74f83833fdad017,
          mid_getVdim_b74f83833fdad017,
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

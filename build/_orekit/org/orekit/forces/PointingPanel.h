#ifndef org_orekit_forces_PointingPanel_H
#define org_orekit_forces_PointingPanel_H

#include "org/orekit/forces/Panel.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class FieldVector3D;
          class Vector3D;
        }
      }
    }
  }
  namespace orekit {
    namespace propagation {
      class FieldSpacecraftState;
      class SpacecraftState;
    }
    namespace utils {
      class ExtendedPVCoordinatesProvider;
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
    namespace forces {

      class PointingPanel : public ::org::orekit::forces::Panel {
       public:
        enum {
          mid_init$_d3816c2d7c0801cf,
          mid_getNormal_e6f00ace1decd27c,
          mid_getNormal_abc43395638fd218,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit PointingPanel(jobject obj) : ::org::orekit::forces::Panel(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        PointingPanel(const PointingPanel& obj) : ::org::orekit::forces::Panel(obj) {}

        PointingPanel(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, const ::org::orekit::utils::ExtendedPVCoordinatesProvider &, jdouble, jdouble, jdouble, jdouble, jdouble);

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getNormal(const ::org::orekit::propagation::FieldSpacecraftState &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getNormal(const ::org::orekit::propagation::SpacecraftState &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      extern PyType_Def PY_TYPE_DEF(PointingPanel);
      extern PyTypeObject *PY_TYPE(PointingPanel);

      class t_PointingPanel {
      public:
        PyObject_HEAD
        PointingPanel object;
        static PyObject *wrap_Object(const PointingPanel&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif

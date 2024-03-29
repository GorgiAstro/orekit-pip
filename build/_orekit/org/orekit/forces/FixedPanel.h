#ifndef org_orekit_forces_FixedPanel_H
#define org_orekit_forces_FixedPanel_H

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

      class FixedPanel : public ::org::orekit::forces::Panel {
       public:
        enum {
          mid_init$_ce67d1a7dd3a9b5f,
          mid_getNormal_ee088fe02cdd6745,
          mid_getNormal_38283c57554889c0,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit FixedPanel(jobject obj) : ::org::orekit::forces::Panel(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        FixedPanel(const FixedPanel& obj) : ::org::orekit::forces::Panel(obj) {}

        FixedPanel(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble, jboolean, jdouble, jdouble, jdouble, jdouble);

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
      extern PyType_Def PY_TYPE_DEF(FixedPanel);
      extern PyTypeObject *PY_TYPE(FixedPanel);

      class t_FixedPanel {
      public:
        PyObject_HEAD
        FixedPanel object;
        static PyObject *wrap_Object(const FixedPanel&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif

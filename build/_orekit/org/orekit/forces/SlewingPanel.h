#ifndef org_orekit_forces_SlewingPanel_H
#define org_orekit_forces_SlewingPanel_H

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
    namespace time {
      class AbsoluteDate;
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

      class SlewingPanel : public ::org::orekit::forces::Panel {
       public:
        enum {
          mid_init$_9c66bdc47ced46b3,
          mid_getNormal_503a254311e5da95,
          mid_getNormal_3fff8c49d4e2dc6b,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit SlewingPanel(jobject obj) : ::org::orekit::forces::Panel(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        SlewingPanel(const SlewingPanel& obj) : ::org::orekit::forces::Panel(obj) {}

        SlewingPanel(const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble, const ::org::orekit::time::AbsoluteDate &, const ::org::hipparchus::geometry::euclidean::threed::Vector3D &, jdouble, jdouble, jdouble, jdouble, jdouble);

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
      extern PyType_Def PY_TYPE_DEF(SlewingPanel);
      extern PyTypeObject *PY_TYPE(SlewingPanel);

      class t_SlewingPanel {
      public:
        PyObject_HEAD
        SlewingPanel object;
        static PyObject *wrap_Object(const SlewingPanel&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif

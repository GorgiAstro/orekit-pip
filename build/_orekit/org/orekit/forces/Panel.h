#ifndef org_orekit_forces_Panel_H
#define org_orekit_forces_Panel_H

#include "java/lang/Object.h"

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

      class Panel : public ::java::lang::Object {
       public:
        enum {
          mid_getAbsorption_557b8123390d8d0c,
          mid_getArea_557b8123390d8d0c,
          mid_getDrag_557b8123390d8d0c,
          mid_getLiftRatio_557b8123390d8d0c,
          mid_getNormal_503a254311e5da95,
          mid_getNormal_3fff8c49d4e2dc6b,
          mid_getReflection_557b8123390d8d0c,
          mid_isDoubleSided_89b302893bdbe1f1,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Panel(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Panel(const Panel& obj) : ::java::lang::Object(obj) {}

        jdouble getAbsorption() const;
        jdouble getArea() const;
        jdouble getDrag() const;
        jdouble getLiftRatio() const;
        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D getNormal(const ::org::orekit::propagation::FieldSpacecraftState &) const;
        ::org::hipparchus::geometry::euclidean::threed::Vector3D getNormal(const ::org::orekit::propagation::SpacecraftState &) const;
        jdouble getReflection() const;
        jboolean isDoubleSided() const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace forces {
      extern PyType_Def PY_TYPE_DEF(Panel);
      extern PyTypeObject *PY_TYPE(Panel);

      class t_Panel {
      public:
        PyObject_HEAD
        Panel object;
        static PyObject *wrap_Object(const Panel&);
        static PyObject *wrap_jobject(const jobject&);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif

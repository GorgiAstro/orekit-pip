#ifndef org_orekit_forces_Panel_H
#define org_orekit_forces_Panel_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          class Vector3D;
          class FieldVector3D;
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
          mid_getAbsorption_b74f83833fdad017,
          mid_getArea_b74f83833fdad017,
          mid_getDrag_b74f83833fdad017,
          mid_getLiftRatio_b74f83833fdad017,
          mid_getNormal_de3c04262e60a5b3,
          mid_getNormal_9019a5b32b11453a,
          mid_getReflection_b74f83833fdad017,
          mid_isDoubleSided_9ab94ac1dc23b105,
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

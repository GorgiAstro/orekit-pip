#ifndef org_hipparchus_geometry_partitioning_SubHyperplane_H
#define org_hipparchus_geometry_partitioning_SubHyperplane_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class Hyperplane;
        class SubHyperplane$SplitSubHyperplane;
        class SubHyperplane;
      }
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
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        class SubHyperplane : public ::java::lang::Object {
         public:
          enum {
            mid_copySelf_6e34449919366687,
            mid_getHyperplane_a9ae8c67d757c80a,
            mid_getSize_dff5885c2c873297,
            mid_isEmpty_b108b35ef48e27bd,
            mid_reunite_208a723630302f7b,
            mid_split_905725a56f20360c,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit SubHyperplane(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          SubHyperplane(const SubHyperplane& obj) : ::java::lang::Object(obj) {}

          SubHyperplane copySelf() const;
          ::org::hipparchus::geometry::partitioning::Hyperplane getHyperplane() const;
          jdouble getSize() const;
          jboolean isEmpty() const;
          SubHyperplane reunite(const SubHyperplane &) const;
          ::org::hipparchus::geometry::partitioning::SubHyperplane$SplitSubHyperplane split(const ::org::hipparchus::geometry::partitioning::Hyperplane &) const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        extern PyType_Def PY_TYPE_DEF(SubHyperplane);
        extern PyTypeObject *PY_TYPE(SubHyperplane);

        class t_SubHyperplane {
        public:
          PyObject_HEAD
          SubHyperplane object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_SubHyperplane *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const SubHyperplane&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const SubHyperplane&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif

#ifndef org_hipparchus_geometry_partitioning_SubHyperplane_H
#define org_hipparchus_geometry_partitioning_SubHyperplane_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class SubHyperplane;
        class SubHyperplane$SplitSubHyperplane;
        class Hyperplane;
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
            mid_copySelf_0629297ff6ae927a,
            mid_getHyperplane_db5d0f7cdc937b69,
            mid_getSize_557b8123390d8d0c,
            mid_isEmpty_89b302893bdbe1f1,
            mid_reunite_90bd3924ff8382db,
            mid_split_ae8e2bbf2389e86e,
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

#ifndef org_hipparchus_geometry_partitioning_SubHyperplane_H
#define org_hipparchus_geometry_partitioning_SubHyperplane_H

#include "java/lang/Object.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class SubHyperplane;
        class Hyperplane;
        class SubHyperplane$SplitSubHyperplane;
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
            mid_copySelf_a66e04f05d5608cc,
            mid_getHyperplane_e829aeefe0096202,
            mid_getSize_456d9a2f64d6b28d,
            mid_isEmpty_e470b6d9e0d979db,
            mid_reunite_55f41ec2172e02d3,
            mid_split_3b0163aa85fdaa47,
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

#ifndef org_hipparchus_geometry_partitioning_Region$Location_H
#define org_hipparchus_geometry_partitioning_Region$Location_H

#include "java/lang/Enum.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        class Region$Location;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        class Region$Location : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_552b3c2bdf5c4ad0,
            mid_values_e921897a7a3aea14,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Region$Location(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Region$Location(const Region$Location& obj) : ::java::lang::Enum(obj) {}

          static Region$Location *BOUNDARY;
          static Region$Location *INSIDE;
          static Region$Location *OUTSIDE;

          static Region$Location valueOf(const ::java::lang::String &);
          static JArray< Region$Location > values();
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
        extern PyType_Def PY_TYPE_DEF(Region$Location);
        extern PyTypeObject *PY_TYPE(Region$Location);

        class t_Region$Location {
        public:
          PyObject_HEAD
          Region$Location object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_Region$Location *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Region$Location&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Region$Location&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif

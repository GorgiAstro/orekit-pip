#ifndef org_hipparchus_optim_linear_Relationship_H
#define org_hipparchus_optim_linear_Relationship_H

#include "java/lang/Enum.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {
        class Relationship;
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
    namespace optim {
      namespace linear {

        class Relationship : public ::java::lang::Enum {
         public:
          enum {
            mid_oppositeRelationship_8ee3b6cbb19ddabb,
            mid_toString_1c1fa1e935d6cdcf,
            mid_valueOf_65f671fb37201130,
            mid_values_0cef10505569983a,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Relationship(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Relationship(const Relationship& obj) : ::java::lang::Enum(obj) {}

          static Relationship *EQ;
          static Relationship *GEQ;
          static Relationship *LEQ;

          Relationship oppositeRelationship() const;
          ::java::lang::String toString() const;
          static Relationship valueOf(const ::java::lang::String &);
          static JArray< Relationship > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace linear {
        extern PyType_Def PY_TYPE_DEF(Relationship);
        extern PyTypeObject *PY_TYPE(Relationship);

        class t_Relationship {
        public:
          PyObject_HEAD
          Relationship object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_Relationship *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Relationship&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Relationship&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif

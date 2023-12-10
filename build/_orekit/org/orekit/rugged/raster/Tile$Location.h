#ifndef org_orekit_rugged_raster_Tile$Location_H
#define org_orekit_rugged_raster_Tile$Location_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {
        class Tile$Location;
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
  namespace orekit {
    namespace rugged {
      namespace raster {

        class Tile$Location : public ::java::lang::Enum {
         public:
          enum {
            mid_valueOf_1c9d6ccb0d1a59a7,
            mid_values_5c3f3f67b677ce66,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Tile$Location(jobject obj) : ::java::lang::Enum(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Tile$Location(const Tile$Location& obj) : ::java::lang::Enum(obj) {}

          static Tile$Location *EAST;
          static Tile$Location *HAS_INTERPOLATION_NEIGHBORS;
          static Tile$Location *NORTH;
          static Tile$Location *NORTH_EAST;
          static Tile$Location *NORTH_WEST;
          static Tile$Location *SOUTH;
          static Tile$Location *SOUTH_EAST;
          static Tile$Location *SOUTH_WEST;
          static Tile$Location *WEST;

          static Tile$Location valueOf(const ::java::lang::String &);
          static JArray< Tile$Location > values();
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {
        extern PyType_Def PY_TYPE_DEF(Tile$Location);
        extern PyTypeObject *PY_TYPE(Tile$Location);

        class t_Tile$Location {
        public:
          PyObject_HEAD
          Tile$Location object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_Tile$Location *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const Tile$Location&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const Tile$Location&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif

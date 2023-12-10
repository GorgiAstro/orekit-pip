#ifndef org_orekit_frames_Predefined_H
#define org_orekit_frames_Predefined_H

#include "java/lang/Enum.h"

namespace org {
  namespace orekit {
    namespace frames {
      class Predefined;
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
    namespace frames {

      class Predefined : public ::java::lang::Enum {
       public:
        enum {
          mid_getName_0090f7797e403f43,
          mid_valueOf_7358e2c34149fea3,
          mid_values_184e5ecda71bf5df,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit Predefined(jobject obj) : ::java::lang::Enum(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        Predefined(const Predefined& obj) : ::java::lang::Enum(obj) {}

        static Predefined *CIRF_CONVENTIONS_1996_ACCURATE_EOP;
        static Predefined *CIRF_CONVENTIONS_1996_SIMPLE_EOP;
        static Predefined *CIRF_CONVENTIONS_2003_ACCURATE_EOP;
        static Predefined *CIRF_CONVENTIONS_2003_SIMPLE_EOP;
        static Predefined *CIRF_CONVENTIONS_2010_ACCURATE_EOP;
        static Predefined *CIRF_CONVENTIONS_2010_SIMPLE_EOP;
        static Predefined *ECLIPTIC_CONVENTIONS_1996;
        static Predefined *ECLIPTIC_CONVENTIONS_2003;
        static Predefined *ECLIPTIC_CONVENTIONS_2010;
        static Predefined *EME2000;
        static Predefined *GCRF;
        static Predefined *GTOD_CONVENTIONS_1996_ACCURATE_EOP;
        static Predefined *GTOD_CONVENTIONS_1996_SIMPLE_EOP;
        static Predefined *GTOD_CONVENTIONS_2003_ACCURATE_EOP;
        static Predefined *GTOD_CONVENTIONS_2003_SIMPLE_EOP;
        static Predefined *GTOD_CONVENTIONS_2010_ACCURATE_EOP;
        static Predefined *GTOD_CONVENTIONS_2010_SIMPLE_EOP;
        static Predefined *GTOD_WITHOUT_EOP_CORRECTIONS;
        static Predefined *ICRF;
        static Predefined *ITRF_CIO_CONV_1996_ACCURATE_EOP;
        static Predefined *ITRF_CIO_CONV_1996_SIMPLE_EOP;
        static Predefined *ITRF_CIO_CONV_2003_ACCURATE_EOP;
        static Predefined *ITRF_CIO_CONV_2003_SIMPLE_EOP;
        static Predefined *ITRF_CIO_CONV_2010_ACCURATE_EOP;
        static Predefined *ITRF_CIO_CONV_2010_SIMPLE_EOP;
        static Predefined *ITRF_EQUINOX_CONV_1996_ACCURATE_EOP;
        static Predefined *ITRF_EQUINOX_CONV_1996_SIMPLE_EOP;
        static Predefined *ITRF_EQUINOX_CONV_2003_ACCURATE_EOP;
        static Predefined *ITRF_EQUINOX_CONV_2003_SIMPLE_EOP;
        static Predefined *ITRF_EQUINOX_CONV_2010_ACCURATE_EOP;
        static Predefined *ITRF_EQUINOX_CONV_2010_SIMPLE_EOP;
        static Predefined *MOD_CONVENTIONS_1996;
        static Predefined *MOD_CONVENTIONS_2003;
        static Predefined *MOD_CONVENTIONS_2010;
        static Predefined *MOD_WITHOUT_EOP_CORRECTIONS;
        static Predefined *PZ90_11;
        static Predefined *TEME;
        static Predefined *TIRF_CONVENTIONS_1996_ACCURATE_EOP;
        static Predefined *TIRF_CONVENTIONS_1996_SIMPLE_EOP;
        static Predefined *TIRF_CONVENTIONS_2003_ACCURATE_EOP;
        static Predefined *TIRF_CONVENTIONS_2003_SIMPLE_EOP;
        static Predefined *TIRF_CONVENTIONS_2010_ACCURATE_EOP;
        static Predefined *TIRF_CONVENTIONS_2010_SIMPLE_EOP;
        static Predefined *TOD_CONVENTIONS_1996_ACCURATE_EOP;
        static Predefined *TOD_CONVENTIONS_1996_SIMPLE_EOP;
        static Predefined *TOD_CONVENTIONS_2003_ACCURATE_EOP;
        static Predefined *TOD_CONVENTIONS_2003_SIMPLE_EOP;
        static Predefined *TOD_CONVENTIONS_2010_ACCURATE_EOP;
        static Predefined *TOD_CONVENTIONS_2010_SIMPLE_EOP;
        static Predefined *TOD_WITHOUT_EOP_CORRECTIONS;
        static Predefined *VEIS_1950;

        ::java::lang::String getName() const;
        static Predefined valueOf(const ::java::lang::String &);
        static JArray< Predefined > values();
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace orekit {
    namespace frames {
      extern PyType_Def PY_TYPE_DEF(Predefined);
      extern PyTypeObject *PY_TYPE(Predefined);

      class t_Predefined {
      public:
        PyObject_HEAD
        Predefined object;
        PyTypeObject *parameters[1];
        static PyTypeObject **parameters_(t_Predefined *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const Predefined&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const Predefined&, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif

#ifndef org_hipparchus_geometry_VectorFormat_H
#define org_hipparchus_geometry_VectorFormat_H

#include "java/lang/Object.h"

namespace java {
  namespace text {
    class FieldPosition;
    class ParsePosition;
    class NumberFormat;
  }
  namespace util {
    class Locale;
  }
  namespace lang {
    class StringBuffer;
    class Class;
    class String;
  }
}
namespace org {
  namespace hipparchus {
    namespace exception {
      class MathIllegalStateException;
    }
    namespace geometry {
      class Vector;
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace hipparchus {
    namespace geometry {

      class VectorFormat : public ::java::lang::Object {
       public:
        enum {
          mid_format_e9d419993c8be639,
          mid_format_4b712c2465e37e54,
          mid_getAvailableLocales_8d2cd0b971cc7b85,
          mid_getFormat_87ffffc449cd25a5,
          mid_getPrefix_1c1fa1e935d6cdcf,
          mid_getSeparator_1c1fa1e935d6cdcf,
          mid_getSuffix_1c1fa1e935d6cdcf,
          mid_parse_1a4fc7b3db50e8cd,
          mid_parse_b176351865ef534b,
          mid_parseCoordinates_bc56ec5488ce916c,
          mid_format_782445f761dc1740,
          max_mid
        };

        static ::java::lang::Class *class$;
        static jmethodID *mids$;
        static bool live$;
        static jclass initializeClass(bool);

        explicit VectorFormat(jobject obj) : ::java::lang::Object(obj) {
          if (obj != NULL && mids$ == NULL)
            env->getClass(initializeClass);
        }
        VectorFormat(const VectorFormat& obj) : ::java::lang::Object(obj) {}

        static ::java::lang::String *DEFAULT_PREFIX;
        static ::java::lang::String *DEFAULT_SEPARATOR;
        static ::java::lang::String *DEFAULT_SUFFIX;

        ::java::lang::String format(const ::org::hipparchus::geometry::Vector &) const;
        ::java::lang::StringBuffer format(const ::org::hipparchus::geometry::Vector &, const ::java::lang::StringBuffer &, const ::java::text::FieldPosition &) const;
        static JArray< ::java::util::Locale > getAvailableLocales();
        ::java::text::NumberFormat getFormat() const;
        ::java::lang::String getPrefix() const;
        ::java::lang::String getSeparator() const;
        ::java::lang::String getSuffix() const;
        ::org::hipparchus::geometry::Vector parse(const ::java::lang::String &) const;
        ::org::hipparchus::geometry::Vector parse(const ::java::lang::String &, const ::java::text::ParsePosition &) const;
      };
    }
  }
}

#include <Python.h>

namespace org {
  namespace hipparchus {
    namespace geometry {
      extern PyType_Def PY_TYPE_DEF(VectorFormat);
      extern PyTypeObject *PY_TYPE(VectorFormat);

      class t_VectorFormat {
      public:
        PyObject_HEAD
        VectorFormat object;
        PyTypeObject *parameters[2];
        static PyTypeObject **parameters_(t_VectorFormat *self)
        {
          return (PyTypeObject **) &(self->parameters);
        }
        static PyObject *wrap_Object(const VectorFormat&);
        static PyObject *wrap_jobject(const jobject&);
        static PyObject *wrap_Object(const VectorFormat&, PyTypeObject *, PyTypeObject *);
        static PyObject *wrap_jobject(const jobject&, PyTypeObject *, PyTypeObject *);
        static void install(PyObject *module);
        static void initialize(PyObject *module);
      };
    }
  }
}

#endif

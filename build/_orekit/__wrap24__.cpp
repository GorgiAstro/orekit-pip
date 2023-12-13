#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/clock/RinexClockParser.h"
#include "java/io/InputStream.h"
#include "java/io/IOException.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/clock/RinexClock.h"
#include "java/lang/String.h"
#include "java/io/BufferedReader.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          ::java::lang::Class *RinexClockParser::class$ = NULL;
          jmethodID *RinexClockParser::mids$ = NULL;
          bool RinexClockParser::live$ = false;

          jclass RinexClockParser::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/clock/RinexClockParser");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_parse_d990f63525ec8677] = env->getMethodID(cls, "parse", "(Ljava/io/InputStream;)Lorg/orekit/files/rinex/clock/RinexClock;");
              mids$[mid_parse_8335d5b2135f1935] = env->getMethodID(cls, "parse", "(Ljava/lang/String;)Lorg/orekit/files/rinex/clock/RinexClock;");
              mids$[mid_parse_f14a026436b4e446] = env->getMethodID(cls, "parse", "(Ljava/io/BufferedReader;Ljava/lang/String;)Lorg/orekit/files/rinex/clock/RinexClock;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexClockParser::RinexClockParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

          ::org::orekit::files::rinex::clock::RinexClock RinexClockParser::parse(const ::java::io::InputStream & a0) const
          {
            return ::org::orekit::files::rinex::clock::RinexClock(env->callObjectMethod(this$, mids$[mid_parse_d990f63525ec8677], a0.this$));
          }

          ::org::orekit::files::rinex::clock::RinexClock RinexClockParser::parse(const ::java::lang::String & a0) const
          {
            return ::org::orekit::files::rinex::clock::RinexClock(env->callObjectMethod(this$, mids$[mid_parse_8335d5b2135f1935], a0.this$));
          }

          ::org::orekit::files::rinex::clock::RinexClock RinexClockParser::parse(const ::java::io::BufferedReader & a0, const ::java::lang::String & a1) const
          {
            return ::org::orekit::files::rinex::clock::RinexClock(env->callObjectMethod(this$, mids$[mid_parse_f14a026436b4e446], a0.this$, a1.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {
          static PyObject *t_RinexClockParser_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClockParser_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexClockParser_init_(t_RinexClockParser *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexClockParser_parse(t_RinexClockParser *self, PyObject *args);

          static PyMethodDef t_RinexClockParser__methods_[] = {
            DECLARE_METHOD(t_RinexClockParser, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClockParser, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClockParser, parse, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexClockParser)[] = {
            { Py_tp_methods, t_RinexClockParser__methods_ },
            { Py_tp_init, (void *) t_RinexClockParser_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexClockParser)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexClockParser, t_RinexClockParser, RinexClockParser);

          void t_RinexClockParser::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexClockParser), &PY_TYPE_DEF(RinexClockParser), module, "RinexClockParser", 0);
          }

          void t_RinexClockParser::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClockParser), "class_", make_descriptor(RinexClockParser::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClockParser), "wrapfn_", make_descriptor(t_RinexClockParser::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClockParser), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexClockParser_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexClockParser::initializeClass, 1)))
              return NULL;
            return t_RinexClockParser::wrap_Object(RinexClockParser(((t_RinexClockParser *) arg)->object.this$));
          }
          static PyObject *t_RinexClockParser_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexClockParser::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexClockParser_init_(t_RinexClockParser *self, PyObject *args, PyObject *kwds)
          {
            RinexClockParser object((jobject) NULL);

            INT_CALL(object = RinexClockParser());
            self->object = object;

            return 0;
          }

          static PyObject *t_RinexClockParser_parse(t_RinexClockParser *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::java::io::InputStream a0((jobject) NULL);
                ::org::orekit::files::rinex::clock::RinexClock result((jobject) NULL);

                if (!parseArgs(args, "k", ::java::io::InputStream::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::orekit::files::rinex::clock::t_RinexClock::wrap_Object(result);
                }
              }
              {
                ::java::lang::String a0((jobject) NULL);
                ::org::orekit::files::rinex::clock::RinexClock result((jobject) NULL);

                if (!parseArgs(args, "s", &a0))
                {
                  OBJ_CALL(result = self->object.parse(a0));
                  return ::org::orekit::files::rinex::clock::t_RinexClock::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::java::io::BufferedReader a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::org::orekit::files::rinex::clock::RinexClock result((jobject) NULL);

                if (!parseArgs(args, "ks", ::java::io::BufferedReader::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.parse(a0, a1));
                  return ::org::orekit::files::rinex::clock::t_RinexClock::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "parse", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FieldTimeSpanMap.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldTimeSpanMap$Transition.h"
#include "java/util/SortedSet.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldTimeSpanMap::class$ = NULL;
      jmethodID *FieldTimeSpanMap::mids$ = NULL;
      bool FieldTimeSpanMap::live$ = false;

      jclass FieldTimeSpanMap::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldTimeSpanMap");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_13b43261a6378381] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;Lorg/hipparchus/Field;)V");
          mids$[mid_addValidAfter_d24593f3082d9180] = env->getMethodID(cls, "addValidAfter", "(Ljava/lang/Object;Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_addValidBefore_d24593f3082d9180] = env->getMethodID(cls, "addValidBefore", "(Ljava/lang/Object;Lorg/orekit/time/FieldAbsoluteDate;)V");
          mids$[mid_get_46cdd7aa42a0075d] = env->getMethodID(cls, "get", "(Lorg/orekit/time/FieldAbsoluteDate;)Ljava/lang/Object;");
          mids$[mid_getTransitions_7961e54fd3a47d94] = env->getMethodID(cls, "getTransitions", "()Ljava/util/SortedSet;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTimeSpanMap::FieldTimeSpanMap(const ::java::lang::Object & a0, const ::org::hipparchus::Field & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_13b43261a6378381, a0.this$, a1.this$)) {}

      void FieldTimeSpanMap::addValidAfter(const ::java::lang::Object & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addValidAfter_d24593f3082d9180], a0.this$, a1.this$);
      }

      void FieldTimeSpanMap::addValidBefore(const ::java::lang::Object & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_addValidBefore_d24593f3082d9180], a0.this$, a1.this$);
      }

      ::java::lang::Object FieldTimeSpanMap::get$(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_46cdd7aa42a0075d], a0.this$));
      }

      ::java::util::SortedSet FieldTimeSpanMap::getTransitions() const
      {
        return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getTransitions_7961e54fd3a47d94]));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace utils {
      static PyObject *t_FieldTimeSpanMap_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeSpanMap_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeSpanMap_of_(t_FieldTimeSpanMap *self, PyObject *args);
      static int t_FieldTimeSpanMap_init_(t_FieldTimeSpanMap *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldTimeSpanMap_addValidAfter(t_FieldTimeSpanMap *self, PyObject *args);
      static PyObject *t_FieldTimeSpanMap_addValidBefore(t_FieldTimeSpanMap *self, PyObject *args);
      static PyObject *t_FieldTimeSpanMap_get(t_FieldTimeSpanMap *self, PyObject *arg);
      static PyObject *t_FieldTimeSpanMap_getTransitions(t_FieldTimeSpanMap *self);
      static PyObject *t_FieldTimeSpanMap_get__transitions(t_FieldTimeSpanMap *self, void *data);
      static PyObject *t_FieldTimeSpanMap_get__parameters_(t_FieldTimeSpanMap *self, void *data);
      static PyGetSetDef t_FieldTimeSpanMap__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTimeSpanMap, transitions),
        DECLARE_GET_FIELD(t_FieldTimeSpanMap, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTimeSpanMap__methods_[] = {
        DECLARE_METHOD(t_FieldTimeSpanMap, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeSpanMap, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeSpanMap, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeSpanMap, addValidAfter, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeSpanMap, addValidBefore, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeSpanMap, get, METH_O),
        DECLARE_METHOD(t_FieldTimeSpanMap, getTransitions, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTimeSpanMap)[] = {
        { Py_tp_methods, t_FieldTimeSpanMap__methods_ },
        { Py_tp_init, (void *) t_FieldTimeSpanMap_init_ },
        { Py_tp_getset, t_FieldTimeSpanMap__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTimeSpanMap)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTimeSpanMap, t_FieldTimeSpanMap, FieldTimeSpanMap);
      PyObject *t_FieldTimeSpanMap::wrap_Object(const FieldTimeSpanMap& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeSpanMap::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeSpanMap *self = (t_FieldTimeSpanMap *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_FieldTimeSpanMap::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeSpanMap::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeSpanMap *self = (t_FieldTimeSpanMap *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_FieldTimeSpanMap::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTimeSpanMap), &PY_TYPE_DEF(FieldTimeSpanMap), module, "FieldTimeSpanMap", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeSpanMap), "Transition", make_descriptor(&PY_TYPE_DEF(FieldTimeSpanMap$Transition)));
      }

      void t_FieldTimeSpanMap::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeSpanMap), "class_", make_descriptor(FieldTimeSpanMap::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeSpanMap), "wrapfn_", make_descriptor(t_FieldTimeSpanMap::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeSpanMap), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTimeSpanMap_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTimeSpanMap::initializeClass, 1)))
          return NULL;
        return t_FieldTimeSpanMap::wrap_Object(FieldTimeSpanMap(((t_FieldTimeSpanMap *) arg)->object.this$));
      }
      static PyObject *t_FieldTimeSpanMap_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTimeSpanMap::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTimeSpanMap_of_(t_FieldTimeSpanMap *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldTimeSpanMap_init_(t_FieldTimeSpanMap *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::org::hipparchus::Field a1((jobject) NULL);
        PyTypeObject **p1;
        FieldTimeSpanMap object((jobject) NULL);

        if (!parseArgs(args, "oK", ::org::hipparchus::Field::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_Field::parameters_))
        {
          INT_CALL(object = FieldTimeSpanMap(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldTimeSpanMap_addValidAfter(t_FieldTimeSpanMap *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "OK", self->parameters[0], ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
        {
          OBJ_CALL(self->object.addValidAfter(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addValidAfter", args);
        return NULL;
      }

      static PyObject *t_FieldTimeSpanMap_addValidBefore(t_FieldTimeSpanMap *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
        PyTypeObject **p1;

        if (!parseArgs(args, "OK", self->parameters[0], ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
        {
          OBJ_CALL(self->object.addValidBefore(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "addValidBefore", args);
        return NULL;
      }

      static PyObject *t_FieldTimeSpanMap_get(t_FieldTimeSpanMap *self, PyObject *arg)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::lang::Object result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
        {
          OBJ_CALL(result = self->object.get$(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "get", arg);
        return NULL;
      }

      static PyObject *t_FieldTimeSpanMap_getTransitions(t_FieldTimeSpanMap *self)
      {
        ::java::util::SortedSet result((jobject) NULL);
        OBJ_CALL(result = self->object.getTransitions());
        return ::java::util::t_SortedSet::wrap_Object(result);
      }
      static PyObject *t_FieldTimeSpanMap_get__parameters_(t_FieldTimeSpanMap *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTimeSpanMap_get__transitions(t_FieldTimeSpanMap *self, void *data)
      {
        ::java::util::SortedSet value((jobject) NULL);
        OBJ_CALL(value = self->object.getTransitions());
        return ::java::util::t_SortedSet::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/section/Section.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {

          ::java::lang::Class *Section::class$ = NULL;
          jmethodID *Section::mids$ = NULL;
          bool Section::live$ = false;

          jclass Section::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/section/Section");

              mids$ = new jmethodID[max_mid];
              mids$[mid_validate_8ba9fe7a847cecad] = env->getMethodID(cls, "validate", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void Section::validate(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_validate_8ba9fe7a847cecad], a0);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace section {
          static PyObject *t_Section_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Section_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Section_validate(t_Section *self, PyObject *arg);

          static PyMethodDef t_Section__methods_[] = {
            DECLARE_METHOD(t_Section, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Section, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Section, validate, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Section)[] = {
            { Py_tp_methods, t_Section__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Section)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Section, t_Section, Section);

          void t_Section::install(PyObject *module)
          {
            installType(&PY_TYPE(Section), &PY_TYPE_DEF(Section), module, "Section", 0);
          }

          void t_Section::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Section), "class_", make_descriptor(Section::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Section), "wrapfn_", make_descriptor(t_Section::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Section), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Section_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Section::initializeClass, 1)))
              return NULL;
            return t_Section::wrap_Object(Section(((t_Section *) arg)->object.this$));
          }
          static PyObject *t_Section_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Section::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_Section_validate(t_Section *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.validate(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "validate", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution.h"
#include "org/hipparchus/util/Pair.h"
#include "java/util/List.h"
#include "org/hipparchus/random/RandomGenerator.h"
#include "java/lang/Double.h"
#include "java/lang/Class.h"
#include "org/hipparchus/distribution/multivariate/MultivariateNormalDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace multivariate {

        ::java::lang::Class *MixtureMultivariateNormalDistribution::class$ = NULL;
        jmethodID *MixtureMultivariateNormalDistribution::mids$ = NULL;
        bool MixtureMultivariateNormalDistribution::live$ = false;

        jclass MixtureMultivariateNormalDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/multivariate/MixtureMultivariateNormalDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0e7c3032c7c93ed3] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
            mids$[mid_init$_a7978026a1eb93a2] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/random/RandomGenerator;Ljava/util/List;)V");
            mids$[mid_init$_4ad9f3a427b9950a] = env->getMethodID(cls, "<init>", "([D[[D[[[D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MixtureMultivariateNormalDistribution::MixtureMultivariateNormalDistribution(const ::java::util::List & a0) : ::org::hipparchus::distribution::multivariate::MixtureMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_0e7c3032c7c93ed3, a0.this$)) {}

        MixtureMultivariateNormalDistribution::MixtureMultivariateNormalDistribution(const ::org::hipparchus::random::RandomGenerator & a0, const ::java::util::List & a1) : ::org::hipparchus::distribution::multivariate::MixtureMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_a7978026a1eb93a2, a0.this$, a1.this$)) {}

        MixtureMultivariateNormalDistribution::MixtureMultivariateNormalDistribution(const JArray< jdouble > & a0, const JArray< JArray< jdouble > > & a1, const JArray< JArray< JArray< jdouble > > > & a2) : ::org::hipparchus::distribution::multivariate::MixtureMultivariateRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_4ad9f3a427b9950a, a0.this$, a1.this$, a2.this$)) {}
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace multivariate {
        static PyObject *t_MixtureMultivariateNormalDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MixtureMultivariateNormalDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MixtureMultivariateNormalDistribution_of_(t_MixtureMultivariateNormalDistribution *self, PyObject *args);
        static int t_MixtureMultivariateNormalDistribution_init_(t_MixtureMultivariateNormalDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MixtureMultivariateNormalDistribution_get__parameters_(t_MixtureMultivariateNormalDistribution *self, void *data);
        static PyGetSetDef t_MixtureMultivariateNormalDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_MixtureMultivariateNormalDistribution, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MixtureMultivariateNormalDistribution__methods_[] = {
          DECLARE_METHOD(t_MixtureMultivariateNormalDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MixtureMultivariateNormalDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MixtureMultivariateNormalDistribution, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MixtureMultivariateNormalDistribution)[] = {
          { Py_tp_methods, t_MixtureMultivariateNormalDistribution__methods_ },
          { Py_tp_init, (void *) t_MixtureMultivariateNormalDistribution_init_ },
          { Py_tp_getset, t_MixtureMultivariateNormalDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MixtureMultivariateNormalDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::multivariate::MixtureMultivariateRealDistribution),
          NULL
        };

        DEFINE_TYPE(MixtureMultivariateNormalDistribution, t_MixtureMultivariateNormalDistribution, MixtureMultivariateNormalDistribution);
        PyObject *t_MixtureMultivariateNormalDistribution::wrap_Object(const MixtureMultivariateNormalDistribution& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MixtureMultivariateNormalDistribution::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MixtureMultivariateNormalDistribution *self = (t_MixtureMultivariateNormalDistribution *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_MixtureMultivariateNormalDistribution::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_MixtureMultivariateNormalDistribution::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_MixtureMultivariateNormalDistribution *self = (t_MixtureMultivariateNormalDistribution *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_MixtureMultivariateNormalDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(MixtureMultivariateNormalDistribution), &PY_TYPE_DEF(MixtureMultivariateNormalDistribution), module, "MixtureMultivariateNormalDistribution", 0);
        }

        void t_MixtureMultivariateNormalDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MixtureMultivariateNormalDistribution), "class_", make_descriptor(MixtureMultivariateNormalDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MixtureMultivariateNormalDistribution), "wrapfn_", make_descriptor(t_MixtureMultivariateNormalDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MixtureMultivariateNormalDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MixtureMultivariateNormalDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MixtureMultivariateNormalDistribution::initializeClass, 1)))
            return NULL;
          return t_MixtureMultivariateNormalDistribution::wrap_Object(MixtureMultivariateNormalDistribution(((t_MixtureMultivariateNormalDistribution *) arg)->object.this$));
        }
        static PyObject *t_MixtureMultivariateNormalDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MixtureMultivariateNormalDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MixtureMultivariateNormalDistribution_of_(t_MixtureMultivariateNormalDistribution *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_MixtureMultivariateNormalDistribution_init_(t_MixtureMultivariateNormalDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::java::util::List a0((jobject) NULL);
              PyTypeObject **p0;
              MixtureMultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = MixtureMultivariateNormalDistribution(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::distribution::multivariate::PY_TYPE(MultivariateNormalDistribution);
                break;
              }
            }
            goto err;
           case 2:
            {
              ::org::hipparchus::random::RandomGenerator a0((jobject) NULL);
              ::java::util::List a1((jobject) NULL);
              PyTypeObject **p1;
              MixtureMultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "kK", ::org::hipparchus::random::RandomGenerator::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
              {
                INT_CALL(object = MixtureMultivariateNormalDistribution(a0, a1));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::distribution::multivariate::PY_TYPE(MultivariateNormalDistribution);
                break;
              }
            }
            goto err;
           case 3:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< JArray< jdouble > > a1((jobject) NULL);
              JArray< JArray< JArray< jdouble > > > a2((jobject) NULL);
              MixtureMultivariateNormalDistribution object((jobject) NULL);

              if (!parseArgs(args, "[D[[D[[[D", &a0, &a1, &a2))
              {
                INT_CALL(object = MixtureMultivariateNormalDistribution(a0, a1, a2));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::distribution::multivariate::PY_TYPE(MultivariateNormalDistribution);
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }
        static PyObject *t_MixtureMultivariateNormalDistribution_get__parameters_(t_MixtureMultivariateNormalDistribution *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmSatelliteEphemeris.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistory.h"
#include "java/util/List.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {

              ::java::lang::Class *AcmSatelliteEphemeris::class$ = NULL;
              jmethodID *AcmSatelliteEphemeris::mids$ = NULL;
              bool AcmSatelliteEphemeris::live$ = false;

              jclass AcmSatelliteEphemeris::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/acm/AcmSatelliteEphemeris");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_9c78226ca1e428f3] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/util/List;)V");
                  mids$[mid_getId_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
                  mids$[mid_getSegments_e62d3bb06d56d7e3] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
                  mids$[mid_getStart_c325492395d89b24] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_c325492395d89b24] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AcmSatelliteEphemeris::AcmSatelliteEphemeris(const ::java::lang::String & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9c78226ca1e428f3, a0.this$, a1.this$)) {}

              ::java::lang::String AcmSatelliteEphemeris::getId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_1c1fa1e935d6cdcf]));
              }

              ::java::util::List AcmSatelliteEphemeris::getSegments() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_e62d3bb06d56d7e3]));
              }

              ::org::orekit::time::AbsoluteDate AcmSatelliteEphemeris::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_c325492395d89b24]));
              }

              ::org::orekit::time::AbsoluteDate AcmSatelliteEphemeris::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_c325492395d89b24]));
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace acm {
              static PyObject *t_AcmSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AcmSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg);
              static int t_AcmSatelliteEphemeris_init_(t_AcmSatelliteEphemeris *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AcmSatelliteEphemeris_getId(t_AcmSatelliteEphemeris *self);
              static PyObject *t_AcmSatelliteEphemeris_getSegments(t_AcmSatelliteEphemeris *self);
              static PyObject *t_AcmSatelliteEphemeris_getStart(t_AcmSatelliteEphemeris *self);
              static PyObject *t_AcmSatelliteEphemeris_getStop(t_AcmSatelliteEphemeris *self);
              static PyObject *t_AcmSatelliteEphemeris_get__id(t_AcmSatelliteEphemeris *self, void *data);
              static PyObject *t_AcmSatelliteEphemeris_get__segments(t_AcmSatelliteEphemeris *self, void *data);
              static PyObject *t_AcmSatelliteEphemeris_get__start(t_AcmSatelliteEphemeris *self, void *data);
              static PyObject *t_AcmSatelliteEphemeris_get__stop(t_AcmSatelliteEphemeris *self, void *data);
              static PyGetSetDef t_AcmSatelliteEphemeris__fields_[] = {
                DECLARE_GET_FIELD(t_AcmSatelliteEphemeris, id),
                DECLARE_GET_FIELD(t_AcmSatelliteEphemeris, segments),
                DECLARE_GET_FIELD(t_AcmSatelliteEphemeris, start),
                DECLARE_GET_FIELD(t_AcmSatelliteEphemeris, stop),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AcmSatelliteEphemeris__methods_[] = {
                DECLARE_METHOD(t_AcmSatelliteEphemeris, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmSatelliteEphemeris, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AcmSatelliteEphemeris, getId, METH_NOARGS),
                DECLARE_METHOD(t_AcmSatelliteEphemeris, getSegments, METH_NOARGS),
                DECLARE_METHOD(t_AcmSatelliteEphemeris, getStart, METH_NOARGS),
                DECLARE_METHOD(t_AcmSatelliteEphemeris, getStop, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AcmSatelliteEphemeris)[] = {
                { Py_tp_methods, t_AcmSatelliteEphemeris__methods_ },
                { Py_tp_init, (void *) t_AcmSatelliteEphemeris_init_ },
                { Py_tp_getset, t_AcmSatelliteEphemeris__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AcmSatelliteEphemeris)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AcmSatelliteEphemeris, t_AcmSatelliteEphemeris, AcmSatelliteEphemeris);

              void t_AcmSatelliteEphemeris::install(PyObject *module)
              {
                installType(&PY_TYPE(AcmSatelliteEphemeris), &PY_TYPE_DEF(AcmSatelliteEphemeris), module, "AcmSatelliteEphemeris", 0);
              }

              void t_AcmSatelliteEphemeris::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmSatelliteEphemeris), "class_", make_descriptor(AcmSatelliteEphemeris::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmSatelliteEphemeris), "wrapfn_", make_descriptor(t_AcmSatelliteEphemeris::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AcmSatelliteEphemeris), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_AcmSatelliteEphemeris_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AcmSatelliteEphemeris::initializeClass, 1)))
                  return NULL;
                return t_AcmSatelliteEphemeris::wrap_Object(AcmSatelliteEphemeris(((t_AcmSatelliteEphemeris *) arg)->object.this$));
              }
              static PyObject *t_AcmSatelliteEphemeris_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AcmSatelliteEphemeris::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_AcmSatelliteEphemeris_init_(t_AcmSatelliteEphemeris *self, PyObject *args, PyObject *kwds)
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::util::List a1((jobject) NULL);
                PyTypeObject **p1;
                AcmSatelliteEphemeris object((jobject) NULL);

                if (!parseArgs(args, "sK", ::java::util::List::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = AcmSatelliteEphemeris(a0, a1));
                  self->object = object;
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_AcmSatelliteEphemeris_getId(t_AcmSatelliteEphemeris *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getId());
                return j2p(result);
              }

              static PyObject *t_AcmSatelliteEphemeris_getSegments(t_AcmSatelliteEphemeris *self)
              {
                ::java::util::List result((jobject) NULL);
                OBJ_CALL(result = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::ccsds::ndm::adm::acm::PY_TYPE(AttitudeStateHistory));
              }

              static PyObject *t_AcmSatelliteEphemeris_getStart(t_AcmSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AcmSatelliteEphemeris_getStop(t_AcmSatelliteEphemeris *self)
              {
                ::org::orekit::time::AbsoluteDate result((jobject) NULL);
                OBJ_CALL(result = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
              }

              static PyObject *t_AcmSatelliteEphemeris_get__id(t_AcmSatelliteEphemeris *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getId());
                return j2p(value);
              }

              static PyObject *t_AcmSatelliteEphemeris_get__segments(t_AcmSatelliteEphemeris *self, void *data)
              {
                ::java::util::List value((jobject) NULL);
                OBJ_CALL(value = self->object.getSegments());
                return ::java::util::t_List::wrap_Object(value);
              }

              static PyObject *t_AcmSatelliteEphemeris_get__start(t_AcmSatelliteEphemeris *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStart());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }

              static PyObject *t_AcmSatelliteEphemeris_get__stop(t_AcmSatelliteEphemeris *self, void *data)
              {
                ::org::orekit::time::AbsoluteDate value((jobject) NULL);
                OBJ_CALL(value = self->object.getStop());
                return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/UnscentedTransformProvider.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *UnscentedTransformProvider::class$ = NULL;
      jmethodID *UnscentedTransformProvider::mids$ = NULL;
      bool UnscentedTransformProvider::live$ = false;

      jclass UnscentedTransformProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/UnscentedTransformProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getWc_3a10cc75bd070d84] = env->getMethodID(cls, "getWc", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getWm_3a10cc75bd070d84] = env->getMethodID(cls, "getWm", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_unscentedTransform_d7f36cdbc321d4e6] = env->getMethodID(cls, "unscentedTransform", "(Lorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)[Lorg/hipparchus/linear/RealVector;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::RealVector UnscentedTransformProvider::getWc() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getWc_3a10cc75bd070d84]));
      }

      ::org::hipparchus::linear::RealVector UnscentedTransformProvider::getWm() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getWm_3a10cc75bd070d84]));
      }

      JArray< ::org::hipparchus::linear::RealVector > UnscentedTransformProvider::unscentedTransform(const ::org::hipparchus::linear::RealVector & a0, const ::org::hipparchus::linear::RealMatrix & a1) const
      {
        return JArray< ::org::hipparchus::linear::RealVector >(env->callObjectMethod(this$, mids$[mid_unscentedTransform_d7f36cdbc321d4e6], a0.this$, a1.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace util {
      static PyObject *t_UnscentedTransformProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnscentedTransformProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_UnscentedTransformProvider_getWc(t_UnscentedTransformProvider *self);
      static PyObject *t_UnscentedTransformProvider_getWm(t_UnscentedTransformProvider *self);
      static PyObject *t_UnscentedTransformProvider_unscentedTransform(t_UnscentedTransformProvider *self, PyObject *args);
      static PyObject *t_UnscentedTransformProvider_get__wc(t_UnscentedTransformProvider *self, void *data);
      static PyObject *t_UnscentedTransformProvider_get__wm(t_UnscentedTransformProvider *self, void *data);
      static PyGetSetDef t_UnscentedTransformProvider__fields_[] = {
        DECLARE_GET_FIELD(t_UnscentedTransformProvider, wc),
        DECLARE_GET_FIELD(t_UnscentedTransformProvider, wm),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_UnscentedTransformProvider__methods_[] = {
        DECLARE_METHOD(t_UnscentedTransformProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnscentedTransformProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_UnscentedTransformProvider, getWc, METH_NOARGS),
        DECLARE_METHOD(t_UnscentedTransformProvider, getWm, METH_NOARGS),
        DECLARE_METHOD(t_UnscentedTransformProvider, unscentedTransform, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(UnscentedTransformProvider)[] = {
        { Py_tp_methods, t_UnscentedTransformProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_UnscentedTransformProvider__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(UnscentedTransformProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(UnscentedTransformProvider, t_UnscentedTransformProvider, UnscentedTransformProvider);

      void t_UnscentedTransformProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(UnscentedTransformProvider), &PY_TYPE_DEF(UnscentedTransformProvider), module, "UnscentedTransformProvider", 0);
      }

      void t_UnscentedTransformProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedTransformProvider), "class_", make_descriptor(UnscentedTransformProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedTransformProvider), "wrapfn_", make_descriptor(t_UnscentedTransformProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedTransformProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_UnscentedTransformProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, UnscentedTransformProvider::initializeClass, 1)))
          return NULL;
        return t_UnscentedTransformProvider::wrap_Object(UnscentedTransformProvider(((t_UnscentedTransformProvider *) arg)->object.this$));
      }
      static PyObject *t_UnscentedTransformProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, UnscentedTransformProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_UnscentedTransformProvider_getWc(t_UnscentedTransformProvider *self)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.getWc());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
      }

      static PyObject *t_UnscentedTransformProvider_getWm(t_UnscentedTransformProvider *self)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.getWm());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
      }

      static PyObject *t_UnscentedTransformProvider_unscentedTransform(t_UnscentedTransformProvider *self, PyObject *args)
      {
        ::org::hipparchus::linear::RealVector a0((jobject) NULL);
        ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
        JArray< ::org::hipparchus::linear::RealVector > result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.unscentedTransform(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::linear::t_RealVector::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "unscentedTransform", args);
        return NULL;
      }

      static PyObject *t_UnscentedTransformProvider_get__wc(t_UnscentedTransformProvider *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getWc());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_UnscentedTransformProvider_get__wm(t_UnscentedTransformProvider *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getWm());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3CoordinateHermiteInterpolator.h"
#include "org/orekit/files/sp3/SP3Coordinate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3CoordinateHermiteInterpolator::class$ = NULL;
        jmethodID *SP3CoordinateHermiteInterpolator::mids$ = NULL;
        bool SP3CoordinateHermiteInterpolator::live$ = false;

        jclass SP3CoordinateHermiteInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3CoordinateHermiteInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_911582bb3a73ac58] = env->getMethodID(cls, "<init>", "(IDZ)V");
            mids$[mid_interpolate_9c4ea1413f991f07] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractTimeInterpolator$InterpolationData;)Lorg/orekit/files/sp3/SP3Coordinate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3CoordinateHermiteInterpolator::SP3CoordinateHermiteInterpolator(jint a0, jdouble a1, jboolean a2) : ::org::orekit::time::AbstractTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_911582bb3a73ac58, a0, a1, a2)) {}
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {
        static PyObject *t_SP3CoordinateHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3CoordinateHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3CoordinateHermiteInterpolator_of_(t_SP3CoordinateHermiteInterpolator *self, PyObject *args);
        static int t_SP3CoordinateHermiteInterpolator_init_(t_SP3CoordinateHermiteInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3CoordinateHermiteInterpolator_get__parameters_(t_SP3CoordinateHermiteInterpolator *self, void *data);
        static PyGetSetDef t_SP3CoordinateHermiteInterpolator__fields_[] = {
          DECLARE_GET_FIELD(t_SP3CoordinateHermiteInterpolator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3CoordinateHermiteInterpolator__methods_[] = {
          DECLARE_METHOD(t_SP3CoordinateHermiteInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3CoordinateHermiteInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3CoordinateHermiteInterpolator, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3CoordinateHermiteInterpolator)[] = {
          { Py_tp_methods, t_SP3CoordinateHermiteInterpolator__methods_ },
          { Py_tp_init, (void *) t_SP3CoordinateHermiteInterpolator_init_ },
          { Py_tp_getset, t_SP3CoordinateHermiteInterpolator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3CoordinateHermiteInterpolator)[] = {
          &PY_TYPE_DEF(::org::orekit::time::AbstractTimeInterpolator),
          NULL
        };

        DEFINE_TYPE(SP3CoordinateHermiteInterpolator, t_SP3CoordinateHermiteInterpolator, SP3CoordinateHermiteInterpolator);
        PyObject *t_SP3CoordinateHermiteInterpolator::wrap_Object(const SP3CoordinateHermiteInterpolator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SP3CoordinateHermiteInterpolator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SP3CoordinateHermiteInterpolator *self = (t_SP3CoordinateHermiteInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_SP3CoordinateHermiteInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_SP3CoordinateHermiteInterpolator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_SP3CoordinateHermiteInterpolator *self = (t_SP3CoordinateHermiteInterpolator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_SP3CoordinateHermiteInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3CoordinateHermiteInterpolator), &PY_TYPE_DEF(SP3CoordinateHermiteInterpolator), module, "SP3CoordinateHermiteInterpolator", 0);
        }

        void t_SP3CoordinateHermiteInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3CoordinateHermiteInterpolator), "class_", make_descriptor(SP3CoordinateHermiteInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3CoordinateHermiteInterpolator), "wrapfn_", make_descriptor(t_SP3CoordinateHermiteInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3CoordinateHermiteInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SP3CoordinateHermiteInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3CoordinateHermiteInterpolator::initializeClass, 1)))
            return NULL;
          return t_SP3CoordinateHermiteInterpolator::wrap_Object(SP3CoordinateHermiteInterpolator(((t_SP3CoordinateHermiteInterpolator *) arg)->object.this$));
        }
        static PyObject *t_SP3CoordinateHermiteInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3CoordinateHermiteInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_SP3CoordinateHermiteInterpolator_of_(t_SP3CoordinateHermiteInterpolator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_SP3CoordinateHermiteInterpolator_init_(t_SP3CoordinateHermiteInterpolator *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jdouble a1;
          jboolean a2;
          SP3CoordinateHermiteInterpolator object((jobject) NULL);

          if (!parseArgs(args, "IDZ", &a0, &a1, &a2))
          {
            INT_CALL(object = SP3CoordinateHermiteInterpolator(a0, a1, a2));
            self->object = object;
            self->parameters[0] = ::org::orekit::files::sp3::PY_TYPE(SP3Coordinate);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }
        static PyObject *t_SP3CoordinateHermiteInterpolator_get__parameters_(t_SP3CoordinateHermiteInterpolator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/ChiSquaredDistribution.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *ChiSquaredDistribution::class$ = NULL;
        jmethodID *ChiSquaredDistribution::mids$ = NULL;
        bool ChiSquaredDistribution::live$ = false;

        jclass ChiSquaredDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/ChiSquaredDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_8ba9fe7a847cecad] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_init$_369b4c97255d5afa] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_04fd0666b613d2ab] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_04fd0666b613d2ab] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getDegreesOfFreedom_b74f83833fdad017] = env->getMethodID(cls, "getDegreesOfFreedom", "()D");
            mids$[mid_getNumericalMean_b74f83833fdad017] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_b74f83833fdad017] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getSupportLowerBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_b74f83833fdad017] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_isSupportConnected_9ab94ac1dc23b105] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logDensity_04fd0666b613d2ab] = env->getMethodID(cls, "logDensity", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ChiSquaredDistribution::ChiSquaredDistribution(jdouble a0) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_8ba9fe7a847cecad, a0)) {}

        ChiSquaredDistribution::ChiSquaredDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_369b4c97255d5afa, a0, a1)) {}

        jdouble ChiSquaredDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_04fd0666b613d2ab], a0);
        }

        jdouble ChiSquaredDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_04fd0666b613d2ab], a0);
        }

        jdouble ChiSquaredDistribution::getDegreesOfFreedom() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDegreesOfFreedom_b74f83833fdad017]);
        }

        jdouble ChiSquaredDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_b74f83833fdad017]);
        }

        jdouble ChiSquaredDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_b74f83833fdad017]);
        }

        jdouble ChiSquaredDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_b74f83833fdad017]);
        }

        jdouble ChiSquaredDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_b74f83833fdad017]);
        }

        jboolean ChiSquaredDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_9ab94ac1dc23b105]);
        }

        jdouble ChiSquaredDistribution::logDensity(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logDensity_04fd0666b613d2ab], a0);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {
        static PyObject *t_ChiSquaredDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ChiSquaredDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ChiSquaredDistribution_init_(t_ChiSquaredDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ChiSquaredDistribution_cumulativeProbability(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_density(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_getDegreesOfFreedom(t_ChiSquaredDistribution *self);
        static PyObject *t_ChiSquaredDistribution_getNumericalMean(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_getNumericalVariance(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_getSupportLowerBound(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_getSupportUpperBound(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_isSupportConnected(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_logDensity(t_ChiSquaredDistribution *self, PyObject *args);
        static PyObject *t_ChiSquaredDistribution_get__degreesOfFreedom(t_ChiSquaredDistribution *self, void *data);
        static PyObject *t_ChiSquaredDistribution_get__numericalMean(t_ChiSquaredDistribution *self, void *data);
        static PyObject *t_ChiSquaredDistribution_get__numericalVariance(t_ChiSquaredDistribution *self, void *data);
        static PyObject *t_ChiSquaredDistribution_get__supportConnected(t_ChiSquaredDistribution *self, void *data);
        static PyObject *t_ChiSquaredDistribution_get__supportLowerBound(t_ChiSquaredDistribution *self, void *data);
        static PyObject *t_ChiSquaredDistribution_get__supportUpperBound(t_ChiSquaredDistribution *self, void *data);
        static PyGetSetDef t_ChiSquaredDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_ChiSquaredDistribution, degreesOfFreedom),
          DECLARE_GET_FIELD(t_ChiSquaredDistribution, numericalMean),
          DECLARE_GET_FIELD(t_ChiSquaredDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_ChiSquaredDistribution, supportConnected),
          DECLARE_GET_FIELD(t_ChiSquaredDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_ChiSquaredDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ChiSquaredDistribution__methods_[] = {
          DECLARE_METHOD(t_ChiSquaredDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ChiSquaredDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ChiSquaredDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, getDegreesOfFreedom, METH_NOARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_ChiSquaredDistribution, logDensity, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ChiSquaredDistribution)[] = {
          { Py_tp_methods, t_ChiSquaredDistribution__methods_ },
          { Py_tp_init, (void *) t_ChiSquaredDistribution_init_ },
          { Py_tp_getset, t_ChiSquaredDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ChiSquaredDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(ChiSquaredDistribution, t_ChiSquaredDistribution, ChiSquaredDistribution);

        void t_ChiSquaredDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(ChiSquaredDistribution), &PY_TYPE_DEF(ChiSquaredDistribution), module, "ChiSquaredDistribution", 0);
        }

        void t_ChiSquaredDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ChiSquaredDistribution), "class_", make_descriptor(ChiSquaredDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ChiSquaredDistribution), "wrapfn_", make_descriptor(t_ChiSquaredDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ChiSquaredDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ChiSquaredDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ChiSquaredDistribution::initializeClass, 1)))
            return NULL;
          return t_ChiSquaredDistribution::wrap_Object(ChiSquaredDistribution(((t_ChiSquaredDistribution *) arg)->object.this$));
        }
        static PyObject *t_ChiSquaredDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ChiSquaredDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ChiSquaredDistribution_init_(t_ChiSquaredDistribution *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ChiSquaredDistribution object((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                INT_CALL(object = ChiSquaredDistribution(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 2:
            {
              jdouble a0;
              jdouble a1;
              ChiSquaredDistribution object((jobject) NULL);

              if (!parseArgs(args, "DD", &a0, &a1))
              {
                INT_CALL(object = ChiSquaredDistribution(a0, a1));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ChiSquaredDistribution_cumulativeProbability(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_density(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_getDegreesOfFreedom(t_ChiSquaredDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getDegreesOfFreedom());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ChiSquaredDistribution_getNumericalMean(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_getNumericalVariance(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_getSupportLowerBound(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_getSupportUpperBound(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_isSupportConnected(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_logDensity(t_ChiSquaredDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.logDensity(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(ChiSquaredDistribution), (PyObject *) self, "logDensity", args, 2);
        }

        static PyObject *t_ChiSquaredDistribution_get__degreesOfFreedom(t_ChiSquaredDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getDegreesOfFreedom());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ChiSquaredDistribution_get__numericalMean(t_ChiSquaredDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ChiSquaredDistribution_get__numericalVariance(t_ChiSquaredDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ChiSquaredDistribution_get__supportConnected(t_ChiSquaredDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_ChiSquaredDistribution_get__supportLowerBound(t_ChiSquaredDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_ChiSquaredDistribution_get__supportUpperBound(t_ChiSquaredDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CPFParser.h"
#include "org/orekit/frames/Frames.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/files/general/EphemerisFileParser.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ilrs/CPF.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CPFParser::class$ = NULL;
        jmethodID *CPFParser::mids$ = NULL;
        bool CPFParser::live$ = false;

        jclass CPFParser::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CPFParser");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_init$_97dd586bbeb15f85] = env->getMethodID(cls, "<init>", "(DILorg/orekit/utils/IERSConventions;Lorg/orekit/time/TimeScale;Lorg/orekit/frames/Frames;)V");
            mids$[mid_parse_fe547806e2e2f4f0] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/ilrs/CPF;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CPFParser::CPFParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

        CPFParser::CPFParser(jdouble a0, jint a1, const ::org::orekit::utils::IERSConventions & a2, const ::org::orekit::time::TimeScale & a3, const ::org::orekit::frames::Frames & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_97dd586bbeb15f85, a0, a1, a2.this$, a3.this$, a4.this$)) {}

        ::org::orekit::files::ilrs::CPF CPFParser::parse(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::files::ilrs::CPF(env->callObjectMethod(this$, mids$[mid_parse_fe547806e2e2f4f0], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {
        static PyObject *t_CPFParser_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CPFParser_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CPFParser_init_(t_CPFParser *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CPFParser_parse(t_CPFParser *self, PyObject *arg);

        static PyMethodDef t_CPFParser__methods_[] = {
          DECLARE_METHOD(t_CPFParser, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPFParser, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CPFParser, parse, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CPFParser)[] = {
          { Py_tp_methods, t_CPFParser__methods_ },
          { Py_tp_init, (void *) t_CPFParser_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CPFParser)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CPFParser, t_CPFParser, CPFParser);

        void t_CPFParser::install(PyObject *module)
        {
          installType(&PY_TYPE(CPFParser), &PY_TYPE_DEF(CPFParser), module, "CPFParser", 0);
        }

        void t_CPFParser::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFParser), "class_", make_descriptor(CPFParser::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFParser), "wrapfn_", make_descriptor(t_CPFParser::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CPFParser), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CPFParser_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CPFParser::initializeClass, 1)))
            return NULL;
          return t_CPFParser::wrap_Object(CPFParser(((t_CPFParser *) arg)->object.this$));
        }
        static PyObject *t_CPFParser_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CPFParser::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CPFParser_init_(t_CPFParser *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              CPFParser object((jobject) NULL);

              INT_CALL(object = CPFParser());
              self->object = object;
              break;
            }
           case 5:
            {
              jdouble a0;
              jint a1;
              ::org::orekit::utils::IERSConventions a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::orekit::time::TimeScale a3((jobject) NULL);
              ::org::orekit::frames::Frames a4((jobject) NULL);
              CPFParser object((jobject) NULL);

              if (!parseArgs(args, "DIKkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::time::TimeScale::initializeClass, ::org::orekit::frames::Frames::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::utils::t_IERSConventions::parameters_, &a3, &a4))
              {
                INT_CALL(object = CPFParser(a0, a1, a2, a3, a4));
                self->object = object;
                break;
              }
            }
           default:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CPFParser_parse(t_CPFParser *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::files::ilrs::CPF result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.parse(a0));
            return ::org::orekit::files::ilrs::t_CPF::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "parse", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/GroundAtNightDetector.h"
#include "org/orekit/models/AtmosphericRefractionModel.h"
#include "org/orekit/propagation/events/GroundAtNightDetector.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/TopocentricFrame.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *GroundAtNightDetector::class$ = NULL;
        jmethodID *GroundAtNightDetector::mids$ = NULL;
        bool GroundAtNightDetector::live$ = false;
        jdouble GroundAtNightDetector::ASTRONOMICAL_DAWN_DUSK_ELEVATION = (jdouble) 0;
        jdouble GroundAtNightDetector::CIVIL_DAWN_DUSK_ELEVATION = (jdouble) 0;
        jdouble GroundAtNightDetector::NAUTICAL_DAWN_DUSK_ELEVATION = (jdouble) 0;

        jclass GroundAtNightDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/GroundAtNightDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_840cb5e02c152cc2] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/TopocentricFrame;Lorg/orekit/utils/PVCoordinatesProvider;DLorg/orekit/models/AtmosphericRefractionModel;)V");
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_create_6e7edcf0eae8a286] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/GroundAtNightDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            ASTRONOMICAL_DAWN_DUSK_ELEVATION = env->getStaticDoubleField(cls, "ASTRONOMICAL_DAWN_DUSK_ELEVATION");
            CIVIL_DAWN_DUSK_ELEVATION = env->getStaticDoubleField(cls, "CIVIL_DAWN_DUSK_ELEVATION");
            NAUTICAL_DAWN_DUSK_ELEVATION = env->getStaticDoubleField(cls, "NAUTICAL_DAWN_DUSK_ELEVATION");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        GroundAtNightDetector::GroundAtNightDetector(const ::org::orekit::frames::TopocentricFrame & a0, const ::org::orekit::utils::PVCoordinatesProvider & a1, jdouble a2, const ::org::orekit::models::AtmosphericRefractionModel & a3) : ::org::orekit::propagation::events::AbstractDetector(env->newObject(initializeClass, &mids$, mid_init$_840cb5e02c152cc2, a0.this$, a1.this$, a2, a3.this$)) {}

        jdouble GroundAtNightDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        static PyObject *t_GroundAtNightDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundAtNightDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_GroundAtNightDetector_of_(t_GroundAtNightDetector *self, PyObject *args);
        static int t_GroundAtNightDetector_init_(t_GroundAtNightDetector *self, PyObject *args, PyObject *kwds);
        static PyObject *t_GroundAtNightDetector_g(t_GroundAtNightDetector *self, PyObject *args);
        static PyObject *t_GroundAtNightDetector_get__parameters_(t_GroundAtNightDetector *self, void *data);
        static PyGetSetDef t_GroundAtNightDetector__fields_[] = {
          DECLARE_GET_FIELD(t_GroundAtNightDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_GroundAtNightDetector__methods_[] = {
          DECLARE_METHOD(t_GroundAtNightDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundAtNightDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_GroundAtNightDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_GroundAtNightDetector, g, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(GroundAtNightDetector)[] = {
          { Py_tp_methods, t_GroundAtNightDetector__methods_ },
          { Py_tp_init, (void *) t_GroundAtNightDetector_init_ },
          { Py_tp_getset, t_GroundAtNightDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(GroundAtNightDetector)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::events::AbstractDetector),
          NULL
        };

        DEFINE_TYPE(GroundAtNightDetector, t_GroundAtNightDetector, GroundAtNightDetector);
        PyObject *t_GroundAtNightDetector::wrap_Object(const GroundAtNightDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GroundAtNightDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GroundAtNightDetector *self = (t_GroundAtNightDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_GroundAtNightDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_GroundAtNightDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_GroundAtNightDetector *self = (t_GroundAtNightDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_GroundAtNightDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(GroundAtNightDetector), &PY_TYPE_DEF(GroundAtNightDetector), module, "GroundAtNightDetector", 0);
        }

        void t_GroundAtNightDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundAtNightDetector), "class_", make_descriptor(GroundAtNightDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundAtNightDetector), "wrapfn_", make_descriptor(t_GroundAtNightDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundAtNightDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(GroundAtNightDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundAtNightDetector), "ASTRONOMICAL_DAWN_DUSK_ELEVATION", make_descriptor(GroundAtNightDetector::ASTRONOMICAL_DAWN_DUSK_ELEVATION));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundAtNightDetector), "CIVIL_DAWN_DUSK_ELEVATION", make_descriptor(GroundAtNightDetector::CIVIL_DAWN_DUSK_ELEVATION));
          PyObject_SetAttrString((PyObject *) PY_TYPE(GroundAtNightDetector), "NAUTICAL_DAWN_DUSK_ELEVATION", make_descriptor(GroundAtNightDetector::NAUTICAL_DAWN_DUSK_ELEVATION));
        }

        static PyObject *t_GroundAtNightDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, GroundAtNightDetector::initializeClass, 1)))
            return NULL;
          return t_GroundAtNightDetector::wrap_Object(GroundAtNightDetector(((t_GroundAtNightDetector *) arg)->object.this$));
        }
        static PyObject *t_GroundAtNightDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, GroundAtNightDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_GroundAtNightDetector_of_(t_GroundAtNightDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_GroundAtNightDetector_init_(t_GroundAtNightDetector *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::frames::TopocentricFrame a0((jobject) NULL);
          ::org::orekit::utils::PVCoordinatesProvider a1((jobject) NULL);
          jdouble a2;
          ::org::orekit::models::AtmosphericRefractionModel a3((jobject) NULL);
          GroundAtNightDetector object((jobject) NULL);

          if (!parseArgs(args, "kkDk", ::org::orekit::frames::TopocentricFrame::initializeClass, ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::models::AtmosphericRefractionModel::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = GroundAtNightDetector(a0, a1, a2, a3));
            self->object = object;
            self->parameters[0] = ::org::orekit::propagation::events::PY_TYPE(GroundAtNightDetector);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_GroundAtNightDetector_g(t_GroundAtNightDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(GroundAtNightDetector), (PyObject *) self, "g", args, 2);
        }
        static PyObject *t_GroundAtNightDetector_get__parameters_(t_GroundAtNightDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/carlson/CarlsonEllipticIntegral.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/complex/FieldComplex.h"
#include "java/lang/Class.h"
#include "org/hipparchus/complex/Complex.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace carlson {

          ::java::lang::Class *CarlsonEllipticIntegral::class$ = NULL;
          jmethodID *CarlsonEllipticIntegral::mids$ = NULL;
          bool CarlsonEllipticIntegral::live$ = false;

          jclass CarlsonEllipticIntegral::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/carlson/CarlsonEllipticIntegral");

              mids$ = new jmethodID[max_mid];
              mids$[mid_rC_66a05841a47df944] = env->getStaticMethodID(cls, "rC", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_rC_ffc2a92390051f74] = env->getStaticMethodID(cls, "rC", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_rC_99e3200dafc19573] = env->getStaticMethodID(cls, "rC", "(DD)D");
              mids$[mid_rC_c6408fdce2cc6c1a] = env->getStaticMethodID(cls, "rC", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rD_ea3ba47e5616cb34] = env->getStaticMethodID(cls, "rD", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_rD_2ff0fd08cf0de215] = env->getStaticMethodID(cls, "rD", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_rD_f804f816b79164cb] = env->getStaticMethodID(cls, "rD", "(DDD)D");
              mids$[mid_rD_8a93710b1b1536a6] = env->getStaticMethodID(cls, "rD", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rF_ea3ba47e5616cb34] = env->getStaticMethodID(cls, "rF", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_rF_2ff0fd08cf0de215] = env->getStaticMethodID(cls, "rF", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_rF_f804f816b79164cb] = env->getStaticMethodID(cls, "rF", "(DDD)D");
              mids$[mid_rF_8a93710b1b1536a6] = env->getStaticMethodID(cls, "rF", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rG_ea3ba47e5616cb34] = env->getStaticMethodID(cls, "rG", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_rG_2ff0fd08cf0de215] = env->getStaticMethodID(cls, "rG", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_rG_f804f816b79164cb] = env->getStaticMethodID(cls, "rG", "(DDD)D");
              mids$[mid_rG_8a93710b1b1536a6] = env->getStaticMethodID(cls, "rG", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rJ_08e384c3474bdd1c] = env->getStaticMethodID(cls, "rJ", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_rJ_d9560f48e4b68b28] = env->getStaticMethodID(cls, "rJ", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_rJ_08eba2463884b341] = env->getStaticMethodID(cls, "rJ", "(DDDD)D");
              mids$[mid_rJ_0a337cffdfb74cd1] = env->getStaticMethodID(cls, "rJ", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_rJ_e258a6370f9fab08] = env->getStaticMethodID(cls, "rJ", "(Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;Lorg/hipparchus/complex/Complex;)Lorg/hipparchus/complex/Complex;");
              mids$[mid_rJ_0d5b508e91e7f94d] = env->getStaticMethodID(cls, "rJ", "(Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;Lorg/hipparchus/complex/FieldComplex;)Lorg/hipparchus/complex/FieldComplex;");
              mids$[mid_rJ_8a4a2aacccac4925] = env->getStaticMethodID(cls, "rJ", "(DDDDD)D");
              mids$[mid_rJ_9418fc4466f489ae] = env->getStaticMethodID(cls, "rJ", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::complex::Complex CarlsonEllipticIntegral::rC(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_rC_66a05841a47df944], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::FieldComplex CarlsonEllipticIntegral::rC(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_rC_ffc2a92390051f74], a0.this$, a1.this$));
          }

          jdouble CarlsonEllipticIntegral::rC(jdouble a0, jdouble a1)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_rC_99e3200dafc19573], a0, a1);
          }

          ::org::hipparchus::CalculusFieldElement CarlsonEllipticIntegral::rC(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rC_c6408fdce2cc6c1a], a0.this$, a1.this$));
          }

          ::org::hipparchus::complex::Complex CarlsonEllipticIntegral::rD(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_rD_ea3ba47e5616cb34], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::FieldComplex CarlsonEllipticIntegral::rD(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_rD_2ff0fd08cf0de215], a0.this$, a1.this$, a2.this$));
          }

          jdouble CarlsonEllipticIntegral::rD(jdouble a0, jdouble a1, jdouble a2)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_rD_f804f816b79164cb], a0, a1, a2);
          }

          ::org::hipparchus::CalculusFieldElement CarlsonEllipticIntegral::rD(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rD_8a93710b1b1536a6], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::Complex CarlsonEllipticIntegral::rF(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_rF_ea3ba47e5616cb34], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::FieldComplex CarlsonEllipticIntegral::rF(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_rF_2ff0fd08cf0de215], a0.this$, a1.this$, a2.this$));
          }

          jdouble CarlsonEllipticIntegral::rF(jdouble a0, jdouble a1, jdouble a2)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_rF_f804f816b79164cb], a0, a1, a2);
          }

          ::org::hipparchus::CalculusFieldElement CarlsonEllipticIntegral::rF(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rF_8a93710b1b1536a6], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::Complex CarlsonEllipticIntegral::rG(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_rG_ea3ba47e5616cb34], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::FieldComplex CarlsonEllipticIntegral::rG(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_rG_2ff0fd08cf0de215], a0.this$, a1.this$, a2.this$));
          }

          jdouble CarlsonEllipticIntegral::rG(jdouble a0, jdouble a1, jdouble a2)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_rG_f804f816b79164cb], a0, a1, a2);
          }

          ::org::hipparchus::CalculusFieldElement CarlsonEllipticIntegral::rG(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rG_8a93710b1b1536a6], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::complex::Complex CarlsonEllipticIntegral::rJ(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2, const ::org::hipparchus::complex::Complex & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_rJ_08e384c3474bdd1c], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          ::org::hipparchus::complex::FieldComplex CarlsonEllipticIntegral::rJ(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2, const ::org::hipparchus::complex::FieldComplex & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_rJ_d9560f48e4b68b28], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          jdouble CarlsonEllipticIntegral::rJ(jdouble a0, jdouble a1, jdouble a2, jdouble a3)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_rJ_08eba2463884b341], a0, a1, a2, a3);
          }

          ::org::hipparchus::CalculusFieldElement CarlsonEllipticIntegral::rJ(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rJ_0a337cffdfb74cd1], a0.this$, a1.this$, a2.this$, a3.this$));
          }

          ::org::hipparchus::complex::Complex CarlsonEllipticIntegral::rJ(const ::org::hipparchus::complex::Complex & a0, const ::org::hipparchus::complex::Complex & a1, const ::org::hipparchus::complex::Complex & a2, const ::org::hipparchus::complex::Complex & a3, const ::org::hipparchus::complex::Complex & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::Complex(env->callStaticObjectMethod(cls, mids$[mid_rJ_e258a6370f9fab08], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
          }

          ::org::hipparchus::complex::FieldComplex CarlsonEllipticIntegral::rJ(const ::org::hipparchus::complex::FieldComplex & a0, const ::org::hipparchus::complex::FieldComplex & a1, const ::org::hipparchus::complex::FieldComplex & a2, const ::org::hipparchus::complex::FieldComplex & a3, const ::org::hipparchus::complex::FieldComplex & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::complex::FieldComplex(env->callStaticObjectMethod(cls, mids$[mid_rJ_0d5b508e91e7f94d], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
          }

          jdouble CarlsonEllipticIntegral::rJ(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4)
          {
            jclass cls = env->getClass(initializeClass);
            return env->callStaticDoubleMethod(cls, mids$[mid_rJ_8a4a2aacccac4925], a0, a1, a2, a3, a4);
          }

          ::org::hipparchus::CalculusFieldElement CarlsonEllipticIntegral::rJ(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_rJ_9418fc4466f489ae], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace carlson {
          static PyObject *t_CarlsonEllipticIntegral_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CarlsonEllipticIntegral_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_CarlsonEllipticIntegral_rC(PyTypeObject *type, PyObject *args);
          static PyObject *t_CarlsonEllipticIntegral_rD(PyTypeObject *type, PyObject *args);
          static PyObject *t_CarlsonEllipticIntegral_rF(PyTypeObject *type, PyObject *args);
          static PyObject *t_CarlsonEllipticIntegral_rG(PyTypeObject *type, PyObject *args);
          static PyObject *t_CarlsonEllipticIntegral_rJ(PyTypeObject *type, PyObject *args);

          static PyMethodDef t_CarlsonEllipticIntegral__methods_[] = {
            DECLARE_METHOD(t_CarlsonEllipticIntegral, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CarlsonEllipticIntegral, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_CarlsonEllipticIntegral, rC, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CarlsonEllipticIntegral, rD, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CarlsonEllipticIntegral, rF, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CarlsonEllipticIntegral, rG, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_CarlsonEllipticIntegral, rJ, METH_VARARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(CarlsonEllipticIntegral)[] = {
            { Py_tp_methods, t_CarlsonEllipticIntegral__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(CarlsonEllipticIntegral)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(CarlsonEllipticIntegral, t_CarlsonEllipticIntegral, CarlsonEllipticIntegral);

          void t_CarlsonEllipticIntegral::install(PyObject *module)
          {
            installType(&PY_TYPE(CarlsonEllipticIntegral), &PY_TYPE_DEF(CarlsonEllipticIntegral), module, "CarlsonEllipticIntegral", 0);
          }

          void t_CarlsonEllipticIntegral::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarlsonEllipticIntegral), "class_", make_descriptor(CarlsonEllipticIntegral::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarlsonEllipticIntegral), "wrapfn_", make_descriptor(t_CarlsonEllipticIntegral::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(CarlsonEllipticIntegral), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_CarlsonEllipticIntegral_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, CarlsonEllipticIntegral::initializeClass, 1)))
              return NULL;
            return t_CarlsonEllipticIntegral::wrap_Object(CarlsonEllipticIntegral(((t_CarlsonEllipticIntegral *) arg)->object.this$));
          }
          static PyObject *t_CarlsonEllipticIntegral_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, CarlsonEllipticIntegral::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_CarlsonEllipticIntegral_rC(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rC(a0, a1));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rC(a0, a1));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble result;

                if (!parseArgs(args, "DD", &a0, &a1))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rC(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rC(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "rC", args);
            return NULL;
          }

          static PyObject *t_CarlsonEllipticIntegral_rD(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rD(a0, a1, a2));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rD(a0, a1, a2));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble result;

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rD(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rD(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "rD", args);
            return NULL;
          }

          static PyObject *t_CarlsonEllipticIntegral_rF(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rF(a0, a1, a2));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rF(a0, a1, a2));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble result;

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rF(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rF(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "rF", args);
            return NULL;
          }

          static PyObject *t_CarlsonEllipticIntegral_rG(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rG(a0, a1, a2));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rG(a0, a1, a2));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble result;

                if (!parseArgs(args, "DDD", &a0, &a1, &a2))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rG(a0, a1, a2));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rG(a0, a1, a2));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "rG", args);
            return NULL;
          }

          static PyObject *t_CarlsonEllipticIntegral_rJ(PyTypeObject *type, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 4:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::Complex a3((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkkk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplex a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKKK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a3, &p3, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble a3;
                jdouble result;

                if (!parseArgs(args, "DDDD", &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              break;
             case 5:
              {
                ::org::hipparchus::complex::Complex a0((jobject) NULL);
                ::org::hipparchus::complex::Complex a1((jobject) NULL);
                ::org::hipparchus::complex::Complex a2((jobject) NULL);
                ::org::hipparchus::complex::Complex a3((jobject) NULL);
                ::org::hipparchus::complex::Complex a4((jobject) NULL);
                ::org::hipparchus::complex::Complex result((jobject) NULL);

                if (!parseArgs(args, "kkkkk", ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, ::org::hipparchus::complex::Complex::initializeClass, &a0, &a1, &a2, &a3, &a4))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3, a4));
                  return ::org::hipparchus::complex::t_Complex::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::complex::FieldComplex a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::complex::FieldComplex a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::complex::FieldComplex a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::complex::FieldComplex a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::complex::FieldComplex a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::hipparchus::complex::FieldComplex result((jobject) NULL);

                if (!parseArgs(args, "KKKKK", ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, ::org::hipparchus::complex::FieldComplex::initializeClass, &a0, &p0, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a1, &p1, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a2, &p2, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a3, &p3, ::org::hipparchus::complex::t_FieldComplex::parameters_, &a4, &p4, ::org::hipparchus::complex::t_FieldComplex::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3, a4));
                  return ::org::hipparchus::complex::t_FieldComplex::wrap_Object(result);
                }
              }
              {
                jdouble a0;
                jdouble a1;
                jdouble a2;
                jdouble a3;
                jdouble a4;
                jdouble result;

                if (!parseArgs(args, "DDDDD", &a0, &a1, &a2, &a3, &a4))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3, a4));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                PyTypeObject **p3;
                ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                PyTypeObject **p4;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "KKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = ::org::hipparchus::special::elliptic::carlson::CarlsonEllipticIntegral::rJ(a0, a1, a2, a3, a4));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError(type, "rJ", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/util/function/DoubleConsumer.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace java {
  namespace util {
    namespace function {

      ::java::lang::Class *DoubleConsumer::class$ = NULL;
      jmethodID *DoubleConsumer::mids$ = NULL;
      bool DoubleConsumer::live$ = false;

      jclass DoubleConsumer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("java/util/function/DoubleConsumer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_accept_8ba9fe7a847cecad] = env->getMethodID(cls, "accept", "(D)V");
          mids$[mid_andThen_2b5fdff37f9906b0] = env->getMethodID(cls, "andThen", "(Ljava/util/function/DoubleConsumer;)Ljava/util/function/DoubleConsumer;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      void DoubleConsumer::accept(jdouble a0) const
      {
        env->callVoidMethod(this$, mids$[mid_accept_8ba9fe7a847cecad], a0);
      }

      DoubleConsumer DoubleConsumer::andThen(const DoubleConsumer & a0) const
      {
        return DoubleConsumer(env->callObjectMethod(this$, mids$[mid_andThen_2b5fdff37f9906b0], a0.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    namespace function {
      static PyObject *t_DoubleConsumer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DoubleConsumer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DoubleConsumer_accept(t_DoubleConsumer *self, PyObject *arg);
      static PyObject *t_DoubleConsumer_andThen(t_DoubleConsumer *self, PyObject *arg);

      static PyMethodDef t_DoubleConsumer__methods_[] = {
        DECLARE_METHOD(t_DoubleConsumer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleConsumer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DoubleConsumer, accept, METH_O),
        DECLARE_METHOD(t_DoubleConsumer, andThen, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DoubleConsumer)[] = {
        { Py_tp_methods, t_DoubleConsumer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DoubleConsumer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DoubleConsumer, t_DoubleConsumer, DoubleConsumer);

      void t_DoubleConsumer::install(PyObject *module)
      {
        installType(&PY_TYPE(DoubleConsumer), &PY_TYPE_DEF(DoubleConsumer), module, "DoubleConsumer", 0);
      }

      void t_DoubleConsumer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleConsumer), "class_", make_descriptor(DoubleConsumer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleConsumer), "wrapfn_", make_descriptor(t_DoubleConsumer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DoubleConsumer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DoubleConsumer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DoubleConsumer::initializeClass, 1)))
          return NULL;
        return t_DoubleConsumer::wrap_Object(DoubleConsumer(((t_DoubleConsumer *) arg)->object.this$));
      }
      static PyObject *t_DoubleConsumer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DoubleConsumer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DoubleConsumer_accept(t_DoubleConsumer *self, PyObject *arg)
      {
        jdouble a0;

        if (!parseArg(arg, "D", &a0))
        {
          OBJ_CALL(self->object.accept(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "accept", arg);
        return NULL;
      }

      static PyObject *t_DoubleConsumer_andThen(t_DoubleConsumer *self, PyObject *arg)
      {
        DoubleConsumer a0((jobject) NULL);
        DoubleConsumer result((jobject) NULL);

        if (!parseArg(arg, "k", DoubleConsumer::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.andThen(a0));
          return t_DoubleConsumer::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "andThen", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/filtering/kalman/ProcessEstimate.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {

        ::java::lang::Class *ProcessEstimate::class$ = NULL;
        jmethodID *ProcessEstimate::mids$ = NULL;
        bool ProcessEstimate::live$ = false;

        jclass ProcessEstimate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/filtering/kalman/ProcessEstimate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1cf8bccd56b2fdef] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_init$_723d077417afab19] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/linear/RealVector;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;Lorg/hipparchus/linear/RealMatrix;)V");
            mids$[mid_getCovariance_f77d745f2128c391] = env->getMethodID(cls, "getCovariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getInnovationCovariance_f77d745f2128c391] = env->getMethodID(cls, "getInnovationCovariance", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getKalmanGain_f77d745f2128c391] = env->getMethodID(cls, "getKalmanGain", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getMeasurementJacobian_f77d745f2128c391] = env->getMethodID(cls, "getMeasurementJacobian", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getState_3a10cc75bd070d84] = env->getMethodID(cls, "getState", "()Lorg/hipparchus/linear/RealVector;");
            mids$[mid_getStateTransitionMatrix_f77d745f2128c391] = env->getMethodID(cls, "getStateTransitionMatrix", "()Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getTime_b74f83833fdad017] = env->getMethodID(cls, "getTime", "()D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ProcessEstimate::ProcessEstimate(jdouble a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealMatrix & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_1cf8bccd56b2fdef, a0, a1.this$, a2.this$)) {}

        ProcessEstimate::ProcessEstimate(jdouble a0, const ::org::hipparchus::linear::RealVector & a1, const ::org::hipparchus::linear::RealMatrix & a2, const ::org::hipparchus::linear::RealMatrix & a3, const ::org::hipparchus::linear::RealMatrix & a4, const ::org::hipparchus::linear::RealMatrix & a5, const ::org::hipparchus::linear::RealMatrix & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_723d077417afab19, a0, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

        ::org::hipparchus::linear::RealMatrix ProcessEstimate::getCovariance() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getCovariance_f77d745f2128c391]));
        }

        ::org::hipparchus::linear::RealMatrix ProcessEstimate::getInnovationCovariance() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getInnovationCovariance_f77d745f2128c391]));
        }

        ::org::hipparchus::linear::RealMatrix ProcessEstimate::getKalmanGain() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getKalmanGain_f77d745f2128c391]));
        }

        ::org::hipparchus::linear::RealMatrix ProcessEstimate::getMeasurementJacobian() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getMeasurementJacobian_f77d745f2128c391]));
        }

        ::org::hipparchus::linear::RealVector ProcessEstimate::getState() const
        {
          return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getState_3a10cc75bd070d84]));
        }

        ::org::hipparchus::linear::RealMatrix ProcessEstimate::getStateTransitionMatrix() const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_f77d745f2128c391]));
        }

        jdouble ProcessEstimate::getTime() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getTime_b74f83833fdad017]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace filtering {
      namespace kalman {
        static PyObject *t_ProcessEstimate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ProcessEstimate_instance_(PyTypeObject *type, PyObject *arg);
        static int t_ProcessEstimate_init_(t_ProcessEstimate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ProcessEstimate_getCovariance(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_getInnovationCovariance(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_getKalmanGain(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_getMeasurementJacobian(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_getState(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_getStateTransitionMatrix(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_getTime(t_ProcessEstimate *self);
        static PyObject *t_ProcessEstimate_get__covariance(t_ProcessEstimate *self, void *data);
        static PyObject *t_ProcessEstimate_get__innovationCovariance(t_ProcessEstimate *self, void *data);
        static PyObject *t_ProcessEstimate_get__kalmanGain(t_ProcessEstimate *self, void *data);
        static PyObject *t_ProcessEstimate_get__measurementJacobian(t_ProcessEstimate *self, void *data);
        static PyObject *t_ProcessEstimate_get__state(t_ProcessEstimate *self, void *data);
        static PyObject *t_ProcessEstimate_get__stateTransitionMatrix(t_ProcessEstimate *self, void *data);
        static PyObject *t_ProcessEstimate_get__time(t_ProcessEstimate *self, void *data);
        static PyGetSetDef t_ProcessEstimate__fields_[] = {
          DECLARE_GET_FIELD(t_ProcessEstimate, covariance),
          DECLARE_GET_FIELD(t_ProcessEstimate, innovationCovariance),
          DECLARE_GET_FIELD(t_ProcessEstimate, kalmanGain),
          DECLARE_GET_FIELD(t_ProcessEstimate, measurementJacobian),
          DECLARE_GET_FIELD(t_ProcessEstimate, state),
          DECLARE_GET_FIELD(t_ProcessEstimate, stateTransitionMatrix),
          DECLARE_GET_FIELD(t_ProcessEstimate, time),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ProcessEstimate__methods_[] = {
          DECLARE_METHOD(t_ProcessEstimate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ProcessEstimate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ProcessEstimate, getCovariance, METH_NOARGS),
          DECLARE_METHOD(t_ProcessEstimate, getInnovationCovariance, METH_NOARGS),
          DECLARE_METHOD(t_ProcessEstimate, getKalmanGain, METH_NOARGS),
          DECLARE_METHOD(t_ProcessEstimate, getMeasurementJacobian, METH_NOARGS),
          DECLARE_METHOD(t_ProcessEstimate, getState, METH_NOARGS),
          DECLARE_METHOD(t_ProcessEstimate, getStateTransitionMatrix, METH_NOARGS),
          DECLARE_METHOD(t_ProcessEstimate, getTime, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ProcessEstimate)[] = {
          { Py_tp_methods, t_ProcessEstimate__methods_ },
          { Py_tp_init, (void *) t_ProcessEstimate_init_ },
          { Py_tp_getset, t_ProcessEstimate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ProcessEstimate)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(ProcessEstimate, t_ProcessEstimate, ProcessEstimate);

        void t_ProcessEstimate::install(PyObject *module)
        {
          installType(&PY_TYPE(ProcessEstimate), &PY_TYPE_DEF(ProcessEstimate), module, "ProcessEstimate", 0);
        }

        void t_ProcessEstimate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ProcessEstimate), "class_", make_descriptor(ProcessEstimate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ProcessEstimate), "wrapfn_", make_descriptor(t_ProcessEstimate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ProcessEstimate), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ProcessEstimate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ProcessEstimate::initializeClass, 1)))
            return NULL;
          return t_ProcessEstimate::wrap_Object(ProcessEstimate(((t_ProcessEstimate *) arg)->object.this$));
        }
        static PyObject *t_ProcessEstimate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ProcessEstimate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_ProcessEstimate_init_(t_ProcessEstimate *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              jdouble a0;
              ::org::hipparchus::linear::RealVector a1((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
              ProcessEstimate object((jobject) NULL);

              if (!parseArgs(args, "Dkk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = ProcessEstimate(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 7:
            {
              jdouble a0;
              ::org::hipparchus::linear::RealVector a1((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a2((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a3((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a4((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a5((jobject) NULL);
              ::org::hipparchus::linear::RealMatrix a6((jobject) NULL);
              ProcessEstimate object((jobject) NULL);

              if (!parseArgs(args, "Dkkkkkk", ::org::hipparchus::linear::RealVector::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
              {
                INT_CALL(object = ProcessEstimate(a0, a1, a2, a3, a4, a5, a6));
                self->object = object;
                break;
              }
            }
           default:
           err:
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ProcessEstimate_getCovariance(t_ProcessEstimate *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_ProcessEstimate_getInnovationCovariance(t_ProcessEstimate *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getInnovationCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_ProcessEstimate_getKalmanGain(t_ProcessEstimate *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_ProcessEstimate_getMeasurementJacobian(t_ProcessEstimate *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_ProcessEstimate_getState(t_ProcessEstimate *self)
        {
          ::org::hipparchus::linear::RealVector result((jobject) NULL);
          OBJ_CALL(result = self->object.getState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        static PyObject *t_ProcessEstimate_getStateTransitionMatrix(t_ProcessEstimate *self)
        {
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
          OBJ_CALL(result = self->object.getStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
        }

        static PyObject *t_ProcessEstimate_getTime(t_ProcessEstimate *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getTime());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_ProcessEstimate_get__covariance(t_ProcessEstimate *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_ProcessEstimate_get__innovationCovariance(t_ProcessEstimate *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getInnovationCovariance());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_ProcessEstimate_get__kalmanGain(t_ProcessEstimate *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getKalmanGain());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_ProcessEstimate_get__measurementJacobian(t_ProcessEstimate *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getMeasurementJacobian());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_ProcessEstimate_get__state(t_ProcessEstimate *self, void *data)
        {
          ::org::hipparchus::linear::RealVector value((jobject) NULL);
          OBJ_CALL(value = self->object.getState());
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
        }

        static PyObject *t_ProcessEstimate_get__stateTransitionMatrix(t_ProcessEstimate *self, void *data)
        {
          ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
          OBJ_CALL(value = self->object.getStateTransitionMatrix());
          return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
        }

        static PyObject *t_ProcessEstimate_get__time(t_ProcessEstimate *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getTime());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/antenna/OneDVariation.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/antenna/PhaseCenterVariationFunction.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {

        ::java::lang::Class *OneDVariation::class$ = NULL;
        jmethodID *OneDVariation::mids$ = NULL;
        bool OneDVariation::live$ = false;

        jclass OneDVariation::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/antenna/OneDVariation");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a5940e6aadc61f19] = env->getMethodID(cls, "<init>", "(DD[D)V");
            mids$[mid_value_99e3200dafc19573] = env->getMethodID(cls, "value", "(DD)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        OneDVariation::OneDVariation(jdouble a0, jdouble a1, const JArray< jdouble > & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a5940e6aadc61f19, a0, a1, a2.this$)) {}

        jdouble OneDVariation::value(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_99e3200dafc19573], a0, a1);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace antenna {
        static PyObject *t_OneDVariation_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_OneDVariation_instance_(PyTypeObject *type, PyObject *arg);
        static int t_OneDVariation_init_(t_OneDVariation *self, PyObject *args, PyObject *kwds);
        static PyObject *t_OneDVariation_value(t_OneDVariation *self, PyObject *args);

        static PyMethodDef t_OneDVariation__methods_[] = {
          DECLARE_METHOD(t_OneDVariation, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OneDVariation, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_OneDVariation, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(OneDVariation)[] = {
          { Py_tp_methods, t_OneDVariation__methods_ },
          { Py_tp_init, (void *) t_OneDVariation_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(OneDVariation)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(OneDVariation, t_OneDVariation, OneDVariation);

        void t_OneDVariation::install(PyObject *module)
        {
          installType(&PY_TYPE(OneDVariation), &PY_TYPE_DEF(OneDVariation), module, "OneDVariation", 0);
        }

        void t_OneDVariation::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(OneDVariation), "class_", make_descriptor(OneDVariation::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OneDVariation), "wrapfn_", make_descriptor(t_OneDVariation::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(OneDVariation), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_OneDVariation_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, OneDVariation::initializeClass, 1)))
            return NULL;
          return t_OneDVariation::wrap_Object(OneDVariation(((t_OneDVariation *) arg)->object.this$));
        }
        static PyObject *t_OneDVariation_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, OneDVariation::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_OneDVariation_init_(t_OneDVariation *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          JArray< jdouble > a2((jobject) NULL);
          OneDVariation object((jobject) NULL);

          if (!parseArgs(args, "DD[D", &a0, &a1, &a2))
          {
            INT_CALL(object = OneDVariation(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_OneDVariation_value(t_OneDVariation *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.value(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "value", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/ConvergenceCheckerOrMultiplexer.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/util/List.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *ConvergenceCheckerOrMultiplexer::class$ = NULL;
      jmethodID *ConvergenceCheckerOrMultiplexer::mids$ = NULL;
      bool ConvergenceCheckerOrMultiplexer::live$ = false;

      jclass ConvergenceCheckerOrMultiplexer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/ConvergenceCheckerOrMultiplexer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0e7c3032c7c93ed3] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
          mids$[mid_converged_061aaa68e115701e] = env->getMethodID(cls, "converged", "(ILjava/lang/Object;Ljava/lang/Object;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ConvergenceCheckerOrMultiplexer::ConvergenceCheckerOrMultiplexer(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0e7c3032c7c93ed3, a0.this$)) {}

      jboolean ConvergenceCheckerOrMultiplexer::converged(jint a0, const ::java::lang::Object & a1, const ::java::lang::Object & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_061aaa68e115701e], a0, a1.this$, a2.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      static PyObject *t_ConvergenceCheckerOrMultiplexer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConvergenceCheckerOrMultiplexer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ConvergenceCheckerOrMultiplexer_of_(t_ConvergenceCheckerOrMultiplexer *self, PyObject *args);
      static int t_ConvergenceCheckerOrMultiplexer_init_(t_ConvergenceCheckerOrMultiplexer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_ConvergenceCheckerOrMultiplexer_converged(t_ConvergenceCheckerOrMultiplexer *self, PyObject *args);
      static PyObject *t_ConvergenceCheckerOrMultiplexer_get__parameters_(t_ConvergenceCheckerOrMultiplexer *self, void *data);
      static PyGetSetDef t_ConvergenceCheckerOrMultiplexer__fields_[] = {
        DECLARE_GET_FIELD(t_ConvergenceCheckerOrMultiplexer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ConvergenceCheckerOrMultiplexer__methods_[] = {
        DECLARE_METHOD(t_ConvergenceCheckerOrMultiplexer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConvergenceCheckerOrMultiplexer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ConvergenceCheckerOrMultiplexer, of_, METH_VARARGS),
        DECLARE_METHOD(t_ConvergenceCheckerOrMultiplexer, converged, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ConvergenceCheckerOrMultiplexer)[] = {
        { Py_tp_methods, t_ConvergenceCheckerOrMultiplexer__methods_ },
        { Py_tp_init, (void *) t_ConvergenceCheckerOrMultiplexer_init_ },
        { Py_tp_getset, t_ConvergenceCheckerOrMultiplexer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ConvergenceCheckerOrMultiplexer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(ConvergenceCheckerOrMultiplexer, t_ConvergenceCheckerOrMultiplexer, ConvergenceCheckerOrMultiplexer);
      PyObject *t_ConvergenceCheckerOrMultiplexer::wrap_Object(const ConvergenceCheckerOrMultiplexer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ConvergenceCheckerOrMultiplexer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ConvergenceCheckerOrMultiplexer *self = (t_ConvergenceCheckerOrMultiplexer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ConvergenceCheckerOrMultiplexer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ConvergenceCheckerOrMultiplexer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ConvergenceCheckerOrMultiplexer *self = (t_ConvergenceCheckerOrMultiplexer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ConvergenceCheckerOrMultiplexer::install(PyObject *module)
      {
        installType(&PY_TYPE(ConvergenceCheckerOrMultiplexer), &PY_TYPE_DEF(ConvergenceCheckerOrMultiplexer), module, "ConvergenceCheckerOrMultiplexer", 0);
      }

      void t_ConvergenceCheckerOrMultiplexer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceCheckerOrMultiplexer), "class_", make_descriptor(ConvergenceCheckerOrMultiplexer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceCheckerOrMultiplexer), "wrapfn_", make_descriptor(t_ConvergenceCheckerOrMultiplexer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ConvergenceCheckerOrMultiplexer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_ConvergenceCheckerOrMultiplexer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ConvergenceCheckerOrMultiplexer::initializeClass, 1)))
          return NULL;
        return t_ConvergenceCheckerOrMultiplexer::wrap_Object(ConvergenceCheckerOrMultiplexer(((t_ConvergenceCheckerOrMultiplexer *) arg)->object.this$));
      }
      static PyObject *t_ConvergenceCheckerOrMultiplexer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ConvergenceCheckerOrMultiplexer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ConvergenceCheckerOrMultiplexer_of_(t_ConvergenceCheckerOrMultiplexer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_ConvergenceCheckerOrMultiplexer_init_(t_ConvergenceCheckerOrMultiplexer *self, PyObject *args, PyObject *kwds)
      {
        ::java::util::List a0((jobject) NULL);
        PyTypeObject **p0;
        ConvergenceCheckerOrMultiplexer object((jobject) NULL);

        if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
        {
          INT_CALL(object = ConvergenceCheckerOrMultiplexer(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_ConvergenceCheckerOrMultiplexer_converged(t_ConvergenceCheckerOrMultiplexer *self, PyObject *args)
      {
        jint a0;
        ::java::lang::Object a1((jobject) NULL);
        ::java::lang::Object a2((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "IOO", self->parameters[0], self->parameters[0], &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.converged(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "converged", args);
        return NULL;
      }
      static PyObject *t_ConvergenceCheckerOrMultiplexer_get__parameters_(t_ConvergenceCheckerOrMultiplexer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractShortTermEncounter2DPOCMethod.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethod.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/files/ccsds/ndm/cdm/Cdm.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition.h"
#include "java/lang/Class.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *AbstractShortTermEncounter2DPOCMethod::class$ = NULL;
              jmethodID *AbstractShortTermEncounter2DPOCMethod::mids$ = NULL;
              bool AbstractShortTermEncounter2DPOCMethod::live$ = false;
              jdouble AbstractShortTermEncounter2DPOCMethod::DEFAULT_TCA_DIFFERENCE_TOLERANCE = (jdouble) 0;

              jclass AbstractShortTermEncounter2DPOCMethod::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/AbstractShortTermEncounter2DPOCMethod");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_compute_cac25f7dbaea842d] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_613925b61b739417] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/FieldShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_a0489c76be101130] = env->getMethodID(cls, "compute", "(Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DDefinition;D)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_6829aad0a64a3436] = env->getMethodID(cls, "compute", "(Lorg/orekit/files/ccsds/ndm/cdm/Cdm;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_a73e6347f5238a63] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_11689cd07cf55453] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_compute_619a70d6b0e36c90] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/StateCovariance;DD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_f98b4f489decc901] = env->getMethodID(cls, "compute", "(Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/orekit/orbits/FieldOrbit;Lorg/orekit/propagation/FieldStateCovariance;Lorg/hipparchus/CalculusFieldElement;D)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_getName_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
                  mids$[mid_isAMaximumProbabilityOfCollisionMethod_9ab94ac1dc23b105] = env->getMethodID(cls, "isAMaximumProbabilityOfCollisionMethod", "()Z");
                  mids$[mid_getObjectOrbitFromCdm_7396690b8dce48fd] = env->getMethodID(cls, "getObjectOrbitFromCdm", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;Lorg/orekit/files/ccsds/ndm/cdm/CdmData;Lorg/orekit/files/ccsds/ndm/cdm/CdmMetadata;Lorg/orekit/data/DataContext;)Lorg/orekit/orbits/Orbit;");
                  mids$[mid_getObjectStateCovarianceFromCdm_fc96a5f91e86020d] = env->getMethodID(cls, "getObjectStateCovarianceFromCdm", "(Lorg/orekit/files/ccsds/ndm/cdm/CdmRelativeMetadata;Lorg/orekit/files/ccsds/ndm/cdm/CdmData;)Lorg/orekit/propagation/StateCovariance;");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  DEFAULT_TCA_DIFFERENCE_TOLERANCE = env->getStaticDoubleField(cls, "DEFAULT_TCA_DIFFERENCE_TOLERANCE");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, jdouble a1) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_cac25f7dbaea842d], a0.this$, a1));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition & a0, jdouble a1) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_613925b61b739417], a0.this$, a1));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition & a0, jdouble a1) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_a0489c76be101130], a0.this$, a1));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::orekit::files::ccsds::ndm::cdm::Cdm & a0, const ::org::hipparchus::CalculusFieldElement & a1, jdouble a2) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_6829aad0a64a3436], a0.this$, a1.this$, a2));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_a73e6347f5238a63], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_11689cd07cf55453], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::metrics::ProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::StateCovariance & a1, const ::org::orekit::orbits::Orbit & a2, const ::org::orekit::propagation::StateCovariance & a3, jdouble a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_619a70d6b0e36c90], a0.this$, a1.this$, a2.this$, a3.this$, a4, a5));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision AbstractShortTermEncounter2DPOCMethod::compute(const ::org::orekit::orbits::FieldOrbit & a0, const ::org::orekit::propagation::FieldStateCovariance & a1, const ::org::orekit::orbits::FieldOrbit & a2, const ::org::orekit::propagation::FieldStateCovariance & a3, const ::org::hipparchus::CalculusFieldElement & a4, jdouble a5) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_f98b4f489decc901], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5));
              }

              ::java::lang::String AbstractShortTermEncounter2DPOCMethod::getName() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_1c1fa1e935d6cdcf]));
              }

              jboolean AbstractShortTermEncounter2DPOCMethod::isAMaximumProbabilityOfCollisionMethod() const
              {
                return env->callBooleanMethod(this$, mids$[mid_isAMaximumProbabilityOfCollisionMethod_9ab94ac1dc23b105]);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {
              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_compute(t_AbstractShortTermEncounter2DPOCMethod *self, PyObject *args);
              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_getName(t_AbstractShortTermEncounter2DPOCMethod *self);
              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_isAMaximumProbabilityOfCollisionMethod(t_AbstractShortTermEncounter2DPOCMethod *self);
              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_get__aMaximumProbabilityOfCollisionMethod(t_AbstractShortTermEncounter2DPOCMethod *self, void *data);
              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_get__name(t_AbstractShortTermEncounter2DPOCMethod *self, void *data);
              static PyGetSetDef t_AbstractShortTermEncounter2DPOCMethod__fields_[] = {
                DECLARE_GET_FIELD(t_AbstractShortTermEncounter2DPOCMethod, aMaximumProbabilityOfCollisionMethod),
                DECLARE_GET_FIELD(t_AbstractShortTermEncounter2DPOCMethod, name),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AbstractShortTermEncounter2DPOCMethod__methods_[] = {
                DECLARE_METHOD(t_AbstractShortTermEncounter2DPOCMethod, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AbstractShortTermEncounter2DPOCMethod, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AbstractShortTermEncounter2DPOCMethod, compute, METH_VARARGS),
                DECLARE_METHOD(t_AbstractShortTermEncounter2DPOCMethod, getName, METH_NOARGS),
                DECLARE_METHOD(t_AbstractShortTermEncounter2DPOCMethod, isAMaximumProbabilityOfCollisionMethod, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AbstractShortTermEncounter2DPOCMethod)[] = {
                { Py_tp_methods, t_AbstractShortTermEncounter2DPOCMethod__methods_ },
                { Py_tp_init, (void *) abstract_init },
                { Py_tp_getset, t_AbstractShortTermEncounter2DPOCMethod__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AbstractShortTermEncounter2DPOCMethod)[] = {
                &PY_TYPE_DEF(::java::lang::Object),
                NULL
              };

              DEFINE_TYPE(AbstractShortTermEncounter2DPOCMethod, t_AbstractShortTermEncounter2DPOCMethod, AbstractShortTermEncounter2DPOCMethod);

              void t_AbstractShortTermEncounter2DPOCMethod::install(PyObject *module)
              {
                installType(&PY_TYPE(AbstractShortTermEncounter2DPOCMethod), &PY_TYPE_DEF(AbstractShortTermEncounter2DPOCMethod), module, "AbstractShortTermEncounter2DPOCMethod", 0);
              }

              void t_AbstractShortTermEncounter2DPOCMethod::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShortTermEncounter2DPOCMethod), "class_", make_descriptor(AbstractShortTermEncounter2DPOCMethod::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShortTermEncounter2DPOCMethod), "wrapfn_", make_descriptor(t_AbstractShortTermEncounter2DPOCMethod::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShortTermEncounter2DPOCMethod), "boxfn_", make_descriptor(boxObject));
                env->getClass(AbstractShortTermEncounter2DPOCMethod::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractShortTermEncounter2DPOCMethod), "DEFAULT_TCA_DIFFERENCE_TOLERANCE", make_descriptor(AbstractShortTermEncounter2DPOCMethod::DEFAULT_TCA_DIFFERENCE_TOLERANCE));
              }

              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AbstractShortTermEncounter2DPOCMethod::initializeClass, 1)))
                  return NULL;
                return t_AbstractShortTermEncounter2DPOCMethod::wrap_Object(AbstractShortTermEncounter2DPOCMethod(((t_AbstractShortTermEncounter2DPOCMethod *) arg)->object.this$));
              }
              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AbstractShortTermEncounter2DPOCMethod::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_compute(t_AbstractShortTermEncounter2DPOCMethod *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
                 case 2:
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    jdouble a1;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KD", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition a0((jobject) NULL);
                    PyTypeObject **p0;
                    jdouble a1;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KD", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::FieldShortTermEncounter2DDefinition::initializeClass, &a0, &p0, ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_FieldShortTermEncounter2DDefinition::parameters_, &a1))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition a0((jobject) NULL);
                    jdouble a1;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "kD", ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DDefinition::initializeClass, &a0, &a1))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 3:
                  {
                    ::org::orekit::files::ccsds::ndm::cdm::Cdm a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    jdouble a2;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKD", ::org::orekit::files::ccsds::ndm::cdm::Cdm::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::files::ccsds::ndm::cdm::t_Cdm::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 5:
                  {
                    jdouble a0;
                    jdouble a1;
                    jdouble a2;
                    jdouble a3;
                    jdouble a4;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "DDDDD", &a0, &a1, &a2, &a3, &a4))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  break;
                 case 6:
                  {
                    ::org::orekit::orbits::FieldOrbit a0((jobject) NULL);
                    PyTypeObject **p0;
                    ::org::orekit::propagation::FieldStateCovariance a1((jobject) NULL);
                    PyTypeObject **p1;
                    ::org::orekit::orbits::FieldOrbit a2((jobject) NULL);
                    PyTypeObject **p2;
                    ::org::orekit::propagation::FieldStateCovariance a3((jobject) NULL);
                    PyTypeObject **p3;
                    ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
                    PyTypeObject **p4;
                    jdouble a5;
                    ::org::orekit::ssa::metrics::FieldProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "KKKKKD", ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::orekit::orbits::FieldOrbit::initializeClass, ::org::orekit::propagation::FieldStateCovariance::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a2, &p2, ::org::orekit::orbits::t_FieldOrbit::parameters_, &a3, &p3, ::org::orekit::propagation::t_FieldStateCovariance::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5));
                      return ::org::orekit::ssa::metrics::t_FieldProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                  {
                    ::org::orekit::orbits::Orbit a0((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
                    ::org::orekit::orbits::Orbit a2((jobject) NULL);
                    ::org::orekit::propagation::StateCovariance a3((jobject) NULL);
                    jdouble a4;
                    jdouble a5;
                    ::org::orekit::ssa::metrics::ProbabilityOfCollision result((jobject) NULL);

                    if (!parseArgs(args, "kkkkDD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                    {
                      OBJ_CALL(result = self->object.compute(a0, a1, a2, a3, a4, a5));
                      return ::org::orekit::ssa::metrics::t_ProbabilityOfCollision::wrap_Object(result);
                    }
                  }
                }

                PyErr_SetArgsError((PyObject *) self, "compute", args);
                return NULL;
              }

              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_getName(t_AbstractShortTermEncounter2DPOCMethod *self)
              {
                ::java::lang::String result((jobject) NULL);
                OBJ_CALL(result = self->object.getName());
                return j2p(result);
              }

              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_isAMaximumProbabilityOfCollisionMethod(t_AbstractShortTermEncounter2DPOCMethod *self)
              {
                jboolean result;
                OBJ_CALL(result = self->object.isAMaximumProbabilityOfCollisionMethod());
                Py_RETURN_BOOL(result);
              }

              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_get__aMaximumProbabilityOfCollisionMethod(t_AbstractShortTermEncounter2DPOCMethod *self, void *data)
              {
                jboolean value;
                OBJ_CALL(value = self->object.isAMaximumProbabilityOfCollisionMethod());
                Py_RETURN_BOOL(value);
              }

              static PyObject *t_AbstractShortTermEncounter2DPOCMethod_get__name(t_AbstractShortTermEncounter2DPOCMethod *self, void *data)
              {
                ::java::lang::String value((jobject) NULL);
                OBJ_CALL(value = self->object.getName());
                return j2p(value);
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/text/DecimalFormatSymbols.h"
#include "java/util/Locale.h"
#include "java/io/Serializable.h"
#include "java/util/Currency.h"
#include "java/lang/Class.h"
#include "java/lang/Cloneable.h"
#include "java/text/DecimalFormatSymbols.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace java {
  namespace text {

    ::java::lang::Class *DecimalFormatSymbols::class$ = NULL;
    jmethodID *DecimalFormatSymbols::mids$ = NULL;
    bool DecimalFormatSymbols::live$ = false;

    jclass DecimalFormatSymbols::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/text/DecimalFormatSymbols");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_ae952945a283d1a5] = env->getMethodID(cls, "<init>", "(Ljava/util/Locale;)V");
        mids$[mid_clone_541690f9ee81d3ad] = env->getMethodID(cls, "clone", "()Ljava/lang/Object;");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_getAvailableLocales_8d2cd0b971cc7b85] = env->getStaticMethodID(cls, "getAvailableLocales", "()[Ljava/util/Locale;");
        mids$[mid_getCurrency_5c4bce1ad9114b42] = env->getMethodID(cls, "getCurrency", "()Ljava/util/Currency;");
        mids$[mid_getCurrencySymbol_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getCurrencySymbol", "()Ljava/lang/String;");
        mids$[mid_getDecimalSeparator_5e2f8fc4d7c03fbd] = env->getMethodID(cls, "getDecimalSeparator", "()C");
        mids$[mid_getDigit_5e2f8fc4d7c03fbd] = env->getMethodID(cls, "getDigit", "()C");
        mids$[mid_getExponentSeparator_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getExponentSeparator", "()Ljava/lang/String;");
        mids$[mid_getGroupingSeparator_5e2f8fc4d7c03fbd] = env->getMethodID(cls, "getGroupingSeparator", "()C");
        mids$[mid_getInfinity_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getInfinity", "()Ljava/lang/String;");
        mids$[mid_getInstance_36ca27640d647410] = env->getStaticMethodID(cls, "getInstance", "()Ljava/text/DecimalFormatSymbols;");
        mids$[mid_getInstance_4b7e8b7f5086f229] = env->getStaticMethodID(cls, "getInstance", "(Ljava/util/Locale;)Ljava/text/DecimalFormatSymbols;");
        mids$[mid_getInternationalCurrencySymbol_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getInternationalCurrencySymbol", "()Ljava/lang/String;");
        mids$[mid_getMinusSign_5e2f8fc4d7c03fbd] = env->getMethodID(cls, "getMinusSign", "()C");
        mids$[mid_getMonetaryDecimalSeparator_5e2f8fc4d7c03fbd] = env->getMethodID(cls, "getMonetaryDecimalSeparator", "()C");
        mids$[mid_getNaN_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getNaN", "()Ljava/lang/String;");
        mids$[mid_getPatternSeparator_5e2f8fc4d7c03fbd] = env->getMethodID(cls, "getPatternSeparator", "()C");
        mids$[mid_getPerMill_5e2f8fc4d7c03fbd] = env->getMethodID(cls, "getPerMill", "()C");
        mids$[mid_getPercent_5e2f8fc4d7c03fbd] = env->getMethodID(cls, "getPercent", "()C");
        mids$[mid_getZeroDigit_5e2f8fc4d7c03fbd] = env->getMethodID(cls, "getZeroDigit", "()C");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_setCurrency_4943c1e384d46623] = env->getMethodID(cls, "setCurrency", "(Ljava/util/Currency;)V");
        mids$[mid_setCurrencySymbol_734b91ac30d5f9b4] = env->getMethodID(cls, "setCurrencySymbol", "(Ljava/lang/String;)V");
        mids$[mid_setDecimalSeparator_df95ad02f5b4acd9] = env->getMethodID(cls, "setDecimalSeparator", "(C)V");
        mids$[mid_setDigit_df95ad02f5b4acd9] = env->getMethodID(cls, "setDigit", "(C)V");
        mids$[mid_setExponentSeparator_734b91ac30d5f9b4] = env->getMethodID(cls, "setExponentSeparator", "(Ljava/lang/String;)V");
        mids$[mid_setGroupingSeparator_df95ad02f5b4acd9] = env->getMethodID(cls, "setGroupingSeparator", "(C)V");
        mids$[mid_setInfinity_734b91ac30d5f9b4] = env->getMethodID(cls, "setInfinity", "(Ljava/lang/String;)V");
        mids$[mid_setInternationalCurrencySymbol_734b91ac30d5f9b4] = env->getMethodID(cls, "setInternationalCurrencySymbol", "(Ljava/lang/String;)V");
        mids$[mid_setMinusSign_df95ad02f5b4acd9] = env->getMethodID(cls, "setMinusSign", "(C)V");
        mids$[mid_setMonetaryDecimalSeparator_df95ad02f5b4acd9] = env->getMethodID(cls, "setMonetaryDecimalSeparator", "(C)V");
        mids$[mid_setNaN_734b91ac30d5f9b4] = env->getMethodID(cls, "setNaN", "(Ljava/lang/String;)V");
        mids$[mid_setPatternSeparator_df95ad02f5b4acd9] = env->getMethodID(cls, "setPatternSeparator", "(C)V");
        mids$[mid_setPerMill_df95ad02f5b4acd9] = env->getMethodID(cls, "setPerMill", "(C)V");
        mids$[mid_setPercent_df95ad02f5b4acd9] = env->getMethodID(cls, "setPercent", "(C)V");
        mids$[mid_setZeroDigit_df95ad02f5b4acd9] = env->getMethodID(cls, "setZeroDigit", "(C)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    DecimalFormatSymbols::DecimalFormatSymbols() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

    DecimalFormatSymbols::DecimalFormatSymbols(const ::java::util::Locale & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ae952945a283d1a5, a0.this$)) {}

    ::java::lang::Object DecimalFormatSymbols::clone() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_clone_541690f9ee81d3ad]));
    }

    jboolean DecimalFormatSymbols::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    JArray< ::java::util::Locale > DecimalFormatSymbols::getAvailableLocales()
    {
      jclass cls = env->getClass(initializeClass);
      return JArray< ::java::util::Locale >(env->callStaticObjectMethod(cls, mids$[mid_getAvailableLocales_8d2cd0b971cc7b85]));
    }

    ::java::util::Currency DecimalFormatSymbols::getCurrency() const
    {
      return ::java::util::Currency(env->callObjectMethod(this$, mids$[mid_getCurrency_5c4bce1ad9114b42]));
    }

    ::java::lang::String DecimalFormatSymbols::getCurrencySymbol() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getCurrencySymbol_1c1fa1e935d6cdcf]));
    }

    jchar DecimalFormatSymbols::getDecimalSeparator() const
    {
      return env->callCharMethod(this$, mids$[mid_getDecimalSeparator_5e2f8fc4d7c03fbd]);
    }

    jchar DecimalFormatSymbols::getDigit() const
    {
      return env->callCharMethod(this$, mids$[mid_getDigit_5e2f8fc4d7c03fbd]);
    }

    ::java::lang::String DecimalFormatSymbols::getExponentSeparator() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getExponentSeparator_1c1fa1e935d6cdcf]));
    }

    jchar DecimalFormatSymbols::getGroupingSeparator() const
    {
      return env->callCharMethod(this$, mids$[mid_getGroupingSeparator_5e2f8fc4d7c03fbd]);
    }

    ::java::lang::String DecimalFormatSymbols::getInfinity() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInfinity_1c1fa1e935d6cdcf]));
    }

    DecimalFormatSymbols DecimalFormatSymbols::getInstance()
    {
      jclass cls = env->getClass(initializeClass);
      return DecimalFormatSymbols(env->callStaticObjectMethod(cls, mids$[mid_getInstance_36ca27640d647410]));
    }

    DecimalFormatSymbols DecimalFormatSymbols::getInstance(const ::java::util::Locale & a0)
    {
      jclass cls = env->getClass(initializeClass);
      return DecimalFormatSymbols(env->callStaticObjectMethod(cls, mids$[mid_getInstance_4b7e8b7f5086f229], a0.this$));
    }

    ::java::lang::String DecimalFormatSymbols::getInternationalCurrencySymbol() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getInternationalCurrencySymbol_1c1fa1e935d6cdcf]));
    }

    jchar DecimalFormatSymbols::getMinusSign() const
    {
      return env->callCharMethod(this$, mids$[mid_getMinusSign_5e2f8fc4d7c03fbd]);
    }

    jchar DecimalFormatSymbols::getMonetaryDecimalSeparator() const
    {
      return env->callCharMethod(this$, mids$[mid_getMonetaryDecimalSeparator_5e2f8fc4d7c03fbd]);
    }

    ::java::lang::String DecimalFormatSymbols::getNaN() const
    {
      return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getNaN_1c1fa1e935d6cdcf]));
    }

    jchar DecimalFormatSymbols::getPatternSeparator() const
    {
      return env->callCharMethod(this$, mids$[mid_getPatternSeparator_5e2f8fc4d7c03fbd]);
    }

    jchar DecimalFormatSymbols::getPerMill() const
    {
      return env->callCharMethod(this$, mids$[mid_getPerMill_5e2f8fc4d7c03fbd]);
    }

    jchar DecimalFormatSymbols::getPercent() const
    {
      return env->callCharMethod(this$, mids$[mid_getPercent_5e2f8fc4d7c03fbd]);
    }

    jchar DecimalFormatSymbols::getZeroDigit() const
    {
      return env->callCharMethod(this$, mids$[mid_getZeroDigit_5e2f8fc4d7c03fbd]);
    }

    jint DecimalFormatSymbols::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    void DecimalFormatSymbols::setCurrency(const ::java::util::Currency & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setCurrency_4943c1e384d46623], a0.this$);
    }

    void DecimalFormatSymbols::setCurrencySymbol(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setCurrencySymbol_734b91ac30d5f9b4], a0.this$);
    }

    void DecimalFormatSymbols::setDecimalSeparator(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDecimalSeparator_df95ad02f5b4acd9], a0);
    }

    void DecimalFormatSymbols::setDigit(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setDigit_df95ad02f5b4acd9], a0);
    }

    void DecimalFormatSymbols::setExponentSeparator(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setExponentSeparator_734b91ac30d5f9b4], a0.this$);
    }

    void DecimalFormatSymbols::setGroupingSeparator(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setGroupingSeparator_df95ad02f5b4acd9], a0);
    }

    void DecimalFormatSymbols::setInfinity(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setInfinity_734b91ac30d5f9b4], a0.this$);
    }

    void DecimalFormatSymbols::setInternationalCurrencySymbol(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setInternationalCurrencySymbol_734b91ac30d5f9b4], a0.this$);
    }

    void DecimalFormatSymbols::setMinusSign(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMinusSign_df95ad02f5b4acd9], a0);
    }

    void DecimalFormatSymbols::setMonetaryDecimalSeparator(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setMonetaryDecimalSeparator_df95ad02f5b4acd9], a0);
    }

    void DecimalFormatSymbols::setNaN(const ::java::lang::String & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setNaN_734b91ac30d5f9b4], a0.this$);
    }

    void DecimalFormatSymbols::setPatternSeparator(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setPatternSeparator_df95ad02f5b4acd9], a0);
    }

    void DecimalFormatSymbols::setPerMill(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setPerMill_df95ad02f5b4acd9], a0);
    }

    void DecimalFormatSymbols::setPercent(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setPercent_df95ad02f5b4acd9], a0);
    }

    void DecimalFormatSymbols::setZeroDigit(jchar a0) const
    {
      env->callVoidMethod(this$, mids$[mid_setZeroDigit_df95ad02f5b4acd9], a0);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace text {
    static PyObject *t_DecimalFormatSymbols_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_instance_(PyTypeObject *type, PyObject *arg);
    static int t_DecimalFormatSymbols_init_(t_DecimalFormatSymbols *self, PyObject *args, PyObject *kwds);
    static PyObject *t_DecimalFormatSymbols_clone(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_equals(t_DecimalFormatSymbols *self, PyObject *args);
    static PyObject *t_DecimalFormatSymbols_getAvailableLocales(PyTypeObject *type);
    static PyObject *t_DecimalFormatSymbols_getCurrency(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getCurrencySymbol(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getDecimalSeparator(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getDigit(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getExponentSeparator(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getGroupingSeparator(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getInfinity(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getInstance(PyTypeObject *type, PyObject *args);
    static PyObject *t_DecimalFormatSymbols_getInternationalCurrencySymbol(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getMinusSign(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getMonetaryDecimalSeparator(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getNaN(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getPatternSeparator(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getPerMill(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getPercent(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_getZeroDigit(t_DecimalFormatSymbols *self);
    static PyObject *t_DecimalFormatSymbols_hashCode(t_DecimalFormatSymbols *self, PyObject *args);
    static PyObject *t_DecimalFormatSymbols_setCurrency(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setCurrencySymbol(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setDecimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setDigit(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setExponentSeparator(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setGroupingSeparator(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setInfinity(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setInternationalCurrencySymbol(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setMinusSign(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setMonetaryDecimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setNaN(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setPatternSeparator(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setPerMill(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setPercent(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_setZeroDigit(t_DecimalFormatSymbols *self, PyObject *arg);
    static PyObject *t_DecimalFormatSymbols_get__availableLocales(t_DecimalFormatSymbols *self, void *data);
    static PyObject *t_DecimalFormatSymbols_get__currency(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__currency(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__currencySymbol(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__currencySymbol(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__decimalSeparator(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__decimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__digit(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__digit(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__exponentSeparator(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__exponentSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__groupingSeparator(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__groupingSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__infinity(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__infinity(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__instance(t_DecimalFormatSymbols *self, void *data);
    static PyObject *t_DecimalFormatSymbols_get__internationalCurrencySymbol(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__internationalCurrencySymbol(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__minusSign(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__minusSign(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__monetaryDecimalSeparator(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__monetaryDecimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__naN(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__naN(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__patternSeparator(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__patternSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__perMill(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__perMill(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__percent(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__percent(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyObject *t_DecimalFormatSymbols_get__zeroDigit(t_DecimalFormatSymbols *self, void *data);
    static int t_DecimalFormatSymbols_set__zeroDigit(t_DecimalFormatSymbols *self, PyObject *arg, void *data);
    static PyGetSetDef t_DecimalFormatSymbols__fields_[] = {
      DECLARE_GET_FIELD(t_DecimalFormatSymbols, availableLocales),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, currency),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, currencySymbol),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, decimalSeparator),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, digit),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, exponentSeparator),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, groupingSeparator),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, infinity),
      DECLARE_GET_FIELD(t_DecimalFormatSymbols, instance),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, internationalCurrencySymbol),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, minusSign),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, monetaryDecimalSeparator),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, naN),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, patternSeparator),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, perMill),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, percent),
      DECLARE_GETSET_FIELD(t_DecimalFormatSymbols, zeroDigit),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_DecimalFormatSymbols__methods_[] = {
      DECLARE_METHOD(t_DecimalFormatSymbols, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DecimalFormatSymbols, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_DecimalFormatSymbols, clone, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, equals, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getAvailableLocales, METH_NOARGS | METH_CLASS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getCurrency, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getCurrencySymbol, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getDecimalSeparator, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getDigit, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getExponentSeparator, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getGroupingSeparator, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getInfinity, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getInstance, METH_VARARGS | METH_CLASS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getInternationalCurrencySymbol, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getMinusSign, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getMonetaryDecimalSeparator, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getNaN, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getPatternSeparator, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getPerMill, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getPercent, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, getZeroDigit, METH_NOARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_DecimalFormatSymbols, setCurrency, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setCurrencySymbol, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setDecimalSeparator, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setDigit, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setExponentSeparator, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setGroupingSeparator, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setInfinity, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setInternationalCurrencySymbol, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setMinusSign, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setMonetaryDecimalSeparator, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setNaN, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setPatternSeparator, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setPerMill, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setPercent, METH_O),
      DECLARE_METHOD(t_DecimalFormatSymbols, setZeroDigit, METH_O),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(DecimalFormatSymbols)[] = {
      { Py_tp_methods, t_DecimalFormatSymbols__methods_ },
      { Py_tp_init, (void *) t_DecimalFormatSymbols_init_ },
      { Py_tp_getset, t_DecimalFormatSymbols__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(DecimalFormatSymbols)[] = {
      &PY_TYPE_DEF(::java::lang::Object),
      NULL
    };

    DEFINE_TYPE(DecimalFormatSymbols, t_DecimalFormatSymbols, DecimalFormatSymbols);

    void t_DecimalFormatSymbols::install(PyObject *module)
    {
      installType(&PY_TYPE(DecimalFormatSymbols), &PY_TYPE_DEF(DecimalFormatSymbols), module, "DecimalFormatSymbols", 0);
    }

    void t_DecimalFormatSymbols::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(DecimalFormatSymbols), "class_", make_descriptor(DecimalFormatSymbols::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DecimalFormatSymbols), "wrapfn_", make_descriptor(t_DecimalFormatSymbols::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(DecimalFormatSymbols), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_DecimalFormatSymbols_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, DecimalFormatSymbols::initializeClass, 1)))
        return NULL;
      return t_DecimalFormatSymbols::wrap_Object(DecimalFormatSymbols(((t_DecimalFormatSymbols *) arg)->object.this$));
    }
    static PyObject *t_DecimalFormatSymbols_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, DecimalFormatSymbols::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static int t_DecimalFormatSymbols_init_(t_DecimalFormatSymbols *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          DecimalFormatSymbols object((jobject) NULL);

          INT_CALL(object = DecimalFormatSymbols());
          self->object = object;
          break;
        }
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          DecimalFormatSymbols object((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            INT_CALL(object = DecimalFormatSymbols(a0));
            self->object = object;
            break;
          }
        }
       default:
        PyErr_SetArgsError((PyObject *) self, "__init__", args);
        return -1;
      }

      return 0;
    }

    static PyObject *t_DecimalFormatSymbols_clone(t_DecimalFormatSymbols *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_DecimalFormatSymbols_equals(t_DecimalFormatSymbols *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(DecimalFormatSymbols), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_DecimalFormatSymbols_getAvailableLocales(PyTypeObject *type)
    {
      JArray< ::java::util::Locale > result((jobject) NULL);
      OBJ_CALL(result = ::java::text::DecimalFormatSymbols::getAvailableLocales());
      return JArray<jobject>(result.this$).wrap(::java::util::t_Locale::wrap_jobject);
    }

    static PyObject *t_DecimalFormatSymbols_getCurrency(t_DecimalFormatSymbols *self)
    {
      ::java::util::Currency result((jobject) NULL);
      OBJ_CALL(result = self->object.getCurrency());
      return ::java::util::t_Currency::wrap_Object(result);
    }

    static PyObject *t_DecimalFormatSymbols_getCurrencySymbol(t_DecimalFormatSymbols *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getCurrencySymbol());
      return j2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getDecimalSeparator(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getDecimalSeparator());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getDigit(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getDigit());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getExponentSeparator(t_DecimalFormatSymbols *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getExponentSeparator());
      return j2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getGroupingSeparator(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getGroupingSeparator());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getInfinity(t_DecimalFormatSymbols *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getInfinity());
      return j2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getInstance(PyTypeObject *type, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          DecimalFormatSymbols result((jobject) NULL);
          OBJ_CALL(result = ::java::text::DecimalFormatSymbols::getInstance());
          return t_DecimalFormatSymbols::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::util::Locale a0((jobject) NULL);
          DecimalFormatSymbols result((jobject) NULL);

          if (!parseArgs(args, "k", ::java::util::Locale::initializeClass, &a0))
          {
            OBJ_CALL(result = ::java::text::DecimalFormatSymbols::getInstance(a0));
            return t_DecimalFormatSymbols::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError(type, "getInstance", args);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_getInternationalCurrencySymbol(t_DecimalFormatSymbols *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getInternationalCurrencySymbol());
      return j2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getMinusSign(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getMinusSign());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getMonetaryDecimalSeparator(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getMonetaryDecimalSeparator());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getNaN(t_DecimalFormatSymbols *self)
    {
      ::java::lang::String result((jobject) NULL);
      OBJ_CALL(result = self->object.getNaN());
      return j2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getPatternSeparator(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getPatternSeparator());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getPerMill(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getPerMill());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getPercent(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getPercent());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_getZeroDigit(t_DecimalFormatSymbols *self)
    {
      jchar result;
      OBJ_CALL(result = self->object.getZeroDigit());
      return c2p(result);
    }

    static PyObject *t_DecimalFormatSymbols_hashCode(t_DecimalFormatSymbols *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(DecimalFormatSymbols), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_DecimalFormatSymbols_setCurrency(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      ::java::util::Currency a0((jobject) NULL);

      if (!parseArg(arg, "k", ::java::util::Currency::initializeClass, &a0))
      {
        OBJ_CALL(self->object.setCurrency(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setCurrency", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setCurrencySymbol(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setCurrencySymbol(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setCurrencySymbol", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setDecimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setDecimalSeparator(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setDecimalSeparator", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setDigit(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setDigit(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setDigit", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setExponentSeparator(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setExponentSeparator(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setExponentSeparator", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setGroupingSeparator(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setGroupingSeparator(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setGroupingSeparator", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setInfinity(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setInfinity(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setInfinity", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setInternationalCurrencySymbol(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setInternationalCurrencySymbol(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setInternationalCurrencySymbol", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setMinusSign(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setMinusSign(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMinusSign", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setMonetaryDecimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setMonetaryDecimalSeparator(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setMonetaryDecimalSeparator", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setNaN(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      ::java::lang::String a0((jobject) NULL);

      if (!parseArg(arg, "s", &a0))
      {
        OBJ_CALL(self->object.setNaN(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setNaN", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setPatternSeparator(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setPatternSeparator(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setPatternSeparator", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setPerMill(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setPerMill(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setPerMill", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setPercent(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setPercent(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setPercent", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_setZeroDigit(t_DecimalFormatSymbols *self, PyObject *arg)
    {
      jchar a0;

      if (!parseArg(arg, "C", &a0))
      {
        OBJ_CALL(self->object.setZeroDigit(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "setZeroDigit", arg);
      return NULL;
    }

    static PyObject *t_DecimalFormatSymbols_get__availableLocales(t_DecimalFormatSymbols *self, void *data)
    {
      JArray< ::java::util::Locale > value((jobject) NULL);
      OBJ_CALL(value = self->object.getAvailableLocales());
      return JArray<jobject>(value.this$).wrap(::java::util::t_Locale::wrap_jobject);
    }

    static PyObject *t_DecimalFormatSymbols_get__currency(t_DecimalFormatSymbols *self, void *data)
    {
      ::java::util::Currency value((jobject) NULL);
      OBJ_CALL(value = self->object.getCurrency());
      return ::java::util::t_Currency::wrap_Object(value);
    }
    static int t_DecimalFormatSymbols_set__currency(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        ::java::util::Currency value((jobject) NULL);
        if (!parseArg(arg, "k", ::java::util::Currency::initializeClass, &value))
        {
          INT_CALL(self->object.setCurrency(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "currency", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__currencySymbol(t_DecimalFormatSymbols *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getCurrencySymbol());
      return j2p(value);
    }
    static int t_DecimalFormatSymbols_set__currencySymbol(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setCurrencySymbol(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "currencySymbol", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__decimalSeparator(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getDecimalSeparator());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__decimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setDecimalSeparator(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "decimalSeparator", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__digit(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getDigit());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__digit(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setDigit(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "digit", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__exponentSeparator(t_DecimalFormatSymbols *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getExponentSeparator());
      return j2p(value);
    }
    static int t_DecimalFormatSymbols_set__exponentSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setExponentSeparator(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "exponentSeparator", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__groupingSeparator(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getGroupingSeparator());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__groupingSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setGroupingSeparator(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "groupingSeparator", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__infinity(t_DecimalFormatSymbols *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getInfinity());
      return j2p(value);
    }
    static int t_DecimalFormatSymbols_set__infinity(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setInfinity(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "infinity", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__instance(t_DecimalFormatSymbols *self, void *data)
    {
      DecimalFormatSymbols value((jobject) NULL);
      OBJ_CALL(value = self->object.getInstance());
      return t_DecimalFormatSymbols::wrap_Object(value);
    }

    static PyObject *t_DecimalFormatSymbols_get__internationalCurrencySymbol(t_DecimalFormatSymbols *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getInternationalCurrencySymbol());
      return j2p(value);
    }
    static int t_DecimalFormatSymbols_set__internationalCurrencySymbol(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setInternationalCurrencySymbol(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "internationalCurrencySymbol", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__minusSign(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getMinusSign());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__minusSign(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setMinusSign(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "minusSign", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__monetaryDecimalSeparator(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getMonetaryDecimalSeparator());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__monetaryDecimalSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setMonetaryDecimalSeparator(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "monetaryDecimalSeparator", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__naN(t_DecimalFormatSymbols *self, void *data)
    {
      ::java::lang::String value((jobject) NULL);
      OBJ_CALL(value = self->object.getNaN());
      return j2p(value);
    }
    static int t_DecimalFormatSymbols_set__naN(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        ::java::lang::String value((jobject) NULL);
        if (!parseArg(arg, "s", &value))
        {
          INT_CALL(self->object.setNaN(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "naN", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__patternSeparator(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getPatternSeparator());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__patternSeparator(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setPatternSeparator(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "patternSeparator", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__perMill(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getPerMill());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__perMill(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setPerMill(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "perMill", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__percent(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getPercent());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__percent(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setPercent(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "percent", arg);
      return -1;
    }

    static PyObject *t_DecimalFormatSymbols_get__zeroDigit(t_DecimalFormatSymbols *self, void *data)
    {
      jchar value;
      OBJ_CALL(value = self->object.getZeroDigit());
      return c2p(value);
    }
    static int t_DecimalFormatSymbols_set__zeroDigit(t_DecimalFormatSymbols *self, PyObject *arg, void *data)
    {
      {
        jchar value;
        if (!parseArg(arg, "C", &value))
        {
          INT_CALL(self->object.setZeroDigit(value));
          return 0;
        }
      }
      PyErr_SetArgsError((PyObject *) self, "zeroDigit", arg);
      return -1;
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "org/hipparchus/geometry/partitioning/SubHyperplane.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/partitioning/BoundaryProjection.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/Region$Location.h"
#include "org/hipparchus/geometry/partitioning/Region.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *Region::class$ = NULL;
        jmethodID *Region::mids$ = NULL;
        bool Region::live$ = false;

        jclass Region::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/Region");

            mids$ = new jmethodID[max_mid];
            mids$[mid_buildNew_4546e25898f209c3] = env->getMethodID(cls, "buildNew", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_checkPoint_b7d493d130487009] = env->getMethodID(cls, "checkPoint", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/Region$Location;");
            mids$[mid_contains_5b003aec900d5457] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/partitioning/Region;)Z");
            mids$[mid_copySelf_3698fd1911856e70] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/partitioning/Region;");
            mids$[mid_getBarycenter_4b90e5ca2d7b0c50] = env->getMethodID(cls, "getBarycenter", "()Lorg/hipparchus/geometry/Point;");
            mids$[mid_getBoundarySize_b74f83833fdad017] = env->getMethodID(cls, "getBoundarySize", "()D");
            mids$[mid_getSize_b74f83833fdad017] = env->getMethodID(cls, "getSize", "()D");
            mids$[mid_getTree_cfe73ad9acef8c7c] = env->getMethodID(cls, "getTree", "(Z)Lorg/hipparchus/geometry/partitioning/BSPTree;");
            mids$[mid_intersection_263a5980faef7dc3] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/partitioning/SubHyperplane;)Lorg/hipparchus/geometry/partitioning/SubHyperplane;");
            mids$[mid_isEmpty_9ab94ac1dc23b105] = env->getMethodID(cls, "isEmpty", "()Z");
            mids$[mid_isEmpty_0c8ea3f1072db098] = env->getMethodID(cls, "isEmpty", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Z");
            mids$[mid_isFull_9ab94ac1dc23b105] = env->getMethodID(cls, "isFull", "()Z");
            mids$[mid_isFull_0c8ea3f1072db098] = env->getMethodID(cls, "isFull", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Z");
            mids$[mid_projectToBoundary_dcacfc1bc354b9c2] = env->getMethodID(cls, "projectToBoundary", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/partitioning/BoundaryProjection;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Region Region::buildNew(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return Region(env->callObjectMethod(this$, mids$[mid_buildNew_4546e25898f209c3], a0.this$));
        }

        ::org::hipparchus::geometry::partitioning::Region$Location Region::checkPoint(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::Region$Location(env->callObjectMethod(this$, mids$[mid_checkPoint_b7d493d130487009], a0.this$));
        }

        jboolean Region::contains(const Region & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_contains_5b003aec900d5457], a0.this$);
        }

        Region Region::copySelf() const
        {
          return Region(env->callObjectMethod(this$, mids$[mid_copySelf_3698fd1911856e70]));
        }

        ::org::hipparchus::geometry::Point Region::getBarycenter() const
        {
          return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_getBarycenter_4b90e5ca2d7b0c50]));
        }

        jdouble Region::getBoundarySize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getBoundarySize_b74f83833fdad017]);
        }

        jdouble Region::getSize() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSize_b74f83833fdad017]);
        }

        ::org::hipparchus::geometry::partitioning::BSPTree Region::getTree(jboolean a0) const
        {
          return ::org::hipparchus::geometry::partitioning::BSPTree(env->callObjectMethod(this$, mids$[mid_getTree_cfe73ad9acef8c7c], a0));
        }

        ::org::hipparchus::geometry::partitioning::SubHyperplane Region::intersection(const ::org::hipparchus::geometry::partitioning::SubHyperplane & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::SubHyperplane(env->callObjectMethod(this$, mids$[mid_intersection_263a5980faef7dc3], a0.this$));
        }

        jboolean Region::isEmpty() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEmpty_9ab94ac1dc23b105]);
        }

        jboolean Region::isEmpty(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isEmpty_0c8ea3f1072db098], a0.this$);
        }

        jboolean Region::isFull() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFull_9ab94ac1dc23b105]);
        }

        jboolean Region::isFull(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_isFull_0c8ea3f1072db098], a0.this$);
        }

        ::org::hipparchus::geometry::partitioning::BoundaryProjection Region::projectToBoundary(const ::org::hipparchus::geometry::Point & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::BoundaryProjection(env->callObjectMethod(this$, mids$[mid_projectToBoundary_dcacfc1bc354b9c2], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {
        static PyObject *t_Region_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Region_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Region_of_(t_Region *self, PyObject *args);
        static PyObject *t_Region_buildNew(t_Region *self, PyObject *arg);
        static PyObject *t_Region_checkPoint(t_Region *self, PyObject *arg);
        static PyObject *t_Region_contains(t_Region *self, PyObject *arg);
        static PyObject *t_Region_copySelf(t_Region *self);
        static PyObject *t_Region_getBarycenter(t_Region *self);
        static PyObject *t_Region_getBoundarySize(t_Region *self);
        static PyObject *t_Region_getSize(t_Region *self);
        static PyObject *t_Region_getTree(t_Region *self, PyObject *arg);
        static PyObject *t_Region_intersection(t_Region *self, PyObject *arg);
        static PyObject *t_Region_isEmpty(t_Region *self, PyObject *args);
        static PyObject *t_Region_isFull(t_Region *self, PyObject *args);
        static PyObject *t_Region_projectToBoundary(t_Region *self, PyObject *arg);
        static PyObject *t_Region_get__barycenter(t_Region *self, void *data);
        static PyObject *t_Region_get__boundarySize(t_Region *self, void *data);
        static PyObject *t_Region_get__empty(t_Region *self, void *data);
        static PyObject *t_Region_get__full(t_Region *self, void *data);
        static PyObject *t_Region_get__size(t_Region *self, void *data);
        static PyObject *t_Region_get__parameters_(t_Region *self, void *data);
        static PyGetSetDef t_Region__fields_[] = {
          DECLARE_GET_FIELD(t_Region, barycenter),
          DECLARE_GET_FIELD(t_Region, boundarySize),
          DECLARE_GET_FIELD(t_Region, empty),
          DECLARE_GET_FIELD(t_Region, full),
          DECLARE_GET_FIELD(t_Region, size),
          DECLARE_GET_FIELD(t_Region, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Region__methods_[] = {
          DECLARE_METHOD(t_Region, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Region, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Region, of_, METH_VARARGS),
          DECLARE_METHOD(t_Region, buildNew, METH_O),
          DECLARE_METHOD(t_Region, checkPoint, METH_O),
          DECLARE_METHOD(t_Region, contains, METH_O),
          DECLARE_METHOD(t_Region, copySelf, METH_NOARGS),
          DECLARE_METHOD(t_Region, getBarycenter, METH_NOARGS),
          DECLARE_METHOD(t_Region, getBoundarySize, METH_NOARGS),
          DECLARE_METHOD(t_Region, getSize, METH_NOARGS),
          DECLARE_METHOD(t_Region, getTree, METH_O),
          DECLARE_METHOD(t_Region, intersection, METH_O),
          DECLARE_METHOD(t_Region, isEmpty, METH_VARARGS),
          DECLARE_METHOD(t_Region, isFull, METH_VARARGS),
          DECLARE_METHOD(t_Region, projectToBoundary, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Region)[] = {
          { Py_tp_methods, t_Region__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Region__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Region)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Region, t_Region, Region);
        PyObject *t_Region::wrap_Object(const Region& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Region::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Region *self = (t_Region *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_Region::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_Region::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_Region *self = (t_Region *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_Region::install(PyObject *module)
        {
          installType(&PY_TYPE(Region), &PY_TYPE_DEF(Region), module, "Region", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region), "Location", make_descriptor(&PY_TYPE_DEF(Region$Location)));
        }

        void t_Region::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region), "class_", make_descriptor(Region::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region), "wrapfn_", make_descriptor(t_Region::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Region), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Region_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Region::initializeClass, 1)))
            return NULL;
          return t_Region::wrap_Object(Region(((t_Region *) arg)->object.this$));
        }
        static PyObject *t_Region_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Region::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Region_of_(t_Region *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_Region_buildNew(t_Region *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          Region result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
          {
            OBJ_CALL(result = self->object.buildNew(a0));
            return t_Region::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "buildNew", arg);
          return NULL;
        }

        static PyObject *t_Region_checkPoint(t_Region *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::Region$Location result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            OBJ_CALL(result = self->object.checkPoint(a0));
            return ::org::hipparchus::geometry::partitioning::t_Region$Location::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "checkPoint", arg);
          return NULL;
        }

        static PyObject *t_Region_contains(t_Region *self, PyObject *arg)
        {
          Region a0((jobject) NULL);
          PyTypeObject **p0;
          jboolean result;

          if (!parseArg(arg, "K", Region::initializeClass, &a0, &p0, t_Region::parameters_))
          {
            OBJ_CALL(result = self->object.contains(a0));
            Py_RETURN_BOOL(result);
          }

          PyErr_SetArgsError((PyObject *) self, "contains", arg);
          return NULL;
        }

        static PyObject *t_Region_copySelf(t_Region *self)
        {
          Region result((jobject) NULL);
          OBJ_CALL(result = self->object.copySelf());
          return t_Region::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_Region_getBarycenter(t_Region *self)
        {
          ::org::hipparchus::geometry::Point result((jobject) NULL);
          OBJ_CALL(result = self->object.getBarycenter());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_Region_getBoundarySize(t_Region *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getBoundarySize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Region_getSize(t_Region *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getSize());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Region_getTree(t_Region *self, PyObject *arg)
        {
          jboolean a0;
          ::org::hipparchus::geometry::partitioning::BSPTree result((jobject) NULL);

          if (!parseArg(arg, "Z", &a0))
          {
            OBJ_CALL(result = self->object.getTree(a0));
            return ::org::hipparchus::geometry::partitioning::t_BSPTree::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "getTree", arg);
          return NULL;
        }

        static PyObject *t_Region_intersection(t_Region *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::SubHyperplane a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::SubHyperplane result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::SubHyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_SubHyperplane::parameters_))
          {
            OBJ_CALL(result = self->object.intersection(a0));
            return ::org::hipparchus::geometry::partitioning::t_SubHyperplane::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "intersection", arg);
          return NULL;
        }

        static PyObject *t_Region_isEmpty(t_Region *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jboolean result;
              OBJ_CALL(result = self->object.isEmpty());
              Py_RETURN_BOOL(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean result;

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
              {
                OBJ_CALL(result = self->object.isEmpty(a0));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "isEmpty", args);
          return NULL;
        }

        static PyObject *t_Region_isFull(t_Region *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              jboolean result;
              OBJ_CALL(result = self->object.isFull());
              Py_RETURN_BOOL(result);
            }
            break;
           case 1:
            {
              ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
              PyTypeObject **p0;
              jboolean result;

              if (!parseArgs(args, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
              {
                OBJ_CALL(result = self->object.isFull(a0));
                Py_RETURN_BOOL(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "isFull", args);
          return NULL;
        }

        static PyObject *t_Region_projectToBoundary(t_Region *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::Point a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::BoundaryProjection result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
          {
            OBJ_CALL(result = self->object.projectToBoundary(a0));
            return ::org::hipparchus::geometry::partitioning::t_BoundaryProjection::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "projectToBoundary", arg);
          return NULL;
        }
        static PyObject *t_Region_get__parameters_(t_Region *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_Region_get__barycenter(t_Region *self, void *data)
        {
          ::org::hipparchus::geometry::Point value((jobject) NULL);
          OBJ_CALL(value = self->object.getBarycenter());
          return ::org::hipparchus::geometry::t_Point::wrap_Object(value);
        }

        static PyObject *t_Region_get__boundarySize(t_Region *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getBoundarySize());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Region_get__empty(t_Region *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isEmpty());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_Region_get__full(t_Region *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isFull());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_Region_get__size(t_Region *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSize());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/raster/Tile.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/utils/NormalizedGeodeticPoint.h"
#include "org/orekit/rugged/raster/Tile$Location.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {

        ::java::lang::Class *Tile::class$ = NULL;
        jmethodID *Tile::mids$ = NULL;
        bool Tile::live$ = false;

        jclass Tile::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/raster/Tile");

            mids$ = new jmethodID[max_mid];
            mids$[mid_cellIntersection_4f0fb331517d0f4d] = env->getMethodID(cls, "cellIntersection", "(Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;II)Lorg/orekit/rugged/utils/NormalizedGeodeticPoint;");
            mids$[mid_getElevationAtIndices_cad98089d00f8a5b] = env->getMethodID(cls, "getElevationAtIndices", "(II)D");
            mids$[mid_getFloorLatitudeIndex_2af4736545087009] = env->getMethodID(cls, "getFloorLatitudeIndex", "(D)I");
            mids$[mid_getFloorLongitudeIndex_2af4736545087009] = env->getMethodID(cls, "getFloorLongitudeIndex", "(D)I");
            mids$[mid_getLatitudeAtIndex_2afcbc21f4e57ab2] = env->getMethodID(cls, "getLatitudeAtIndex", "(I)D");
            mids$[mid_getLatitudeRows_55546ef6a647f39b] = env->getMethodID(cls, "getLatitudeRows", "()I");
            mids$[mid_getLatitudeStep_b74f83833fdad017] = env->getMethodID(cls, "getLatitudeStep", "()D");
            mids$[mid_getLocation_0b4a238e5205c712] = env->getMethodID(cls, "getLocation", "(DD)Lorg/orekit/rugged/raster/Tile$Location;");
            mids$[mid_getLongitudeAtIndex_2afcbc21f4e57ab2] = env->getMethodID(cls, "getLongitudeAtIndex", "(I)D");
            mids$[mid_getLongitudeColumns_55546ef6a647f39b] = env->getMethodID(cls, "getLongitudeColumns", "()I");
            mids$[mid_getLongitudeStep_b74f83833fdad017] = env->getMethodID(cls, "getLongitudeStep", "()D");
            mids$[mid_getMaxElevation_b74f83833fdad017] = env->getMethodID(cls, "getMaxElevation", "()D");
            mids$[mid_getMaxElevationLatitudeIndex_55546ef6a647f39b] = env->getMethodID(cls, "getMaxElevationLatitudeIndex", "()I");
            mids$[mid_getMaxElevationLongitudeIndex_55546ef6a647f39b] = env->getMethodID(cls, "getMaxElevationLongitudeIndex", "()I");
            mids$[mid_getMaximumLatitude_b74f83833fdad017] = env->getMethodID(cls, "getMaximumLatitude", "()D");
            mids$[mid_getMaximumLongitude_b74f83833fdad017] = env->getMethodID(cls, "getMaximumLongitude", "()D");
            mids$[mid_getMinElevation_b74f83833fdad017] = env->getMethodID(cls, "getMinElevation", "()D");
            mids$[mid_getMinElevationLatitudeIndex_55546ef6a647f39b] = env->getMethodID(cls, "getMinElevationLatitudeIndex", "()I");
            mids$[mid_getMinElevationLongitudeIndex_55546ef6a647f39b] = env->getMethodID(cls, "getMinElevationLongitudeIndex", "()I");
            mids$[mid_getMinimumLatitude_b74f83833fdad017] = env->getMethodID(cls, "getMinimumLatitude", "()D");
            mids$[mid_getMinimumLongitude_b74f83833fdad017] = env->getMethodID(cls, "getMinimumLongitude", "()D");
            mids$[mid_interpolateElevation_99e3200dafc19573] = env->getMethodID(cls, "interpolateElevation", "(DD)D");
            mids$[mid_tileUpdateCompleted_a1fa5dae97ea5ed2] = env->getMethodID(cls, "tileUpdateCompleted", "()V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::rugged::utils::NormalizedGeodeticPoint Tile::cellIntersection(const ::org::orekit::rugged::utils::NormalizedGeodeticPoint & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jint a2, jint a3) const
        {
          return ::org::orekit::rugged::utils::NormalizedGeodeticPoint(env->callObjectMethod(this$, mids$[mid_cellIntersection_4f0fb331517d0f4d], a0.this$, a1.this$, a2, a3));
        }

        jdouble Tile::getElevationAtIndices(jint a0, jint a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getElevationAtIndices_cad98089d00f8a5b], a0, a1);
        }

        jint Tile::getFloorLatitudeIndex(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_getFloorLatitudeIndex_2af4736545087009], a0);
        }

        jint Tile::getFloorLongitudeIndex(jdouble a0) const
        {
          return env->callIntMethod(this$, mids$[mid_getFloorLongitudeIndex_2af4736545087009], a0);
        }

        jdouble Tile::getLatitudeAtIndex(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLatitudeAtIndex_2afcbc21f4e57ab2], a0);
        }

        jint Tile::getLatitudeRows() const
        {
          return env->callIntMethod(this$, mids$[mid_getLatitudeRows_55546ef6a647f39b]);
        }

        jdouble Tile::getLatitudeStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLatitudeStep_b74f83833fdad017]);
        }

        ::org::orekit::rugged::raster::Tile$Location Tile::getLocation(jdouble a0, jdouble a1) const
        {
          return ::org::orekit::rugged::raster::Tile$Location(env->callObjectMethod(this$, mids$[mid_getLocation_0b4a238e5205c712], a0, a1));
        }

        jdouble Tile::getLongitudeAtIndex(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitudeAtIndex_2afcbc21f4e57ab2], a0);
        }

        jint Tile::getLongitudeColumns() const
        {
          return env->callIntMethod(this$, mids$[mid_getLongitudeColumns_55546ef6a647f39b]);
        }

        jdouble Tile::getLongitudeStep() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLongitudeStep_b74f83833fdad017]);
        }

        jdouble Tile::getMaxElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaxElevation_b74f83833fdad017]);
        }

        jint Tile::getMaxElevationLatitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxElevationLatitudeIndex_55546ef6a647f39b]);
        }

        jint Tile::getMaxElevationLongitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxElevationLongitudeIndex_55546ef6a647f39b]);
        }

        jdouble Tile::getMaximumLatitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaximumLatitude_b74f83833fdad017]);
        }

        jdouble Tile::getMaximumLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMaximumLongitude_b74f83833fdad017]);
        }

        jdouble Tile::getMinElevation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinElevation_b74f83833fdad017]);
        }

        jint Tile::getMinElevationLatitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinElevationLatitudeIndex_55546ef6a647f39b]);
        }

        jint Tile::getMinElevationLongitudeIndex() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinElevationLongitudeIndex_55546ef6a647f39b]);
        }

        jdouble Tile::getMinimumLatitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinimumLatitude_b74f83833fdad017]);
        }

        jdouble Tile::getMinimumLongitude() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMinimumLongitude_b74f83833fdad017]);
        }

        jdouble Tile::interpolateElevation(jdouble a0, jdouble a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_interpolateElevation_99e3200dafc19573], a0, a1);
        }

        void Tile::tileUpdateCompleted() const
        {
          env->callVoidMethod(this$, mids$[mid_tileUpdateCompleted_a1fa5dae97ea5ed2]);
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace raster {
        static PyObject *t_Tile_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Tile_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Tile_cellIntersection(t_Tile *self, PyObject *args);
        static PyObject *t_Tile_getElevationAtIndices(t_Tile *self, PyObject *args);
        static PyObject *t_Tile_getFloorLatitudeIndex(t_Tile *self, PyObject *arg);
        static PyObject *t_Tile_getFloorLongitudeIndex(t_Tile *self, PyObject *arg);
        static PyObject *t_Tile_getLatitudeAtIndex(t_Tile *self, PyObject *arg);
        static PyObject *t_Tile_getLatitudeRows(t_Tile *self);
        static PyObject *t_Tile_getLatitudeStep(t_Tile *self);
        static PyObject *t_Tile_getLocation(t_Tile *self, PyObject *args);
        static PyObject *t_Tile_getLongitudeAtIndex(t_Tile *self, PyObject *arg);
        static PyObject *t_Tile_getLongitudeColumns(t_Tile *self);
        static PyObject *t_Tile_getLongitudeStep(t_Tile *self);
        static PyObject *t_Tile_getMaxElevation(t_Tile *self);
        static PyObject *t_Tile_getMaxElevationLatitudeIndex(t_Tile *self);
        static PyObject *t_Tile_getMaxElevationLongitudeIndex(t_Tile *self);
        static PyObject *t_Tile_getMaximumLatitude(t_Tile *self);
        static PyObject *t_Tile_getMaximumLongitude(t_Tile *self);
        static PyObject *t_Tile_getMinElevation(t_Tile *self);
        static PyObject *t_Tile_getMinElevationLatitudeIndex(t_Tile *self);
        static PyObject *t_Tile_getMinElevationLongitudeIndex(t_Tile *self);
        static PyObject *t_Tile_getMinimumLatitude(t_Tile *self);
        static PyObject *t_Tile_getMinimumLongitude(t_Tile *self);
        static PyObject *t_Tile_interpolateElevation(t_Tile *self, PyObject *args);
        static PyObject *t_Tile_tileUpdateCompleted(t_Tile *self);
        static PyObject *t_Tile_get__latitudeRows(t_Tile *self, void *data);
        static PyObject *t_Tile_get__latitudeStep(t_Tile *self, void *data);
        static PyObject *t_Tile_get__longitudeColumns(t_Tile *self, void *data);
        static PyObject *t_Tile_get__longitudeStep(t_Tile *self, void *data);
        static PyObject *t_Tile_get__maxElevation(t_Tile *self, void *data);
        static PyObject *t_Tile_get__maxElevationLatitudeIndex(t_Tile *self, void *data);
        static PyObject *t_Tile_get__maxElevationLongitudeIndex(t_Tile *self, void *data);
        static PyObject *t_Tile_get__maximumLatitude(t_Tile *self, void *data);
        static PyObject *t_Tile_get__maximumLongitude(t_Tile *self, void *data);
        static PyObject *t_Tile_get__minElevation(t_Tile *self, void *data);
        static PyObject *t_Tile_get__minElevationLatitudeIndex(t_Tile *self, void *data);
        static PyObject *t_Tile_get__minElevationLongitudeIndex(t_Tile *self, void *data);
        static PyObject *t_Tile_get__minimumLatitude(t_Tile *self, void *data);
        static PyObject *t_Tile_get__minimumLongitude(t_Tile *self, void *data);
        static PyGetSetDef t_Tile__fields_[] = {
          DECLARE_GET_FIELD(t_Tile, latitudeRows),
          DECLARE_GET_FIELD(t_Tile, latitudeStep),
          DECLARE_GET_FIELD(t_Tile, longitudeColumns),
          DECLARE_GET_FIELD(t_Tile, longitudeStep),
          DECLARE_GET_FIELD(t_Tile, maxElevation),
          DECLARE_GET_FIELD(t_Tile, maxElevationLatitudeIndex),
          DECLARE_GET_FIELD(t_Tile, maxElevationLongitudeIndex),
          DECLARE_GET_FIELD(t_Tile, maximumLatitude),
          DECLARE_GET_FIELD(t_Tile, maximumLongitude),
          DECLARE_GET_FIELD(t_Tile, minElevation),
          DECLARE_GET_FIELD(t_Tile, minElevationLatitudeIndex),
          DECLARE_GET_FIELD(t_Tile, minElevationLongitudeIndex),
          DECLARE_GET_FIELD(t_Tile, minimumLatitude),
          DECLARE_GET_FIELD(t_Tile, minimumLongitude),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Tile__methods_[] = {
          DECLARE_METHOD(t_Tile, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tile, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Tile, cellIntersection, METH_VARARGS),
          DECLARE_METHOD(t_Tile, getElevationAtIndices, METH_VARARGS),
          DECLARE_METHOD(t_Tile, getFloorLatitudeIndex, METH_O),
          DECLARE_METHOD(t_Tile, getFloorLongitudeIndex, METH_O),
          DECLARE_METHOD(t_Tile, getLatitudeAtIndex, METH_O),
          DECLARE_METHOD(t_Tile, getLatitudeRows, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getLatitudeStep, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getLocation, METH_VARARGS),
          DECLARE_METHOD(t_Tile, getLongitudeAtIndex, METH_O),
          DECLARE_METHOD(t_Tile, getLongitudeColumns, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getLongitudeStep, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMaxElevation, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMaxElevationLatitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMaxElevationLongitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMaximumLatitude, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMaximumLongitude, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMinElevation, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMinElevationLatitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMinElevationLongitudeIndex, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMinimumLatitude, METH_NOARGS),
          DECLARE_METHOD(t_Tile, getMinimumLongitude, METH_NOARGS),
          DECLARE_METHOD(t_Tile, interpolateElevation, METH_VARARGS),
          DECLARE_METHOD(t_Tile, tileUpdateCompleted, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Tile)[] = {
          { Py_tp_methods, t_Tile__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_Tile__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Tile)[] = {
          &PY_TYPE_DEF(::org::orekit::rugged::raster::UpdatableTile),
          NULL
        };

        DEFINE_TYPE(Tile, t_Tile, Tile);

        void t_Tile::install(PyObject *module)
        {
          installType(&PY_TYPE(Tile), &PY_TYPE_DEF(Tile), module, "Tile", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile), "Location", make_descriptor(&PY_TYPE_DEF(Tile$Location)));
        }

        void t_Tile::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile), "class_", make_descriptor(Tile::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile), "wrapfn_", make_descriptor(t_Tile::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Tile), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Tile_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Tile::initializeClass, 1)))
            return NULL;
          return t_Tile::wrap_Object(Tile(((t_Tile *) arg)->object.this$));
        }
        static PyObject *t_Tile_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Tile::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_Tile_cellIntersection(t_Tile *self, PyObject *args)
        {
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          jint a2;
          jint a3;
          ::org::orekit::rugged::utils::NormalizedGeodeticPoint result((jobject) NULL);

          if (!parseArgs(args, "kkII", ::org::orekit::rugged::utils::NormalizedGeodeticPoint::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.cellIntersection(a0, a1, a2, a3));
            return ::org::orekit::rugged::utils::t_NormalizedGeodeticPoint::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "cellIntersection", args);
          return NULL;
        }

        static PyObject *t_Tile_getElevationAtIndices(t_Tile *self, PyObject *args)
        {
          jint a0;
          jint a1;
          jdouble result;

          if (!parseArgs(args, "II", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getElevationAtIndices(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getElevationAtIndices", args);
          return NULL;
        }

        static PyObject *t_Tile_getFloorLatitudeIndex(t_Tile *self, PyObject *arg)
        {
          jdouble a0;
          jint result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getFloorLatitudeIndex(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFloorLatitudeIndex", arg);
          return NULL;
        }

        static PyObject *t_Tile_getFloorLongitudeIndex(t_Tile *self, PyObject *arg)
        {
          jdouble a0;
          jint result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.getFloorLongitudeIndex(a0));
            return PyLong_FromLong((long) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getFloorLongitudeIndex", arg);
          return NULL;
        }

        static PyObject *t_Tile_getLatitudeAtIndex(t_Tile *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getLatitudeAtIndex(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLatitudeAtIndex", arg);
          return NULL;
        }

        static PyObject *t_Tile_getLatitudeRows(t_Tile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getLatitudeRows());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Tile_getLatitudeStep(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLatitudeStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getLocation(t_Tile *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          ::org::orekit::rugged::raster::Tile$Location result((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.getLocation(a0, a1));
            return ::org::orekit::rugged::raster::t_Tile$Location::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLocation", args);
          return NULL;
        }

        static PyObject *t_Tile_getLongitudeAtIndex(t_Tile *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getLongitudeAtIndex(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getLongitudeAtIndex", arg);
          return NULL;
        }

        static PyObject *t_Tile_getLongitudeColumns(t_Tile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getLongitudeColumns());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Tile_getLongitudeStep(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLongitudeStep());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getMaxElevation(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaxElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getMaxElevationLatitudeIndex(t_Tile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxElevationLatitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Tile_getMaxElevationLongitudeIndex(t_Tile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxElevationLongitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Tile_getMaximumLatitude(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaximumLatitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getMaximumLongitude(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMaximumLongitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getMinElevation(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinElevation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getMinElevationLatitudeIndex(t_Tile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinElevationLatitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Tile_getMinElevationLongitudeIndex(t_Tile *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinElevationLongitudeIndex());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_Tile_getMinimumLatitude(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinimumLatitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_getMinimumLongitude(t_Tile *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMinimumLongitude());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_Tile_interpolateElevation(t_Tile *self, PyObject *args)
        {
          jdouble a0;
          jdouble a1;
          jdouble result;

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolateElevation(a0, a1));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolateElevation", args);
          return NULL;
        }

        static PyObject *t_Tile_tileUpdateCompleted(t_Tile *self)
        {
          OBJ_CALL(self->object.tileUpdateCompleted());
          Py_RETURN_NONE;
        }

        static PyObject *t_Tile_get__latitudeRows(t_Tile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getLatitudeRows());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Tile_get__latitudeStep(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLatitudeStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__longitudeColumns(t_Tile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getLongitudeColumns());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Tile_get__longitudeStep(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLongitudeStep());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__maxElevation(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaxElevation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__maxElevationLatitudeIndex(t_Tile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxElevationLatitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Tile_get__maxElevationLongitudeIndex(t_Tile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxElevationLongitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Tile_get__maximumLatitude(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaximumLatitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__maximumLongitude(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMaximumLongitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__minElevation(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinElevation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__minElevationLatitudeIndex(t_Tile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinElevationLatitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Tile_get__minElevationLongitudeIndex(t_Tile *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinElevationLongitudeIndex());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_Tile_get__minimumLatitude(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinimumLatitude());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_Tile_get__minimumLongitude(t_Tile *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMinimumLongitude());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/clock/RinexClock$Receiver.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {

          ::java::lang::Class *RinexClock$Receiver::class$ = NULL;
          jmethodID *RinexClock$Receiver::mids$ = NULL;
          bool RinexClock$Receiver::live$ = false;

          jclass RinexClock$Receiver::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/clock/RinexClock$Receiver");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_51f84eb87023ae7f] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;DDD)V");
              mids$[mid_getDesignator_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getDesignator", "()Ljava/lang/String;");
              mids$[mid_getReceiverIdentifier_1c1fa1e935d6cdcf] = env->getMethodID(cls, "getReceiverIdentifier", "()Ljava/lang/String;");
              mids$[mid_getX_b74f83833fdad017] = env->getMethodID(cls, "getX", "()D");
              mids$[mid_getY_b74f83833fdad017] = env->getMethodID(cls, "getY", "()D");
              mids$[mid_getZ_b74f83833fdad017] = env->getMethodID(cls, "getZ", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexClock$Receiver::RinexClock$Receiver(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2, jdouble a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_51f84eb87023ae7f, a0.this$, a1.this$, a2, a3, a4)) {}

          ::java::lang::String RinexClock$Receiver::getDesignator() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getDesignator_1c1fa1e935d6cdcf]));
          }

          ::java::lang::String RinexClock$Receiver::getReceiverIdentifier() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getReceiverIdentifier_1c1fa1e935d6cdcf]));
          }

          jdouble RinexClock$Receiver::getX() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getX_b74f83833fdad017]);
          }

          jdouble RinexClock$Receiver::getY() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getY_b74f83833fdad017]);
          }

          jdouble RinexClock$Receiver::getZ() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getZ_b74f83833fdad017]);
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace clock {
          static PyObject *t_RinexClock$Receiver_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexClock$Receiver_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexClock$Receiver_init_(t_RinexClock$Receiver *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexClock$Receiver_getDesignator(t_RinexClock$Receiver *self);
          static PyObject *t_RinexClock$Receiver_getReceiverIdentifier(t_RinexClock$Receiver *self);
          static PyObject *t_RinexClock$Receiver_getX(t_RinexClock$Receiver *self);
          static PyObject *t_RinexClock$Receiver_getY(t_RinexClock$Receiver *self);
          static PyObject *t_RinexClock$Receiver_getZ(t_RinexClock$Receiver *self);
          static PyObject *t_RinexClock$Receiver_get__designator(t_RinexClock$Receiver *self, void *data);
          static PyObject *t_RinexClock$Receiver_get__receiverIdentifier(t_RinexClock$Receiver *self, void *data);
          static PyObject *t_RinexClock$Receiver_get__x(t_RinexClock$Receiver *self, void *data);
          static PyObject *t_RinexClock$Receiver_get__y(t_RinexClock$Receiver *self, void *data);
          static PyObject *t_RinexClock$Receiver_get__z(t_RinexClock$Receiver *self, void *data);
          static PyGetSetDef t_RinexClock$Receiver__fields_[] = {
            DECLARE_GET_FIELD(t_RinexClock$Receiver, designator),
            DECLARE_GET_FIELD(t_RinexClock$Receiver, receiverIdentifier),
            DECLARE_GET_FIELD(t_RinexClock$Receiver, x),
            DECLARE_GET_FIELD(t_RinexClock$Receiver, y),
            DECLARE_GET_FIELD(t_RinexClock$Receiver, z),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RinexClock$Receiver__methods_[] = {
            DECLARE_METHOD(t_RinexClock$Receiver, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$Receiver, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexClock$Receiver, getDesignator, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$Receiver, getReceiverIdentifier, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$Receiver, getX, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$Receiver, getY, METH_NOARGS),
            DECLARE_METHOD(t_RinexClock$Receiver, getZ, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexClock$Receiver)[] = {
            { Py_tp_methods, t_RinexClock$Receiver__methods_ },
            { Py_tp_init, (void *) t_RinexClock$Receiver_init_ },
            { Py_tp_getset, t_RinexClock$Receiver__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexClock$Receiver)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexClock$Receiver, t_RinexClock$Receiver, RinexClock$Receiver);

          void t_RinexClock$Receiver::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexClock$Receiver), &PY_TYPE_DEF(RinexClock$Receiver), module, "RinexClock$Receiver", 0);
          }

          void t_RinexClock$Receiver::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$Receiver), "class_", make_descriptor(RinexClock$Receiver::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$Receiver), "wrapfn_", make_descriptor(t_RinexClock$Receiver::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexClock$Receiver), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexClock$Receiver_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexClock$Receiver::initializeClass, 1)))
              return NULL;
            return t_RinexClock$Receiver::wrap_Object(RinexClock$Receiver(((t_RinexClock$Receiver *) arg)->object.this$));
          }
          static PyObject *t_RinexClock$Receiver_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexClock$Receiver::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexClock$Receiver_init_(t_RinexClock$Receiver *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            ::java::lang::String a1((jobject) NULL);
            jdouble a2;
            jdouble a3;
            jdouble a4;
            RinexClock$Receiver object((jobject) NULL);

            if (!parseArgs(args, "ssDDD", &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = RinexClock$Receiver(a0, a1, a2, a3, a4));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RinexClock$Receiver_getDesignator(t_RinexClock$Receiver *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getDesignator());
            return j2p(result);
          }

          static PyObject *t_RinexClock$Receiver_getReceiverIdentifier(t_RinexClock$Receiver *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getReceiverIdentifier());
            return j2p(result);
          }

          static PyObject *t_RinexClock$Receiver_getX(t_RinexClock$Receiver *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getX());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$Receiver_getY(t_RinexClock$Receiver *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getY());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$Receiver_getZ(t_RinexClock$Receiver *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getZ());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_RinexClock$Receiver_get__designator(t_RinexClock$Receiver *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getDesignator());
            return j2p(value);
          }

          static PyObject *t_RinexClock$Receiver_get__receiverIdentifier(t_RinexClock$Receiver *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getReceiverIdentifier());
            return j2p(value);
          }

          static PyObject *t_RinexClock$Receiver_get__x(t_RinexClock$Receiver *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getX());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$Receiver_get__y(t_RinexClock$Receiver *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getY());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_RinexClock$Receiver_get__z(t_RinexClock$Receiver *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getZ());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmCommonMetadataKey.h"
#include "org/orekit/files/ccsds/utils/lexical/ParseToken.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmCommonMetadataKey.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmMetadata.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/utils/ContextBinding.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {

            ::java::lang::Class *AdmCommonMetadataKey::class$ = NULL;
            jmethodID *AdmCommonMetadataKey::mids$ = NULL;
            bool AdmCommonMetadataKey::live$ = false;
            AdmCommonMetadataKey *AdmCommonMetadataKey::OBJECT_ID = NULL;

            jclass AdmCommonMetadataKey::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/AdmCommonMetadataKey");

                mids$ = new jmethodID[max_mid];
                mids$[mid_process_4c13edf1d74f1440] = env->getMethodID(cls, "process", "(Lorg/orekit/files/ccsds/utils/lexical/ParseToken;Lorg/orekit/files/ccsds/utils/ContextBinding;Lorg/orekit/files/ccsds/ndm/adm/AdmMetadata;)Z");
                mids$[mid_valueOf_ced534df33135514] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/adm/AdmCommonMetadataKey;");
                mids$[mid_values_da82fd7121075dfa] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/adm/AdmCommonMetadataKey;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                OBJECT_ID = new AdmCommonMetadataKey(env->getStaticObjectField(cls, "OBJECT_ID", "Lorg/orekit/files/ccsds/ndm/adm/AdmCommonMetadataKey;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            jboolean AdmCommonMetadataKey::process(const ::org::orekit::files::ccsds::utils::lexical::ParseToken & a0, const ::org::orekit::files::ccsds::utils::ContextBinding & a1, const ::org::orekit::files::ccsds::ndm::adm::AdmMetadata & a2) const
            {
              return env->callBooleanMethod(this$, mids$[mid_process_4c13edf1d74f1440], a0.this$, a1.this$, a2.this$);
            }

            AdmCommonMetadataKey AdmCommonMetadataKey::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return AdmCommonMetadataKey(env->callStaticObjectMethod(cls, mids$[mid_valueOf_ced534df33135514], a0.this$));
            }

            JArray< AdmCommonMetadataKey > AdmCommonMetadataKey::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< AdmCommonMetadataKey >(env->callStaticObjectMethod(cls, mids$[mid_values_da82fd7121075dfa]));
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            static PyObject *t_AdmCommonMetadataKey_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmCommonMetadataKey_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AdmCommonMetadataKey_of_(t_AdmCommonMetadataKey *self, PyObject *args);
            static PyObject *t_AdmCommonMetadataKey_process(t_AdmCommonMetadataKey *self, PyObject *args);
            static PyObject *t_AdmCommonMetadataKey_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_AdmCommonMetadataKey_values(PyTypeObject *type);
            static PyObject *t_AdmCommonMetadataKey_get__parameters_(t_AdmCommonMetadataKey *self, void *data);
            static PyGetSetDef t_AdmCommonMetadataKey__fields_[] = {
              DECLARE_GET_FIELD(t_AdmCommonMetadataKey, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AdmCommonMetadataKey__methods_[] = {
              DECLARE_METHOD(t_AdmCommonMetadataKey, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmCommonMetadataKey, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AdmCommonMetadataKey, of_, METH_VARARGS),
              DECLARE_METHOD(t_AdmCommonMetadataKey, process, METH_VARARGS),
              DECLARE_METHOD(t_AdmCommonMetadataKey, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_AdmCommonMetadataKey, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AdmCommonMetadataKey)[] = {
              { Py_tp_methods, t_AdmCommonMetadataKey__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AdmCommonMetadataKey__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AdmCommonMetadataKey)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(AdmCommonMetadataKey, t_AdmCommonMetadataKey, AdmCommonMetadataKey);
            PyObject *t_AdmCommonMetadataKey::wrap_Object(const AdmCommonMetadataKey& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdmCommonMetadataKey::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdmCommonMetadataKey *self = (t_AdmCommonMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_AdmCommonMetadataKey::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_AdmCommonMetadataKey::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_AdmCommonMetadataKey *self = (t_AdmCommonMetadataKey *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_AdmCommonMetadataKey::install(PyObject *module)
            {
              installType(&PY_TYPE(AdmCommonMetadataKey), &PY_TYPE_DEF(AdmCommonMetadataKey), module, "AdmCommonMetadataKey", 0);
            }

            void t_AdmCommonMetadataKey::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmCommonMetadataKey), "class_", make_descriptor(AdmCommonMetadataKey::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmCommonMetadataKey), "wrapfn_", make_descriptor(t_AdmCommonMetadataKey::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmCommonMetadataKey), "boxfn_", make_descriptor(boxObject));
              env->getClass(AdmCommonMetadataKey::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(AdmCommonMetadataKey), "OBJECT_ID", make_descriptor(t_AdmCommonMetadataKey::wrap_Object(*AdmCommonMetadataKey::OBJECT_ID)));
            }

            static PyObject *t_AdmCommonMetadataKey_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AdmCommonMetadataKey::initializeClass, 1)))
                return NULL;
              return t_AdmCommonMetadataKey::wrap_Object(AdmCommonMetadataKey(((t_AdmCommonMetadataKey *) arg)->object.this$));
            }
            static PyObject *t_AdmCommonMetadataKey_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AdmCommonMetadataKey::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AdmCommonMetadataKey_of_(t_AdmCommonMetadataKey *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_AdmCommonMetadataKey_process(t_AdmCommonMetadataKey *self, PyObject *args)
            {
              ::org::orekit::files::ccsds::utils::lexical::ParseToken a0((jobject) NULL);
              ::org::orekit::files::ccsds::utils::ContextBinding a1((jobject) NULL);
              ::org::orekit::files::ccsds::ndm::adm::AdmMetadata a2((jobject) NULL);
              jboolean result;

              if (!parseArgs(args, "kkk", ::org::orekit::files::ccsds::utils::lexical::ParseToken::initializeClass, ::org::orekit::files::ccsds::utils::ContextBinding::initializeClass, ::org::orekit::files::ccsds::ndm::adm::AdmMetadata::initializeClass, &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.process(a0, a1, a2));
                Py_RETURN_BOOL(result);
              }

              PyErr_SetArgsError((PyObject *) self, "process", args);
              return NULL;
            }

            static PyObject *t_AdmCommonMetadataKey_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              AdmCommonMetadataKey result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::AdmCommonMetadataKey::valueOf(a0));
                return t_AdmCommonMetadataKey::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_AdmCommonMetadataKey_values(PyTypeObject *type)
            {
              JArray< AdmCommonMetadataKey > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::adm::AdmCommonMetadataKey::values());
              return JArray<jobject>(result.this$).wrap(t_AdmCommonMetadataKey::wrap_jobject);
            }
            static PyObject *t_AdmCommonMetadataKey_get__parameters_(t_AdmCommonMetadataKey *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/L2Frame.h"
#include "org/orekit/bodies/CelestialBody.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *L2Frame::class$ = NULL;
      jmethodID *L2Frame::mids$ = NULL;
      bool L2Frame::live$ = false;

      jclass L2Frame::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/L2Frame");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8e55d90b2c31e510] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/CelestialBody;Lorg/orekit/bodies/CelestialBody;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      L2Frame::L2Frame(const ::org::orekit::bodies::CelestialBody & a0, const ::org::orekit::bodies::CelestialBody & a1) : ::org::orekit::frames::Frame(env->newObject(initializeClass, &mids$, mid_init$_8e55d90b2c31e510, a0.this$, a1.this$)) {}
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_L2Frame_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_L2Frame_instance_(PyTypeObject *type, PyObject *arg);
      static int t_L2Frame_init_(t_L2Frame *self, PyObject *args, PyObject *kwds);

      static PyMethodDef t_L2Frame__methods_[] = {
        DECLARE_METHOD(t_L2Frame, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_L2Frame, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(L2Frame)[] = {
        { Py_tp_methods, t_L2Frame__methods_ },
        { Py_tp_init, (void *) t_L2Frame_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(L2Frame)[] = {
        &PY_TYPE_DEF(::org::orekit::frames::Frame),
        NULL
      };

      DEFINE_TYPE(L2Frame, t_L2Frame, L2Frame);

      void t_L2Frame::install(PyObject *module)
      {
        installType(&PY_TYPE(L2Frame), &PY_TYPE_DEF(L2Frame), module, "L2Frame", 0);
      }

      void t_L2Frame::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(L2Frame), "class_", make_descriptor(L2Frame::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(L2Frame), "wrapfn_", make_descriptor(t_L2Frame::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(L2Frame), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_L2Frame_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, L2Frame::initializeClass, 1)))
          return NULL;
        return t_L2Frame::wrap_Object(L2Frame(((t_L2Frame *) arg)->object.this$));
      }
      static PyObject *t_L2Frame_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, L2Frame::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_L2Frame_init_(t_L2Frame *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::bodies::CelestialBody a0((jobject) NULL);
        ::org::orekit::bodies::CelestialBody a1((jobject) NULL);
        L2Frame object((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::bodies::CelestialBody::initializeClass, ::org::orekit::bodies::CelestialBody::initializeClass, &a0, &a1))
        {
          INT_CALL(object = L2Frame(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionData.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {

              ::java::lang::Class *RtcmCorrectionData::class$ = NULL;
              jmethodID *RtcmCorrectionData::mids$ = NULL;
              bool RtcmCorrectionData::live$ = false;

              jclass RtcmCorrectionData::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/rtcm/correction/RtcmCorrectionData");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_getSatelliteID_55546ef6a647f39b] = env->getMethodID(cls, "getSatelliteID", "()I");
                  mids$[mid_setSatelliteID_44ed599e93e8a30c] = env->getMethodID(cls, "setSatelliteID", "(I)V");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              RtcmCorrectionData::RtcmCorrectionData() : ::org::orekit::gnss::metric::messages::rtcm::RtcmData(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

              jint RtcmCorrectionData::getSatelliteID() const
              {
                return env->callIntMethod(this$, mids$[mid_getSatelliteID_55546ef6a647f39b]);
              }

              void RtcmCorrectionData::setSatelliteID(jint a0) const
              {
                env->callVoidMethod(this$, mids$[mid_setSatelliteID_44ed599e93e8a30c], a0);
              }
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace rtcm {
            namespace correction {
              static PyObject *t_RtcmCorrectionData_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_RtcmCorrectionData_instance_(PyTypeObject *type, PyObject *arg);
              static int t_RtcmCorrectionData_init_(t_RtcmCorrectionData *self, PyObject *args, PyObject *kwds);
              static PyObject *t_RtcmCorrectionData_getSatelliteID(t_RtcmCorrectionData *self);
              static PyObject *t_RtcmCorrectionData_setSatelliteID(t_RtcmCorrectionData *self, PyObject *arg);
              static PyObject *t_RtcmCorrectionData_get__satelliteID(t_RtcmCorrectionData *self, void *data);
              static int t_RtcmCorrectionData_set__satelliteID(t_RtcmCorrectionData *self, PyObject *arg, void *data);
              static PyGetSetDef t_RtcmCorrectionData__fields_[] = {
                DECLARE_GETSET_FIELD(t_RtcmCorrectionData, satelliteID),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_RtcmCorrectionData__methods_[] = {
                DECLARE_METHOD(t_RtcmCorrectionData, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCorrectionData, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_RtcmCorrectionData, getSatelliteID, METH_NOARGS),
                DECLARE_METHOD(t_RtcmCorrectionData, setSatelliteID, METH_O),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(RtcmCorrectionData)[] = {
                { Py_tp_methods, t_RtcmCorrectionData__methods_ },
                { Py_tp_init, (void *) t_RtcmCorrectionData_init_ },
                { Py_tp_getset, t_RtcmCorrectionData__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(RtcmCorrectionData)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::rtcm::RtcmData),
                NULL
              };

              DEFINE_TYPE(RtcmCorrectionData, t_RtcmCorrectionData, RtcmCorrectionData);

              void t_RtcmCorrectionData::install(PyObject *module)
              {
                installType(&PY_TYPE(RtcmCorrectionData), &PY_TYPE_DEF(RtcmCorrectionData), module, "RtcmCorrectionData", 0);
              }

              void t_RtcmCorrectionData::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionData), "class_", make_descriptor(RtcmCorrectionData::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionData), "wrapfn_", make_descriptor(t_RtcmCorrectionData::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(RtcmCorrectionData), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_RtcmCorrectionData_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, RtcmCorrectionData::initializeClass, 1)))
                  return NULL;
                return t_RtcmCorrectionData::wrap_Object(RtcmCorrectionData(((t_RtcmCorrectionData *) arg)->object.this$));
              }
              static PyObject *t_RtcmCorrectionData_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, RtcmCorrectionData::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_RtcmCorrectionData_init_(t_RtcmCorrectionData *self, PyObject *args, PyObject *kwds)
              {
                RtcmCorrectionData object((jobject) NULL);

                INT_CALL(object = RtcmCorrectionData());
                self->object = object;

                return 0;
              }

              static PyObject *t_RtcmCorrectionData_getSatelliteID(t_RtcmCorrectionData *self)
              {
                jint result;
                OBJ_CALL(result = self->object.getSatelliteID());
                return PyLong_FromLong((long) result);
              }

              static PyObject *t_RtcmCorrectionData_setSatelliteID(t_RtcmCorrectionData *self, PyObject *arg)
              {
                jint a0;

                if (!parseArg(arg, "I", &a0))
                {
                  OBJ_CALL(self->object.setSatelliteID(a0));
                  Py_RETURN_NONE;
                }

                PyErr_SetArgsError((PyObject *) self, "setSatelliteID", arg);
                return NULL;
              }

              static PyObject *t_RtcmCorrectionData_get__satelliteID(t_RtcmCorrectionData *self, void *data)
              {
                jint value;
                OBJ_CALL(value = self->object.getSatelliteID());
                return PyLong_FromLong((long) value);
              }
              static int t_RtcmCorrectionData_set__satelliteID(t_RtcmCorrectionData *self, PyObject *arg, void *data)
              {
                {
                  jint value;
                  if (!parseArg(arg, "I", &value))
                  {
                    INT_CALL(self->object.setSatelliteID(value));
                    return 0;
                  }
                }
                PyErr_SetArgsError((PyObject *) self, "satelliteID", arg);
                return -1;
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/MultivariateInterpolator.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/MultivariateFunction.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *MultivariateInterpolator::class$ = NULL;
        jmethodID *MultivariateInterpolator::mids$ = NULL;
        bool MultivariateInterpolator::live$ = false;

        jclass MultivariateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/MultivariateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_interpolate_535a45a20e20bbcf] = env->getMethodID(cls, "interpolate", "([[D[D)Lorg/hipparchus/analysis/MultivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::MultivariateFunction MultivariateInterpolator::interpolate(const JArray< JArray< jdouble > > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::MultivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_535a45a20e20bbcf], a0.this$, a1.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {
        static PyObject *t_MultivariateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateInterpolator_interpolate(t_MultivariateInterpolator *self, PyObject *args);

        static PyMethodDef t_MultivariateInterpolator__methods_[] = {
          DECLARE_METHOD(t_MultivariateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultivariateInterpolator)[] = {
          { Py_tp_methods, t_MultivariateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultivariateInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MultivariateInterpolator, t_MultivariateInterpolator, MultivariateInterpolator);

        void t_MultivariateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(MultivariateInterpolator), &PY_TYPE_DEF(MultivariateInterpolator), module, "MultivariateInterpolator", 0);
        }

        void t_MultivariateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateInterpolator), "class_", make_descriptor(MultivariateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateInterpolator), "wrapfn_", make_descriptor(t_MultivariateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultivariateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultivariateInterpolator::initializeClass, 1)))
            return NULL;
          return t_MultivariateInterpolator::wrap_Object(MultivariateInterpolator(((t_MultivariateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_MultivariateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultivariateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultivariateInterpolator_interpolate(t_MultivariateInterpolator *self, PyObject *args)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::analysis::MultivariateFunction result((jobject) NULL);

          if (!parseArgs(args, "[[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::t_MultivariateFunction::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "interpolate", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/PythonTimeScalarFunction.h"
#include "org/orekit/time/TimeScalarFunction.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *PythonTimeScalarFunction::class$ = NULL;
      jmethodID *PythonTimeScalarFunction::mids$ = NULL;
      bool PythonTimeScalarFunction::live$ = false;

      jclass PythonTimeScalarFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/PythonTimeScalarFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_value_fd347811007a6ba3] = env->getMethodID(cls, "value", "(Lorg/orekit/time/AbsoluteDate;)D");
          mids$[mid_value_140b8964300ddedf] = env->getMethodID(cls, "value", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonTimeScalarFunction::PythonTimeScalarFunction() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonTimeScalarFunction::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonTimeScalarFunction::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonTimeScalarFunction::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace time {
      static PyObject *t_PythonTimeScalarFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonTimeScalarFunction_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonTimeScalarFunction_init_(t_PythonTimeScalarFunction *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonTimeScalarFunction_finalize(t_PythonTimeScalarFunction *self);
      static PyObject *t_PythonTimeScalarFunction_pythonExtension(t_PythonTimeScalarFunction *self, PyObject *args);
      static void JNICALL t_PythonTimeScalarFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj);
      static jdouble JNICALL t_PythonTimeScalarFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonTimeScalarFunction_value2(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonTimeScalarFunction_get__self(t_PythonTimeScalarFunction *self, void *data);
      static PyGetSetDef t_PythonTimeScalarFunction__fields_[] = {
        DECLARE_GET_FIELD(t_PythonTimeScalarFunction, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonTimeScalarFunction__methods_[] = {
        DECLARE_METHOD(t_PythonTimeScalarFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeScalarFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonTimeScalarFunction, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonTimeScalarFunction, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonTimeScalarFunction)[] = {
        { Py_tp_methods, t_PythonTimeScalarFunction__methods_ },
        { Py_tp_init, (void *) t_PythonTimeScalarFunction_init_ },
        { Py_tp_getset, t_PythonTimeScalarFunction__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonTimeScalarFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonTimeScalarFunction, t_PythonTimeScalarFunction, PythonTimeScalarFunction);

      void t_PythonTimeScalarFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonTimeScalarFunction), &PY_TYPE_DEF(PythonTimeScalarFunction), module, "PythonTimeScalarFunction", 1);
      }

      void t_PythonTimeScalarFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScalarFunction), "class_", make_descriptor(PythonTimeScalarFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScalarFunction), "wrapfn_", make_descriptor(t_PythonTimeScalarFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTimeScalarFunction), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonTimeScalarFunction::initializeClass);
        JNINativeMethod methods[] = {
          { "pythonDecRef", "()V", (void *) t_PythonTimeScalarFunction_pythonDecRef0 },
          { "value", "(Lorg/orekit/time/AbsoluteDate;)D", (void *) t_PythonTimeScalarFunction_value1 },
          { "value", "(Lorg/orekit/time/FieldAbsoluteDate;)Lorg/hipparchus/CalculusFieldElement;", (void *) t_PythonTimeScalarFunction_value2 },
        };
        env->registerNatives(cls, methods, 3);
      }

      static PyObject *t_PythonTimeScalarFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonTimeScalarFunction::initializeClass, 1)))
          return NULL;
        return t_PythonTimeScalarFunction::wrap_Object(PythonTimeScalarFunction(((t_PythonTimeScalarFunction *) arg)->object.this$));
      }
      static PyObject *t_PythonTimeScalarFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonTimeScalarFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonTimeScalarFunction_init_(t_PythonTimeScalarFunction *self, PyObject *args, PyObject *kwds)
      {
        PythonTimeScalarFunction object((jobject) NULL);

        INT_CALL(object = PythonTimeScalarFunction());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonTimeScalarFunction_finalize(t_PythonTimeScalarFunction *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonTimeScalarFunction_pythonExtension(t_PythonTimeScalarFunction *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static void JNICALL t_PythonTimeScalarFunction_pythonDecRef0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScalarFunction::mids$[PythonTimeScalarFunction::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonTimeScalarFunction::mids$[PythonTimeScalarFunction::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static jdouble JNICALL t_PythonTimeScalarFunction_value1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScalarFunction::mids$[PythonTimeScalarFunction::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jdouble value;
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "D", &value))
        {
          throwTypeError("value", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jdouble) 0;
      }

      static jobject JNICALL t_PythonTimeScalarFunction_value2(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonTimeScalarFunction::mids$[PythonTimeScalarFunction::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_FieldAbsoluteDate::wrap_Object(::org::orekit::time::FieldAbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "value", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::CalculusFieldElement::initializeClass, &value))
        {
          throwTypeError("value", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static PyObject *t_PythonTimeScalarFunction_get__self(t_PythonTimeScalarFunction *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/AbstractList.h"
#include "java/util/Iterator.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "java/util/ListIterator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *AbstractList::class$ = NULL;
    jmethodID *AbstractList::mids$ = NULL;
    bool AbstractList::live$ = false;

    jclass AbstractList::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/AbstractList");

        mids$ = new jmethodID[max_mid];
        mids$[mid_add_460c5e2d9d51c6cc] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_add_0f5a71e161fd256b] = env->getMethodID(cls, "add", "(ILjava/lang/Object;)V");
        mids$[mid_addAll_2c414c0fcc4406f4] = env->getMethodID(cls, "addAll", "(ILjava/util/Collection;)Z");
        mids$[mid_clear_a1fa5dae97ea5ed2] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_equals_460c5e2d9d51c6cc] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_get_1a3b934d2c285d65] = env->getMethodID(cls, "get", "(I)Ljava/lang/Object;");
        mids$[mid_hashCode_55546ef6a647f39b] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_indexOf_b7898c5e94612125] = env->getMethodID(cls, "indexOf", "(Ljava/lang/Object;)I");
        mids$[mid_iterator_fc7780bc5d5b73b0] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_lastIndexOf_b7898c5e94612125] = env->getMethodID(cls, "lastIndexOf", "(Ljava/lang/Object;)I");
        mids$[mid_listIterator_d6d68fe3f5974930] = env->getMethodID(cls, "listIterator", "()Ljava/util/ListIterator;");
        mids$[mid_listIterator_008647f8b2408e7c] = env->getMethodID(cls, "listIterator", "(I)Ljava/util/ListIterator;");
        mids$[mid_remove_1a3b934d2c285d65] = env->getMethodID(cls, "remove", "(I)Ljava/lang/Object;");
        mids$[mid_set_c616ac8dc1767986] = env->getMethodID(cls, "set", "(ILjava/lang/Object;)Ljava/lang/Object;");
        mids$[mid_subList_39b43a702bd6611c] = env->getMethodID(cls, "subList", "(II)Ljava/util/List;");
        mids$[mid_removeRange_3313c75e3e16c428] = env->getMethodID(cls, "removeRange", "(II)V");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean AbstractList::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_460c5e2d9d51c6cc], a0.this$);
    }

    void AbstractList::add(jint a0, const ::java::lang::Object & a1) const
    {
      env->callVoidMethod(this$, mids$[mid_add_0f5a71e161fd256b], a0, a1.this$);
    }

    jboolean AbstractList::addAll(jint a0, const ::java::util::Collection & a1) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_2c414c0fcc4406f4], a0, a1.this$);
    }

    void AbstractList::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_a1fa5dae97ea5ed2]);
    }

    jboolean AbstractList::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_460c5e2d9d51c6cc], a0.this$);
    }

    ::java::lang::Object AbstractList::get$(jint a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_1a3b934d2c285d65], a0));
    }

    jint AbstractList::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_55546ef6a647f39b]);
    }

    jint AbstractList::indexOf(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_indexOf_b7898c5e94612125], a0.this$);
    }

    ::java::util::Iterator AbstractList::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_fc7780bc5d5b73b0]));
    }

    jint AbstractList::lastIndexOf(const ::java::lang::Object & a0) const
    {
      return env->callIntMethod(this$, mids$[mid_lastIndexOf_b7898c5e94612125], a0.this$);
    }

    ::java::util::ListIterator AbstractList::listIterator() const
    {
      return ::java::util::ListIterator(env->callObjectMethod(this$, mids$[mid_listIterator_d6d68fe3f5974930]));
    }

    ::java::util::ListIterator AbstractList::listIterator(jint a0) const
    {
      return ::java::util::ListIterator(env->callObjectMethod(this$, mids$[mid_listIterator_008647f8b2408e7c], a0));
    }

    ::java::lang::Object AbstractList::remove(jint a0) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_1a3b934d2c285d65], a0));
    }

    ::java::lang::Object AbstractList::set(jint a0, const ::java::lang::Object & a1) const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_set_c616ac8dc1767986], a0, a1.this$));
    }

    ::java::util::List AbstractList::subList(jint a0, jint a1) const
    {
      return ::java::util::List(env->callObjectMethod(this$, mids$[mid_subList_39b43a702bd6611c], a0, a1));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_AbstractList_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractList_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractList_of_(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_add(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_addAll(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_clear(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_equals(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_get(t_AbstractList *self, PyObject *arg);
    static PyObject *t_AbstractList_hashCode(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_indexOf(t_AbstractList *self, PyObject *arg);
    static PyObject *t_AbstractList_iterator(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_lastIndexOf(t_AbstractList *self, PyObject *arg);
    static PyObject *t_AbstractList_listIterator(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_remove(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_set(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_subList(t_AbstractList *self, PyObject *args);
    static PyObject *t_AbstractList_get__parameters_(t_AbstractList *self, void *data);
    static PyGetSetDef t_AbstractList__fields_[] = {
      DECLARE_GET_FIELD(t_AbstractList, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_AbstractList__methods_[] = {
      DECLARE_METHOD(t_AbstractList, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractList, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractList, of_, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, add, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, addAll, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, clear, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, equals, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, get, METH_O),
      DECLARE_METHOD(t_AbstractList, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, indexOf, METH_O),
      DECLARE_METHOD(t_AbstractList, iterator, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, lastIndexOf, METH_O),
      DECLARE_METHOD(t_AbstractList, listIterator, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, remove, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, set, METH_VARARGS),
      DECLARE_METHOD(t_AbstractList, subList, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(AbstractList)[] = {
      { Py_tp_methods, t_AbstractList__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_AbstractList__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_AbstractList *)) get_generic_iterator< t_AbstractList >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(AbstractList)[] = {
      &PY_TYPE_DEF(::java::util::AbstractCollection),
      NULL
    };

    DEFINE_TYPE(AbstractList, t_AbstractList, AbstractList);
    PyObject *t_AbstractList::wrap_Object(const AbstractList& object, PyTypeObject *p0)
    {
      PyObject *obj = t_AbstractList::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractList *self = (t_AbstractList *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_AbstractList::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_AbstractList::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractList *self = (t_AbstractList *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_AbstractList::install(PyObject *module)
    {
      installType(&PY_TYPE(AbstractList), &PY_TYPE_DEF(AbstractList), module, "AbstractList", 0);
    }

    void t_AbstractList::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractList), "class_", make_descriptor(AbstractList::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractList), "wrapfn_", make_descriptor(t_AbstractList::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractList), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_AbstractList_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, AbstractList::initializeClass, 1)))
        return NULL;
      return t_AbstractList::wrap_Object(AbstractList(((t_AbstractList *) arg)->object.this$));
    }
    static PyObject *t_AbstractList_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, AbstractList::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_AbstractList_of_(t_AbstractList *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_AbstractList_add(t_AbstractList *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "O", self->parameters[0], &a0))
          {
            OBJ_CALL(result = self->object.add(a0));
            Py_RETURN_BOOL(result);
          }
        }
        break;
       case 2:
        {
          jint a0;
          ::java::lang::Object a1((jobject) NULL);

          if (!parseArgs(args, "IO", self->parameters[0], &a0, &a1))
          {
            OBJ_CALL(self->object.add(a0, a1));
            Py_RETURN_NONE;
          }
        }
      }

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_AbstractList_addAll(t_AbstractList *self, PyObject *args)
    {
      jint a0;
      ::java::util::Collection a1((jobject) NULL);
      PyTypeObject **p1;
      jboolean result;

      if (!parseArgs(args, "IK", ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.addAll(a0, a1));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "addAll", args, 2);
    }

    static PyObject *t_AbstractList_clear(t_AbstractList *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_AbstractList_equals(t_AbstractList *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_AbstractList_get(t_AbstractList *self, PyObject *arg)
    {
      jint a0;
      ::java::lang::Object result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.get$(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "get", arg);
      return NULL;
    }

    static PyObject *t_AbstractList_hashCode(t_AbstractList *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_AbstractList_indexOf(t_AbstractList *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.indexOf(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "indexOf", arg);
      return NULL;
    }

    static PyObject *t_AbstractList_iterator(t_AbstractList *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_AbstractList_lastIndexOf(t_AbstractList *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jint result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.lastIndexOf(a0));
        return PyLong_FromLong((long) result);
      }

      PyErr_SetArgsError((PyObject *) self, "lastIndexOf", arg);
      return NULL;
    }

    static PyObject *t_AbstractList_listIterator(t_AbstractList *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::util::ListIterator result((jobject) NULL);
          OBJ_CALL(result = self->object.listIterator());
          return ::java::util::t_ListIterator::wrap_Object(result, self->parameters[0]);
        }
        break;
       case 1:
        {
          jint a0;
          ::java::util::ListIterator result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.listIterator(a0));
            return ::java::util::t_ListIterator::wrap_Object(result, self->parameters[0]);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "listIterator", args);
      return NULL;
    }

    static PyObject *t_AbstractList_remove(t_AbstractList *self, PyObject *args)
    {
      jint a0;
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "I", &a0))
      {
        OBJ_CALL(result = self->object.remove(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      return callSuper(PY_TYPE(AbstractList), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_AbstractList_set(t_AbstractList *self, PyObject *args)
    {
      jint a0;
      ::java::lang::Object a1((jobject) NULL);
      ::java::lang::Object result((jobject) NULL);

      if (!parseArgs(args, "IO", self->parameters[0], &a0, &a1))
      {
        OBJ_CALL(result = self->object.set(a0, a1));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "set", args);
      return NULL;
    }

    static PyObject *t_AbstractList_subList(t_AbstractList *self, PyObject *args)
    {
      jint a0;
      jint a1;
      ::java::util::List result((jobject) NULL);

      if (!parseArgs(args, "II", &a0, &a1))
      {
        OBJ_CALL(result = self->object.subList(a0, a1));
        return ::java::util::t_List::wrap_Object(result, self->parameters[0]);
      }

      PyErr_SetArgsError((PyObject *) self, "subList", args);
      return NULL;
    }
    static PyObject *t_AbstractList_get__parameters_(t_AbstractList *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/attitudes/Attitude.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *AttitudeProvider::class$ = NULL;
      jmethodID *AttitudeProvider::mids$ = NULL;
      bool AttitudeProvider::live$ = false;

      jclass AttitudeProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/AttitudeProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getAttitude_896ee4d68989b1e8] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitude_21845cfb0034fe1c] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitudeRotation_6acae55a2f5d3ab4] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getAttitudeRotation_1bc07ea175743b30] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::attitudes::FieldAttitude AttitudeProvider::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_896ee4d68989b1e8], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::Attitude AttitudeProvider::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_21845cfb0034fe1c], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation AttitudeProvider::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_6acae55a2f5d3ab4], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation AttitudeProvider::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_1bc07ea175743b30], a0.this$, a1.this$, a2.this$));
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace attitudes {
      static PyObject *t_AttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AttitudeProvider_getAttitude(t_AttitudeProvider *self, PyObject *args);
      static PyObject *t_AttitudeProvider_getAttitudeRotation(t_AttitudeProvider *self, PyObject *args);

      static PyMethodDef t_AttitudeProvider__methods_[] = {
        DECLARE_METHOD(t_AttitudeProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AttitudeProvider, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_AttitudeProvider, getAttitudeRotation, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AttitudeProvider)[] = {
        { Py_tp_methods, t_AttitudeProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AttitudeProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AttitudeProvider, t_AttitudeProvider, AttitudeProvider);

      void t_AttitudeProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(AttitudeProvider), &PY_TYPE_DEF(AttitudeProvider), module, "AttitudeProvider", 0);
      }

      void t_AttitudeProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeProvider), "class_", make_descriptor(AttitudeProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeProvider), "wrapfn_", make_descriptor(t_AttitudeProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AttitudeProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AttitudeProvider::initializeClass, 1)))
          return NULL;
        return t_AttitudeProvider::wrap_Object(AttitudeProvider(((t_AttitudeProvider *) arg)->object.this$));
      }
      static PyObject *t_AttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AttitudeProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_AttitudeProvider_getAttitude(t_AttitudeProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::Attitude result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_Attitude::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::orekit::attitudes::FieldAttitude result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitude(a0, a1, a2));
              return ::org::orekit::attitudes::t_FieldAttitude::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_AttitudeProvider_getAttitudeRotation(t_AttitudeProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            ::org::orekit::utils::FieldPVCoordinatesProvider a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::FieldRotation result((jobject) NULL);

            if (!parseArgs(args, "KKk", ::org::orekit::utils::FieldPVCoordinatesProvider::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &p0, ::org::orekit::utils::t_FieldPVCoordinatesProvider::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldRotation::wrap_Object(result);
            }
          }
          {
            ::org::orekit::utils::PVCoordinatesProvider a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
            ::org::orekit::frames::Frame a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::utils::PVCoordinatesProvider::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.getAttitudeRotation(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Rotation::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitudeRotation", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemWriter.h"
#include "org/orekit/files/ccsds/ndm/adm/AdmHeader.h"
#include "org/orekit/utils/IERSConventions.h"
#include "org/orekit/data/DataContext.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/AemSegment.h"
#include "org/orekit/files/ccsds/ndm/adm/aem/Aem.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {

              ::java::lang::Class *AemWriter::class$ = NULL;
              jmethodID *AemWriter::mids$ = NULL;
              bool AemWriter::live$ = false;
              jdouble AemWriter::CCSDS_AEM_VERS = (jdouble) 0;
              jint AemWriter::KVN_PADDING_WIDTH = (jint) 0;

              jclass AemWriter::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/adm/aem/AemWriter");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_751257c373115a80] = env->getMethodID(cls, "<init>", "(Lorg/orekit/utils/IERSConventions;Lorg/orekit/data/DataContext;Lorg/orekit/time/AbsoluteDate;)V");
                  mids$[mid_writeSegmentContent_0f6e49d0ad394f83] = env->getMethodID(cls, "writeSegmentContent", "(Lorg/orekit/files/ccsds/utils/generation/Generator;DLorg/orekit/files/ccsds/ndm/adm/aem/AemSegment;)V");

                  class$ = new ::java::lang::Class(cls);
                  cls = (jclass) class$->this$;

                  CCSDS_AEM_VERS = env->getStaticDoubleField(cls, "CCSDS_AEM_VERS");
                  KVN_PADDING_WIDTH = env->getStaticIntField(cls, "KVN_PADDING_WIDTH");
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AemWriter::AemWriter(const ::org::orekit::utils::IERSConventions & a0, const ::org::orekit::data::DataContext & a1, const ::org::orekit::time::AbsoluteDate & a2) : ::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter(env->newObject(initializeClass, &mids$, mid_init$_751257c373115a80, a0.this$, a1.this$, a2.this$)) {}
            }
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace adm {
            namespace aem {
              static PyObject *t_AemWriter_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemWriter_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_AemWriter_of_(t_AemWriter *self, PyObject *args);
              static int t_AemWriter_init_(t_AemWriter *self, PyObject *args, PyObject *kwds);
              static PyObject *t_AemWriter_get__parameters_(t_AemWriter *self, void *data);
              static PyGetSetDef t_AemWriter__fields_[] = {
                DECLARE_GET_FIELD(t_AemWriter, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_AemWriter__methods_[] = {
                DECLARE_METHOD(t_AemWriter, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemWriter, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_AemWriter, of_, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(AemWriter)[] = {
                { Py_tp_methods, t_AemWriter__methods_ },
                { Py_tp_init, (void *) t_AemWriter_init_ },
                { Py_tp_getset, t_AemWriter__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(AemWriter)[] = {
                &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::generation::AbstractMessageWriter),
                NULL
              };

              DEFINE_TYPE(AemWriter, t_AemWriter, AemWriter);
              PyObject *t_AemWriter::wrap_Object(const AemWriter& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_AemWriter::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemWriter *self = (t_AemWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              PyObject *t_AemWriter::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1, PyTypeObject *p2)
              {
                PyObject *obj = t_AemWriter::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_AemWriter *self = (t_AemWriter *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                  self->parameters[2] = p2;
                }
                return obj;
              }

              void t_AemWriter::install(PyObject *module)
              {
                installType(&PY_TYPE(AemWriter), &PY_TYPE_DEF(AemWriter), module, "AemWriter", 0);
              }

              void t_AemWriter::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemWriter), "class_", make_descriptor(AemWriter::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemWriter), "wrapfn_", make_descriptor(t_AemWriter::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemWriter), "boxfn_", make_descriptor(boxObject));
                env->getClass(AemWriter::initializeClass);
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemWriter), "CCSDS_AEM_VERS", make_descriptor(AemWriter::CCSDS_AEM_VERS));
                PyObject_SetAttrString((PyObject *) PY_TYPE(AemWriter), "KVN_PADDING_WIDTH", make_descriptor(AemWriter::KVN_PADDING_WIDTH));
              }

              static PyObject *t_AemWriter_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, AemWriter::initializeClass, 1)))
                  return NULL;
                return t_AemWriter::wrap_Object(AemWriter(((t_AemWriter *) arg)->object.this$));
              }
              static PyObject *t_AemWriter_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, AemWriter::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_AemWriter_of_(t_AemWriter *self, PyObject *args)
              {
                if (!parseArg(args, "T", 3, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_AemWriter_init_(t_AemWriter *self, PyObject *args, PyObject *kwds)
              {
                ::org::orekit::utils::IERSConventions a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::data::DataContext a1((jobject) NULL);
                ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
                AemWriter object((jobject) NULL);

                if (!parseArgs(args, "Kkk", ::org::orekit::utils::IERSConventions::initializeClass, ::org::orekit::data::DataContext::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::utils::t_IERSConventions::parameters_, &a1, &a2))
                {
                  INT_CALL(object = AemWriter(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::files::ccsds::ndm::adm::PY_TYPE(AdmHeader);
                  self->parameters[1] = ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(AemSegment);
                  self->parameters[2] = ::org::orekit::files::ccsds::ndm::adm::aem::PY_TYPE(Aem);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }
              static PyObject *t_AemWriter_get__parameters_(t_AemWriter *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/AbstractDetector.h"
#include "org/orekit/propagation/events/AbstractDetector.h"
#include "org/orekit/propagation/events/handlers/EventHandler.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/events/AdaptableInterval.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *AbstractDetector::class$ = NULL;
        jmethodID *AbstractDetector::mids$ = NULL;
        bool AbstractDetector::live$ = false;
        jdouble AbstractDetector::DEFAULT_MAXCHECK = (jdouble) 0;
        jint AbstractDetector::DEFAULT_MAX_ITER = (jint) 0;
        jdouble AbstractDetector::DEFAULT_THRESHOLD = (jdouble) 0;

        jclass AbstractDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/AbstractDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_a17ea857ce74d258] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/SpacecraftState;)D");
            mids$[mid_getHandler_0c96c441e92b6ffa] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/EventHandler;");
            mids$[mid_getMaxCheckInterval_014eea600d2cdae8] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/AdaptableInterval;");
            mids$[mid_getMaxIterationCount_55546ef6a647f39b] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_b74f83833fdad017] = env->getMethodID(cls, "getThreshold", "()D");
            mids$[mid_init_2d7f9a496c7e9781] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/time/AbsoluteDate;)V");
            mids$[mid_isForward_9ab94ac1dc23b105] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_withHandler_01f46477a2575207] = env->getMethodID(cls, "withHandler", "(Lorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AbstractDetector;");
            mids$[mid_withMaxCheck_bcdfde6555a3d78d] = env->getMethodID(cls, "withMaxCheck", "(D)Lorg/orekit/propagation/events/AbstractDetector;");
            mids$[mid_withMaxCheck_aac8c3658de25d27] = env->getMethodID(cls, "withMaxCheck", "(Lorg/orekit/propagation/events/AdaptableInterval;)Lorg/orekit/propagation/events/AbstractDetector;");
            mids$[mid_withMaxIter_2f9b7a5781ba55d5] = env->getMethodID(cls, "withMaxIter", "(I)Lorg/orekit/propagation/events/AbstractDetector;");
            mids$[mid_withThreshold_bcdfde6555a3d78d] = env->getMethodID(cls, "withThreshold", "(D)Lorg/orekit/propagation/events/AbstractDetector;");
            mids$[mid_create_193e21d57a66206a] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/AdaptableInterval;DILorg/orekit/propagation/events/handlers/EventHandler;)Lorg/orekit/propagation/events/AbstractDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_MAXCHECK = env->getStaticDoubleField(cls, "DEFAULT_MAXCHECK");
            DEFAULT_MAX_ITER = env->getStaticIntField(cls, "DEFAULT_MAX_ITER");
            DEFAULT_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_THRESHOLD");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble AbstractDetector::g(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_g_a17ea857ce74d258], a0.this$);
        }

        ::org::orekit::propagation::events::handlers::EventHandler AbstractDetector::getHandler() const
        {
          return ::org::orekit::propagation::events::handlers::EventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_0c96c441e92b6ffa]));
        }

        ::org::orekit::propagation::events::AdaptableInterval AbstractDetector::getMaxCheckInterval() const
        {
          return ::org::orekit::propagation::events::AdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_014eea600d2cdae8]));
        }

        jint AbstractDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_55546ef6a647f39b]);
        }

        jdouble AbstractDetector::getThreshold() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getThreshold_b74f83833fdad017]);
        }

        void AbstractDetector::init(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::time::AbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_2d7f9a496c7e9781], a0.this$, a1.this$);
        }

        jboolean AbstractDetector::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_9ab94ac1dc23b105]);
        }

        AbstractDetector AbstractDetector::withHandler(const ::org::orekit::propagation::events::handlers::EventHandler & a0) const
        {
          return AbstractDetector(env->callObjectMethod(this$, mids$[mid_withHandler_01f46477a2575207], a0.this$));
        }

        AbstractDetector AbstractDetector::withMaxCheck(jdouble a0) const
        {
          return AbstractDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_bcdfde6555a3d78d], a0));
        }

        AbstractDetector AbstractDetector::withMaxCheck(const ::org::orekit::propagation::events::AdaptableInterval & a0) const
        {
          return AbstractDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_aac8c3658de25d27], a0.this$));
        }

        AbstractDetector AbstractDetector::withMaxIter(jint a0) const
        {
          return AbstractDetector(env->callObjectMethod(this$, mids$[mid_withMaxIter_2f9b7a5781ba55d5], a0));
        }

        AbstractDetector AbstractDetector::withThreshold(jdouble a0) const
        {
          return AbstractDetector(env->callObjectMethod(this$, mids$[mid_withThreshold_bcdfde6555a3d78d], a0));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        static PyObject *t_AbstractDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractDetector_of_(t_AbstractDetector *self, PyObject *args);
        static PyObject *t_AbstractDetector_g(t_AbstractDetector *self, PyObject *arg);
        static PyObject *t_AbstractDetector_getHandler(t_AbstractDetector *self);
        static PyObject *t_AbstractDetector_getMaxCheckInterval(t_AbstractDetector *self);
        static PyObject *t_AbstractDetector_getMaxIterationCount(t_AbstractDetector *self);
        static PyObject *t_AbstractDetector_getThreshold(t_AbstractDetector *self);
        static PyObject *t_AbstractDetector_init(t_AbstractDetector *self, PyObject *args);
        static PyObject *t_AbstractDetector_isForward(t_AbstractDetector *self);
        static PyObject *t_AbstractDetector_withHandler(t_AbstractDetector *self, PyObject *arg);
        static PyObject *t_AbstractDetector_withMaxCheck(t_AbstractDetector *self, PyObject *args);
        static PyObject *t_AbstractDetector_withMaxIter(t_AbstractDetector *self, PyObject *arg);
        static PyObject *t_AbstractDetector_withThreshold(t_AbstractDetector *self, PyObject *arg);
        static PyObject *t_AbstractDetector_get__forward(t_AbstractDetector *self, void *data);
        static PyObject *t_AbstractDetector_get__handler(t_AbstractDetector *self, void *data);
        static PyObject *t_AbstractDetector_get__maxCheckInterval(t_AbstractDetector *self, void *data);
        static PyObject *t_AbstractDetector_get__maxIterationCount(t_AbstractDetector *self, void *data);
        static PyObject *t_AbstractDetector_get__threshold(t_AbstractDetector *self, void *data);
        static PyObject *t_AbstractDetector_get__parameters_(t_AbstractDetector *self, void *data);
        static PyGetSetDef t_AbstractDetector__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractDetector, forward),
          DECLARE_GET_FIELD(t_AbstractDetector, handler),
          DECLARE_GET_FIELD(t_AbstractDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_AbstractDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_AbstractDetector, threshold),
          DECLARE_GET_FIELD(t_AbstractDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractDetector__methods_[] = {
          DECLARE_METHOD(t_AbstractDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_AbstractDetector, g, METH_O),
          DECLARE_METHOD(t_AbstractDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_AbstractDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_AbstractDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_AbstractDetector, getThreshold, METH_NOARGS),
          DECLARE_METHOD(t_AbstractDetector, init, METH_VARARGS),
          DECLARE_METHOD(t_AbstractDetector, isForward, METH_NOARGS),
          DECLARE_METHOD(t_AbstractDetector, withHandler, METH_O),
          DECLARE_METHOD(t_AbstractDetector, withMaxCheck, METH_VARARGS),
          DECLARE_METHOD(t_AbstractDetector, withMaxIter, METH_O),
          DECLARE_METHOD(t_AbstractDetector, withThreshold, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractDetector)[] = {
          { Py_tp_methods, t_AbstractDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractDetector, t_AbstractDetector, AbstractDetector);
        PyObject *t_AbstractDetector::wrap_Object(const AbstractDetector& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractDetector *self = (t_AbstractDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractDetector::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractDetector *self = (t_AbstractDetector *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractDetector), &PY_TYPE_DEF(AbstractDetector), module, "AbstractDetector", 0);
        }

        void t_AbstractDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDetector), "class_", make_descriptor(AbstractDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDetector), "wrapfn_", make_descriptor(t_AbstractDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(AbstractDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDetector), "DEFAULT_MAXCHECK", make_descriptor(AbstractDetector::DEFAULT_MAXCHECK));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDetector), "DEFAULT_MAX_ITER", make_descriptor(AbstractDetector::DEFAULT_MAX_ITER));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractDetector), "DEFAULT_THRESHOLD", make_descriptor(AbstractDetector::DEFAULT_THRESHOLD));
        }

        static PyObject *t_AbstractDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractDetector::initializeClass, 1)))
            return NULL;
          return t_AbstractDetector::wrap_Object(AbstractDetector(((t_AbstractDetector *) arg)->object.this$));
        }
        static PyObject *t_AbstractDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractDetector_of_(t_AbstractDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AbstractDetector_g(t_AbstractDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.g(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_AbstractDetector_getHandler(t_AbstractDetector *self)
        {
          ::org::orekit::propagation::events::handlers::EventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(result);
        }

        static PyObject *t_AbstractDetector_getMaxCheckInterval(t_AbstractDetector *self)
        {
          ::org::orekit::propagation::events::AdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(result);
        }

        static PyObject *t_AbstractDetector_getMaxIterationCount(t_AbstractDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_AbstractDetector_getThreshold(t_AbstractDetector *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getThreshold());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_AbstractDetector_init(t_AbstractDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

          if (!parseArgs(args, "kk", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_AbstractDetector_isForward(t_AbstractDetector *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_AbstractDetector_withHandler(t_AbstractDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::events::handlers::EventHandler a0((jobject) NULL);
          AbstractDetector result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::events::handlers::EventHandler::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.withHandler(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withHandler", arg);
          return NULL;
        }

        static PyObject *t_AbstractDetector_withMaxCheck(t_AbstractDetector *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              AbstractDetector result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractDetector::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::events::AdaptableInterval a0((jobject) NULL);
              AbstractDetector result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::events::AdaptableInterval::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxCheck", args);
          return NULL;
        }

        static PyObject *t_AbstractDetector_withMaxIter(t_AbstractDetector *self, PyObject *arg)
        {
          jint a0;
          AbstractDetector result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.withMaxIter(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxIter", arg);
          return NULL;
        }

        static PyObject *t_AbstractDetector_withThreshold(t_AbstractDetector *self, PyObject *arg)
        {
          jdouble a0;
          AbstractDetector result((jobject) NULL);

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.withThreshold(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_AbstractDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withThreshold", arg);
          return NULL;
        }
        static PyObject *t_AbstractDetector_get__parameters_(t_AbstractDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_AbstractDetector_get__forward(t_AbstractDetector *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_AbstractDetector_get__handler(t_AbstractDetector *self, void *data)
        {
          ::org::orekit::propagation::events::handlers::EventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_EventHandler::wrap_Object(value);
        }

        static PyObject *t_AbstractDetector_get__maxCheckInterval(t_AbstractDetector *self, void *data)
        {
          ::org::orekit::propagation::events::AdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_AdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_AbstractDetector_get__maxIterationCount(t_AbstractDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_AbstractDetector_get__threshold(t_AbstractDetector *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getThreshold());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/FieldAbstractDetector.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/events/FieldAdaptableInterval.h"
#include "org/orekit/propagation/events/FieldAbstractDetector.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {

        ::java::lang::Class *FieldAbstractDetector::class$ = NULL;
        jmethodID *FieldAbstractDetector::mids$ = NULL;
        bool FieldAbstractDetector::live$ = false;
        jdouble FieldAbstractDetector::DEFAULT_MAXCHECK = (jdouble) 0;
        jint FieldAbstractDetector::DEFAULT_MAX_ITER = (jint) 0;
        jdouble FieldAbstractDetector::DEFAULT_THRESHOLD = (jdouble) 0;

        jclass FieldAbstractDetector::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/events/FieldAbstractDetector");

            mids$ = new jmethodID[max_mid];
            mids$[mid_g_2203631097e94c79] = env->getMethodID(cls, "g", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getHandler_3449c57ae1fbceff] = env->getMethodID(cls, "getHandler", "()Lorg/orekit/propagation/events/handlers/FieldEventHandler;");
            mids$[mid_getMaxCheckInterval_d0b60c59a7966d59] = env->getMethodID(cls, "getMaxCheckInterval", "()Lorg/orekit/propagation/events/FieldAdaptableInterval;");
            mids$[mid_getMaxIterationCount_55546ef6a647f39b] = env->getMethodID(cls, "getMaxIterationCount", "()I");
            mids$[mid_getThreshold_81520b552cb3fa26] = env->getMethodID(cls, "getThreshold", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_init_96d019f392abf918] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_isForward_9ab94ac1dc23b105] = env->getMethodID(cls, "isForward", "()Z");
            mids$[mid_withHandler_4e533893f8ea6535] = env->getMethodID(cls, "withHandler", "(Lorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
            mids$[mid_withMaxCheck_aa7da5fea1950df8] = env->getMethodID(cls, "withMaxCheck", "(D)Lorg/orekit/propagation/events/FieldAbstractDetector;");
            mids$[mid_withMaxCheck_72176bdcb26ede5b] = env->getMethodID(cls, "withMaxCheck", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
            mids$[mid_withMaxIter_62ae6d133f61525f] = env->getMethodID(cls, "withMaxIter", "(I)Lorg/orekit/propagation/events/FieldAbstractDetector;");
            mids$[mid_withThreshold_cb84c1cb9922f458] = env->getMethodID(cls, "withThreshold", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/propagation/events/FieldAbstractDetector;");
            mids$[mid_create_106f52de5ffac709] = env->getMethodID(cls, "create", "(Lorg/orekit/propagation/events/FieldAdaptableInterval;Lorg/hipparchus/CalculusFieldElement;ILorg/orekit/propagation/events/handlers/FieldEventHandler;)Lorg/orekit/propagation/events/FieldAbstractDetector;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_MAXCHECK = env->getStaticDoubleField(cls, "DEFAULT_MAXCHECK");
            DEFAULT_MAX_ITER = env->getStaticIntField(cls, "DEFAULT_MAX_ITER");
            DEFAULT_THRESHOLD = env->getStaticDoubleField(cls, "DEFAULT_THRESHOLD");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::CalculusFieldElement FieldAbstractDetector::g(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_g_2203631097e94c79], a0.this$));
        }

        ::org::orekit::propagation::events::handlers::FieldEventHandler FieldAbstractDetector::getHandler() const
        {
          return ::org::orekit::propagation::events::handlers::FieldEventHandler(env->callObjectMethod(this$, mids$[mid_getHandler_3449c57ae1fbceff]));
        }

        ::org::orekit::propagation::events::FieldAdaptableInterval FieldAbstractDetector::getMaxCheckInterval() const
        {
          return ::org::orekit::propagation::events::FieldAdaptableInterval(env->callObjectMethod(this$, mids$[mid_getMaxCheckInterval_d0b60c59a7966d59]));
        }

        jint FieldAbstractDetector::getMaxIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaxIterationCount_55546ef6a647f39b]);
        }

        ::org::hipparchus::CalculusFieldElement FieldAbstractDetector::getThreshold() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getThreshold_81520b552cb3fa26]));
        }

        void FieldAbstractDetector::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_96d019f392abf918], a0.this$, a1.this$);
        }

        jboolean FieldAbstractDetector::isForward() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isForward_9ab94ac1dc23b105]);
        }

        FieldAbstractDetector FieldAbstractDetector::withHandler(const ::org::orekit::propagation::events::handlers::FieldEventHandler & a0) const
        {
          return FieldAbstractDetector(env->callObjectMethod(this$, mids$[mid_withHandler_4e533893f8ea6535], a0.this$));
        }

        FieldAbstractDetector FieldAbstractDetector::withMaxCheck(jdouble a0) const
        {
          return FieldAbstractDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_aa7da5fea1950df8], a0));
        }

        FieldAbstractDetector FieldAbstractDetector::withMaxCheck(const ::org::orekit::propagation::events::FieldAdaptableInterval & a0) const
        {
          return FieldAbstractDetector(env->callObjectMethod(this$, mids$[mid_withMaxCheck_72176bdcb26ede5b], a0.this$));
        }

        FieldAbstractDetector FieldAbstractDetector::withMaxIter(jint a0) const
        {
          return FieldAbstractDetector(env->callObjectMethod(this$, mids$[mid_withMaxIter_62ae6d133f61525f], a0));
        }

        FieldAbstractDetector FieldAbstractDetector::withThreshold(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldAbstractDetector(env->callObjectMethod(this$, mids$[mid_withThreshold_cb84c1cb9922f458], a0.this$));
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        static PyObject *t_FieldAbstractDetector_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractDetector_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldAbstractDetector_of_(t_FieldAbstractDetector *self, PyObject *args);
        static PyObject *t_FieldAbstractDetector_g(t_FieldAbstractDetector *self, PyObject *arg);
        static PyObject *t_FieldAbstractDetector_getHandler(t_FieldAbstractDetector *self);
        static PyObject *t_FieldAbstractDetector_getMaxCheckInterval(t_FieldAbstractDetector *self);
        static PyObject *t_FieldAbstractDetector_getMaxIterationCount(t_FieldAbstractDetector *self);
        static PyObject *t_FieldAbstractDetector_getThreshold(t_FieldAbstractDetector *self);
        static PyObject *t_FieldAbstractDetector_init(t_FieldAbstractDetector *self, PyObject *args);
        static PyObject *t_FieldAbstractDetector_isForward(t_FieldAbstractDetector *self);
        static PyObject *t_FieldAbstractDetector_withHandler(t_FieldAbstractDetector *self, PyObject *arg);
        static PyObject *t_FieldAbstractDetector_withMaxCheck(t_FieldAbstractDetector *self, PyObject *args);
        static PyObject *t_FieldAbstractDetector_withMaxIter(t_FieldAbstractDetector *self, PyObject *arg);
        static PyObject *t_FieldAbstractDetector_withThreshold(t_FieldAbstractDetector *self, PyObject *arg);
        static PyObject *t_FieldAbstractDetector_get__forward(t_FieldAbstractDetector *self, void *data);
        static PyObject *t_FieldAbstractDetector_get__handler(t_FieldAbstractDetector *self, void *data);
        static PyObject *t_FieldAbstractDetector_get__maxCheckInterval(t_FieldAbstractDetector *self, void *data);
        static PyObject *t_FieldAbstractDetector_get__maxIterationCount(t_FieldAbstractDetector *self, void *data);
        static PyObject *t_FieldAbstractDetector_get__threshold(t_FieldAbstractDetector *self, void *data);
        static PyObject *t_FieldAbstractDetector_get__parameters_(t_FieldAbstractDetector *self, void *data);
        static PyGetSetDef t_FieldAbstractDetector__fields_[] = {
          DECLARE_GET_FIELD(t_FieldAbstractDetector, forward),
          DECLARE_GET_FIELD(t_FieldAbstractDetector, handler),
          DECLARE_GET_FIELD(t_FieldAbstractDetector, maxCheckInterval),
          DECLARE_GET_FIELD(t_FieldAbstractDetector, maxIterationCount),
          DECLARE_GET_FIELD(t_FieldAbstractDetector, threshold),
          DECLARE_GET_FIELD(t_FieldAbstractDetector, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldAbstractDetector__methods_[] = {
          DECLARE_METHOD(t_FieldAbstractDetector, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractDetector, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldAbstractDetector, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, g, METH_O),
          DECLARE_METHOD(t_FieldAbstractDetector, getHandler, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, getMaxCheckInterval, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, getMaxIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, getThreshold, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, isForward, METH_NOARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, withHandler, METH_O),
          DECLARE_METHOD(t_FieldAbstractDetector, withMaxCheck, METH_VARARGS),
          DECLARE_METHOD(t_FieldAbstractDetector, withMaxIter, METH_O),
          DECLARE_METHOD(t_FieldAbstractDetector, withThreshold, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldAbstractDetector)[] = {
          { Py_tp_methods, t_FieldAbstractDetector__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldAbstractDetector__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldAbstractDetector)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldAbstractDetector, t_FieldAbstractDetector, FieldAbstractDetector);
        PyObject *t_FieldAbstractDetector::wrap_Object(const FieldAbstractDetector& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldAbstractDetector::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractDetector *self = (t_FieldAbstractDetector *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        PyObject *t_FieldAbstractDetector::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
        {
          PyObject *obj = t_FieldAbstractDetector::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldAbstractDetector *self = (t_FieldAbstractDetector *) obj;
            self->parameters[0] = p0;
            self->parameters[1] = p1;
          }
          return obj;
        }

        void t_FieldAbstractDetector::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldAbstractDetector), &PY_TYPE_DEF(FieldAbstractDetector), module, "FieldAbstractDetector", 0);
        }

        void t_FieldAbstractDetector::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractDetector), "class_", make_descriptor(FieldAbstractDetector::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractDetector), "wrapfn_", make_descriptor(t_FieldAbstractDetector::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractDetector), "boxfn_", make_descriptor(boxObject));
          env->getClass(FieldAbstractDetector::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractDetector), "DEFAULT_MAXCHECK", make_descriptor(FieldAbstractDetector::DEFAULT_MAXCHECK));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractDetector), "DEFAULT_MAX_ITER", make_descriptor(FieldAbstractDetector::DEFAULT_MAX_ITER));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAbstractDetector), "DEFAULT_THRESHOLD", make_descriptor(FieldAbstractDetector::DEFAULT_THRESHOLD));
        }

        static PyObject *t_FieldAbstractDetector_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldAbstractDetector::initializeClass, 1)))
            return NULL;
          return t_FieldAbstractDetector::wrap_Object(FieldAbstractDetector(((t_FieldAbstractDetector *) arg)->object.this$));
        }
        static PyObject *t_FieldAbstractDetector_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldAbstractDetector::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldAbstractDetector_of_(t_FieldAbstractDetector *self, PyObject *args)
        {
          if (!parseArg(args, "T", 2, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldAbstractDetector_g(t_FieldAbstractDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(result = self->object.g(a0));
            return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "g", arg);
          return NULL;
        }

        static PyObject *t_FieldAbstractDetector_getHandler(t_FieldAbstractDetector *self)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_FieldAbstractDetector_getMaxCheckInterval(t_FieldAbstractDetector *self)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval result((jobject) NULL);
          OBJ_CALL(result = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(result, self->parameters[1]);
        }

        static PyObject *t_FieldAbstractDetector_getMaxIterationCount(t_FieldAbstractDetector *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldAbstractDetector_getThreshold(t_FieldAbstractDetector *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getThreshold());
          return self->parameters[1] != NULL ? wrapType(self->parameters[1], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldAbstractDetector_init(t_FieldAbstractDetector *self, PyObject *args)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
          PyTypeObject **p1;

          if (!parseArgs(args, "KK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }

        static PyObject *t_FieldAbstractDetector_isForward(t_FieldAbstractDetector *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.isForward());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_FieldAbstractDetector_withHandler(t_FieldAbstractDetector *self, PyObject *arg)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler a0((jobject) NULL);
          PyTypeObject **p0;
          FieldAbstractDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::propagation::events::handlers::FieldEventHandler::initializeClass, &a0, &p0, ::org::orekit::propagation::events::handlers::t_FieldEventHandler::parameters_))
          {
            OBJ_CALL(result = self->object.withHandler(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldAbstractDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withHandler", arg);
          return NULL;
        }

        static PyObject *t_FieldAbstractDetector_withMaxCheck(t_FieldAbstractDetector *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              FieldAbstractDetector result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldAbstractDetector::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::events::FieldAdaptableInterval a0((jobject) NULL);
              PyTypeObject **p0;
              FieldAbstractDetector result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::orekit::propagation::events::FieldAdaptableInterval::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldAdaptableInterval::parameters_))
              {
                OBJ_CALL(result = self->object.withMaxCheck(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldAbstractDetector::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxCheck", args);
          return NULL;
        }

        static PyObject *t_FieldAbstractDetector_withMaxIter(t_FieldAbstractDetector *self, PyObject *arg)
        {
          jint a0;
          FieldAbstractDetector result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.withMaxIter(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldAbstractDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withMaxIter", arg);
          return NULL;
        }

        static PyObject *t_FieldAbstractDetector_withThreshold(t_FieldAbstractDetector *self, PyObject *arg)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          FieldAbstractDetector result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.withThreshold(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : t_FieldAbstractDetector::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "withThreshold", arg);
          return NULL;
        }
        static PyObject *t_FieldAbstractDetector_get__parameters_(t_FieldAbstractDetector *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldAbstractDetector_get__forward(t_FieldAbstractDetector *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isForward());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_FieldAbstractDetector_get__handler(t_FieldAbstractDetector *self, void *data)
        {
          ::org::orekit::propagation::events::handlers::FieldEventHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getHandler());
          return ::org::orekit::propagation::events::handlers::t_FieldEventHandler::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractDetector_get__maxCheckInterval(t_FieldAbstractDetector *self, void *data)
        {
          ::org::orekit::propagation::events::FieldAdaptableInterval value((jobject) NULL);
          OBJ_CALL(value = self->object.getMaxCheckInterval());
          return ::org::orekit::propagation::events::t_FieldAdaptableInterval::wrap_Object(value);
        }

        static PyObject *t_FieldAbstractDetector_get__maxIterationCount(t_FieldAbstractDetector *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaxIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldAbstractDetector_get__threshold(t_FieldAbstractDetector *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getThreshold());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldLine.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *FieldLine::class$ = NULL;
          jmethodID *FieldLine::mids$ = NULL;
          bool FieldLine::live$ = false;

          jclass FieldLine::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/FieldLine");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_fc292051dd180810] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;D)V");
              mids$[mid_closestPoint_530a74c0248a60b8] = env->getMethodID(cls, "closestPoint", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_contains_f7871dc9552d25d0] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Z");
              mids$[mid_contains_82d995e738c9e027] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Z");
              mids$[mid_distance_69aa7759254493eb] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_f475fa22e4944acc] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_distance_40bcacaf1f5c8f3e] = env->getMethodID(cls, "distance", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getAbscissa_f475fa22e4944acc] = env->getMethodID(cls, "getAbscissa", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getAbscissa_40bcacaf1f5c8f3e] = env->getMethodID(cls, "getAbscissa", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getDirection_ff5ac73a7b43eddd] = env->getMethodID(cls, "getDirection", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getOrigin_ff5ac73a7b43eddd] = env->getMethodID(cls, "getOrigin", "()Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getTolerance_b74f83833fdad017] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_intersection_530a74c0248a60b8] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_isSimilarTo_03c53b554cf7b8cc] = env->getMethodID(cls, "isSimilarTo", "(Lorg/hipparchus/geometry/euclidean/threed/FieldLine;)Z");
              mids$[mid_pointAt_c6e22cf5a7df5c99] = env->getMethodID(cls, "pointAt", "(D)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_pointAt_0e25f993119a02fa] = env->getMethodID(cls, "pointAt", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_reset_e67380c15d7bb85a] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;)V");
              mids$[mid_revert_8b601b81eef3c976] = env->getMethodID(cls, "revert", "()Lorg/hipparchus/geometry/euclidean/threed/FieldLine;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldLine::FieldLine(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_fc292051dd180810, a0.this$, a1.this$, a2)) {}

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldLine::closestPoint(const FieldLine & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_closestPoint_530a74c0248a60b8], a0.this$));
          }

          jboolean FieldLine::contains(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_contains_f7871dc9552d25d0], a0.this$);
          }

          jboolean FieldLine::contains(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_contains_82d995e738c9e027], a0.this$);
          }

          ::org::hipparchus::CalculusFieldElement FieldLine::distance(const FieldLine & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_69aa7759254493eb], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldLine::distance(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_f475fa22e4944acc], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldLine::distance(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_distance_40bcacaf1f5c8f3e], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldLine::getAbscissa(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAbscissa_f475fa22e4944acc], a0.this$));
          }

          ::org::hipparchus::CalculusFieldElement FieldLine::getAbscissa(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAbscissa_40bcacaf1f5c8f3e], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldLine::getDirection() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getDirection_ff5ac73a7b43eddd]));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldLine::getOrigin() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getOrigin_ff5ac73a7b43eddd]));
          }

          jdouble FieldLine::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_b74f83833fdad017]);
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldLine::intersection(const FieldLine & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_intersection_530a74c0248a60b8], a0.this$));
          }

          jboolean FieldLine::isSimilarTo(const FieldLine & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isSimilarTo_03c53b554cf7b8cc], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldLine::pointAt(jdouble a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_pointAt_c6e22cf5a7df5c99], a0));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D FieldLine::pointAt(const ::org::hipparchus::CalculusFieldElement & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_pointAt_0e25f993119a02fa], a0.this$));
          }

          void FieldLine::reset(const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::FieldVector3D & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_e67380c15d7bb85a], a0.this$, a1.this$);
          }

          FieldLine FieldLine::revert() const
          {
            return FieldLine(env->callObjectMethod(this$, mids$[mid_revert_8b601b81eef3c976]));
          }
        }
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {
          static PyObject *t_FieldLine_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldLine_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldLine_of_(t_FieldLine *self, PyObject *args);
          static int t_FieldLine_init_(t_FieldLine *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldLine_closestPoint(t_FieldLine *self, PyObject *arg);
          static PyObject *t_FieldLine_contains(t_FieldLine *self, PyObject *args);
          static PyObject *t_FieldLine_distance(t_FieldLine *self, PyObject *args);
          static PyObject *t_FieldLine_getAbscissa(t_FieldLine *self, PyObject *args);
          static PyObject *t_FieldLine_getDirection(t_FieldLine *self);
          static PyObject *t_FieldLine_getOrigin(t_FieldLine *self);
          static PyObject *t_FieldLine_getTolerance(t_FieldLine *self);
          static PyObject *t_FieldLine_intersection(t_FieldLine *self, PyObject *arg);
          static PyObject *t_FieldLine_isSimilarTo(t_FieldLine *self, PyObject *arg);
          static PyObject *t_FieldLine_pointAt(t_FieldLine *self, PyObject *args);
          static PyObject *t_FieldLine_reset(t_FieldLine *self, PyObject *args);
          static PyObject *t_FieldLine_revert(t_FieldLine *self);
          static PyObject *t_FieldLine_get__direction(t_FieldLine *self, void *data);
          static PyObject *t_FieldLine_get__origin(t_FieldLine *self, void *data);
          static PyObject *t_FieldLine_get__tolerance(t_FieldLine *self, void *data);
          static PyObject *t_FieldLine_get__parameters_(t_FieldLine *self, void *data);
          static PyGetSetDef t_FieldLine__fields_[] = {
            DECLARE_GET_FIELD(t_FieldLine, direction),
            DECLARE_GET_FIELD(t_FieldLine, origin),
            DECLARE_GET_FIELD(t_FieldLine, tolerance),
            DECLARE_GET_FIELD(t_FieldLine, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldLine__methods_[] = {
            DECLARE_METHOD(t_FieldLine, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldLine, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldLine, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldLine, closestPoint, METH_O),
            DECLARE_METHOD(t_FieldLine, contains, METH_VARARGS),
            DECLARE_METHOD(t_FieldLine, distance, METH_VARARGS),
            DECLARE_METHOD(t_FieldLine, getAbscissa, METH_VARARGS),
            DECLARE_METHOD(t_FieldLine, getDirection, METH_NOARGS),
            DECLARE_METHOD(t_FieldLine, getOrigin, METH_NOARGS),
            DECLARE_METHOD(t_FieldLine, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_FieldLine, intersection, METH_O),
            DECLARE_METHOD(t_FieldLine, isSimilarTo, METH_O),
            DECLARE_METHOD(t_FieldLine, pointAt, METH_VARARGS),
            DECLARE_METHOD(t_FieldLine, reset, METH_VARARGS),
            DECLARE_METHOD(t_FieldLine, revert, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldLine)[] = {
            { Py_tp_methods, t_FieldLine__methods_ },
            { Py_tp_init, (void *) t_FieldLine_init_ },
            { Py_tp_getset, t_FieldLine__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldLine)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldLine, t_FieldLine, FieldLine);
          PyObject *t_FieldLine::wrap_Object(const FieldLine& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldLine::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldLine *self = (t_FieldLine *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldLine::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldLine::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldLine *self = (t_FieldLine *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldLine::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldLine), &PY_TYPE_DEF(FieldLine), module, "FieldLine", 0);
          }

          void t_FieldLine::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLine), "class_", make_descriptor(FieldLine::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLine), "wrapfn_", make_descriptor(t_FieldLine::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLine), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldLine_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldLine::initializeClass, 1)))
              return NULL;
            return t_FieldLine::wrap_Object(FieldLine(((t_FieldLine *) arg)->object.this$));
          }
          static PyObject *t_FieldLine_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldLine::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldLine_of_(t_FieldLine *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldLine_init_(t_FieldLine *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            FieldLine object((jobject) NULL);

            if (!parseArgs(args, "KKD", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a2))
            {
              INT_CALL(object = FieldLine(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_FieldLine_closestPoint(t_FieldLine *self, PyObject *arg)
          {
            FieldLine a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", FieldLine::initializeClass, &a0, &p0, t_FieldLine::parameters_))
            {
              OBJ_CALL(result = self->object.closestPoint(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "closestPoint", arg);
            return NULL;
          }

          static PyObject *t_FieldLine_contains(t_FieldLine *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                jboolean result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.contains(a0));
                  Py_RETURN_BOOL(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jboolean result;

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.contains(a0));
                  Py_RETURN_BOOL(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "contains", args);
            return NULL;
          }

          static PyObject *t_FieldLine_distance(t_FieldLine *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                FieldLine a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", FieldLine::initializeClass, &a0, &p0, t_FieldLine::parameters_))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.distance(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "distance", args);
            return NULL;
          }

          static PyObject *t_FieldLine_getAbscissa(t_FieldLine *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
                {
                  OBJ_CALL(result = self->object.getAbscissa(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getAbscissa(a0));
                  return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getAbscissa", args);
            return NULL;
          }

          static PyObject *t_FieldLine_getDirection(t_FieldLine *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldLine_getOrigin(t_FieldLine *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getOrigin());
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_FieldLine_getTolerance(t_FieldLine *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_FieldLine_intersection(t_FieldLine *self, PyObject *arg)
          {
            FieldLine a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

            if (!parseArg(arg, "K", FieldLine::initializeClass, &a0, &p0, t_FieldLine::parameters_))
            {
              OBJ_CALL(result = self->object.intersection(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "intersection", arg);
            return NULL;
          }

          static PyObject *t_FieldLine_isSimilarTo(t_FieldLine *self, PyObject *arg)
          {
            FieldLine a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", FieldLine::initializeClass, &a0, &p0, t_FieldLine::parameters_))
            {
              OBJ_CALL(result = self->object.isSimilarTo(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "isSimilarTo", arg);
            return NULL;
          }

          static PyObject *t_FieldLine_pointAt(t_FieldLine *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                jdouble a0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "D", &a0))
                {
                  OBJ_CALL(result = self->object.pointAt(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
              {
                ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.pointAt(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result, self->parameters[0]);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "pointAt", args);
            return NULL;
          }

          static PyObject *t_FieldLine_reset(t_FieldLine *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &a0, &p0, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_, &a1, &p1, ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::parameters_))
            {
              OBJ_CALL(self->object.reset(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "reset", args);
            return NULL;
          }

          static PyObject *t_FieldLine_revert(t_FieldLine *self)
          {
            FieldLine result((jobject) NULL);
            OBJ_CALL(result = self->object.revert());
            return t_FieldLine::wrap_Object(result, self->parameters[0]);
          }
          static PyObject *t_FieldLine_get__parameters_(t_FieldLine *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_FieldLine_get__direction(t_FieldLine *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getDirection());
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
          }

          static PyObject *t_FieldLine_get__origin(t_FieldLine *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getOrigin());
            return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(value);
          }

          static PyObject *t_FieldLine_get__tolerance(t_FieldLine *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTolerance());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/PythonStaticTransform.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Throwable.h"
#include "org/orekit/frames/StaticTransform.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *PythonStaticTransform::class$ = NULL;
      jmethodID *PythonStaticTransform::mids$ = NULL;
      bool PythonStaticTransform::live$ = false;

      jclass PythonStaticTransform::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/PythonStaticTransform");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_a1fa5dae97ea5ed2] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_finalize_a1fa5dae97ea5ed2] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getDate_c325492395d89b24] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getInverse_00930874428900c5] = env->getMethodID(cls, "getInverse", "()Lorg/orekit/frames/StaticTransform;");
          mids$[mid_getRotation_ff298a39b3cae5da] = env->getMethodID(cls, "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_getTranslation_8b724f8b4fdad1a2] = env->getMethodID(cls, "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
          mids$[mid_pythonDecRef_a1fa5dae97ea5ed2] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_6c0ce7e438e5ded4] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3d7dd2314a0dd456] = env->getMethodID(cls, "pythonExtension", "(J)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonStaticTransform::PythonStaticTransform() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a1fa5dae97ea5ed2)) {}

      void PythonStaticTransform::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_a1fa5dae97ea5ed2]);
      }

      jlong PythonStaticTransform::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_6c0ce7e438e5ded4]);
      }

      void PythonStaticTransform::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3d7dd2314a0dd456], a0);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace orekit {
    namespace frames {
      static PyObject *t_PythonStaticTransform_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonStaticTransform_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonStaticTransform_init_(t_PythonStaticTransform *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonStaticTransform_finalize(t_PythonStaticTransform *self);
      static PyObject *t_PythonStaticTransform_pythonExtension(t_PythonStaticTransform *self, PyObject *args);
      static jobject JNICALL t_PythonStaticTransform_getDate0(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonStaticTransform_getInverse1(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonStaticTransform_getRotation2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonStaticTransform_getTranslation3(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonStaticTransform_pythonDecRef4(JNIEnv *jenv, jobject jobj);
      static PyObject *t_PythonStaticTransform_get__self(t_PythonStaticTransform *self, void *data);
      static PyGetSetDef t_PythonStaticTransform__fields_[] = {
        DECLARE_GET_FIELD(t_PythonStaticTransform, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonStaticTransform__methods_[] = {
        DECLARE_METHOD(t_PythonStaticTransform, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStaticTransform, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonStaticTransform, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonStaticTransform, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonStaticTransform)[] = {
        { Py_tp_methods, t_PythonStaticTransform__methods_ },
        { Py_tp_init, (void *) t_PythonStaticTransform_init_ },
        { Py_tp_getset, t_PythonStaticTransform__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonStaticTransform)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonStaticTransform, t_PythonStaticTransform, PythonStaticTransform);

      void t_PythonStaticTransform::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonStaticTransform), &PY_TYPE_DEF(PythonStaticTransform), module, "PythonStaticTransform", 1);
      }

      void t_PythonStaticTransform::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStaticTransform), "class_", make_descriptor(PythonStaticTransform::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStaticTransform), "wrapfn_", make_descriptor(t_PythonStaticTransform::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonStaticTransform), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonStaticTransform::initializeClass);
        JNINativeMethod methods[] = {
          { "getDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonStaticTransform_getDate0 },
          { "getInverse", "()Lorg/orekit/frames/StaticTransform;", (void *) t_PythonStaticTransform_getInverse1 },
          { "getRotation", "()Lorg/hipparchus/geometry/euclidean/threed/Rotation;", (void *) t_PythonStaticTransform_getRotation2 },
          { "getTranslation", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonStaticTransform_getTranslation3 },
          { "pythonDecRef", "()V", (void *) t_PythonStaticTransform_pythonDecRef4 },
        };
        env->registerNatives(cls, methods, 5);
      }

      static PyObject *t_PythonStaticTransform_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonStaticTransform::initializeClass, 1)))
          return NULL;
        return t_PythonStaticTransform::wrap_Object(PythonStaticTransform(((t_PythonStaticTransform *) arg)->object.this$));
      }
      static PyObject *t_PythonStaticTransform_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonStaticTransform::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonStaticTransform_init_(t_PythonStaticTransform *self, PyObject *args, PyObject *kwds)
      {
        PythonStaticTransform object((jobject) NULL);

        INT_CALL(object = PythonStaticTransform());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonStaticTransform_finalize(t_PythonStaticTransform *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonStaticTransform_pythonExtension(t_PythonStaticTransform *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            jlong result;
            OBJ_CALL(result = self->object.pythonExtension());
            return PyLong_FromLongLong((PY_LONG_LONG) result);
          }
          break;
         case 1:
          {
            jlong a0;

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(self->object.pythonExtension(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pythonExtension", args);
        return NULL;
      }

      static jobject JNICALL t_PythonStaticTransform_getDate0(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStaticTransform::mids$[PythonStaticTransform::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getDate", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonStaticTransform_getInverse1(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStaticTransform::mids$[PythonStaticTransform::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::StaticTransform value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getInverse", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::StaticTransform::initializeClass, &value))
        {
          throwTypeError("getInverse", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonStaticTransform_getRotation2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStaticTransform::mids$[PythonStaticTransform::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getRotation", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &value))
        {
          throwTypeError("getRotation", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static jobject JNICALL t_PythonStaticTransform_getTranslation3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStaticTransform::mids$[PythonStaticTransform::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getTranslation", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
        {
          throwTypeError("getTranslation", result);
          Py_DECREF(result);
        }
        else
        {
          jobj = jenv->NewLocalRef(value.this$);
          Py_DECREF(result);
          return jobj;
        }

        return (jobject) NULL;
      }

      static void JNICALL t_PythonStaticTransform_pythonDecRef4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonStaticTransform::mids$[PythonStaticTransform::mid_pythonExtension_6c0ce7e438e5ded4]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonStaticTransform::mids$[PythonStaticTransform::mid_pythonExtension_3d7dd2314a0dd456], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static PyObject *t_PythonStaticTransform_get__self(t_PythonStaticTransform *self, void *data)
      {
        jlong ptr;
        OBJ_CALL(ptr = self->object.pythonExtension());
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          Py_INCREF(obj);
          return obj;
        }
        else
          Py_RETURN_NONE;
      }
    }
  }
}

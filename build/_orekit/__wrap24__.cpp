#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/AbstractEopParser.h"
#include "org/orekit/frames/EopHistoryLoader$Parser.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *AbstractEopParser::class$ = NULL;
      jmethodID *AbstractEopParser::mids$ = NULL;
      bool AbstractEopParser::live$ = false;

      jclass AbstractEopParser::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/AbstractEopParser");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getConverter_960af55dff8aba2e] = env->getMethodID(cls, "getConverter", "()Lorg/orekit/utils/IERSConventions$NutationCorrectionConverter;");
          mids$[mid_getUtc_527ee9dde1a96470] = env->getMethodID(cls, "getUtc", "()Lorg/orekit/time/TimeScale;");
          mids$[mid_getItrfVersionProvider_5c8408d318852b47] = env->getMethodID(cls, "getItrfVersionProvider", "()Lorg/orekit/frames/ItrfVersionProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
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
      static PyObject *t_AbstractEopParser_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_AbstractEopParser_instance_(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_AbstractEopParser__methods_[] = {
        DECLARE_METHOD(t_AbstractEopParser, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_AbstractEopParser, instance_, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(AbstractEopParser)[] = {
        { Py_tp_methods, t_AbstractEopParser__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(AbstractEopParser)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(AbstractEopParser, t_AbstractEopParser, AbstractEopParser);

      void t_AbstractEopParser::install(PyObject *module)
      {
        installType(&PY_TYPE(AbstractEopParser), &PY_TYPE_DEF(AbstractEopParser), module, "AbstractEopParser", 0);
      }

      void t_AbstractEopParser::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEopParser), "class_", make_descriptor(AbstractEopParser::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEopParser), "wrapfn_", make_descriptor(t_AbstractEopParser::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractEopParser), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_AbstractEopParser_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, AbstractEopParser::initializeClass, 1)))
          return NULL;
        return t_AbstractEopParser::wrap_Object(AbstractEopParser(((t_AbstractEopParser *) arg)->object.this$));
      }
      static PyObject *t_AbstractEopParser_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, AbstractEopParser::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FieldTimeStampedCache.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "java/lang/IllegalStateException.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/time/FieldTimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldTimeStampedCache::class$ = NULL;
      jmethodID *FieldTimeStampedCache::mids$ = NULL;
      bool FieldTimeStampedCache::live$ = false;

      jclass FieldTimeStampedCache::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldTimeStampedCache");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getEarliest_d840ecaffb3bbf7f] = env->getMethodID(cls, "getEarliest", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getLatest_d840ecaffb3bbf7f] = env->getMethodID(cls, "getLatest", "()Lorg/orekit/time/FieldTimeStamped;");
          mids$[mid_getNeighbors_d2b16151ed8cc73c] = env->getMethodID(cls, "getNeighbors", "(Lorg/orekit/time/FieldAbsoluteDate;)Ljava/util/stream/Stream;");
          mids$[mid_getNeighborsSize_412668abc8d889e9] = env->getMethodID(cls, "getNeighborsSize", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeStampedCache::getEarliest() const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_getEarliest_d840ecaffb3bbf7f]));
      }

      ::org::orekit::time::FieldTimeStamped FieldTimeStampedCache::getLatest() const
      {
        return ::org::orekit::time::FieldTimeStamped(env->callObjectMethod(this$, mids$[mid_getLatest_d840ecaffb3bbf7f]));
      }

      ::java::util::stream::Stream FieldTimeStampedCache::getNeighbors(const ::org::orekit::time::FieldAbsoluteDate & a0) const
      {
        return ::java::util::stream::Stream(env->callObjectMethod(this$, mids$[mid_getNeighbors_d2b16151ed8cc73c], a0.this$));
      }

      jint FieldTimeStampedCache::getNeighborsSize() const
      {
        return env->callIntMethod(this$, mids$[mid_getNeighborsSize_412668abc8d889e9]);
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
      static PyObject *t_FieldTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTimeStampedCache_of_(t_FieldTimeStampedCache *self, PyObject *args);
      static PyObject *t_FieldTimeStampedCache_getEarliest(t_FieldTimeStampedCache *self);
      static PyObject *t_FieldTimeStampedCache_getLatest(t_FieldTimeStampedCache *self);
      static PyObject *t_FieldTimeStampedCache_getNeighbors(t_FieldTimeStampedCache *self, PyObject *arg);
      static PyObject *t_FieldTimeStampedCache_getNeighborsSize(t_FieldTimeStampedCache *self);
      static PyObject *t_FieldTimeStampedCache_get__earliest(t_FieldTimeStampedCache *self, void *data);
      static PyObject *t_FieldTimeStampedCache_get__latest(t_FieldTimeStampedCache *self, void *data);
      static PyObject *t_FieldTimeStampedCache_get__neighborsSize(t_FieldTimeStampedCache *self, void *data);
      static PyObject *t_FieldTimeStampedCache_get__parameters_(t_FieldTimeStampedCache *self, void *data);
      static PyGetSetDef t_FieldTimeStampedCache__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTimeStampedCache, earliest),
        DECLARE_GET_FIELD(t_FieldTimeStampedCache, latest),
        DECLARE_GET_FIELD(t_FieldTimeStampedCache, neighborsSize),
        DECLARE_GET_FIELD(t_FieldTimeStampedCache, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTimeStampedCache__methods_[] = {
        DECLARE_METHOD(t_FieldTimeStampedCache, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeStampedCache, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTimeStampedCache, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTimeStampedCache, getEarliest, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeStampedCache, getLatest, METH_NOARGS),
        DECLARE_METHOD(t_FieldTimeStampedCache, getNeighbors, METH_O),
        DECLARE_METHOD(t_FieldTimeStampedCache, getNeighborsSize, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTimeStampedCache)[] = {
        { Py_tp_methods, t_FieldTimeStampedCache__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldTimeStampedCache__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTimeStampedCache)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTimeStampedCache, t_FieldTimeStampedCache, FieldTimeStampedCache);
      PyObject *t_FieldTimeStampedCache::wrap_Object(const FieldTimeStampedCache& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeStampedCache::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeStampedCache *self = (t_FieldTimeStampedCache *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      PyObject *t_FieldTimeStampedCache::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
      {
        PyObject *obj = t_FieldTimeStampedCache::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTimeStampedCache *self = (t_FieldTimeStampedCache *) obj;
          self->parameters[0] = p0;
          self->parameters[1] = p1;
        }
        return obj;
      }

      void t_FieldTimeStampedCache::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTimeStampedCache), &PY_TYPE_DEF(FieldTimeStampedCache), module, "FieldTimeStampedCache", 0);
      }

      void t_FieldTimeStampedCache::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedCache), "class_", make_descriptor(FieldTimeStampedCache::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedCache), "wrapfn_", make_descriptor(t_FieldTimeStampedCache::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTimeStampedCache), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTimeStampedCache_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTimeStampedCache::initializeClass, 1)))
          return NULL;
        return t_FieldTimeStampedCache::wrap_Object(FieldTimeStampedCache(((t_FieldTimeStampedCache *) arg)->object.this$));
      }
      static PyObject *t_FieldTimeStampedCache_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTimeStampedCache::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTimeStampedCache_of_(t_FieldTimeStampedCache *self, PyObject *args)
      {
        if (!parseArg(args, "T", 2, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldTimeStampedCache_getEarliest(t_FieldTimeStampedCache *self)
      {
        ::org::orekit::time::FieldTimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getEarliest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
      }

      static PyObject *t_FieldTimeStampedCache_getLatest(t_FieldTimeStampedCache *self)
      {
        ::org::orekit::time::FieldTimeStamped result((jobject) NULL);
        OBJ_CALL(result = self->object.getLatest());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_FieldTimeStamped::wrap_Object(result);
      }

      static PyObject *t_FieldTimeStampedCache_getNeighbors(t_FieldTimeStampedCache *self, PyObject *arg)
      {
        ::org::orekit::time::FieldAbsoluteDate a0((jobject) NULL);
        PyTypeObject **p0;
        ::java::util::stream::Stream result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::orekit::time::FieldAbsoluteDate::initializeClass, &a0, &p0, ::org::orekit::time::t_FieldAbsoluteDate::parameters_))
        {
          OBJ_CALL(result = self->object.getNeighbors(a0));
          return ::java::util::stream::t_Stream::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getNeighbors", arg);
        return NULL;
      }

      static PyObject *t_FieldTimeStampedCache_getNeighborsSize(t_FieldTimeStampedCache *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNeighborsSize());
        return PyLong_FromLong((long) result);
      }
      static PyObject *t_FieldTimeStampedCache_get__parameters_(t_FieldTimeStampedCache *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTimeStampedCache_get__earliest(t_FieldTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getEarliest());
        return ::org::orekit::time::t_FieldTimeStamped::wrap_Object(value);
      }

      static PyObject *t_FieldTimeStampedCache_get__latest(t_FieldTimeStampedCache *self, void *data)
      {
        ::org::orekit::time::FieldTimeStamped value((jobject) NULL);
        OBJ_CALL(value = self->object.getLatest());
        return ::org::orekit::time::t_FieldTimeStamped::wrap_Object(value);
      }

      static PyObject *t_FieldTimeStampedCache_get__neighborsSize(t_FieldTimeStampedCache *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNeighborsSize());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/ThreeEighthesFieldIntegrator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *ThreeEighthesFieldIntegrator::class$ = NULL;
        jmethodID *ThreeEighthesFieldIntegrator::mids$ = NULL;
        bool ThreeEighthesFieldIntegrator::live$ = false;

        jclass ThreeEighthesFieldIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/ThreeEighthesFieldIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c9ae9949e6b74bf6] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/Field;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_getA_f180d140dce78d62] = env->getMethodID(cls, "getA", "()[[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getB_41762fd4377ff26e] = env->getMethodID(cls, "getB", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getC_41762fd4377ff26e] = env->getMethodID(cls, "getC", "()[Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_createInterpolator_359b3b668240cec1] = env->getMethodID(cls, "createInterpolator", "(Z[[Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldODEStateAndDerivative;Lorg/hipparchus/ode/FieldEquationsMapper;)Lorg/hipparchus/ode/nonstiff/ThreeEighthesFieldStateInterpolator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ThreeEighthesFieldIntegrator::ThreeEighthesFieldIntegrator(const ::org::hipparchus::Field & a0, const ::org::hipparchus::CalculusFieldElement & a1) : ::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator(env->newObject(initializeClass, &mids$, mid_init$_c9ae9949e6b74bf6, a0.this$, a1.this$)) {}

        JArray< JArray< ::org::hipparchus::CalculusFieldElement > > ThreeEighthesFieldIntegrator::getA() const
        {
          return JArray< JArray< ::org::hipparchus::CalculusFieldElement > >(env->callObjectMethod(this$, mids$[mid_getA_f180d140dce78d62]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > ThreeEighthesFieldIntegrator::getB() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getB_41762fd4377ff26e]));
        }

        JArray< ::org::hipparchus::CalculusFieldElement > ThreeEighthesFieldIntegrator::getC() const
        {
          return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getC_41762fd4377ff26e]));
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
    namespace ode {
      namespace nonstiff {
        static PyObject *t_ThreeEighthesFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThreeEighthesFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_ThreeEighthesFieldIntegrator_of_(t_ThreeEighthesFieldIntegrator *self, PyObject *args);
        static int t_ThreeEighthesFieldIntegrator_init_(t_ThreeEighthesFieldIntegrator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_ThreeEighthesFieldIntegrator_getA(t_ThreeEighthesFieldIntegrator *self, PyObject *args);
        static PyObject *t_ThreeEighthesFieldIntegrator_getB(t_ThreeEighthesFieldIntegrator *self, PyObject *args);
        static PyObject *t_ThreeEighthesFieldIntegrator_getC(t_ThreeEighthesFieldIntegrator *self, PyObject *args);
        static PyObject *t_ThreeEighthesFieldIntegrator_get__a(t_ThreeEighthesFieldIntegrator *self, void *data);
        static PyObject *t_ThreeEighthesFieldIntegrator_get__b(t_ThreeEighthesFieldIntegrator *self, void *data);
        static PyObject *t_ThreeEighthesFieldIntegrator_get__c(t_ThreeEighthesFieldIntegrator *self, void *data);
        static PyObject *t_ThreeEighthesFieldIntegrator_get__parameters_(t_ThreeEighthesFieldIntegrator *self, void *data);
        static PyGetSetDef t_ThreeEighthesFieldIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_ThreeEighthesFieldIntegrator, a),
          DECLARE_GET_FIELD(t_ThreeEighthesFieldIntegrator, b),
          DECLARE_GET_FIELD(t_ThreeEighthesFieldIntegrator, c),
          DECLARE_GET_FIELD(t_ThreeEighthesFieldIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_ThreeEighthesFieldIntegrator__methods_[] = {
          DECLARE_METHOD(t_ThreeEighthesFieldIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegrator, getA, METH_VARARGS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegrator, getB, METH_VARARGS),
          DECLARE_METHOD(t_ThreeEighthesFieldIntegrator, getC, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(ThreeEighthesFieldIntegrator)[] = {
          { Py_tp_methods, t_ThreeEighthesFieldIntegrator__methods_ },
          { Py_tp_init, (void *) t_ThreeEighthesFieldIntegrator_init_ },
          { Py_tp_getset, t_ThreeEighthesFieldIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(ThreeEighthesFieldIntegrator)[] = {
          &PY_TYPE_DEF(::org::hipparchus::ode::nonstiff::RungeKuttaFieldIntegrator),
          NULL
        };

        DEFINE_TYPE(ThreeEighthesFieldIntegrator, t_ThreeEighthesFieldIntegrator, ThreeEighthesFieldIntegrator);
        PyObject *t_ThreeEighthesFieldIntegrator::wrap_Object(const ThreeEighthesFieldIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ThreeEighthesFieldIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ThreeEighthesFieldIntegrator *self = (t_ThreeEighthesFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_ThreeEighthesFieldIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_ThreeEighthesFieldIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_ThreeEighthesFieldIntegrator *self = (t_ThreeEighthesFieldIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_ThreeEighthesFieldIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(ThreeEighthesFieldIntegrator), &PY_TYPE_DEF(ThreeEighthesFieldIntegrator), module, "ThreeEighthesFieldIntegrator", 0);
        }

        void t_ThreeEighthesFieldIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesFieldIntegrator), "class_", make_descriptor(ThreeEighthesFieldIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesFieldIntegrator), "wrapfn_", make_descriptor(t_ThreeEighthesFieldIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(ThreeEighthesFieldIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, ThreeEighthesFieldIntegrator::initializeClass, 1)))
            return NULL;
          return t_ThreeEighthesFieldIntegrator::wrap_Object(ThreeEighthesFieldIntegrator(((t_ThreeEighthesFieldIntegrator *) arg)->object.this$));
        }
        static PyObject *t_ThreeEighthesFieldIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, ThreeEighthesFieldIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_of_(t_ThreeEighthesFieldIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_ThreeEighthesFieldIntegrator_init_(t_ThreeEighthesFieldIntegrator *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ThreeEighthesFieldIntegrator object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            INT_CALL(object = ThreeEighthesFieldIntegrator(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_getA(t_ThreeEighthesFieldIntegrator *self, PyObject *args)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getA());
            return JArray<jobject>(result.this$).wrap(NULL);
          }

          return callSuper(PY_TYPE(ThreeEighthesFieldIntegrator), (PyObject *) self, "getA", args, 2);
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_getB(t_ThreeEighthesFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getB());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(ThreeEighthesFieldIntegrator), (PyObject *) self, "getB", args, 2);
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_getC(t_ThreeEighthesFieldIntegrator *self, PyObject *args)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getC());
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          }

          return callSuper(PY_TYPE(ThreeEighthesFieldIntegrator), (PyObject *) self, "getC", args, 2);
        }
        static PyObject *t_ThreeEighthesFieldIntegrator_get__parameters_(t_ThreeEighthesFieldIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_get__a(t_ThreeEighthesFieldIntegrator *self, void *data)
        {
          JArray< JArray< ::org::hipparchus::CalculusFieldElement > > value((jobject) NULL);
          OBJ_CALL(value = self->object.getA());
          return JArray<jobject>(value.this$).wrap(NULL);
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_get__b(t_ThreeEighthesFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getB());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        static PyObject *t_ThreeEighthesFieldIntegrator_get__c(t_ThreeEighthesFieldIntegrator *self, void *data)
        {
          JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
          OBJ_CALL(value = self->object.getC());
          return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1Field.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1Field.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldUnivariateDerivative1Field::class$ = NULL;
        jmethodID *FieldUnivariateDerivative1Field::mids$ = NULL;
        bool FieldUnivariateDerivative1Field::live$ = false;

        jclass FieldUnivariateDerivative1Field::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldUnivariateDerivative1Field");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getOne_b4ea14898e256f1c] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_getRuntimeClass_d4b191ff8147475d] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getUnivariateDerivative1Field_4e6c8ebf6177b346] = env->getStaticMethodID(cls, "getUnivariateDerivative1Field", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1Field;");
            mids$[mid_getZero_b4ea14898e256f1c] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative1;");
            mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean FieldUnivariateDerivative1Field::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
        }

        ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1 FieldUnivariateDerivative1Field::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_getOne_b4ea14898e256f1c]));
        }

        ::java::lang::Class FieldUnivariateDerivative1Field::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_d4b191ff8147475d]));
        }

        FieldUnivariateDerivative1Field FieldUnivariateDerivative1Field::getUnivariateDerivative1Field(const ::org::hipparchus::Field & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldUnivariateDerivative1Field(env->callStaticObjectMethod(cls, mids$[mid_getUnivariateDerivative1Field_4e6c8ebf6177b346], a0.this$));
        }

        ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1 FieldUnivariateDerivative1Field::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1(env->callObjectMethod(this$, mids$[mid_getZero_b4ea14898e256f1c]));
        }

        jint FieldUnivariateDerivative1Field::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
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
      namespace differentiation {
        static PyObject *t_FieldUnivariateDerivative1Field_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative1Field_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative1Field_of_(t_FieldUnivariateDerivative1Field *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1Field_equals(t_FieldUnivariateDerivative1Field *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1Field_getOne(t_FieldUnivariateDerivative1Field *self);
        static PyObject *t_FieldUnivariateDerivative1Field_getRuntimeClass(t_FieldUnivariateDerivative1Field *self);
        static PyObject *t_FieldUnivariateDerivative1Field_getUnivariateDerivative1Field(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative1Field_getZero(t_FieldUnivariateDerivative1Field *self);
        static PyObject *t_FieldUnivariateDerivative1Field_hashCode(t_FieldUnivariateDerivative1Field *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative1Field_get__one(t_FieldUnivariateDerivative1Field *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1Field_get__runtimeClass(t_FieldUnivariateDerivative1Field *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1Field_get__zero(t_FieldUnivariateDerivative1Field *self, void *data);
        static PyObject *t_FieldUnivariateDerivative1Field_get__parameters_(t_FieldUnivariateDerivative1Field *self, void *data);
        static PyGetSetDef t_FieldUnivariateDerivative1Field__fields_[] = {
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1Field, one),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1Field, runtimeClass),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1Field, zero),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative1Field, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldUnivariateDerivative1Field__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, equals, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, getOne, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, getUnivariateDerivative1Field, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, getZero, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative1Field, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateDerivative1Field)[] = {
          { Py_tp_methods, t_FieldUnivariateDerivative1Field__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldUnivariateDerivative1Field__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateDerivative1Field)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateDerivative1Field, t_FieldUnivariateDerivative1Field, FieldUnivariateDerivative1Field);
        PyObject *t_FieldUnivariateDerivative1Field::wrap_Object(const FieldUnivariateDerivative1Field& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative1Field::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative1Field *self = (t_FieldUnivariateDerivative1Field *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldUnivariateDerivative1Field::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative1Field::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative1Field *self = (t_FieldUnivariateDerivative1Field *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldUnivariateDerivative1Field::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateDerivative1Field), &PY_TYPE_DEF(FieldUnivariateDerivative1Field), module, "FieldUnivariateDerivative1Field", 0);
        }

        void t_FieldUnivariateDerivative1Field::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative1Field), "class_", make_descriptor(FieldUnivariateDerivative1Field::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative1Field), "wrapfn_", make_descriptor(t_FieldUnivariateDerivative1Field::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative1Field), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateDerivative1Field_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateDerivative1Field::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateDerivative1Field::wrap_Object(FieldUnivariateDerivative1Field(((t_FieldUnivariateDerivative1Field *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateDerivative1Field_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateDerivative1Field::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateDerivative1Field_of_(t_FieldUnivariateDerivative1Field *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_equals(t_FieldUnivariateDerivative1Field *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1Field), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_getOne(t_FieldUnivariateDerivative1Field *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1 result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_getRuntimeClass(t_FieldUnivariateDerivative1Field *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_getUnivariateDerivative1Field(PyTypeObject *type, PyObject *arg)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          FieldUnivariateDerivative1Field result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1Field::getUnivariateDerivative1Field(a0));
            return t_FieldUnivariateDerivative1Field::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getUnivariateDerivative1Field", arg);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative1Field_getZero(t_FieldUnivariateDerivative1Field *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1 result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative1::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_hashCode(t_FieldUnivariateDerivative1Field *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative1Field), (PyObject *) self, "hashCode", args, 2);
        }
        static PyObject *t_FieldUnivariateDerivative1Field_get__parameters_(t_FieldUnivariateDerivative1Field *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldUnivariateDerivative1Field_get__one(t_FieldUnivariateDerivative1Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1 value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative1::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_get__runtimeClass(t_FieldUnivariateDerivative1Field *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative1Field_get__zero(t_FieldUnivariateDerivative1Field *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative1 value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative1::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/EOPEntry.h"
#include "java/io/Serializable.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *EOPEntry::class$ = NULL;
      jmethodID *EOPEntry::mids$ = NULL;
      bool EOPEntry::live$ = false;

      jclass EOPEntry::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/EOPEntry");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3c622621d4e330b6] = env->getMethodID(cls, "<init>", "(IDDDDDDDDDDLorg/orekit/frames/ITRFVersion;Lorg/orekit/time/AbsoluteDate;)V");
          mids$[mid_getDate_7a97f7e149e79afb] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getDdEps_557b8123390d8d0c] = env->getMethodID(cls, "getDdEps", "()D");
          mids$[mid_getDdPsi_557b8123390d8d0c] = env->getMethodID(cls, "getDdPsi", "()D");
          mids$[mid_getDx_557b8123390d8d0c] = env->getMethodID(cls, "getDx", "()D");
          mids$[mid_getDy_557b8123390d8d0c] = env->getMethodID(cls, "getDy", "()D");
          mids$[mid_getITRFType_b311296551ce8af2] = env->getMethodID(cls, "getITRFType", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getLOD_557b8123390d8d0c] = env->getMethodID(cls, "getLOD", "()D");
          mids$[mid_getMjd_412668abc8d889e9] = env->getMethodID(cls, "getMjd", "()I");
          mids$[mid_getUT1MinusUTC_557b8123390d8d0c] = env->getMethodID(cls, "getUT1MinusUTC", "()D");
          mids$[mid_getX_557b8123390d8d0c] = env->getMethodID(cls, "getX", "()D");
          mids$[mid_getXRate_557b8123390d8d0c] = env->getMethodID(cls, "getXRate", "()D");
          mids$[mid_getY_557b8123390d8d0c] = env->getMethodID(cls, "getY", "()D");
          mids$[mid_getYRate_557b8123390d8d0c] = env->getMethodID(cls, "getYRate", "()D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EOPEntry::EOPEntry(jint a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jdouble a9, jdouble a10, const ::org::orekit::frames::ITRFVersion & a11, const ::org::orekit::time::AbsoluteDate & a12) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3c622621d4e330b6, a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11.this$, a12.this$)) {}

      ::org::orekit::time::AbsoluteDate EOPEntry::getDate() const
      {
        return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_7a97f7e149e79afb]));
      }

      jdouble EOPEntry::getDdEps() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDdEps_557b8123390d8d0c]);
      }

      jdouble EOPEntry::getDdPsi() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDdPsi_557b8123390d8d0c]);
      }

      jdouble EOPEntry::getDx() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDx_557b8123390d8d0c]);
      }

      jdouble EOPEntry::getDy() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDy_557b8123390d8d0c]);
      }

      ::org::orekit::frames::ITRFVersion EOPEntry::getITRFType() const
      {
        return ::org::orekit::frames::ITRFVersion(env->callObjectMethod(this$, mids$[mid_getITRFType_b311296551ce8af2]));
      }

      jdouble EOPEntry::getLOD() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getLOD_557b8123390d8d0c]);
      }

      jint EOPEntry::getMjd() const
      {
        return env->callIntMethod(this$, mids$[mid_getMjd_412668abc8d889e9]);
      }

      jdouble EOPEntry::getUT1MinusUTC() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getUT1MinusUTC_557b8123390d8d0c]);
      }

      jdouble EOPEntry::getX() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getX_557b8123390d8d0c]);
      }

      jdouble EOPEntry::getXRate() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getXRate_557b8123390d8d0c]);
      }

      jdouble EOPEntry::getY() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getY_557b8123390d8d0c]);
      }

      jdouble EOPEntry::getYRate() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getYRate_557b8123390d8d0c]);
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
      static PyObject *t_EOPEntry_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EOPEntry_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EOPEntry_init_(t_EOPEntry *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EOPEntry_getDate(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getDdEps(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getDdPsi(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getDx(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getDy(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getITRFType(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getLOD(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getMjd(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getUT1MinusUTC(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getX(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getXRate(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getY(t_EOPEntry *self);
      static PyObject *t_EOPEntry_getYRate(t_EOPEntry *self);
      static PyObject *t_EOPEntry_get__date(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__ddEps(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__ddPsi(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__dx(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__dy(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__iTRFType(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__lOD(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__mjd(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__uT1MinusUTC(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__x(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__xRate(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__y(t_EOPEntry *self, void *data);
      static PyObject *t_EOPEntry_get__yRate(t_EOPEntry *self, void *data);
      static PyGetSetDef t_EOPEntry__fields_[] = {
        DECLARE_GET_FIELD(t_EOPEntry, date),
        DECLARE_GET_FIELD(t_EOPEntry, ddEps),
        DECLARE_GET_FIELD(t_EOPEntry, ddPsi),
        DECLARE_GET_FIELD(t_EOPEntry, dx),
        DECLARE_GET_FIELD(t_EOPEntry, dy),
        DECLARE_GET_FIELD(t_EOPEntry, iTRFType),
        DECLARE_GET_FIELD(t_EOPEntry, lOD),
        DECLARE_GET_FIELD(t_EOPEntry, mjd),
        DECLARE_GET_FIELD(t_EOPEntry, uT1MinusUTC),
        DECLARE_GET_FIELD(t_EOPEntry, x),
        DECLARE_GET_FIELD(t_EOPEntry, xRate),
        DECLARE_GET_FIELD(t_EOPEntry, y),
        DECLARE_GET_FIELD(t_EOPEntry, yRate),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EOPEntry__methods_[] = {
        DECLARE_METHOD(t_EOPEntry, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPEntry, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EOPEntry, getDate, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getDdEps, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getDdPsi, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getDx, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getDy, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getITRFType, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getLOD, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getMjd, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getUT1MinusUTC, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getX, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getXRate, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getY, METH_NOARGS),
        DECLARE_METHOD(t_EOPEntry, getYRate, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EOPEntry)[] = {
        { Py_tp_methods, t_EOPEntry__methods_ },
        { Py_tp_init, (void *) t_EOPEntry_init_ },
        { Py_tp_getset, t_EOPEntry__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EOPEntry)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EOPEntry, t_EOPEntry, EOPEntry);

      void t_EOPEntry::install(PyObject *module)
      {
        installType(&PY_TYPE(EOPEntry), &PY_TYPE_DEF(EOPEntry), module, "EOPEntry", 0);
      }

      void t_EOPEntry::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPEntry), "class_", make_descriptor(EOPEntry::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPEntry), "wrapfn_", make_descriptor(t_EOPEntry::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EOPEntry), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_EOPEntry_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EOPEntry::initializeClass, 1)))
          return NULL;
        return t_EOPEntry::wrap_Object(EOPEntry(((t_EOPEntry *) arg)->object.this$));
      }
      static PyObject *t_EOPEntry_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EOPEntry::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EOPEntry_init_(t_EOPEntry *self, PyObject *args, PyObject *kwds)
      {
        jint a0;
        jdouble a1;
        jdouble a2;
        jdouble a3;
        jdouble a4;
        jdouble a5;
        jdouble a6;
        jdouble a7;
        jdouble a8;
        jdouble a9;
        jdouble a10;
        ::org::orekit::frames::ITRFVersion a11((jobject) NULL);
        PyTypeObject **p11;
        ::org::orekit::time::AbsoluteDate a12((jobject) NULL);
        EOPEntry object((jobject) NULL);

        if (!parseArgs(args, "IDDDDDDDDDDKk", ::org::orekit::frames::ITRFVersion::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &p11, ::org::orekit::frames::t_ITRFVersion::parameters_, &a12))
        {
          INT_CALL(object = EOPEntry(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_EOPEntry_getDate(t_EOPEntry *self)
      {
        ::org::orekit::time::AbsoluteDate result((jobject) NULL);
        OBJ_CALL(result = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
      }

      static PyObject *t_EOPEntry_getDdEps(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDdEps());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getDdPsi(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDdPsi());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getDx(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDx());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getDy(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDy());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getITRFType(t_EOPEntry *self)
      {
        ::org::orekit::frames::ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = self->object.getITRFType());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_EOPEntry_getLOD(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getLOD());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getMjd(t_EOPEntry *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMjd());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_EOPEntry_getUT1MinusUTC(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getUT1MinusUTC());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getX(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getX());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getXRate(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getXRate());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getY(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getY());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_getYRate(t_EOPEntry *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getYRate());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EOPEntry_get__date(t_EOPEntry *self, void *data)
      {
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        OBJ_CALL(value = self->object.getDate());
        return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
      }

      static PyObject *t_EOPEntry_get__ddEps(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDdEps());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__ddPsi(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDdPsi());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__dx(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDx());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__dy(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDy());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__iTRFType(t_EOPEntry *self, void *data)
      {
        ::org::orekit::frames::ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getITRFType());
        return ::org::orekit::frames::t_ITRFVersion::wrap_Object(value);
      }

      static PyObject *t_EOPEntry_get__lOD(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getLOD());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__mjd(t_EOPEntry *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMjd());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_EOPEntry_get__uT1MinusUTC(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getUT1MinusUTC());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__x(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getX());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__xRate(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getXRate());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__y(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getY());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EOPEntry_get__yRate(t_EOPEntry *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getYRate());
        return PyFloat_FromDouble((double) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/generation/AbstractScheduler.h"
#include "org/orekit/propagation/sampling/OrekitStepInterpolator.h"
#include "org/orekit/estimation/measurements/generation/Scheduler.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/util/Map.h"
#include "org/orekit/estimation/measurements/generation/MeasurementBuilder.h"
#include "java/util/SortedSet.h"
#include "org/orekit/time/DatesSelector.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace generation {

          ::java::lang::Class *AbstractScheduler::class$ = NULL;
          jmethodID *AbstractScheduler::mids$ = NULL;
          bool AbstractScheduler::live$ = false;

          jclass AbstractScheduler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/generation/AbstractScheduler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_generate_efa69a4463f8239b] = env->getMethodID(cls, "generate", "(Ljava/util/Map;)Ljava/util/SortedSet;");
              mids$[mid_getBuilder_73d2d5822258be13] = env->getMethodID(cls, "getBuilder", "()Lorg/orekit/estimation/measurements/generation/MeasurementBuilder;");
              mids$[mid_getSelector_78eb80fc74b267d2] = env->getMethodID(cls, "getSelector", "()Lorg/orekit/time/DatesSelector;");
              mids$[mid_init_d5db9a5f2035671b] = env->getMethodID(cls, "init", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_measurementIsFeasible_981023bfa4a8a093] = env->getMethodID(cls, "measurementIsFeasible", "(Lorg/orekit/time/AbsoluteDate;)Z");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::java::util::SortedSet AbstractScheduler::generate(const ::java::util::Map & a0) const
          {
            return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_generate_efa69a4463f8239b], a0.this$));
          }

          ::org::orekit::estimation::measurements::generation::MeasurementBuilder AbstractScheduler::getBuilder() const
          {
            return ::org::orekit::estimation::measurements::generation::MeasurementBuilder(env->callObjectMethod(this$, mids$[mid_getBuilder_73d2d5822258be13]));
          }

          ::org::orekit::time::DatesSelector AbstractScheduler::getSelector() const
          {
            return ::org::orekit::time::DatesSelector(env->callObjectMethod(this$, mids$[mid_getSelector_78eb80fc74b267d2]));
          }

          void AbstractScheduler::init(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_d5db9a5f2035671b], a0.this$, a1.this$);
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
    namespace estimation {
      namespace measurements {
        namespace generation {
          static PyObject *t_AbstractScheduler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractScheduler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AbstractScheduler_of_(t_AbstractScheduler *self, PyObject *args);
          static PyObject *t_AbstractScheduler_generate(t_AbstractScheduler *self, PyObject *arg);
          static PyObject *t_AbstractScheduler_getBuilder(t_AbstractScheduler *self);
          static PyObject *t_AbstractScheduler_getSelector(t_AbstractScheduler *self);
          static PyObject *t_AbstractScheduler_init(t_AbstractScheduler *self, PyObject *args);
          static PyObject *t_AbstractScheduler_get__builder(t_AbstractScheduler *self, void *data);
          static PyObject *t_AbstractScheduler_get__selector(t_AbstractScheduler *self, void *data);
          static PyObject *t_AbstractScheduler_get__parameters_(t_AbstractScheduler *self, void *data);
          static PyGetSetDef t_AbstractScheduler__fields_[] = {
            DECLARE_GET_FIELD(t_AbstractScheduler, builder),
            DECLARE_GET_FIELD(t_AbstractScheduler, selector),
            DECLARE_GET_FIELD(t_AbstractScheduler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AbstractScheduler__methods_[] = {
            DECLARE_METHOD(t_AbstractScheduler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractScheduler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AbstractScheduler, of_, METH_VARARGS),
            DECLARE_METHOD(t_AbstractScheduler, generate, METH_O),
            DECLARE_METHOD(t_AbstractScheduler, getBuilder, METH_NOARGS),
            DECLARE_METHOD(t_AbstractScheduler, getSelector, METH_NOARGS),
            DECLARE_METHOD(t_AbstractScheduler, init, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AbstractScheduler)[] = {
            { Py_tp_methods, t_AbstractScheduler__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_AbstractScheduler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AbstractScheduler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AbstractScheduler, t_AbstractScheduler, AbstractScheduler);
          PyObject *t_AbstractScheduler::wrap_Object(const AbstractScheduler& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractScheduler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractScheduler *self = (t_AbstractScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_AbstractScheduler::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_AbstractScheduler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_AbstractScheduler *self = (t_AbstractScheduler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_AbstractScheduler::install(PyObject *module)
          {
            installType(&PY_TYPE(AbstractScheduler), &PY_TYPE_DEF(AbstractScheduler), module, "AbstractScheduler", 0);
          }

          void t_AbstractScheduler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractScheduler), "class_", make_descriptor(AbstractScheduler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractScheduler), "wrapfn_", make_descriptor(t_AbstractScheduler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractScheduler), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AbstractScheduler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AbstractScheduler::initializeClass, 1)))
              return NULL;
            return t_AbstractScheduler::wrap_Object(AbstractScheduler(((t_AbstractScheduler *) arg)->object.this$));
          }
          static PyObject *t_AbstractScheduler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AbstractScheduler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_AbstractScheduler_of_(t_AbstractScheduler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_AbstractScheduler_generate(t_AbstractScheduler *self, PyObject *arg)
          {
            ::java::util::Map a0((jobject) NULL);
            PyTypeObject **p0;
            ::java::util::SortedSet result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::Map::initializeClass, &a0, &p0, ::java::util::t_Map::parameters_))
            {
              OBJ_CALL(result = self->object.generate(a0));
              return ::java::util::t_SortedSet::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "generate", arg);
            return NULL;
          }

          static PyObject *t_AbstractScheduler_getBuilder(t_AbstractScheduler *self)
          {
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder result((jobject) NULL);
            OBJ_CALL(result = self->object.getBuilder());
            return ::org::orekit::estimation::measurements::generation::t_MeasurementBuilder::wrap_Object(result, self->parameters[0]);
          }

          static PyObject *t_AbstractScheduler_getSelector(t_AbstractScheduler *self)
          {
            ::org::orekit::time::DatesSelector result((jobject) NULL);
            OBJ_CALL(result = self->object.getSelector());
            return ::org::orekit::time::t_DatesSelector::wrap_Object(result);
          }

          static PyObject *t_AbstractScheduler_init(t_AbstractScheduler *self, PyObject *args)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.init(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }
          static PyObject *t_AbstractScheduler_get__parameters_(t_AbstractScheduler *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_AbstractScheduler_get__builder(t_AbstractScheduler *self, void *data)
          {
            ::org::orekit::estimation::measurements::generation::MeasurementBuilder value((jobject) NULL);
            OBJ_CALL(value = self->object.getBuilder());
            return ::org::orekit::estimation::measurements::generation::t_MeasurementBuilder::wrap_Object(value);
          }

          static PyObject *t_AbstractScheduler_get__selector(t_AbstractScheduler *self, void *data)
          {
            ::org::orekit::time::DatesSelector value((jobject) NULL);
            OBJ_CALL(value = self->object.getSelector());
            return ::org::orekit::time::t_DatesSelector::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/integration/FieldUnivariateIntegrator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/analysis/CalculusFieldUnivariateFunction.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace integration {

        ::java::lang::Class *FieldUnivariateIntegrator::class$ = NULL;
        jmethodID *FieldUnivariateIntegrator::mids$ = NULL;
        bool FieldUnivariateIntegrator::live$ = false;

        jclass FieldUnivariateIntegrator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/integration/FieldUnivariateIntegrator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAbsoluteAccuracy_557b8123390d8d0c] = env->getMethodID(cls, "getAbsoluteAccuracy", "()D");
            mids$[mid_getEvaluations_412668abc8d889e9] = env->getMethodID(cls, "getEvaluations", "()I");
            mids$[mid_getIterations_412668abc8d889e9] = env->getMethodID(cls, "getIterations", "()I");
            mids$[mid_getMaximalIterationCount_412668abc8d889e9] = env->getMethodID(cls, "getMaximalIterationCount", "()I");
            mids$[mid_getMinimalIterationCount_412668abc8d889e9] = env->getMethodID(cls, "getMinimalIterationCount", "()I");
            mids$[mid_getRelativeAccuracy_557b8123390d8d0c] = env->getMethodID(cls, "getRelativeAccuracy", "()D");
            mids$[mid_integrate_febca2424e26c993] = env->getMethodID(cls, "integrate", "(ILorg/hipparchus/analysis/CalculusFieldUnivariateFunction;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jdouble FieldUnivariateIntegrator::getAbsoluteAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getAbsoluteAccuracy_557b8123390d8d0c]);
        }

        jint FieldUnivariateIntegrator::getEvaluations() const
        {
          return env->callIntMethod(this$, mids$[mid_getEvaluations_412668abc8d889e9]);
        }

        jint FieldUnivariateIntegrator::getIterations() const
        {
          return env->callIntMethod(this$, mids$[mid_getIterations_412668abc8d889e9]);
        }

        jint FieldUnivariateIntegrator::getMaximalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMaximalIterationCount_412668abc8d889e9]);
        }

        jint FieldUnivariateIntegrator::getMinimalIterationCount() const
        {
          return env->callIntMethod(this$, mids$[mid_getMinimalIterationCount_412668abc8d889e9]);
        }

        jdouble FieldUnivariateIntegrator::getRelativeAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getRelativeAccuracy_557b8123390d8d0c]);
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateIntegrator::integrate(jint a0, const ::org::hipparchus::analysis::CalculusFieldUnivariateFunction & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_integrate_febca2424e26c993], a0, a1.this$, a2.this$, a3.this$));
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
      namespace integration {
        static PyObject *t_FieldUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateIntegrator_of_(t_FieldUnivariateIntegrator *self, PyObject *args);
        static PyObject *t_FieldUnivariateIntegrator_getAbsoluteAccuracy(t_FieldUnivariateIntegrator *self);
        static PyObject *t_FieldUnivariateIntegrator_getEvaluations(t_FieldUnivariateIntegrator *self);
        static PyObject *t_FieldUnivariateIntegrator_getIterations(t_FieldUnivariateIntegrator *self);
        static PyObject *t_FieldUnivariateIntegrator_getMaximalIterationCount(t_FieldUnivariateIntegrator *self);
        static PyObject *t_FieldUnivariateIntegrator_getMinimalIterationCount(t_FieldUnivariateIntegrator *self);
        static PyObject *t_FieldUnivariateIntegrator_getRelativeAccuracy(t_FieldUnivariateIntegrator *self);
        static PyObject *t_FieldUnivariateIntegrator_integrate(t_FieldUnivariateIntegrator *self, PyObject *args);
        static PyObject *t_FieldUnivariateIntegrator_get__absoluteAccuracy(t_FieldUnivariateIntegrator *self, void *data);
        static PyObject *t_FieldUnivariateIntegrator_get__evaluations(t_FieldUnivariateIntegrator *self, void *data);
        static PyObject *t_FieldUnivariateIntegrator_get__iterations(t_FieldUnivariateIntegrator *self, void *data);
        static PyObject *t_FieldUnivariateIntegrator_get__maximalIterationCount(t_FieldUnivariateIntegrator *self, void *data);
        static PyObject *t_FieldUnivariateIntegrator_get__minimalIterationCount(t_FieldUnivariateIntegrator *self, void *data);
        static PyObject *t_FieldUnivariateIntegrator_get__relativeAccuracy(t_FieldUnivariateIntegrator *self, void *data);
        static PyObject *t_FieldUnivariateIntegrator_get__parameters_(t_FieldUnivariateIntegrator *self, void *data);
        static PyGetSetDef t_FieldUnivariateIntegrator__fields_[] = {
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, absoluteAccuracy),
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, evaluations),
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, iterations),
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, maximalIterationCount),
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, minimalIterationCount),
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, relativeAccuracy),
          DECLARE_GET_FIELD(t_FieldUnivariateIntegrator, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldUnivariateIntegrator__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateIntegrator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, getAbsoluteAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, getEvaluations, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, getIterations, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, getMaximalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, getMinimalIterationCount, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, getRelativeAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateIntegrator, integrate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateIntegrator)[] = {
          { Py_tp_methods, t_FieldUnivariateIntegrator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FieldUnivariateIntegrator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateIntegrator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateIntegrator, t_FieldUnivariateIntegrator, FieldUnivariateIntegrator);
        PyObject *t_FieldUnivariateIntegrator::wrap_Object(const FieldUnivariateIntegrator& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateIntegrator::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateIntegrator *self = (t_FieldUnivariateIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldUnivariateIntegrator::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateIntegrator::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateIntegrator *self = (t_FieldUnivariateIntegrator *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldUnivariateIntegrator::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateIntegrator), &PY_TYPE_DEF(FieldUnivariateIntegrator), module, "FieldUnivariateIntegrator", 0);
        }

        void t_FieldUnivariateIntegrator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateIntegrator), "class_", make_descriptor(FieldUnivariateIntegrator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateIntegrator), "wrapfn_", make_descriptor(t_FieldUnivariateIntegrator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateIntegrator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateIntegrator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateIntegrator::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateIntegrator::wrap_Object(FieldUnivariateIntegrator(((t_FieldUnivariateIntegrator *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateIntegrator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateIntegrator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateIntegrator_of_(t_FieldUnivariateIntegrator *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FieldUnivariateIntegrator_getAbsoluteAccuracy(t_FieldUnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FieldUnivariateIntegrator_getEvaluations(t_FieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getEvaluations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldUnivariateIntegrator_getIterations(t_FieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getIterations());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldUnivariateIntegrator_getMaximalIterationCount(t_FieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldUnivariateIntegrator_getMinimalIterationCount(t_FieldUnivariateIntegrator *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_FieldUnivariateIntegrator_getRelativeAccuracy(t_FieldUnivariateIntegrator *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_FieldUnivariateIntegrator_integrate(t_FieldUnivariateIntegrator *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::analysis::CalculusFieldUnivariateFunction a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::CalculusFieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "IKKK", ::org::hipparchus::analysis::CalculusFieldUnivariateFunction::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::analysis::t_CalculusFieldUnivariateFunction::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.integrate(a0, a1, a2, a3));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "integrate", args);
          return NULL;
        }
        static PyObject *t_FieldUnivariateIntegrator_get__parameters_(t_FieldUnivariateIntegrator *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldUnivariateIntegrator_get__absoluteAccuracy(t_FieldUnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getAbsoluteAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FieldUnivariateIntegrator_get__evaluations(t_FieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getEvaluations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateIntegrator_get__iterations(t_FieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getIterations());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateIntegrator_get__maximalIterationCount(t_FieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMaximalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateIntegrator_get__minimalIterationCount(t_FieldUnivariateIntegrator *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getMinimalIterationCount());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateIntegrator_get__relativeAccuracy(t_FieldUnivariateIntegrator *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getRelativeAccuracy());
          return PyFloat_FromDouble((double) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader.h"
#include "java/io/IOException.h"
#include "java/text/ParseException.h"
#include "java/io/InputStream.h"
#include "java/util/SortedSet.h"
#include "org/orekit/errors/OrekitException.h"
#include "org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader$LineParameters.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {

            ::java::lang::Class *CssiSpaceWeatherDataLoader::class$ = NULL;
            jmethodID *CssiSpaceWeatherDataLoader::mids$ = NULL;
            bool CssiSpaceWeatherDataLoader::live$ = false;

            jclass CssiSpaceWeatherDataLoader::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/models/earth/atmosphere/data/CssiSpaceWeatherDataLoader");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_3e3301925c0131d4] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScale;)V");
                mids$[mid_getDataSet_c6b6a992db588a51] = env->getMethodID(cls, "getDataSet", "()Ljava/util/SortedSet;");
                mids$[mid_getLastDailyPredictedDate_7a97f7e149e79afb] = env->getMethodID(cls, "getLastDailyPredictedDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getLastObservedDate_7a97f7e149e79afb] = env->getMethodID(cls, "getLastObservedDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_loadData_15770e8d8949a557] = env->getMethodID(cls, "loadData", "(Ljava/io/InputStream;Ljava/lang/String;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CssiSpaceWeatherDataLoader::CssiSpaceWeatherDataLoader(const ::org::orekit::time::TimeScale & a0) : ::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader(env->newObject(initializeClass, &mids$, mid_init$_3e3301925c0131d4, a0.this$)) {}

            ::java::util::SortedSet CssiSpaceWeatherDataLoader::getDataSet() const
            {
              return ::java::util::SortedSet(env->callObjectMethod(this$, mids$[mid_getDataSet_c6b6a992db588a51]));
            }

            ::org::orekit::time::AbsoluteDate CssiSpaceWeatherDataLoader::getLastDailyPredictedDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getLastDailyPredictedDate_7a97f7e149e79afb]));
            }

            ::org::orekit::time::AbsoluteDate CssiSpaceWeatherDataLoader::getLastObservedDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getLastObservedDate_7a97f7e149e79afb]));
            }

            void CssiSpaceWeatherDataLoader::loadData(const ::java::io::InputStream & a0, const ::java::lang::String & a1) const
            {
              env->callVoidMethod(this$, mids$[mid_loadData_15770e8d8949a557], a0.this$, a1.this$);
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
    namespace models {
      namespace earth {
        namespace atmosphere {
          namespace data {
            static PyObject *t_CssiSpaceWeatherDataLoader_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CssiSpaceWeatherDataLoader_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CssiSpaceWeatherDataLoader_of_(t_CssiSpaceWeatherDataLoader *self, PyObject *args);
            static int t_CssiSpaceWeatherDataLoader_init_(t_CssiSpaceWeatherDataLoader *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CssiSpaceWeatherDataLoader_getDataSet(t_CssiSpaceWeatherDataLoader *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherDataLoader_getLastDailyPredictedDate(t_CssiSpaceWeatherDataLoader *self);
            static PyObject *t_CssiSpaceWeatherDataLoader_getLastObservedDate(t_CssiSpaceWeatherDataLoader *self);
            static PyObject *t_CssiSpaceWeatherDataLoader_loadData(t_CssiSpaceWeatherDataLoader *self, PyObject *args);
            static PyObject *t_CssiSpaceWeatherDataLoader_get__dataSet(t_CssiSpaceWeatherDataLoader *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader_get__lastDailyPredictedDate(t_CssiSpaceWeatherDataLoader *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader_get__lastObservedDate(t_CssiSpaceWeatherDataLoader *self, void *data);
            static PyObject *t_CssiSpaceWeatherDataLoader_get__parameters_(t_CssiSpaceWeatherDataLoader *self, void *data);
            static PyGetSetDef t_CssiSpaceWeatherDataLoader__fields_[] = {
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader, dataSet),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader, lastDailyPredictedDate),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader, lastObservedDate),
              DECLARE_GET_FIELD(t_CssiSpaceWeatherDataLoader, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CssiSpaceWeatherDataLoader__methods_[] = {
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, of_, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, getDataSet, METH_VARARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, getLastDailyPredictedDate, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, getLastObservedDate, METH_NOARGS),
              DECLARE_METHOD(t_CssiSpaceWeatherDataLoader, loadData, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CssiSpaceWeatherDataLoader)[] = {
              { Py_tp_methods, t_CssiSpaceWeatherDataLoader__methods_ },
              { Py_tp_init, (void *) t_CssiSpaceWeatherDataLoader_init_ },
              { Py_tp_getset, t_CssiSpaceWeatherDataLoader__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CssiSpaceWeatherDataLoader)[] = {
              &PY_TYPE_DEF(::org::orekit::models::earth::atmosphere::data::AbstractSolarActivityDataLoader),
              NULL
            };

            DEFINE_TYPE(CssiSpaceWeatherDataLoader, t_CssiSpaceWeatherDataLoader, CssiSpaceWeatherDataLoader);
            PyObject *t_CssiSpaceWeatherDataLoader::wrap_Object(const CssiSpaceWeatherDataLoader& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CssiSpaceWeatherDataLoader::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CssiSpaceWeatherDataLoader *self = (t_CssiSpaceWeatherDataLoader *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CssiSpaceWeatherDataLoader::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CssiSpaceWeatherDataLoader::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CssiSpaceWeatherDataLoader *self = (t_CssiSpaceWeatherDataLoader *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CssiSpaceWeatherDataLoader::install(PyObject *module)
            {
              installType(&PY_TYPE(CssiSpaceWeatherDataLoader), &PY_TYPE_DEF(CssiSpaceWeatherDataLoader), module, "CssiSpaceWeatherDataLoader", 0);
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherDataLoader), "LineParameters", make_descriptor(&PY_TYPE_DEF(CssiSpaceWeatherDataLoader$LineParameters)));
            }

            void t_CssiSpaceWeatherDataLoader::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherDataLoader), "class_", make_descriptor(CssiSpaceWeatherDataLoader::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherDataLoader), "wrapfn_", make_descriptor(t_CssiSpaceWeatherDataLoader::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CssiSpaceWeatherDataLoader), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CssiSpaceWeatherDataLoader::initializeClass, 1)))
                return NULL;
              return t_CssiSpaceWeatherDataLoader::wrap_Object(CssiSpaceWeatherDataLoader(((t_CssiSpaceWeatherDataLoader *) arg)->object.this$));
            }
            static PyObject *t_CssiSpaceWeatherDataLoader_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CssiSpaceWeatherDataLoader::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_of_(t_CssiSpaceWeatherDataLoader *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_CssiSpaceWeatherDataLoader_init_(t_CssiSpaceWeatherDataLoader *self, PyObject *args, PyObject *kwds)
            {
              ::org::orekit::time::TimeScale a0((jobject) NULL);
              CssiSpaceWeatherDataLoader object((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::time::TimeScale::initializeClass, &a0))
              {
                INT_CALL(object = CssiSpaceWeatherDataLoader(a0));
                self->object = object;
                self->parameters[0] = ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_getDataSet(t_CssiSpaceWeatherDataLoader *self, PyObject *args)
            {
              ::java::util::SortedSet result((jobject) NULL);

              if (!parseArgs(args, ""))
              {
                OBJ_CALL(result = self->object.getDataSet());
                return ::java::util::t_SortedSet::wrap_Object(result, ::org::orekit::models::earth::atmosphere::data::PY_TYPE(CssiSpaceWeatherDataLoader$LineParameters));
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherDataLoader), (PyObject *) self, "getDataSet", args, 2);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_getLastDailyPredictedDate(t_CssiSpaceWeatherDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getLastDailyPredictedDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_getLastObservedDate(t_CssiSpaceWeatherDataLoader *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getLastObservedDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_loadData(t_CssiSpaceWeatherDataLoader *self, PyObject *args)
            {
              ::java::io::InputStream a0((jobject) NULL);
              ::java::lang::String a1((jobject) NULL);

              if (!parseArgs(args, "ks", ::java::io::InputStream::initializeClass, &a0, &a1))
              {
                OBJ_CALL(self->object.loadData(a0, a1));
                Py_RETURN_NONE;
              }

              return callSuper(PY_TYPE(CssiSpaceWeatherDataLoader), (PyObject *) self, "loadData", args, 2);
            }
            static PyObject *t_CssiSpaceWeatherDataLoader_get__parameters_(t_CssiSpaceWeatherDataLoader *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_get__dataSet(t_CssiSpaceWeatherDataLoader *self, void *data)
            {
              ::java::util::SortedSet value((jobject) NULL);
              OBJ_CALL(value = self->object.getDataSet());
              return ::java::util::t_SortedSet::wrap_Object(value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_get__lastDailyPredictedDate(t_CssiSpaceWeatherDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getLastDailyPredictedDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_CssiSpaceWeatherDataLoader_get__lastObservedDate(t_CssiSpaceWeatherDataLoader *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getLastObservedDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/FieldBivariateFunction.h"
#include "org/hipparchus/analysis/CalculusFieldBivariateFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/Field.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {

      ::java::lang::Class *FieldBivariateFunction::class$ = NULL;
      jmethodID *FieldBivariateFunction::mids$ = NULL;
      bool FieldBivariateFunction::live$ = false;

      jclass FieldBivariateFunction::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/analysis/FieldBivariateFunction");

          mids$ = new jmethodID[max_mid];
          mids$[mid_toCalculusFieldBivariateFunction_3a001dea9816ebce] = env->getMethodID(cls, "toCalculusFieldBivariateFunction", "(Lorg/hipparchus/Field;)Lorg/hipparchus/analysis/CalculusFieldBivariateFunction;");
          mids$[mid_value_d5f58731bcb8a011] = env->getMethodID(cls, "value", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::analysis::CalculusFieldBivariateFunction FieldBivariateFunction::toCalculusFieldBivariateFunction(const ::org::hipparchus::Field & a0) const
      {
        return ::org::hipparchus::analysis::CalculusFieldBivariateFunction(env->callObjectMethod(this$, mids$[mid_toCalculusFieldBivariateFunction_3a001dea9816ebce], a0.this$));
      }

      ::org::hipparchus::CalculusFieldElement FieldBivariateFunction::value(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1) const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_value_d5f58731bcb8a011], a0.this$, a1.this$));
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
      static PyObject *t_FieldBivariateFunction_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBivariateFunction_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldBivariateFunction_toCalculusFieldBivariateFunction(t_FieldBivariateFunction *self, PyObject *arg);
      static PyObject *t_FieldBivariateFunction_value(t_FieldBivariateFunction *self, PyObject *args);

      static PyMethodDef t_FieldBivariateFunction__methods_[] = {
        DECLARE_METHOD(t_FieldBivariateFunction, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBivariateFunction, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldBivariateFunction, toCalculusFieldBivariateFunction, METH_O),
        DECLARE_METHOD(t_FieldBivariateFunction, value, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldBivariateFunction)[] = {
        { Py_tp_methods, t_FieldBivariateFunction__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldBivariateFunction)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldBivariateFunction, t_FieldBivariateFunction, FieldBivariateFunction);

      void t_FieldBivariateFunction::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldBivariateFunction), &PY_TYPE_DEF(FieldBivariateFunction), module, "FieldBivariateFunction", 0);
      }

      void t_FieldBivariateFunction::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBivariateFunction), "class_", make_descriptor(FieldBivariateFunction::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBivariateFunction), "wrapfn_", make_descriptor(t_FieldBivariateFunction::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldBivariateFunction), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldBivariateFunction_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldBivariateFunction::initializeClass, 1)))
          return NULL;
        return t_FieldBivariateFunction::wrap_Object(FieldBivariateFunction(((t_FieldBivariateFunction *) arg)->object.this$));
      }
      static PyObject *t_FieldBivariateFunction_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldBivariateFunction::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldBivariateFunction_toCalculusFieldBivariateFunction(t_FieldBivariateFunction *self, PyObject *arg)
      {
        ::org::hipparchus::Field a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::analysis::CalculusFieldBivariateFunction result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::Field::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_))
        {
          OBJ_CALL(result = self->object.toCalculusFieldBivariateFunction(a0));
          return ::org::hipparchus::analysis::t_CalculusFieldBivariateFunction::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "toCalculusFieldBivariateFunction", arg);
        return NULL;
      }

      static PyObject *t_FieldBivariateFunction_value(t_FieldBivariateFunction *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

        if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.value(a0, a1));
          return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "value", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/FrameAlignedProvider.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FrameAlignedProvider::class$ = NULL;
      jmethodID *FrameAlignedProvider::mids$ = NULL;
      bool FrameAlignedProvider::live$ = false;

      jclass FrameAlignedProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FrameAlignedProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_cffe2196131a8abb] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;)V");
          mids$[mid_init$_535d1f91a93c8b4d] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;)V");
          mids$[mid_init$_5aed8d3c9ea07a80] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Rotation;Lorg/orekit/frames/Frame;)V");
          mids$[mid_getAttitude_1306ac39e1d2de3f] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
          mids$[mid_getAttitude_77e3383de01f3e48] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
          mids$[mid_getAttitudeRotation_85bb0a19efdadc1d] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");
          mids$[mid_getAttitudeRotation_5c74bfcf2d42825a] = env->getMethodID(cls, "getAttitudeRotation", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
          mids$[mid_of_cdc4e41e4b95cd96] = env->getStaticMethodID(cls, "of", "(Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/AttitudeProvider;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FrameAlignedProvider::FrameAlignedProvider(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cffe2196131a8abb, a0.this$)) {}

      FrameAlignedProvider::FrameAlignedProvider(const ::org::orekit::frames::Frame & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_535d1f91a93c8b4d, a0.this$)) {}

      FrameAlignedProvider::FrameAlignedProvider(const ::org::hipparchus::geometry::euclidean::threed::Rotation & a0, const ::org::orekit::frames::Frame & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5aed8d3c9ea07a80, a0.this$, a1.this$)) {}

      ::org::orekit::attitudes::Attitude FrameAlignedProvider::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_1306ac39e1d2de3f], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::FieldAttitude FrameAlignedProvider::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_77e3383de01f3e48], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::FieldRotation FrameAlignedProvider::getAttitudeRotation(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::FieldRotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_85bb0a19efdadc1d], a0.this$, a1.this$, a2.this$));
      }

      ::org::hipparchus::geometry::euclidean::threed::Rotation FrameAlignedProvider::getAttitudeRotation(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
      {
        return ::org::hipparchus::geometry::euclidean::threed::Rotation(env->callObjectMethod(this$, mids$[mid_getAttitudeRotation_5c74bfcf2d42825a], a0.this$, a1.this$, a2.this$));
      }

      ::org::orekit::attitudes::AttitudeProvider FrameAlignedProvider::of(const ::org::orekit::frames::Frame & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::attitudes::AttitudeProvider(env->callStaticObjectMethod(cls, mids$[mid_of_cdc4e41e4b95cd96], a0.this$));
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
      static PyObject *t_FrameAlignedProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FrameAlignedProvider_instance_(PyTypeObject *type, PyObject *arg);
      static int t_FrameAlignedProvider_init_(t_FrameAlignedProvider *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FrameAlignedProvider_getAttitude(t_FrameAlignedProvider *self, PyObject *args);
      static PyObject *t_FrameAlignedProvider_getAttitudeRotation(t_FrameAlignedProvider *self, PyObject *args);
      static PyObject *t_FrameAlignedProvider_of(PyTypeObject *type, PyObject *arg);

      static PyMethodDef t_FrameAlignedProvider__methods_[] = {
        DECLARE_METHOD(t_FrameAlignedProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FrameAlignedProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FrameAlignedProvider, getAttitude, METH_VARARGS),
        DECLARE_METHOD(t_FrameAlignedProvider, getAttitudeRotation, METH_VARARGS),
        DECLARE_METHOD(t_FrameAlignedProvider, of, METH_O | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FrameAlignedProvider)[] = {
        { Py_tp_methods, t_FrameAlignedProvider__methods_ },
        { Py_tp_init, (void *) t_FrameAlignedProvider_init_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FrameAlignedProvider)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FrameAlignedProvider, t_FrameAlignedProvider, FrameAlignedProvider);

      void t_FrameAlignedProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(FrameAlignedProvider), &PY_TYPE_DEF(FrameAlignedProvider), module, "FrameAlignedProvider", 0);
      }

      void t_FrameAlignedProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAlignedProvider), "class_", make_descriptor(FrameAlignedProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAlignedProvider), "wrapfn_", make_descriptor(t_FrameAlignedProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FrameAlignedProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FrameAlignedProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FrameAlignedProvider::initializeClass, 1)))
          return NULL;
        return t_FrameAlignedProvider::wrap_Object(FrameAlignedProvider(((t_FrameAlignedProvider *) arg)->object.this$));
      }
      static PyObject *t_FrameAlignedProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FrameAlignedProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_FrameAlignedProvider_init_(t_FrameAlignedProvider *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
            FrameAlignedProvider object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0))
            {
              INT_CALL(object = FrameAlignedProvider(a0));
              self->object = object;
              break;
            }
          }
          {
            ::org::orekit::frames::Frame a0((jobject) NULL);
            FrameAlignedProvider object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
            {
              INT_CALL(object = FrameAlignedProvider(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::geometry::euclidean::threed::Rotation a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            FrameAlignedProvider object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1))
            {
              INT_CALL(object = FrameAlignedProvider(a0, a1));
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

      static PyObject *t_FrameAlignedProvider_getAttitude(t_FrameAlignedProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
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
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
        return NULL;
      }

      static PyObject *t_FrameAlignedProvider_getAttitudeRotation(t_FrameAlignedProvider *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
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
        }

        PyErr_SetArgsError((PyObject *) self, "getAttitudeRotation", args);
        return NULL;
      }

      static PyObject *t_FrameAlignedProvider_of(PyTypeObject *type, PyObject *arg)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::attitudes::AttitudeProvider result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::frames::Frame::initializeClass, &a0))
        {
          OBJ_CALL(result = ::org::orekit::attitudes::FrameAlignedProvider::of(a0));
          return ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "of", arg);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3Ephemeris.h"
#include "java/util/List.h"
#include "org/orekit/files/general/EphemerisFile$SatelliteEphemeris.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/files/sp3/SP3Segment.h"
#include "org/orekit/utils/CartesianDerivativesFilter.h"
#include "org/orekit/files/sp3/SP3Coordinate.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Ephemeris::class$ = NULL;
        jmethodID *SP3Ephemeris::mids$ = NULL;
        bool SP3Ephemeris::live$ = false;

        jclass SP3Ephemeris::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Ephemeris");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d20f1b9933bf6131] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;DLorg/orekit/frames/Frame;ILorg/orekit/utils/CartesianDerivativesFilter;)V");
            mids$[mid_addCoordinate_3b8f026ef20f7360] = env->getMethodID(cls, "addCoordinate", "(Lorg/orekit/files/sp3/SP3Coordinate;D)V");
            mids$[mid_getAvailableDerivatives_6c4898d6ec0c3837] = env->getMethodID(cls, "getAvailableDerivatives", "()Lorg/orekit/utils/CartesianDerivativesFilter;");
            mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getId_3cffd47377eca18a] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
            mids$[mid_getInterpolationSamples_412668abc8d889e9] = env->getMethodID(cls, "getInterpolationSamples", "()I");
            mids$[mid_getMu_557b8123390d8d0c] = env->getMethodID(cls, "getMu", "()D");
            mids$[mid_getSegments_0d9551367f7ecdef] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
            mids$[mid_getStart_7a97f7e149e79afb] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getStop_7a97f7e149e79afb] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3Ephemeris::SP3Ephemeris(const ::java::lang::String & a0, jdouble a1, const ::org::orekit::frames::Frame & a2, jint a3, const ::org::orekit::utils::CartesianDerivativesFilter & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d20f1b9933bf6131, a0.this$, a1, a2.this$, a3, a4.this$)) {}

        void SP3Ephemeris::addCoordinate(const ::org::orekit::files::sp3::SP3Coordinate & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addCoordinate_3b8f026ef20f7360], a0.this$, a1);
        }

        ::org::orekit::utils::CartesianDerivativesFilter SP3Ephemeris::getAvailableDerivatives() const
        {
          return ::org::orekit::utils::CartesianDerivativesFilter(env->callObjectMethod(this$, mids$[mid_getAvailableDerivatives_6c4898d6ec0c3837]));
        }

        ::org::orekit::frames::Frame SP3Ephemeris::getFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getFrame_6c9bc0a928c56d4e]));
        }

        ::java::lang::String SP3Ephemeris::getId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_3cffd47377eca18a]));
        }

        jint SP3Ephemeris::getInterpolationSamples() const
        {
          return env->callIntMethod(this$, mids$[mid_getInterpolationSamples_412668abc8d889e9]);
        }

        jdouble SP3Ephemeris::getMu() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMu_557b8123390d8d0c]);
        }

        ::java::util::List SP3Ephemeris::getSegments() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_0d9551367f7ecdef]));
        }

        ::org::orekit::time::AbsoluteDate SP3Ephemeris::getStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_7a97f7e149e79afb]));
        }

        ::org::orekit::time::AbsoluteDate SP3Ephemeris::getStop() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_7a97f7e149e79afb]));
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
      namespace sp3 {
        static PyObject *t_SP3Ephemeris_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Ephemeris_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SP3Ephemeris_init_(t_SP3Ephemeris *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3Ephemeris_addCoordinate(t_SP3Ephemeris *self, PyObject *args);
        static PyObject *t_SP3Ephemeris_getAvailableDerivatives(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getFrame(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getId(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getInterpolationSamples(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getMu(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getSegments(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getStart(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_getStop(t_SP3Ephemeris *self);
        static PyObject *t_SP3Ephemeris_get__availableDerivatives(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__frame(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__id(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__interpolationSamples(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__mu(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__segments(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__start(t_SP3Ephemeris *self, void *data);
        static PyObject *t_SP3Ephemeris_get__stop(t_SP3Ephemeris *self, void *data);
        static PyGetSetDef t_SP3Ephemeris__fields_[] = {
          DECLARE_GET_FIELD(t_SP3Ephemeris, availableDerivatives),
          DECLARE_GET_FIELD(t_SP3Ephemeris, frame),
          DECLARE_GET_FIELD(t_SP3Ephemeris, id),
          DECLARE_GET_FIELD(t_SP3Ephemeris, interpolationSamples),
          DECLARE_GET_FIELD(t_SP3Ephemeris, mu),
          DECLARE_GET_FIELD(t_SP3Ephemeris, segments),
          DECLARE_GET_FIELD(t_SP3Ephemeris, start),
          DECLARE_GET_FIELD(t_SP3Ephemeris, stop),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3Ephemeris__methods_[] = {
          DECLARE_METHOD(t_SP3Ephemeris, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Ephemeris, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Ephemeris, addCoordinate, METH_VARARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getAvailableDerivatives, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getFrame, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getId, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getInterpolationSamples, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getMu, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getSegments, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getStart, METH_NOARGS),
          DECLARE_METHOD(t_SP3Ephemeris, getStop, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Ephemeris)[] = {
          { Py_tp_methods, t_SP3Ephemeris__methods_ },
          { Py_tp_init, (void *) t_SP3Ephemeris_init_ },
          { Py_tp_getset, t_SP3Ephemeris__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Ephemeris)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SP3Ephemeris, t_SP3Ephemeris, SP3Ephemeris);

        void t_SP3Ephemeris::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Ephemeris), &PY_TYPE_DEF(SP3Ephemeris), module, "SP3Ephemeris", 0);
        }

        void t_SP3Ephemeris::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Ephemeris), "class_", make_descriptor(SP3Ephemeris::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Ephemeris), "wrapfn_", make_descriptor(t_SP3Ephemeris::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Ephemeris), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SP3Ephemeris_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Ephemeris::initializeClass, 1)))
            return NULL;
          return t_SP3Ephemeris::wrap_Object(SP3Ephemeris(((t_SP3Ephemeris *) arg)->object.this$));
        }
        static PyObject *t_SP3Ephemeris_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Ephemeris::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SP3Ephemeris_init_(t_SP3Ephemeris *self, PyObject *args, PyObject *kwds)
        {
          ::java::lang::String a0((jobject) NULL);
          jdouble a1;
          ::org::orekit::frames::Frame a2((jobject) NULL);
          jint a3;
          ::org::orekit::utils::CartesianDerivativesFilter a4((jobject) NULL);
          PyTypeObject **p4;
          SP3Ephemeris object((jobject) NULL);

          if (!parseArgs(args, "sDkIK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::utils::CartesianDerivativesFilter::initializeClass, &a0, &a1, &a2, &a3, &a4, &p4, ::org::orekit::utils::t_CartesianDerivativesFilter::parameters_))
          {
            INT_CALL(object = SP3Ephemeris(a0, a1, a2, a3, a4));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SP3Ephemeris_addCoordinate(t_SP3Ephemeris *self, PyObject *args)
        {
          ::org::orekit::files::sp3::SP3Coordinate a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::orekit::files::sp3::SP3Coordinate::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.addCoordinate(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addCoordinate", args);
          return NULL;
        }

        static PyObject *t_SP3Ephemeris_getAvailableDerivatives(t_SP3Ephemeris *self)
        {
          ::org::orekit::utils::CartesianDerivativesFilter result((jobject) NULL);
          OBJ_CALL(result = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(result);
        }

        static PyObject *t_SP3Ephemeris_getFrame(t_SP3Ephemeris *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_SP3Ephemeris_getId(t_SP3Ephemeris *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getId());
          return j2p(result);
        }

        static PyObject *t_SP3Ephemeris_getInterpolationSamples(t_SP3Ephemeris *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_SP3Ephemeris_getMu(t_SP3Ephemeris *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMu());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Ephemeris_getSegments(t_SP3Ephemeris *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::files::sp3::PY_TYPE(SP3Segment));
        }

        static PyObject *t_SP3Ephemeris_getStart(t_SP3Ephemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SP3Ephemeris_getStop(t_SP3Ephemeris *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SP3Ephemeris_get__availableDerivatives(t_SP3Ephemeris *self, void *data)
        {
          ::org::orekit::utils::CartesianDerivativesFilter value((jobject) NULL);
          OBJ_CALL(value = self->object.getAvailableDerivatives());
          return ::org::orekit::utils::t_CartesianDerivativesFilter::wrap_Object(value);
        }

        static PyObject *t_SP3Ephemeris_get__frame(t_SP3Ephemeris *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }

        static PyObject *t_SP3Ephemeris_get__id(t_SP3Ephemeris *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getId());
          return j2p(value);
        }

        static PyObject *t_SP3Ephemeris_get__interpolationSamples(t_SP3Ephemeris *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getInterpolationSamples());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_SP3Ephemeris_get__mu(t_SP3Ephemeris *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMu());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SP3Ephemeris_get__segments(t_SP3Ephemeris *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getSegments());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_SP3Ephemeris_get__start(t_SP3Ephemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SP3Ephemeris_get__stop(t_SP3Ephemeris *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getStop());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "org/orekit/frames/ITRFVersion$Converter.h"
#include "java/lang/Class.h"
#include "org/orekit/frames/ITRFVersion.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {

      ::java::lang::Class *ITRFVersion::class$ = NULL;
      jmethodID *ITRFVersion::mids$ = NULL;
      bool ITRFVersion::live$ = false;
      ITRFVersion *ITRFVersion::ITRF_1988 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1989 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1990 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1991 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1992 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1993 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1994 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1996 = NULL;
      ITRFVersion *ITRFVersion::ITRF_1997 = NULL;
      ITRFVersion *ITRFVersion::ITRF_2000 = NULL;
      ITRFVersion *ITRFVersion::ITRF_2005 = NULL;
      ITRFVersion *ITRFVersion::ITRF_2008 = NULL;
      ITRFVersion *ITRFVersion::ITRF_2014 = NULL;
      ITRFVersion *ITRFVersion::ITRF_2020 = NULL;

      jclass ITRFVersion::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/frames/ITRFVersion");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getConverter_f04aa79ffaaf8456] = env->getStaticMethodID(cls, "getConverter", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/frames/ITRFVersion;)Lorg/orekit/frames/ITRFVersion$Converter;");
          mids$[mid_getConverter_bfb6aef9f29793c0] = env->getStaticMethodID(cls, "getConverter", "(Lorg/orekit/frames/ITRFVersion;Lorg/orekit/frames/ITRFVersion;Lorg/orekit/time/TimeScale;)Lorg/orekit/frames/ITRFVersion$Converter;");
          mids$[mid_getITRFVersion_64feea1c8a442fcc] = env->getStaticMethodID(cls, "getITRFVersion", "(Ljava/lang/String;)Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getITRFVersion_fd623a781f8f379f] = env->getStaticMethodID(cls, "getITRFVersion", "(I)Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getLast_b311296551ce8af2] = env->getStaticMethodID(cls, "getLast", "()Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
          mids$[mid_getYear_412668abc8d889e9] = env->getMethodID(cls, "getYear", "()I");
          mids$[mid_valueOf_64feea1c8a442fcc] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/frames/ITRFVersion;");
          mids$[mid_values_9eef3acac661cdfc] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/frames/ITRFVersion;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ITRF_1988 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1988", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1989 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1989", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1990 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1990", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1991 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1991", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1992 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1992", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1993 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1993", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1994 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1994", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1996 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1996", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_1997 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_1997", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_2000 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_2000", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_2005 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_2005", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_2008 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_2008", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_2014 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_2014", "Lorg/orekit/frames/ITRFVersion;"));
          ITRF_2020 = new ITRFVersion(env->getStaticObjectField(cls, "ITRF_2020", "Lorg/orekit/frames/ITRFVersion;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::frames::ITRFVersion$Converter ITRFVersion::getConverter(const ITRFVersion & a0, const ITRFVersion & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::ITRFVersion$Converter(env->callStaticObjectMethod(cls, mids$[mid_getConverter_f04aa79ffaaf8456], a0.this$, a1.this$));
      }

      ::org::orekit::frames::ITRFVersion$Converter ITRFVersion::getConverter(const ITRFVersion & a0, const ITRFVersion & a1, const ::org::orekit::time::TimeScale & a2)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::frames::ITRFVersion$Converter(env->callStaticObjectMethod(cls, mids$[mid_getConverter_bfb6aef9f29793c0], a0.this$, a1.this$, a2.this$));
      }

      ITRFVersion ITRFVersion::getITRFVersion(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ITRFVersion(env->callStaticObjectMethod(cls, mids$[mid_getITRFVersion_64feea1c8a442fcc], a0.this$));
      }

      ITRFVersion ITRFVersion::getITRFVersion(jint a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ITRFVersion(env->callStaticObjectMethod(cls, mids$[mid_getITRFVersion_fd623a781f8f379f], a0));
      }

      ITRFVersion ITRFVersion::getLast()
      {
        jclass cls = env->getClass(initializeClass);
        return ITRFVersion(env->callStaticObjectMethod(cls, mids$[mid_getLast_b311296551ce8af2]));
      }

      ::java::lang::String ITRFVersion::getName() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_3cffd47377eca18a]));
      }

      jint ITRFVersion::getYear() const
      {
        return env->callIntMethod(this$, mids$[mid_getYear_412668abc8d889e9]);
      }

      ITRFVersion ITRFVersion::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ITRFVersion(env->callStaticObjectMethod(cls, mids$[mid_valueOf_64feea1c8a442fcc], a0.this$));
      }

      JArray< ITRFVersion > ITRFVersion::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< ITRFVersion >(env->callStaticObjectMethod(cls, mids$[mid_values_9eef3acac661cdfc]));
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
      static PyObject *t_ITRFVersion_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ITRFVersion_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_ITRFVersion_of_(t_ITRFVersion *self, PyObject *args);
      static PyObject *t_ITRFVersion_getConverter(PyTypeObject *type, PyObject *args);
      static PyObject *t_ITRFVersion_getITRFVersion(PyTypeObject *type, PyObject *args);
      static PyObject *t_ITRFVersion_getLast(PyTypeObject *type);
      static PyObject *t_ITRFVersion_getName(t_ITRFVersion *self);
      static PyObject *t_ITRFVersion_getYear(t_ITRFVersion *self);
      static PyObject *t_ITRFVersion_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_ITRFVersion_values(PyTypeObject *type);
      static PyObject *t_ITRFVersion_get__last(t_ITRFVersion *self, void *data);
      static PyObject *t_ITRFVersion_get__name(t_ITRFVersion *self, void *data);
      static PyObject *t_ITRFVersion_get__year(t_ITRFVersion *self, void *data);
      static PyObject *t_ITRFVersion_get__parameters_(t_ITRFVersion *self, void *data);
      static PyGetSetDef t_ITRFVersion__fields_[] = {
        DECLARE_GET_FIELD(t_ITRFVersion, last),
        DECLARE_GET_FIELD(t_ITRFVersion, name),
        DECLARE_GET_FIELD(t_ITRFVersion, year),
        DECLARE_GET_FIELD(t_ITRFVersion, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_ITRFVersion__methods_[] = {
        DECLARE_METHOD(t_ITRFVersion, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion, of_, METH_VARARGS),
        DECLARE_METHOD(t_ITRFVersion, getConverter, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion, getITRFVersion, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion, getLast, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion, getName, METH_NOARGS),
        DECLARE_METHOD(t_ITRFVersion, getYear, METH_NOARGS),
        DECLARE_METHOD(t_ITRFVersion, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_ITRFVersion, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(ITRFVersion)[] = {
        { Py_tp_methods, t_ITRFVersion__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_ITRFVersion__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(ITRFVersion)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(ITRFVersion, t_ITRFVersion, ITRFVersion);
      PyObject *t_ITRFVersion::wrap_Object(const ITRFVersion& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ITRFVersion::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ITRFVersion *self = (t_ITRFVersion *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_ITRFVersion::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_ITRFVersion::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_ITRFVersion *self = (t_ITRFVersion *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_ITRFVersion::install(PyObject *module)
      {
        installType(&PY_TYPE(ITRFVersion), &PY_TYPE_DEF(ITRFVersion), module, "ITRFVersion", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "Converter", make_descriptor(&PY_TYPE_DEF(ITRFVersion$Converter)));
      }

      void t_ITRFVersion::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "class_", make_descriptor(ITRFVersion::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "wrapfn_", make_descriptor(t_ITRFVersion::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "boxfn_", make_descriptor(boxObject));
        env->getClass(ITRFVersion::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1988", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1988)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1989", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1989)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1990", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1990)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1991", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1991)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1992", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1992)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1993", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1993)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1994", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1994)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1996", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1996)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_1997", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_1997)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_2000", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_2000)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_2005", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_2005)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_2008", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_2008)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_2014", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_2014)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(ITRFVersion), "ITRF_2020", make_descriptor(t_ITRFVersion::wrap_Object(*ITRFVersion::ITRF_2020)));
      }

      static PyObject *t_ITRFVersion_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, ITRFVersion::initializeClass, 1)))
          return NULL;
        return t_ITRFVersion::wrap_Object(ITRFVersion(((t_ITRFVersion *) arg)->object.this$));
      }
      static PyObject *t_ITRFVersion_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, ITRFVersion::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_ITRFVersion_of_(t_ITRFVersion *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_ITRFVersion_getConverter(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ITRFVersion a0((jobject) NULL);
            PyTypeObject **p0;
            ITRFVersion a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::frames::ITRFVersion$Converter result((jobject) NULL);

            if (!parseArgs(args, "KK", ITRFVersion::initializeClass, ITRFVersion::initializeClass, &a0, &p0, t_ITRFVersion::parameters_, &a1, &p1, t_ITRFVersion::parameters_))
            {
              OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::getConverter(a0, a1));
              return ::org::orekit::frames::t_ITRFVersion$Converter::wrap_Object(result);
            }
          }
          break;
         case 3:
          {
            ITRFVersion a0((jobject) NULL);
            PyTypeObject **p0;
            ITRFVersion a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeScale a2((jobject) NULL);
            ::org::orekit::frames::ITRFVersion$Converter result((jobject) NULL);

            if (!parseArgs(args, "KKk", ITRFVersion::initializeClass, ITRFVersion::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &p0, t_ITRFVersion::parameters_, &a1, &p1, t_ITRFVersion::parameters_, &a2))
            {
              OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::getConverter(a0, a1, a2));
              return ::org::orekit::frames::t_ITRFVersion$Converter::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getConverter", args);
        return NULL;
      }

      static PyObject *t_ITRFVersion_getITRFVersion(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            ITRFVersion result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::getITRFVersion(a0));
              return t_ITRFVersion::wrap_Object(result);
            }
          }
          {
            jint a0;
            ITRFVersion result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::getITRFVersion(a0));
              return t_ITRFVersion::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "getITRFVersion", args);
        return NULL;
      }

      static PyObject *t_ITRFVersion_getLast(PyTypeObject *type)
      {
        ITRFVersion result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::getLast());
        return t_ITRFVersion::wrap_Object(result);
      }

      static PyObject *t_ITRFVersion_getName(t_ITRFVersion *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getName());
        return j2p(result);
      }

      static PyObject *t_ITRFVersion_getYear(t_ITRFVersion *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getYear());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_ITRFVersion_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        ITRFVersion result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::valueOf(a0));
          return t_ITRFVersion::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_ITRFVersion_values(PyTypeObject *type)
      {
        JArray< ITRFVersion > result((jobject) NULL);
        OBJ_CALL(result = ::org::orekit::frames::ITRFVersion::values());
        return JArray<jobject>(result.this$).wrap(t_ITRFVersion::wrap_jobject);
      }
      static PyObject *t_ITRFVersion_get__parameters_(t_ITRFVersion *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_ITRFVersion_get__last(t_ITRFVersion *self, void *data)
      {
        ITRFVersion value((jobject) NULL);
        OBJ_CALL(value = self->object.getLast());
        return t_ITRFVersion::wrap_Object(value);
      }

      static PyObject *t_ITRFVersion_get__name(t_ITRFVersion *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getName());
        return j2p(value);
      }

      static PyObject *t_ITRFVersion_get__year(t_ITRFVersion *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getYear());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *InterSatellitesPhase::class$ = NULL;
          jmethodID *InterSatellitesPhase::mids$ = NULL;
          bool InterSatellitesPhase::live$ = false;
          ::java::lang::String *InterSatellitesPhase::AMBIGUITY_NAME = NULL;
          ::java::lang::String *InterSatellitesPhase::MEASUREMENT_TYPE = NULL;

          jclass InterSatellitesPhase::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/InterSatellitesPhase");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_b8eeca3db8b2400e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/ObservableSatellite;Lorg/orekit/estimation/measurements/ObservableSatellite;Lorg/orekit/time/AbsoluteDate;DDDD)V");
              mids$[mid_getAmbiguityDriver_4194657b5e280ddc] = env->getMethodID(cls, "getAmbiguityDriver", "()Lorg/orekit/utils/ParameterDriver;");
              mids$[mid_getWavelength_557b8123390d8d0c] = env->getMethodID(cls, "getWavelength", "()D");
              mids$[mid_theoreticalEvaluationWithoutDerivatives_71d69ca0f7c280a7] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
              mids$[mid_theoreticalEvaluation_eae039ee8c8a4a4d] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              AMBIGUITY_NAME = new ::java::lang::String(env->getStaticObjectField(cls, "AMBIGUITY_NAME", "Ljava/lang/String;"));
              MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          InterSatellitesPhase::InterSatellitesPhase(const ::org::orekit::estimation::measurements::ObservableSatellite & a0, const ::org::orekit::estimation::measurements::ObservableSatellite & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) : ::org::orekit::estimation::measurements::AbstractMeasurement(env->newObject(initializeClass, &mids$, mid_init$_b8eeca3db8b2400e, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6)) {}

          ::org::orekit::utils::ParameterDriver InterSatellitesPhase::getAmbiguityDriver() const
          {
            return ::org::orekit::utils::ParameterDriver(env->callObjectMethod(this$, mids$[mid_getAmbiguityDriver_4194657b5e280ddc]));
          }

          jdouble InterSatellitesPhase::getWavelength() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getWavelength_557b8123390d8d0c]);
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
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_InterSatellitesPhase_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesPhase_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_InterSatellitesPhase_of_(t_InterSatellitesPhase *self, PyObject *args);
          static int t_InterSatellitesPhase_init_(t_InterSatellitesPhase *self, PyObject *args, PyObject *kwds);
          static PyObject *t_InterSatellitesPhase_getAmbiguityDriver(t_InterSatellitesPhase *self);
          static PyObject *t_InterSatellitesPhase_getWavelength(t_InterSatellitesPhase *self);
          static PyObject *t_InterSatellitesPhase_get__ambiguityDriver(t_InterSatellitesPhase *self, void *data);
          static PyObject *t_InterSatellitesPhase_get__wavelength(t_InterSatellitesPhase *self, void *data);
          static PyObject *t_InterSatellitesPhase_get__parameters_(t_InterSatellitesPhase *self, void *data);
          static PyGetSetDef t_InterSatellitesPhase__fields_[] = {
            DECLARE_GET_FIELD(t_InterSatellitesPhase, ambiguityDriver),
            DECLARE_GET_FIELD(t_InterSatellitesPhase, wavelength),
            DECLARE_GET_FIELD(t_InterSatellitesPhase, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_InterSatellitesPhase__methods_[] = {
            DECLARE_METHOD(t_InterSatellitesPhase, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesPhase, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_InterSatellitesPhase, of_, METH_VARARGS),
            DECLARE_METHOD(t_InterSatellitesPhase, getAmbiguityDriver, METH_NOARGS),
            DECLARE_METHOD(t_InterSatellitesPhase, getWavelength, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(InterSatellitesPhase)[] = {
            { Py_tp_methods, t_InterSatellitesPhase__methods_ },
            { Py_tp_init, (void *) t_InterSatellitesPhase_init_ },
            { Py_tp_getset, t_InterSatellitesPhase__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(InterSatellitesPhase)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::AbstractMeasurement),
            NULL
          };

          DEFINE_TYPE(InterSatellitesPhase, t_InterSatellitesPhase, InterSatellitesPhase);
          PyObject *t_InterSatellitesPhase::wrap_Object(const InterSatellitesPhase& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesPhase::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesPhase *self = (t_InterSatellitesPhase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_InterSatellitesPhase::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_InterSatellitesPhase::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_InterSatellitesPhase *self = (t_InterSatellitesPhase *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_InterSatellitesPhase::install(PyObject *module)
          {
            installType(&PY_TYPE(InterSatellitesPhase), &PY_TYPE_DEF(InterSatellitesPhase), module, "InterSatellitesPhase", 0);
          }

          void t_InterSatellitesPhase::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhase), "class_", make_descriptor(InterSatellitesPhase::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhase), "wrapfn_", make_descriptor(t_InterSatellitesPhase::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhase), "boxfn_", make_descriptor(boxObject));
            env->getClass(InterSatellitesPhase::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhase), "AMBIGUITY_NAME", make_descriptor(j2p(*InterSatellitesPhase::AMBIGUITY_NAME)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(InterSatellitesPhase), "MEASUREMENT_TYPE", make_descriptor(j2p(*InterSatellitesPhase::MEASUREMENT_TYPE)));
          }

          static PyObject *t_InterSatellitesPhase_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, InterSatellitesPhase::initializeClass, 1)))
              return NULL;
            return t_InterSatellitesPhase::wrap_Object(InterSatellitesPhase(((t_InterSatellitesPhase *) arg)->object.this$));
          }
          static PyObject *t_InterSatellitesPhase_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, InterSatellitesPhase::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_InterSatellitesPhase_of_(t_InterSatellitesPhase *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_InterSatellitesPhase_init_(t_InterSatellitesPhase *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::estimation::measurements::ObservableSatellite a0((jobject) NULL);
            ::org::orekit::estimation::measurements::ObservableSatellite a1((jobject) NULL);
            ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;
            InterSatellitesPhase object((jobject) NULL);

            if (!parseArgs(args, "kkkDDDD", ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              INT_CALL(object = InterSatellitesPhase(a0, a1, a2, a3, a4, a5, a6));
              self->object = object;
              self->parameters[0] = ::org::orekit::estimation::measurements::gnss::PY_TYPE(InterSatellitesPhase);
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_InterSatellitesPhase_getAmbiguityDriver(t_InterSatellitesPhase *self)
          {
            ::org::orekit::utils::ParameterDriver result((jobject) NULL);
            OBJ_CALL(result = self->object.getAmbiguityDriver());
            return ::org::orekit::utils::t_ParameterDriver::wrap_Object(result);
          }

          static PyObject *t_InterSatellitesPhase_getWavelength(t_InterSatellitesPhase *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getWavelength());
            return PyFloat_FromDouble((double) result);
          }
          static PyObject *t_InterSatellitesPhase_get__parameters_(t_InterSatellitesPhase *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }

          static PyObject *t_InterSatellitesPhase_get__ambiguityDriver(t_InterSatellitesPhase *self, void *data)
          {
            ::org::orekit::utils::ParameterDriver value((jobject) NULL);
            OBJ_CALL(value = self->object.getAmbiguityDriver());
            return ::org::orekit::utils::t_ParameterDriver::wrap_Object(value);
          }

          static PyObject *t_InterSatellitesPhase_get__wavelength(t_InterSatellitesPhase *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getWavelength());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/los/LOSBuilder.h"
#include "java/util/List.h"
#include "org/orekit/rugged/los/LOSTransform.h"
#include "org/orekit/rugged/los/TimeDependentLOS.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/rugged/los/TimeIndependentLOSTransform.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/los/LOSBuilder.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace los {

        ::java::lang::Class *LOSBuilder::class$ = NULL;
        jmethodID *LOSBuilder::mids$ = NULL;
        bool LOSBuilder::live$ = false;

        jclass LOSBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/los/LOSBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4ccaedadb068bdeb] = env->getMethodID(cls, "<init>", "(Ljava/util/List;)V");
            mids$[mid_addTransform_231109ffe5c9a348] = env->getMethodID(cls, "addTransform", "(Lorg/orekit/rugged/los/LOSTransform;)Lorg/orekit/rugged/los/LOSBuilder;");
            mids$[mid_addTransform_5ec13618c44587f1] = env->getMethodID(cls, "addTransform", "(Lorg/orekit/rugged/los/TimeIndependentLOSTransform;)Lorg/orekit/rugged/los/LOSBuilder;");
            mids$[mid_build_f31dbf4c8d33b612] = env->getMethodID(cls, "build", "()Lorg/orekit/rugged/los/TimeDependentLOS;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LOSBuilder::LOSBuilder(const ::java::util::List & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4ccaedadb068bdeb, a0.this$)) {}

        LOSBuilder LOSBuilder::addTransform(const ::org::orekit::rugged::los::LOSTransform & a0) const
        {
          return LOSBuilder(env->callObjectMethod(this$, mids$[mid_addTransform_231109ffe5c9a348], a0.this$));
        }

        LOSBuilder LOSBuilder::addTransform(const ::org::orekit::rugged::los::TimeIndependentLOSTransform & a0) const
        {
          return LOSBuilder(env->callObjectMethod(this$, mids$[mid_addTransform_5ec13618c44587f1], a0.this$));
        }

        ::org::orekit::rugged::los::TimeDependentLOS LOSBuilder::build() const
        {
          return ::org::orekit::rugged::los::TimeDependentLOS(env->callObjectMethod(this$, mids$[mid_build_f31dbf4c8d33b612]));
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
      namespace los {
        static PyObject *t_LOSBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LOSBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LOSBuilder_init_(t_LOSBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LOSBuilder_addTransform(t_LOSBuilder *self, PyObject *args);
        static PyObject *t_LOSBuilder_build(t_LOSBuilder *self);

        static PyMethodDef t_LOSBuilder__methods_[] = {
          DECLARE_METHOD(t_LOSBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LOSBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LOSBuilder, addTransform, METH_VARARGS),
          DECLARE_METHOD(t_LOSBuilder, build, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LOSBuilder)[] = {
          { Py_tp_methods, t_LOSBuilder__methods_ },
          { Py_tp_init, (void *) t_LOSBuilder_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LOSBuilder)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(LOSBuilder, t_LOSBuilder, LOSBuilder);

        void t_LOSBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(LOSBuilder), &PY_TYPE_DEF(LOSBuilder), module, "LOSBuilder", 0);
        }

        void t_LOSBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LOSBuilder), "class_", make_descriptor(LOSBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LOSBuilder), "wrapfn_", make_descriptor(t_LOSBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LOSBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LOSBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LOSBuilder::initializeClass, 1)))
            return NULL;
          return t_LOSBuilder::wrap_Object(LOSBuilder(((t_LOSBuilder *) arg)->object.this$));
        }
        static PyObject *t_LOSBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LOSBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LOSBuilder_init_(t_LOSBuilder *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::List a0((jobject) NULL);
          PyTypeObject **p0;
          LOSBuilder object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
          {
            INT_CALL(object = LOSBuilder(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LOSBuilder_addTransform(t_LOSBuilder *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::rugged::los::LOSTransform a0((jobject) NULL);
              LOSBuilder result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::rugged::los::LOSTransform::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.addTransform(a0));
                return t_LOSBuilder::wrap_Object(result);
              }
            }
            {
              ::org::orekit::rugged::los::TimeIndependentLOSTransform a0((jobject) NULL);
              LOSBuilder result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::rugged::los::TimeIndependentLOSTransform::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.addTransform(a0));
                return t_LOSBuilder::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "addTransform", args);
          return NULL;
        }

        static PyObject *t_LOSBuilder_build(t_LOSBuilder *self)
        {
          ::org::orekit::rugged::los::TimeDependentLOS result((jobject) NULL);
          OBJ_CALL(result = self->object.build());
          return ::org::orekit::rugged::los::t_TimeDependentLOS::wrap_Object(result);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace trigger {

          ::java::lang::Class *FieldManeuverTriggersResetter::class$ = NULL;
          jmethodID *FieldManeuverTriggersResetter::mids$ = NULL;
          bool FieldManeuverTriggersResetter::live$ = false;

          jclass FieldManeuverTriggersResetter::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/trigger/FieldManeuverTriggersResetter");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init_811e49dad2467b67] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
              mids$[mid_maneuverTriggered_585702d5a402c590] = env->getMethodID(cls, "maneuverTriggered", "(Lorg/orekit/propagation/FieldSpacecraftState;Z)V");
              mids$[mid_resetState_4f12774dd382c6f4] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          void FieldManeuverTriggersResetter::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_init_811e49dad2467b67], a0.this$, a1.this$);
          }

          void FieldManeuverTriggersResetter::maneuverTriggered(const ::org::orekit::propagation::FieldSpacecraftState & a0, jboolean a1) const
          {
            env->callVoidMethod(this$, mids$[mid_maneuverTriggered_585702d5a402c590], a0.this$, a1);
          }

          ::org::orekit::propagation::FieldSpacecraftState FieldManeuverTriggersResetter::resetState(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
          {
            return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_resetState_4f12774dd382c6f4], a0.this$));
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
    namespace forces {
      namespace maneuvers {
        namespace trigger {
          static PyObject *t_FieldManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldManeuverTriggersResetter_of_(t_FieldManeuverTriggersResetter *self, PyObject *args);
          static PyObject *t_FieldManeuverTriggersResetter_init(t_FieldManeuverTriggersResetter *self, PyObject *args);
          static PyObject *t_FieldManeuverTriggersResetter_maneuverTriggered(t_FieldManeuverTriggersResetter *self, PyObject *args);
          static PyObject *t_FieldManeuverTriggersResetter_resetState(t_FieldManeuverTriggersResetter *self, PyObject *arg);
          static PyObject *t_FieldManeuverTriggersResetter_get__parameters_(t_FieldManeuverTriggersResetter *self, void *data);
          static PyGetSetDef t_FieldManeuverTriggersResetter__fields_[] = {
            DECLARE_GET_FIELD(t_FieldManeuverTriggersResetter, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldManeuverTriggersResetter__methods_[] = {
            DECLARE_METHOD(t_FieldManeuverTriggersResetter, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldManeuverTriggersResetter, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldManeuverTriggersResetter, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldManeuverTriggersResetter, init, METH_VARARGS),
            DECLARE_METHOD(t_FieldManeuverTriggersResetter, maneuverTriggered, METH_VARARGS),
            DECLARE_METHOD(t_FieldManeuverTriggersResetter, resetState, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldManeuverTriggersResetter)[] = {
            { Py_tp_methods, t_FieldManeuverTriggersResetter__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldManeuverTriggersResetter__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldManeuverTriggersResetter)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldManeuverTriggersResetter, t_FieldManeuverTriggersResetter, FieldManeuverTriggersResetter);
          PyObject *t_FieldManeuverTriggersResetter::wrap_Object(const FieldManeuverTriggersResetter& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldManeuverTriggersResetter::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldManeuverTriggersResetter *self = (t_FieldManeuverTriggersResetter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldManeuverTriggersResetter::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldManeuverTriggersResetter::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldManeuverTriggersResetter *self = (t_FieldManeuverTriggersResetter *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldManeuverTriggersResetter::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldManeuverTriggersResetter), &PY_TYPE_DEF(FieldManeuverTriggersResetter), module, "FieldManeuverTriggersResetter", 0);
          }

          void t_FieldManeuverTriggersResetter::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldManeuverTriggersResetter), "class_", make_descriptor(FieldManeuverTriggersResetter::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldManeuverTriggersResetter), "wrapfn_", make_descriptor(t_FieldManeuverTriggersResetter::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldManeuverTriggersResetter), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldManeuverTriggersResetter_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldManeuverTriggersResetter::initializeClass, 1)))
              return NULL;
            return t_FieldManeuverTriggersResetter::wrap_Object(FieldManeuverTriggersResetter(((t_FieldManeuverTriggersResetter *) arg)->object.this$));
          }
          static PyObject *t_FieldManeuverTriggersResetter_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldManeuverTriggersResetter::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldManeuverTriggersResetter_of_(t_FieldManeuverTriggersResetter *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldManeuverTriggersResetter_init(t_FieldManeuverTriggersResetter *self, PyObject *args)
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

          static PyObject *t_FieldManeuverTriggersResetter_maneuverTriggered(t_FieldManeuverTriggersResetter *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean a1;

            if (!parseArgs(args, "KZ", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1))
            {
              OBJ_CALL(self->object.maneuverTriggered(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "maneuverTriggered", args);
            return NULL;
          }

          static PyObject *t_FieldManeuverTriggersResetter_resetState(t_FieldManeuverTriggersResetter *self, PyObject *arg)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
            {
              OBJ_CALL(result = self->object.resetState(a0));
              return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "resetState", arg);
            return NULL;
          }
          static PyObject *t_FieldManeuverTriggersResetter_get__parameters_(t_FieldManeuverTriggersResetter *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Chan1997.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *Chan1997::class$ = NULL;
              jmethodID *Chan1997::mids$ = NULL;
              bool Chan1997::live$ = false;

              jclass Chan1997::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/Chan1997");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_compute_ddf22cd33bfe153c] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_8d09da96ce925a0b] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_getType_4b8bf2bb84f7480e] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Chan1997::Chan1997() : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

              ::org::orekit::ssa::metrics::ProbabilityOfCollision Chan1997::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_ddf22cd33bfe153c], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision Chan1997::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_8d09da96ce925a0b], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType Chan1997::getType() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getType_4b8bf2bb84f7480e]));
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
              static PyObject *t_Chan1997_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Chan1997_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Chan1997_init_(t_Chan1997 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Chan1997_compute(t_Chan1997 *self, PyObject *args);
              static PyObject *t_Chan1997_getType(t_Chan1997 *self, PyObject *args);
              static PyObject *t_Chan1997_get__type(t_Chan1997 *self, void *data);
              static PyGetSetDef t_Chan1997__fields_[] = {
                DECLARE_GET_FIELD(t_Chan1997, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Chan1997__methods_[] = {
                DECLARE_METHOD(t_Chan1997, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Chan1997, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Chan1997, compute, METH_VARARGS),
                DECLARE_METHOD(t_Chan1997, getType, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Chan1997)[] = {
                { Py_tp_methods, t_Chan1997__methods_ },
                { Py_tp_init, (void *) t_Chan1997_init_ },
                { Py_tp_getset, t_Chan1997__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Chan1997)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(Chan1997, t_Chan1997, Chan1997);

              void t_Chan1997::install(PyObject *module)
              {
                installType(&PY_TYPE(Chan1997), &PY_TYPE_DEF(Chan1997), module, "Chan1997", 0);
              }

              void t_Chan1997::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Chan1997), "class_", make_descriptor(Chan1997::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Chan1997), "wrapfn_", make_descriptor(t_Chan1997::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Chan1997), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Chan1997_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Chan1997::initializeClass, 1)))
                  return NULL;
                return t_Chan1997::wrap_Object(Chan1997(((t_Chan1997 *) arg)->object.this$));
              }
              static PyObject *t_Chan1997_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Chan1997::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Chan1997_init_(t_Chan1997 *self, PyObject *args, PyObject *kwds)
              {
                Chan1997 object((jobject) NULL);

                INT_CALL(object = Chan1997());
                self->object = object;

                return 0;
              }

              static PyObject *t_Chan1997_compute(t_Chan1997 *self, PyObject *args)
              {
                switch (PyTuple_GET_SIZE(args)) {
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
                }

                return callSuper(PY_TYPE(Chan1997), (PyObject *) self, "compute", args, 2);
              }

              static PyObject *t_Chan1997_getType(t_Chan1997 *self, PyObject *args)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getType());
                  return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
                }

                return callSuper(PY_TYPE(Chan1997), (PyObject *) self, "getType", args, 2);
              }

              static PyObject *t_Chan1997_get__type(t_Chan1997 *self, void *data)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType value((jobject) NULL);
                OBJ_CALL(value = self->object.getType());
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(value);
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
#include "org/orekit/files/ccsds/ndm/adm/acm/AcmSatelliteEphemeris.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/adm/acm/AttitudeStateHistory.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
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
                  mids$[mid_init$_013b264b441f07a2] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/util/List;)V");
                  mids$[mid_getId_3cffd47377eca18a] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
                  mids$[mid_getSegments_0d9551367f7ecdef] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
                  mids$[mid_getStart_7a97f7e149e79afb] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_7a97f7e149e79afb] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AcmSatelliteEphemeris::AcmSatelliteEphemeris(const ::java::lang::String & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_013b264b441f07a2, a0.this$, a1.this$)) {}

              ::java::lang::String AcmSatelliteEphemeris::getId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_3cffd47377eca18a]));
              }

              ::java::util::List AcmSatelliteEphemeris::getSegments() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_0d9551367f7ecdef]));
              }

              ::org::orekit::time::AbsoluteDate AcmSatelliteEphemeris::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_7a97f7e149e79afb]));
              }

              ::org::orekit::time::AbsoluteDate AcmSatelliteEphemeris::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_7a97f7e149e79afb]));
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
#include "org/orekit/utils/FieldTrackingCoordinates.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldTrackingCoordinates::class$ = NULL;
      jmethodID *FieldTrackingCoordinates::mids$ = NULL;
      bool FieldTrackingCoordinates::live$ = false;

      jclass FieldTrackingCoordinates::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldTrackingCoordinates");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0f27b0249abd6c51] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_getAzimuth_613c8f46c659f636] = env->getMethodID(cls, "getAzimuth", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getElevation_613c8f46c659f636] = env->getMethodID(cls, "getElevation", "()Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getRange_613c8f46c659f636] = env->getMethodID(cls, "getRange", "()Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldTrackingCoordinates::FieldTrackingCoordinates(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0f27b0249abd6c51, a0.this$, a1.this$, a2.this$)) {}

      ::org::hipparchus::CalculusFieldElement FieldTrackingCoordinates::getAzimuth() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getAzimuth_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldTrackingCoordinates::getElevation() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getElevation_613c8f46c659f636]));
      }

      ::org::hipparchus::CalculusFieldElement FieldTrackingCoordinates::getRange() const
      {
        return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getRange_613c8f46c659f636]));
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
      static PyObject *t_FieldTrackingCoordinates_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTrackingCoordinates_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldTrackingCoordinates_of_(t_FieldTrackingCoordinates *self, PyObject *args);
      static int t_FieldTrackingCoordinates_init_(t_FieldTrackingCoordinates *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldTrackingCoordinates_getAzimuth(t_FieldTrackingCoordinates *self);
      static PyObject *t_FieldTrackingCoordinates_getElevation(t_FieldTrackingCoordinates *self);
      static PyObject *t_FieldTrackingCoordinates_getRange(t_FieldTrackingCoordinates *self);
      static PyObject *t_FieldTrackingCoordinates_get__azimuth(t_FieldTrackingCoordinates *self, void *data);
      static PyObject *t_FieldTrackingCoordinates_get__elevation(t_FieldTrackingCoordinates *self, void *data);
      static PyObject *t_FieldTrackingCoordinates_get__range(t_FieldTrackingCoordinates *self, void *data);
      static PyObject *t_FieldTrackingCoordinates_get__parameters_(t_FieldTrackingCoordinates *self, void *data);
      static PyGetSetDef t_FieldTrackingCoordinates__fields_[] = {
        DECLARE_GET_FIELD(t_FieldTrackingCoordinates, azimuth),
        DECLARE_GET_FIELD(t_FieldTrackingCoordinates, elevation),
        DECLARE_GET_FIELD(t_FieldTrackingCoordinates, range),
        DECLARE_GET_FIELD(t_FieldTrackingCoordinates, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldTrackingCoordinates__methods_[] = {
        DECLARE_METHOD(t_FieldTrackingCoordinates, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTrackingCoordinates, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldTrackingCoordinates, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldTrackingCoordinates, getAzimuth, METH_NOARGS),
        DECLARE_METHOD(t_FieldTrackingCoordinates, getElevation, METH_NOARGS),
        DECLARE_METHOD(t_FieldTrackingCoordinates, getRange, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldTrackingCoordinates)[] = {
        { Py_tp_methods, t_FieldTrackingCoordinates__methods_ },
        { Py_tp_init, (void *) t_FieldTrackingCoordinates_init_ },
        { Py_tp_getset, t_FieldTrackingCoordinates__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldTrackingCoordinates)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldTrackingCoordinates, t_FieldTrackingCoordinates, FieldTrackingCoordinates);
      PyObject *t_FieldTrackingCoordinates::wrap_Object(const FieldTrackingCoordinates& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTrackingCoordinates::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTrackingCoordinates *self = (t_FieldTrackingCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldTrackingCoordinates::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldTrackingCoordinates::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldTrackingCoordinates *self = (t_FieldTrackingCoordinates *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldTrackingCoordinates::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldTrackingCoordinates), &PY_TYPE_DEF(FieldTrackingCoordinates), module, "FieldTrackingCoordinates", 0);
      }

      void t_FieldTrackingCoordinates::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTrackingCoordinates), "class_", make_descriptor(FieldTrackingCoordinates::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTrackingCoordinates), "wrapfn_", make_descriptor(t_FieldTrackingCoordinates::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldTrackingCoordinates), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldTrackingCoordinates_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldTrackingCoordinates::initializeClass, 1)))
          return NULL;
        return t_FieldTrackingCoordinates::wrap_Object(FieldTrackingCoordinates(((t_FieldTrackingCoordinates *) arg)->object.this$));
      }
      static PyObject *t_FieldTrackingCoordinates_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldTrackingCoordinates::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldTrackingCoordinates_of_(t_FieldTrackingCoordinates *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldTrackingCoordinates_init_(t_FieldTrackingCoordinates *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
        PyTypeObject **p2;
        FieldTrackingCoordinates object((jobject) NULL);

        if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldTrackingCoordinates(a0, a1, a2));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldTrackingCoordinates_getAzimuth(t_FieldTrackingCoordinates *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getAzimuth());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldTrackingCoordinates_getElevation(t_FieldTrackingCoordinates *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getElevation());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }

      static PyObject *t_FieldTrackingCoordinates_getRange(t_FieldTrackingCoordinates *self)
      {
        ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.getRange());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
      }
      static PyObject *t_FieldTrackingCoordinates_get__parameters_(t_FieldTrackingCoordinates *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldTrackingCoordinates_get__azimuth(t_FieldTrackingCoordinates *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getAzimuth());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldTrackingCoordinates_get__elevation(t_FieldTrackingCoordinates *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getElevation());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }

      static PyObject *t_FieldTrackingCoordinates_get__range(t_FieldTrackingCoordinates *self, void *data)
      {
        ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
        OBJ_CALL(value = self->object.getRange());
        return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Cosh.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Cosh::class$ = NULL;
        jmethodID *Cosh::mids$ = NULL;
        bool Cosh::live$ = false;

        jclass Cosh::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Cosh");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_7e960cd6eee376d8] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_3eb2b84dba0ab7d2] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Cosh::Cosh() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        jdouble Cosh::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_7e960cd6eee376d8], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Cosh::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_3eb2b84dba0ab7d2], a0.this$));
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
      namespace function {
        static PyObject *t_Cosh_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Cosh_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Cosh_init_(t_Cosh *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Cosh_value(t_Cosh *self, PyObject *args);

        static PyMethodDef t_Cosh__methods_[] = {
          DECLARE_METHOD(t_Cosh, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Cosh, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Cosh, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Cosh)[] = {
          { Py_tp_methods, t_Cosh__methods_ },
          { Py_tp_init, (void *) t_Cosh_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Cosh)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Cosh, t_Cosh, Cosh);

        void t_Cosh::install(PyObject *module)
        {
          installType(&PY_TYPE(Cosh), &PY_TYPE_DEF(Cosh), module, "Cosh", 0);
        }

        void t_Cosh::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cosh), "class_", make_descriptor(Cosh::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cosh), "wrapfn_", make_descriptor(t_Cosh::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Cosh), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Cosh_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Cosh::initializeClass, 1)))
            return NULL;
          return t_Cosh::wrap_Object(Cosh(((t_Cosh *) arg)->object.this$));
        }
        static PyObject *t_Cosh_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Cosh::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Cosh_init_(t_Cosh *self, PyObject *args, PyObject *kwds)
        {
          Cosh object((jobject) NULL);

          INT_CALL(object = Cosh());
          self->object = object;

          return 0;
        }

        static PyObject *t_Cosh_value(t_Cosh *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              jdouble result;

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.value(a0));
                return PyFloat_FromDouble((double) result);
              }
            }
            {
              ::org::hipparchus::analysis::differentiation::Derivative a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::analysis::differentiation::Derivative result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::Derivative::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_Derivative::parameters_))
              {
                OBJ_CALL(result = self->object.value(a0));
                return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::analysis::differentiation::t_Derivative::wrap_Object(result);
              }
            }
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
#include "org/orekit/frames/encounter/PythonEncounterLOF.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/frames/encounter/EncounterLOF.h"
#include "java/lang/Throwable.h"
#include "org/orekit/utils/FieldPVCoordinates.h"
#include "org/orekit/utils/PVCoordinates.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "java/lang/Class.h"
#include "org/hipparchus/Field.h"
#include "java/lang/String.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldRotation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace frames {
      namespace encounter {

        ::java::lang::Class *PythonEncounterLOF::class$ = NULL;
        jmethodID *PythonEncounterLOF::mids$ = NULL;
        bool PythonEncounterLOF::live$ = false;

        jclass PythonEncounterLOF::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/frames/encounter/PythonEncounterLOF");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getAxisNormalToCollisionPlane_f88961cca75a2c0a] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getAxisNormalToCollisionPlane_3a465a0c08d1dbdf] = env->getMethodID(cls, "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_getFieldOther_dda60cf1427afe76] = env->getMethodID(cls, "getFieldOther", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinates;");
            mids$[mid_getName_3cffd47377eca18a] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getOther_77bd7b3cdab2713e] = env->getMethodID(cls, "getOther", "()Lorg/orekit/utils/PVCoordinates;");
            mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
            mids$[mid_rotationFromInertial_0158ab79fb625627] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;");
            mids$[mid_rotationFromInertial_ea6e3434436b926f] = env->getMethodID(cls, "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonEncounterLOF::PythonEncounterLOF() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        void PythonEncounterLOF::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
        }

        jlong PythonEncounterLOF::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
        }

        void PythonEncounterLOF::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
    namespace frames {
      namespace encounter {
        static PyObject *t_PythonEncounterLOF_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonEncounterLOF_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonEncounterLOF_init_(t_PythonEncounterLOF *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonEncounterLOF_finalize(t_PythonEncounterLOF *self);
        static PyObject *t_PythonEncounterLOF_pythonExtension(t_PythonEncounterLOF *self, PyObject *args);
        static jobject JNICALL t_PythonEncounterLOF_getAxisNormalToCollisionPlane0(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEncounterLOF_getAxisNormalToCollisionPlane1(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonEncounterLOF_getFieldOther2(JNIEnv *jenv, jobject jobj, jobject a0);
        static jobject JNICALL t_PythonEncounterLOF_getName3(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEncounterLOF_getOther4(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonEncounterLOF_pythonDecRef5(JNIEnv *jenv, jobject jobj);
        static jobject JNICALL t_PythonEncounterLOF_rotationFromInertial6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonEncounterLOF_rotationFromInertial7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2);
        static PyObject *t_PythonEncounterLOF_get__self(t_PythonEncounterLOF *self, void *data);
        static PyGetSetDef t_PythonEncounterLOF__fields_[] = {
          DECLARE_GET_FIELD(t_PythonEncounterLOF, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonEncounterLOF__methods_[] = {
          DECLARE_METHOD(t_PythonEncounterLOF, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEncounterLOF, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonEncounterLOF, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonEncounterLOF, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonEncounterLOF)[] = {
          { Py_tp_methods, t_PythonEncounterLOF__methods_ },
          { Py_tp_init, (void *) t_PythonEncounterLOF_init_ },
          { Py_tp_getset, t_PythonEncounterLOF__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonEncounterLOF)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(PythonEncounterLOF, t_PythonEncounterLOF, PythonEncounterLOF);

        void t_PythonEncounterLOF::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonEncounterLOF), &PY_TYPE_DEF(PythonEncounterLOF), module, "PythonEncounterLOF", 1);
        }

        void t_PythonEncounterLOF::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEncounterLOF), "class_", make_descriptor(PythonEncounterLOF::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEncounterLOF), "wrapfn_", make_descriptor(t_PythonEncounterLOF::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEncounterLOF), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonEncounterLOF::initializeClass);
          JNINativeMethod methods[] = {
            { "getAxisNormalToCollisionPlane", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonEncounterLOF_getAxisNormalToCollisionPlane0 },
            { "getAxisNormalToCollisionPlane", "(Lorg/hipparchus/Field;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonEncounterLOF_getAxisNormalToCollisionPlane1 },
            { "getFieldOther", "(Lorg/hipparchus/Field;)Lorg/orekit/utils/FieldPVCoordinates;", (void *) t_PythonEncounterLOF_getFieldOther2 },
            { "getName", "()Ljava/lang/String;", (void *) t_PythonEncounterLOF_getName3 },
            { "getOther", "()Lorg/orekit/utils/PVCoordinates;", (void *) t_PythonEncounterLOF_getOther4 },
            { "pythonDecRef", "()V", (void *) t_PythonEncounterLOF_pythonDecRef5 },
            { "rotationFromInertial", "(Lorg/orekit/utils/PVCoordinates;Lorg/orekit/utils/PVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/Rotation;", (void *) t_PythonEncounterLOF_rotationFromInertial6 },
            { "rotationFromInertial", "(Lorg/hipparchus/Field;Lorg/orekit/utils/FieldPVCoordinates;Lorg/orekit/utils/FieldPVCoordinates;)Lorg/hipparchus/geometry/euclidean/threed/FieldRotation;", (void *) t_PythonEncounterLOF_rotationFromInertial7 },
          };
          env->registerNatives(cls, methods, 8);
        }

        static PyObject *t_PythonEncounterLOF_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonEncounterLOF::initializeClass, 1)))
            return NULL;
          return t_PythonEncounterLOF::wrap_Object(PythonEncounterLOF(((t_PythonEncounterLOF *) arg)->object.this$));
        }
        static PyObject *t_PythonEncounterLOF_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonEncounterLOF::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonEncounterLOF_init_(t_PythonEncounterLOF *self, PyObject *args, PyObject *kwds)
        {
          PythonEncounterLOF object((jobject) NULL);

          INT_CALL(object = PythonEncounterLOF());
          self->object = object;

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonEncounterLOF_finalize(t_PythonEncounterLOF *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonEncounterLOF_pythonExtension(t_PythonEncounterLOF *self, PyObject *args)
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

        static jobject JNICALL t_PythonEncounterLOF_getAxisNormalToCollisionPlane0(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getAxisNormalToCollisionPlane", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("getAxisNormalToCollisionPlane", result);
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

        static jobject JNICALL t_PythonEncounterLOF_getAxisNormalToCollisionPlane1(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
          PyObject *result = PyObject_CallMethod(obj, "getAxisNormalToCollisionPlane", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
          {
            throwTypeError("getAxisNormalToCollisionPlane", result);
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

        static jobject JNICALL t_PythonEncounterLOF_getFieldOther2(JNIEnv *jenv, jobject jobj, jobject a0)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::FieldPVCoordinates value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
          PyObject *result = PyObject_CallMethod(obj, "getFieldOther", "O", o0);
          Py_DECREF(o0);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::FieldPVCoordinates::initializeClass, &value))
          {
            throwTypeError("getFieldOther", result);
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

        static jobject JNICALL t_PythonEncounterLOF_getName3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::lang::String value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getName", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "s", &value))
          {
            throwTypeError("getName", result);
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

        static jobject JNICALL t_PythonEncounterLOF_getOther4(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::orekit::utils::PVCoordinates value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getOther", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::orekit::utils::PVCoordinates::initializeClass, &value))
          {
            throwTypeError("getOther", result);
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

        static void JNICALL t_PythonEncounterLOF_pythonDecRef5(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static jobject JNICALL t_PythonEncounterLOF_rotationFromInertial6(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Rotation value((jobject) NULL);
          PyObject *o0 = ::org::orekit::utils::t_PVCoordinates::wrap_Object(::org::orekit::utils::PVCoordinates(a0));
          PyObject *o1 = ::org::orekit::utils::t_PVCoordinates::wrap_Object(::org::orekit::utils::PVCoordinates(a1));
          PyObject *result = PyObject_CallMethod(obj, "rotationFromInertial", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &value))
          {
            throwTypeError("rotationFromInertial", result);
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

        static jobject JNICALL t_PythonEncounterLOF_rotationFromInertial7(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1, jobject a2)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonEncounterLOF::mids$[PythonEncounterLOF::mid_pythonExtension_9e26256fb0d384a2]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldRotation value((jobject) NULL);
          PyObject *o0 = ::org::hipparchus::t_Field::wrap_Object(::org::hipparchus::Field(a0));
          PyObject *o1 = ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(::org::orekit::utils::FieldPVCoordinates(a1));
          PyObject *o2 = ::org::orekit::utils::t_FieldPVCoordinates::wrap_Object(::org::orekit::utils::FieldPVCoordinates(a2));
          PyObject *result = PyObject_CallMethod(obj, "rotationFromInertial", "OOO", o0, o1, o2);
          Py_DECREF(o0);
          Py_DECREF(o1);
          Py_DECREF(o2);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldRotation::initializeClass, &value))
          {
            throwTypeError("rotationFromInertial", result);
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

        static PyObject *t_PythonEncounterLOF_get__self(t_PythonEncounterLOF *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/IterativeLinearSolverEvent.h"
#include "org/hipparchus/linear/RealVector.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *IterativeLinearSolverEvent::class$ = NULL;
      jmethodID *IterativeLinearSolverEvent::mids$ = NULL;
      bool IterativeLinearSolverEvent::live$ = false;

      jclass IterativeLinearSolverEvent::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/IterativeLinearSolverEvent");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_3b6b1ab3a4013647] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;I)V");
          mids$[mid_getNormOfResidual_557b8123390d8d0c] = env->getMethodID(cls, "getNormOfResidual", "()D");
          mids$[mid_getResidual_75d50d73180655b4] = env->getMethodID(cls, "getResidual", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getRightHandSideVector_75d50d73180655b4] = env->getMethodID(cls, "getRightHandSideVector", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getSolution_75d50d73180655b4] = env->getMethodID(cls, "getSolution", "()Lorg/hipparchus/linear/RealVector;");
          mids$[mid_providesResidual_89b302893bdbe1f1] = env->getMethodID(cls, "providesResidual", "()Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      IterativeLinearSolverEvent::IterativeLinearSolverEvent(const ::java::lang::Object & a0, jint a1) : ::org::hipparchus::util::IterationEvent(env->newObject(initializeClass, &mids$, mid_init$_3b6b1ab3a4013647, a0.this$, a1)) {}

      jdouble IterativeLinearSolverEvent::getNormOfResidual() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getNormOfResidual_557b8123390d8d0c]);
      }

      ::org::hipparchus::linear::RealVector IterativeLinearSolverEvent::getResidual() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getResidual_75d50d73180655b4]));
      }

      ::org::hipparchus::linear::RealVector IterativeLinearSolverEvent::getRightHandSideVector() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getRightHandSideVector_75d50d73180655b4]));
      }

      ::org::hipparchus::linear::RealVector IterativeLinearSolverEvent::getSolution() const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getSolution_75d50d73180655b4]));
      }

      jboolean IterativeLinearSolverEvent::providesResidual() const
      {
        return env->callBooleanMethod(this$, mids$[mid_providesResidual_89b302893bdbe1f1]);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace linear {
      static PyObject *t_IterativeLinearSolverEvent_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_IterativeLinearSolverEvent_instance_(PyTypeObject *type, PyObject *arg);
      static int t_IterativeLinearSolverEvent_init_(t_IterativeLinearSolverEvent *self, PyObject *args, PyObject *kwds);
      static PyObject *t_IterativeLinearSolverEvent_getNormOfResidual(t_IterativeLinearSolverEvent *self);
      static PyObject *t_IterativeLinearSolverEvent_getResidual(t_IterativeLinearSolverEvent *self);
      static PyObject *t_IterativeLinearSolverEvent_getRightHandSideVector(t_IterativeLinearSolverEvent *self);
      static PyObject *t_IterativeLinearSolverEvent_getSolution(t_IterativeLinearSolverEvent *self);
      static PyObject *t_IterativeLinearSolverEvent_providesResidual(t_IterativeLinearSolverEvent *self);
      static PyObject *t_IterativeLinearSolverEvent_get__normOfResidual(t_IterativeLinearSolverEvent *self, void *data);
      static PyObject *t_IterativeLinearSolverEvent_get__residual(t_IterativeLinearSolverEvent *self, void *data);
      static PyObject *t_IterativeLinearSolverEvent_get__rightHandSideVector(t_IterativeLinearSolverEvent *self, void *data);
      static PyObject *t_IterativeLinearSolverEvent_get__solution(t_IterativeLinearSolverEvent *self, void *data);
      static PyGetSetDef t_IterativeLinearSolverEvent__fields_[] = {
        DECLARE_GET_FIELD(t_IterativeLinearSolverEvent, normOfResidual),
        DECLARE_GET_FIELD(t_IterativeLinearSolverEvent, residual),
        DECLARE_GET_FIELD(t_IterativeLinearSolverEvent, rightHandSideVector),
        DECLARE_GET_FIELD(t_IterativeLinearSolverEvent, solution),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_IterativeLinearSolverEvent__methods_[] = {
        DECLARE_METHOD(t_IterativeLinearSolverEvent, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterativeLinearSolverEvent, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_IterativeLinearSolverEvent, getNormOfResidual, METH_NOARGS),
        DECLARE_METHOD(t_IterativeLinearSolverEvent, getResidual, METH_NOARGS),
        DECLARE_METHOD(t_IterativeLinearSolverEvent, getRightHandSideVector, METH_NOARGS),
        DECLARE_METHOD(t_IterativeLinearSolverEvent, getSolution, METH_NOARGS),
        DECLARE_METHOD(t_IterativeLinearSolverEvent, providesResidual, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(IterativeLinearSolverEvent)[] = {
        { Py_tp_methods, t_IterativeLinearSolverEvent__methods_ },
        { Py_tp_init, (void *) t_IterativeLinearSolverEvent_init_ },
        { Py_tp_getset, t_IterativeLinearSolverEvent__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(IterativeLinearSolverEvent)[] = {
        &PY_TYPE_DEF(::org::hipparchus::util::IterationEvent),
        NULL
      };

      DEFINE_TYPE(IterativeLinearSolverEvent, t_IterativeLinearSolverEvent, IterativeLinearSolverEvent);

      void t_IterativeLinearSolverEvent::install(PyObject *module)
      {
        installType(&PY_TYPE(IterativeLinearSolverEvent), &PY_TYPE_DEF(IterativeLinearSolverEvent), module, "IterativeLinearSolverEvent", 0);
      }

      void t_IterativeLinearSolverEvent::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLinearSolverEvent), "class_", make_descriptor(IterativeLinearSolverEvent::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLinearSolverEvent), "wrapfn_", make_descriptor(t_IterativeLinearSolverEvent::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(IterativeLinearSolverEvent), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_IterativeLinearSolverEvent_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, IterativeLinearSolverEvent::initializeClass, 1)))
          return NULL;
        return t_IterativeLinearSolverEvent::wrap_Object(IterativeLinearSolverEvent(((t_IterativeLinearSolverEvent *) arg)->object.this$));
      }
      static PyObject *t_IterativeLinearSolverEvent_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, IterativeLinearSolverEvent::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_IterativeLinearSolverEvent_init_(t_IterativeLinearSolverEvent *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Object a0((jobject) NULL);
        jint a1;
        IterativeLinearSolverEvent object((jobject) NULL);

        if (!parseArgs(args, "oI", &a0, &a1))
        {
          INT_CALL(object = IterativeLinearSolverEvent(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_IterativeLinearSolverEvent_getNormOfResidual(t_IterativeLinearSolverEvent *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getNormOfResidual());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_IterativeLinearSolverEvent_getResidual(t_IterativeLinearSolverEvent *self)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.getResidual());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
      }

      static PyObject *t_IterativeLinearSolverEvent_getRightHandSideVector(t_IterativeLinearSolverEvent *self)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.getRightHandSideVector());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
      }

      static PyObject *t_IterativeLinearSolverEvent_getSolution(t_IterativeLinearSolverEvent *self)
      {
        ::org::hipparchus::linear::RealVector result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolution());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
      }

      static PyObject *t_IterativeLinearSolverEvent_providesResidual(t_IterativeLinearSolverEvent *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.providesResidual());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_IterativeLinearSolverEvent_get__normOfResidual(t_IterativeLinearSolverEvent *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getNormOfResidual());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_IterativeLinearSolverEvent_get__residual(t_IterativeLinearSolverEvent *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getResidual());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_IterativeLinearSolverEvent_get__rightHandSideVector(t_IterativeLinearSolverEvent *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getRightHandSideVector());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }

      static PyObject *t_IterativeLinearSolverEvent_get__solution(t_IterativeLinearSolverEvent *self, void *data)
      {
        ::org::hipparchus::linear::RealVector value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolution());
        return ::org::hipparchus::linear::t_RealVector::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockInterSatellitesRangeModifier.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/InterSatellitesRange.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticJ2ClockInterSatellitesRangeModifier::class$ = NULL;
          jmethodID *RelativisticJ2ClockInterSatellitesRangeModifier::mids$ = NULL;
          bool RelativisticJ2ClockInterSatellitesRangeModifier::live$ = false;

          jclass RelativisticJ2ClockInterSatellitesRangeModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockInterSatellitesRangeModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticJ2ClockInterSatellitesRangeModifier::RelativisticJ2ClockInterSatellitesRangeModifier(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

          ::java::util::List RelativisticJ2ClockInterSatellitesRangeModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void RelativisticJ2ClockInterSatellitesRangeModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
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
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticJ2ClockInterSatellitesRangeModifier_init_(t_RelativisticJ2ClockInterSatellitesRangeModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_getParametersDrivers(t_RelativisticJ2ClockInterSatellitesRangeModifier *self);
          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockInterSatellitesRangeModifier *self, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_get__parametersDrivers(t_RelativisticJ2ClockInterSatellitesRangeModifier *self, void *data);
          static PyGetSetDef t_RelativisticJ2ClockInterSatellitesRangeModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticJ2ClockInterSatellitesRangeModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticJ2ClockInterSatellitesRangeModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesRangeModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesRangeModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesRangeModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesRangeModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticJ2ClockInterSatellitesRangeModifier)[] = {
            { Py_tp_methods, t_RelativisticJ2ClockInterSatellitesRangeModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticJ2ClockInterSatellitesRangeModifier_init_ },
            { Py_tp_getset, t_RelativisticJ2ClockInterSatellitesRangeModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticJ2ClockInterSatellitesRangeModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticJ2ClockInterSatellitesRangeModifier, t_RelativisticJ2ClockInterSatellitesRangeModifier, RelativisticJ2ClockInterSatellitesRangeModifier);

          void t_RelativisticJ2ClockInterSatellitesRangeModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticJ2ClockInterSatellitesRangeModifier), &PY_TYPE_DEF(RelativisticJ2ClockInterSatellitesRangeModifier), module, "RelativisticJ2ClockInterSatellitesRangeModifier", 0);
          }

          void t_RelativisticJ2ClockInterSatellitesRangeModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockInterSatellitesRangeModifier), "class_", make_descriptor(RelativisticJ2ClockInterSatellitesRangeModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockInterSatellitesRangeModifier), "wrapfn_", make_descriptor(t_RelativisticJ2ClockInterSatellitesRangeModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockInterSatellitesRangeModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticJ2ClockInterSatellitesRangeModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticJ2ClockInterSatellitesRangeModifier::wrap_Object(RelativisticJ2ClockInterSatellitesRangeModifier(((t_RelativisticJ2ClockInterSatellitesRangeModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticJ2ClockInterSatellitesRangeModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticJ2ClockInterSatellitesRangeModifier_init_(t_RelativisticJ2ClockInterSatellitesRangeModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            RelativisticJ2ClockInterSatellitesRangeModifier object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = RelativisticJ2ClockInterSatellitesRangeModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_getParametersDrivers(t_RelativisticJ2ClockInterSatellitesRangeModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockInterSatellitesRangeModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_RelativisticJ2ClockInterSatellitesRangeModifier_get__parametersDrivers(t_RelativisticJ2ClockInterSatellitesRangeModifier *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockInterSatellitesPhaseModifier.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "java/util/List.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *RelativisticJ2ClockInterSatellitesPhaseModifier::class$ = NULL;
          jmethodID *RelativisticJ2ClockInterSatellitesPhaseModifier::mids$ = NULL;
          bool RelativisticJ2ClockInterSatellitesPhaseModifier::live$ = false;

          jclass RelativisticJ2ClockInterSatellitesPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/RelativisticJ2ClockInterSatellitesPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_87096e3fd8086100] = env->getMethodID(cls, "<init>", "(DDD)V");
              mids$[mid_getParametersDrivers_0d9551367f7ecdef] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_e471490df8741b73] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RelativisticJ2ClockInterSatellitesPhaseModifier::RelativisticJ2ClockInterSatellitesPhaseModifier(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier(env->newObject(initializeClass, &mids$, mid_init$_87096e3fd8086100, a0, a1, a2)) {}

          ::java::util::List RelativisticJ2ClockInterSatellitesPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_0d9551367f7ecdef]));
          }

          void RelativisticJ2ClockInterSatellitesPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_e471490df8741b73], a0.this$);
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
    namespace estimation {
      namespace measurements {
        namespace modifiers {
          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RelativisticJ2ClockInterSatellitesPhaseModifier_init_(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_getParametersDrivers(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self);
          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self, PyObject *arg);
          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_get__parametersDrivers(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self, void *data);
          static PyGetSetDef t_RelativisticJ2ClockInterSatellitesPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_RelativisticJ2ClockInterSatellitesPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_RelativisticJ2ClockInterSatellitesPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_RelativisticJ2ClockInterSatellitesPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RelativisticJ2ClockInterSatellitesPhaseModifier)[] = {
            { Py_tp_methods, t_RelativisticJ2ClockInterSatellitesPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_RelativisticJ2ClockInterSatellitesPhaseModifier_init_ },
            { Py_tp_getset, t_RelativisticJ2ClockInterSatellitesPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RelativisticJ2ClockInterSatellitesPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractRelativisticJ2ClockModifier),
            NULL
          };

          DEFINE_TYPE(RelativisticJ2ClockInterSatellitesPhaseModifier, t_RelativisticJ2ClockInterSatellitesPhaseModifier, RelativisticJ2ClockInterSatellitesPhaseModifier);

          void t_RelativisticJ2ClockInterSatellitesPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(RelativisticJ2ClockInterSatellitesPhaseModifier), &PY_TYPE_DEF(RelativisticJ2ClockInterSatellitesPhaseModifier), module, "RelativisticJ2ClockInterSatellitesPhaseModifier", 0);
          }

          void t_RelativisticJ2ClockInterSatellitesPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockInterSatellitesPhaseModifier), "class_", make_descriptor(RelativisticJ2ClockInterSatellitesPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockInterSatellitesPhaseModifier), "wrapfn_", make_descriptor(t_RelativisticJ2ClockInterSatellitesPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RelativisticJ2ClockInterSatellitesPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RelativisticJ2ClockInterSatellitesPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_RelativisticJ2ClockInterSatellitesPhaseModifier::wrap_Object(RelativisticJ2ClockInterSatellitesPhaseModifier(((t_RelativisticJ2ClockInterSatellitesPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RelativisticJ2ClockInterSatellitesPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RelativisticJ2ClockInterSatellitesPhaseModifier_init_(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            RelativisticJ2ClockInterSatellitesPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              INT_CALL(object = RelativisticJ2ClockInterSatellitesPhaseModifier(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_getParametersDrivers(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_modifyWithoutDerivatives(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self, PyObject *arg)
          {
            ::org::orekit::estimation::measurements::EstimatedMeasurementBase a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::EstimatedMeasurementBase::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_EstimatedMeasurementBase::parameters_))
            {
              OBJ_CALL(self->object.modifyWithoutDerivatives(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "modifyWithoutDerivatives", arg);
            return NULL;
          }

          static PyObject *t_RelativisticJ2ClockInterSatellitesPhaseModifier_get__parametersDrivers(t_RelativisticJ2ClockInterSatellitesPhaseModifier *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/HatanakaCompressFilter.h"
#include "org/orekit/data/DataFilter.h"
#include "java/lang/Class.h"
#include "org/orekit/data/DataSource.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {

        ::java::lang::Class *HatanakaCompressFilter::class$ = NULL;
        jmethodID *HatanakaCompressFilter::mids$ = NULL;
        bool HatanakaCompressFilter::live$ = false;

        jclass HatanakaCompressFilter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/rinex/HatanakaCompressFilter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_filter_d33f4b0b3a1030ad] = env->getMethodID(cls, "filter", "(Lorg/orekit/data/DataSource;)Lorg/orekit/data/DataSource;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HatanakaCompressFilter::HatanakaCompressFilter() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

        ::org::orekit::data::DataSource HatanakaCompressFilter::filter(const ::org::orekit::data::DataSource & a0) const
        {
          return ::org::orekit::data::DataSource(env->callObjectMethod(this$, mids$[mid_filter_d33f4b0b3a1030ad], a0.this$));
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
        static PyObject *t_HatanakaCompressFilter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HatanakaCompressFilter_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HatanakaCompressFilter_init_(t_HatanakaCompressFilter *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HatanakaCompressFilter_filter(t_HatanakaCompressFilter *self, PyObject *arg);

        static PyMethodDef t_HatanakaCompressFilter__methods_[] = {
          DECLARE_METHOD(t_HatanakaCompressFilter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HatanakaCompressFilter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HatanakaCompressFilter, filter, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HatanakaCompressFilter)[] = {
          { Py_tp_methods, t_HatanakaCompressFilter__methods_ },
          { Py_tp_init, (void *) t_HatanakaCompressFilter_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HatanakaCompressFilter)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HatanakaCompressFilter, t_HatanakaCompressFilter, HatanakaCompressFilter);

        void t_HatanakaCompressFilter::install(PyObject *module)
        {
          installType(&PY_TYPE(HatanakaCompressFilter), &PY_TYPE_DEF(HatanakaCompressFilter), module, "HatanakaCompressFilter", 0);
        }

        void t_HatanakaCompressFilter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HatanakaCompressFilter), "class_", make_descriptor(HatanakaCompressFilter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HatanakaCompressFilter), "wrapfn_", make_descriptor(t_HatanakaCompressFilter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HatanakaCompressFilter), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HatanakaCompressFilter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HatanakaCompressFilter::initializeClass, 1)))
            return NULL;
          return t_HatanakaCompressFilter::wrap_Object(HatanakaCompressFilter(((t_HatanakaCompressFilter *) arg)->object.this$));
        }
        static PyObject *t_HatanakaCompressFilter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HatanakaCompressFilter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HatanakaCompressFilter_init_(t_HatanakaCompressFilter *self, PyObject *args, PyObject *kwds)
        {
          HatanakaCompressFilter object((jobject) NULL);

          INT_CALL(object = HatanakaCompressFilter());
          self->object = object;

          return 0;
        }

        static PyObject *t_HatanakaCompressFilter_filter(t_HatanakaCompressFilter *self, PyObject *arg)
        {
          ::org::orekit::data::DataSource a0((jobject) NULL);
          ::org::orekit::data::DataSource result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.filter(a0));
            return ::org::orekit::data::t_DataSource::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "filter", arg);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/adjustment/AdjustmentContext.h"
#include "org/orekit/rugged/adjustment/measurements/Observables.h"
#include "java/util/Collection.h"
#include "org/orekit/rugged/adjustment/OptimizerId.h"
#include "org/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum.h"
#include "java/lang/Class.h"
#include "org/orekit/rugged/api/Rugged.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {

        ::java::lang::Class *AdjustmentContext::class$ = NULL;
        jmethodID *AdjustmentContext::mids$ = NULL;
        bool AdjustmentContext::live$ = false;

        jclass AdjustmentContext::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/AdjustmentContext");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_e523c66771543b5a] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;Lorg/orekit/rugged/adjustment/measurements/Observables;)V");
            mids$[mid_estimateFreeParameters_942a8de0858c9d46] = env->getMethodID(cls, "estimateFreeParameters", "(Ljava/util/Collection;ID)Lorg/hipparchus/optim/nonlinear/vector/leastsquares/LeastSquaresOptimizer$Optimum;");
            mids$[mid_setOptimizer_6e8d52daed67f697] = env->getMethodID(cls, "setOptimizer", "(Lorg/orekit/rugged/adjustment/OptimizerId;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdjustmentContext::AdjustmentContext(const ::java::util::Collection & a0, const ::org::orekit::rugged::adjustment::measurements::Observables & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_e523c66771543b5a, a0.this$, a1.this$)) {}

        ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum AdjustmentContext::estimateFreeParameters(const ::java::util::Collection & a0, jint a1, jdouble a2) const
        {
          return ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum(env->callObjectMethod(this$, mids$[mid_estimateFreeParameters_942a8de0858c9d46], a0.this$, a1, a2));
        }

        void AdjustmentContext::setOptimizer(const ::org::orekit::rugged::adjustment::OptimizerId & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setOptimizer_6e8d52daed67f697], a0.this$);
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
      namespace adjustment {
        static PyObject *t_AdjustmentContext_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdjustmentContext_instance_(PyTypeObject *type, PyObject *arg);
        static int t_AdjustmentContext_init_(t_AdjustmentContext *self, PyObject *args, PyObject *kwds);
        static PyObject *t_AdjustmentContext_estimateFreeParameters(t_AdjustmentContext *self, PyObject *args);
        static PyObject *t_AdjustmentContext_setOptimizer(t_AdjustmentContext *self, PyObject *arg);
        static int t_AdjustmentContext_set__optimizer(t_AdjustmentContext *self, PyObject *arg, void *data);
        static PyGetSetDef t_AdjustmentContext__fields_[] = {
          DECLARE_SET_FIELD(t_AdjustmentContext, optimizer),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AdjustmentContext__methods_[] = {
          DECLARE_METHOD(t_AdjustmentContext, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdjustmentContext, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdjustmentContext, estimateFreeParameters, METH_VARARGS),
          DECLARE_METHOD(t_AdjustmentContext, setOptimizer, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdjustmentContext)[] = {
          { Py_tp_methods, t_AdjustmentContext__methods_ },
          { Py_tp_init, (void *) t_AdjustmentContext_init_ },
          { Py_tp_getset, t_AdjustmentContext__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdjustmentContext)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdjustmentContext, t_AdjustmentContext, AdjustmentContext);

        void t_AdjustmentContext::install(PyObject *module)
        {
          installType(&PY_TYPE(AdjustmentContext), &PY_TYPE_DEF(AdjustmentContext), module, "AdjustmentContext", 0);
        }

        void t_AdjustmentContext::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdjustmentContext), "class_", make_descriptor(AdjustmentContext::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdjustmentContext), "wrapfn_", make_descriptor(t_AdjustmentContext::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdjustmentContext), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdjustmentContext_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdjustmentContext::initializeClass, 1)))
            return NULL;
          return t_AdjustmentContext::wrap_Object(AdjustmentContext(((t_AdjustmentContext *) arg)->object.this$));
        }
        static PyObject *t_AdjustmentContext_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdjustmentContext::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_AdjustmentContext_init_(t_AdjustmentContext *self, PyObject *args, PyObject *kwds)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::rugged::adjustment::measurements::Observables a1((jobject) NULL);
          AdjustmentContext object((jobject) NULL);

          if (!parseArgs(args, "Kk", ::java::util::Collection::initializeClass, ::org::orekit::rugged::adjustment::measurements::Observables::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1))
          {
            INT_CALL(object = AdjustmentContext(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_AdjustmentContext_estimateFreeParameters(t_AdjustmentContext *self, PyObject *args)
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          jint a1;
          jdouble a2;
          ::org::hipparchus::optim::nonlinear::vector::leastsquares::LeastSquaresOptimizer$Optimum result((jobject) NULL);

          if (!parseArgs(args, "KID", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_, &a1, &a2))
          {
            OBJ_CALL(result = self->object.estimateFreeParameters(a0, a1, a2));
            return ::org::hipparchus::optim::nonlinear::vector::leastsquares::t_LeastSquaresOptimizer$Optimum::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "estimateFreeParameters", args);
          return NULL;
        }

        static PyObject *t_AdjustmentContext_setOptimizer(t_AdjustmentContext *self, PyObject *arg)
        {
          ::org::orekit::rugged::adjustment::OptimizerId a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::rugged::adjustment::OptimizerId::initializeClass, &a0, &p0, ::org::orekit::rugged::adjustment::t_OptimizerId::parameters_))
          {
            OBJ_CALL(self->object.setOptimizer(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setOptimizer", arg);
          return NULL;
        }

        static int t_AdjustmentContext_set__optimizer(t_AdjustmentContext *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::rugged::adjustment::OptimizerId value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::rugged::adjustment::OptimizerId::initializeClass, &value))
            {
              INT_CALL(self->object.setOptimizer(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "optimizer", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "java/util/List.h"
#include "java/util/Collection.h"
#include "org/orekit/time/TimeInterpolator.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "java/util/stream/Stream.h"
#include "org/orekit/time/TimeStamped.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace time {

      ::java::lang::Class *TimeInterpolator::class$ = NULL;
      jmethodID *TimeInterpolator::mids$ = NULL;
      bool TimeInterpolator::live$ = false;

      jclass TimeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/time/TimeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getExtrapolationThreshold_557b8123390d8d0c] = env->getMethodID(cls, "getExtrapolationThreshold", "()D");
          mids$[mid_getNbInterpolationPoints_412668abc8d889e9] = env->getMethodID(cls, "getNbInterpolationPoints", "()I");
          mids$[mid_getSubInterpolators_0d9551367f7ecdef] = env->getMethodID(cls, "getSubInterpolators", "()Ljava/util/List;");
          mids$[mid_interpolate_da5f44ff87474809] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/Collection;)Lorg/orekit/time/TimeStamped;");
          mids$[mid_interpolate_d5b4fcbe51b9e2da] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbsoluteDate;Ljava/util/stream/Stream;)Lorg/orekit/time/TimeStamped;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble TimeInterpolator::getExtrapolationThreshold() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getExtrapolationThreshold_557b8123390d8d0c]);
      }

      jint TimeInterpolator::getNbInterpolationPoints() const
      {
        return env->callIntMethod(this$, mids$[mid_getNbInterpolationPoints_412668abc8d889e9]);
      }

      ::java::util::List TimeInterpolator::getSubInterpolators() const
      {
        return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSubInterpolators_0d9551367f7ecdef]));
      }

      ::org::orekit::time::TimeStamped TimeInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::Collection & a1) const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_da5f44ff87474809], a0.this$, a1.this$));
      }

      ::org::orekit::time::TimeStamped TimeInterpolator::interpolate(const ::org::orekit::time::AbsoluteDate & a0, const ::java::util::stream::Stream & a1) const
      {
        return ::org::orekit::time::TimeStamped(env->callObjectMethod(this$, mids$[mid_interpolate_d5b4fcbe51b9e2da], a0.this$, a1.this$));
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
      static PyObject *t_TimeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeInterpolator_of_(t_TimeInterpolator *self, PyObject *args);
      static PyObject *t_TimeInterpolator_getExtrapolationThreshold(t_TimeInterpolator *self);
      static PyObject *t_TimeInterpolator_getNbInterpolationPoints(t_TimeInterpolator *self);
      static PyObject *t_TimeInterpolator_getSubInterpolators(t_TimeInterpolator *self);
      static PyObject *t_TimeInterpolator_interpolate(t_TimeInterpolator *self, PyObject *args);
      static PyObject *t_TimeInterpolator_get__extrapolationThreshold(t_TimeInterpolator *self, void *data);
      static PyObject *t_TimeInterpolator_get__nbInterpolationPoints(t_TimeInterpolator *self, void *data);
      static PyObject *t_TimeInterpolator_get__subInterpolators(t_TimeInterpolator *self, void *data);
      static PyObject *t_TimeInterpolator_get__parameters_(t_TimeInterpolator *self, void *data);
      static PyGetSetDef t_TimeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_TimeInterpolator, extrapolationThreshold),
        DECLARE_GET_FIELD(t_TimeInterpolator, nbInterpolationPoints),
        DECLARE_GET_FIELD(t_TimeInterpolator, subInterpolators),
        DECLARE_GET_FIELD(t_TimeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeInterpolator__methods_[] = {
        DECLARE_METHOD(t_TimeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeInterpolator, getExtrapolationThreshold, METH_NOARGS),
        DECLARE_METHOD(t_TimeInterpolator, getNbInterpolationPoints, METH_NOARGS),
        DECLARE_METHOD(t_TimeInterpolator, getSubInterpolators, METH_NOARGS),
        DECLARE_METHOD(t_TimeInterpolator, interpolate, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeInterpolator)[] = {
        { Py_tp_methods, t_TimeInterpolator__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_TimeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeInterpolator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeInterpolator, t_TimeInterpolator, TimeInterpolator);
      PyObject *t_TimeInterpolator::wrap_Object(const TimeInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeInterpolator *self = (t_TimeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeInterpolator *self = (t_TimeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeInterpolator), &PY_TYPE_DEF(TimeInterpolator), module, "TimeInterpolator", 0);
      }

      void t_TimeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeInterpolator), "class_", make_descriptor(TimeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeInterpolator), "wrapfn_", make_descriptor(t_TimeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeInterpolator::initializeClass, 1)))
          return NULL;
        return t_TimeInterpolator::wrap_Object(TimeInterpolator(((t_TimeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_TimeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeInterpolator_of_(t_TimeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_TimeInterpolator_getExtrapolationThreshold(t_TimeInterpolator *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_TimeInterpolator_getNbInterpolationPoints(t_TimeInterpolator *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_TimeInterpolator_getSubInterpolators(t_TimeInterpolator *self)
      {
        ::java::util::List result((jobject) NULL);
        OBJ_CALL(result = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(result);
      }

      static PyObject *t_TimeInterpolator_interpolate(t_TimeInterpolator *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::Collection a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeStamped result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::Collection::initializeClass, &a0, &a1, &p1, ::java::util::t_Collection::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
            }
          }
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::java::util::stream::Stream a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::time::TimeStamped result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::orekit::time::AbsoluteDate::initializeClass, ::java::util::stream::Stream::initializeClass, &a0, &a1, &p1, ::java::util::stream::t_Stream::parameters_))
            {
              OBJ_CALL(result = self->object.interpolate(a0, a1));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::orekit::time::t_TimeStamped::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "interpolate", args);
        return NULL;
      }
      static PyObject *t_TimeInterpolator_get__parameters_(t_TimeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeInterpolator_get__extrapolationThreshold(t_TimeInterpolator *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getExtrapolationThreshold());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_TimeInterpolator_get__nbInterpolationPoints(t_TimeInterpolator *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNbInterpolationPoints());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_TimeInterpolator_get__subInterpolators(t_TimeInterpolator *self, void *data)
      {
        ::java::util::List value((jobject) NULL);
        OBJ_CALL(value = self->object.getSubInterpolators());
        return ::java::util::t_List::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/ntrip/NtripClient.h"
#include "org/orekit/gnss/metric/ntrip/Type.h"
#include "org/orekit/gnss/metric/ntrip/MessageObserver.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/ntrip/SourceTable.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace ntrip {

          ::java::lang::Class *NtripClient::class$ = NULL;
          jmethodID *NtripClient::mids$ = NULL;
          bool NtripClient::live$ = false;
          jint NtripClient::DEFAULT_MAX_RECONNECT = (jint) 0;
          jint NtripClient::DEFAULT_PORT = (jint) 0;
          jdouble NtripClient::DEFAULT_RECONNECT_DELAY = (jdouble) 0;
          jdouble NtripClient::DEFAULT_RECONNECT_DELAY_FACTOR = (jdouble) 0;
          jint NtripClient::DEFAULT_TIMEOUT = (jint) 0;

          jclass NtripClient::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/ntrip/NtripClient");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_358501078068b45e] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;I)V");
              mids$[mid_addObserver_f1b130fed25f6d15] = env->getMethodID(cls, "addObserver", "(ILjava/lang/String;Lorg/orekit/gnss/metric/ntrip/MessageObserver;)V");
              mids$[mid_checkException_0640e6acf969ed28] = env->getMethodID(cls, "checkException", "()V");
              mids$[mid_getHost_3cffd47377eca18a] = env->getMethodID(cls, "getHost", "()Ljava/lang/String;");
              mids$[mid_getPort_412668abc8d889e9] = env->getMethodID(cls, "getPort", "()I");
              mids$[mid_getSourceTable_9eeab043e130dbaf] = env->getMethodID(cls, "getSourceTable", "()Lorg/orekit/gnss/metric/ntrip/SourceTable;");
              mids$[mid_setFix_4df038e269200899] = env->getMethodID(cls, "setFix", "(IIDDDDD)V");
              mids$[mid_setReconnectParameters_427af08acba367ca] = env->getMethodID(cls, "setReconnectParameters", "(DDI)V");
              mids$[mid_setTimeout_a3da1a935cb37f7b] = env->getMethodID(cls, "setTimeout", "(I)V");
              mids$[mid_startStreaming_9e7ab8752977c081] = env->getMethodID(cls, "startStreaming", "(Ljava/lang/String;Lorg/orekit/gnss/metric/ntrip/Type;ZZ)V");
              mids$[mid_stopStreaming_a3da1a935cb37f7b] = env->getMethodID(cls, "stopStreaming", "(I)V");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              DEFAULT_MAX_RECONNECT = env->getStaticIntField(cls, "DEFAULT_MAX_RECONNECT");
              DEFAULT_PORT = env->getStaticIntField(cls, "DEFAULT_PORT");
              DEFAULT_RECONNECT_DELAY = env->getStaticDoubleField(cls, "DEFAULT_RECONNECT_DELAY");
              DEFAULT_RECONNECT_DELAY_FACTOR = env->getStaticDoubleField(cls, "DEFAULT_RECONNECT_DELAY_FACTOR");
              DEFAULT_TIMEOUT = env->getStaticIntField(cls, "DEFAULT_TIMEOUT");
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          NtripClient::NtripClient(const ::java::lang::String & a0, jint a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_358501078068b45e, a0.this$, a1)) {}

          void NtripClient::addObserver(jint a0, const ::java::lang::String & a1, const ::org::orekit::gnss::metric::ntrip::MessageObserver & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_addObserver_f1b130fed25f6d15], a0, a1.this$, a2.this$);
          }

          void NtripClient::checkException() const
          {
            env->callVoidMethod(this$, mids$[mid_checkException_0640e6acf969ed28]);
          }

          ::java::lang::String NtripClient::getHost() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getHost_3cffd47377eca18a]));
          }

          jint NtripClient::getPort() const
          {
            return env->callIntMethod(this$, mids$[mid_getPort_412668abc8d889e9]);
          }

          ::org::orekit::gnss::metric::ntrip::SourceTable NtripClient::getSourceTable() const
          {
            return ::org::orekit::gnss::metric::ntrip::SourceTable(env->callObjectMethod(this$, mids$[mid_getSourceTable_9eeab043e130dbaf]));
          }

          void NtripClient::setFix(jint a0, jint a1, jdouble a2, jdouble a3, jdouble a4, jdouble a5, jdouble a6) const
          {
            env->callVoidMethod(this$, mids$[mid_setFix_4df038e269200899], a0, a1, a2, a3, a4, a5, a6);
          }

          void NtripClient::setReconnectParameters(jdouble a0, jdouble a1, jint a2) const
          {
            env->callVoidMethod(this$, mids$[mid_setReconnectParameters_427af08acba367ca], a0, a1, a2);
          }

          void NtripClient::setTimeout(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTimeout_a3da1a935cb37f7b], a0);
          }

          void NtripClient::startStreaming(const ::java::lang::String & a0, const ::org::orekit::gnss::metric::ntrip::Type & a1, jboolean a2, jboolean a3) const
          {
            env->callVoidMethod(this$, mids$[mid_startStreaming_9e7ab8752977c081], a0.this$, a1.this$, a2, a3);
          }

          void NtripClient::stopStreaming(jint a0) const
          {
            env->callVoidMethod(this$, mids$[mid_stopStreaming_a3da1a935cb37f7b], a0);
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
        namespace ntrip {
          static PyObject *t_NtripClient_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_NtripClient_instance_(PyTypeObject *type, PyObject *arg);
          static int t_NtripClient_init_(t_NtripClient *self, PyObject *args, PyObject *kwds);
          static PyObject *t_NtripClient_addObserver(t_NtripClient *self, PyObject *args);
          static PyObject *t_NtripClient_checkException(t_NtripClient *self);
          static PyObject *t_NtripClient_getHost(t_NtripClient *self);
          static PyObject *t_NtripClient_getPort(t_NtripClient *self);
          static PyObject *t_NtripClient_getSourceTable(t_NtripClient *self);
          static PyObject *t_NtripClient_setFix(t_NtripClient *self, PyObject *args);
          static PyObject *t_NtripClient_setReconnectParameters(t_NtripClient *self, PyObject *args);
          static PyObject *t_NtripClient_setTimeout(t_NtripClient *self, PyObject *arg);
          static PyObject *t_NtripClient_startStreaming(t_NtripClient *self, PyObject *args);
          static PyObject *t_NtripClient_stopStreaming(t_NtripClient *self, PyObject *arg);
          static PyObject *t_NtripClient_get__host(t_NtripClient *self, void *data);
          static PyObject *t_NtripClient_get__port(t_NtripClient *self, void *data);
          static PyObject *t_NtripClient_get__sourceTable(t_NtripClient *self, void *data);
          static int t_NtripClient_set__timeout(t_NtripClient *self, PyObject *arg, void *data);
          static PyGetSetDef t_NtripClient__fields_[] = {
            DECLARE_GET_FIELD(t_NtripClient, host),
            DECLARE_GET_FIELD(t_NtripClient, port),
            DECLARE_GET_FIELD(t_NtripClient, sourceTable),
            DECLARE_SET_FIELD(t_NtripClient, timeout),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_NtripClient__methods_[] = {
            DECLARE_METHOD(t_NtripClient, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NtripClient, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_NtripClient, addObserver, METH_VARARGS),
            DECLARE_METHOD(t_NtripClient, checkException, METH_NOARGS),
            DECLARE_METHOD(t_NtripClient, getHost, METH_NOARGS),
            DECLARE_METHOD(t_NtripClient, getPort, METH_NOARGS),
            DECLARE_METHOD(t_NtripClient, getSourceTable, METH_NOARGS),
            DECLARE_METHOD(t_NtripClient, setFix, METH_VARARGS),
            DECLARE_METHOD(t_NtripClient, setReconnectParameters, METH_VARARGS),
            DECLARE_METHOD(t_NtripClient, setTimeout, METH_O),
            DECLARE_METHOD(t_NtripClient, startStreaming, METH_VARARGS),
            DECLARE_METHOD(t_NtripClient, stopStreaming, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(NtripClient)[] = {
            { Py_tp_methods, t_NtripClient__methods_ },
            { Py_tp_init, (void *) t_NtripClient_init_ },
            { Py_tp_getset, t_NtripClient__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(NtripClient)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(NtripClient, t_NtripClient, NtripClient);

          void t_NtripClient::install(PyObject *module)
          {
            installType(&PY_TYPE(NtripClient), &PY_TYPE_DEF(NtripClient), module, "NtripClient", 0);
          }

          void t_NtripClient::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "class_", make_descriptor(NtripClient::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "wrapfn_", make_descriptor(t_NtripClient::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "boxfn_", make_descriptor(boxObject));
            env->getClass(NtripClient::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "DEFAULT_MAX_RECONNECT", make_descriptor(NtripClient::DEFAULT_MAX_RECONNECT));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "DEFAULT_PORT", make_descriptor(NtripClient::DEFAULT_PORT));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "DEFAULT_RECONNECT_DELAY", make_descriptor(NtripClient::DEFAULT_RECONNECT_DELAY));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "DEFAULT_RECONNECT_DELAY_FACTOR", make_descriptor(NtripClient::DEFAULT_RECONNECT_DELAY_FACTOR));
            PyObject_SetAttrString((PyObject *) PY_TYPE(NtripClient), "DEFAULT_TIMEOUT", make_descriptor(NtripClient::DEFAULT_TIMEOUT));
          }

          static PyObject *t_NtripClient_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, NtripClient::initializeClass, 1)))
              return NULL;
            return t_NtripClient::wrap_Object(NtripClient(((t_NtripClient *) arg)->object.this$));
          }
          static PyObject *t_NtripClient_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, NtripClient::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_NtripClient_init_(t_NtripClient *self, PyObject *args, PyObject *kwds)
          {
            ::java::lang::String a0((jobject) NULL);
            jint a1;
            NtripClient object((jobject) NULL);

            if (!parseArgs(args, "sI", &a0, &a1))
            {
              INT_CALL(object = NtripClient(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_NtripClient_addObserver(t_NtripClient *self, PyObject *args)
          {
            jint a0;
            ::java::lang::String a1((jobject) NULL);
            ::org::orekit::gnss::metric::ntrip::MessageObserver a2((jobject) NULL);

            if (!parseArgs(args, "Isk", ::org::orekit::gnss::metric::ntrip::MessageObserver::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.addObserver(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "addObserver", args);
            return NULL;
          }

          static PyObject *t_NtripClient_checkException(t_NtripClient *self)
          {
            OBJ_CALL(self->object.checkException());
            Py_RETURN_NONE;
          }

          static PyObject *t_NtripClient_getHost(t_NtripClient *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getHost());
            return j2p(result);
          }

          static PyObject *t_NtripClient_getPort(t_NtripClient *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getPort());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_NtripClient_getSourceTable(t_NtripClient *self)
          {
            ::org::orekit::gnss::metric::ntrip::SourceTable result((jobject) NULL);
            OBJ_CALL(result = self->object.getSourceTable());
            return ::org::orekit::gnss::metric::ntrip::t_SourceTable::wrap_Object(result);
          }

          static PyObject *t_NtripClient_setFix(t_NtripClient *self, PyObject *args)
          {
            jint a0;
            jint a1;
            jdouble a2;
            jdouble a3;
            jdouble a4;
            jdouble a5;
            jdouble a6;

            if (!parseArgs(args, "IIDDDDD", &a0, &a1, &a2, &a3, &a4, &a5, &a6))
            {
              OBJ_CALL(self->object.setFix(a0, a1, a2, a3, a4, a5, a6));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setFix", args);
            return NULL;
          }

          static PyObject *t_NtripClient_setReconnectParameters(t_NtripClient *self, PyObject *args)
          {
            jdouble a0;
            jdouble a1;
            jint a2;

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              OBJ_CALL(self->object.setReconnectParameters(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReconnectParameters", args);
            return NULL;
          }

          static PyObject *t_NtripClient_setTimeout(t_NtripClient *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.setTimeout(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTimeout", arg);
            return NULL;
          }

          static PyObject *t_NtripClient_startStreaming(t_NtripClient *self, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            ::org::orekit::gnss::metric::ntrip::Type a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            jboolean a3;

            if (!parseArgs(args, "sKZZ", ::org::orekit::gnss::metric::ntrip::Type::initializeClass, &a0, &a1, &p1, ::org::orekit::gnss::metric::ntrip::t_Type::parameters_, &a2, &a3))
            {
              OBJ_CALL(self->object.startStreaming(a0, a1, a2, a3));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "startStreaming", args);
            return NULL;
          }

          static PyObject *t_NtripClient_stopStreaming(t_NtripClient *self, PyObject *arg)
          {
            jint a0;

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(self->object.stopStreaming(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "stopStreaming", arg);
            return NULL;
          }

          static PyObject *t_NtripClient_get__host(t_NtripClient *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getHost());
            return j2p(value);
          }

          static PyObject *t_NtripClient_get__port(t_NtripClient *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getPort());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_NtripClient_get__sourceTable(t_NtripClient *self, void *data)
          {
            ::org::orekit::gnss::metric::ntrip::SourceTable value((jobject) NULL);
            OBJ_CALL(value = self->object.getSourceTable());
            return ::org::orekit::gnss::metric::ntrip::t_SourceTable::wrap_Object(value);
          }

          static int t_NtripClient_set__timeout(t_NtripClient *self, PyObject *arg, void *data)
          {
            {
              jint value;
              if (!parseArg(arg, "I", &value))
              {
                INT_CALL(self->object.setTimeout(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "timeout", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/FieldStopOnEvent.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "org/hipparchus/ode/events/Action.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldStopOnEvent::class$ = NULL;
          jmethodID *FieldStopOnEvent::mids$ = NULL;
          bool FieldStopOnEvent::live$ = false;

          jclass FieldStopOnEvent::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldStopOnEvent");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_eventOccurred_061886b33964a9af] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          FieldStopOnEvent::FieldStopOnEvent() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

          ::org::hipparchus::ode::events::Action FieldStopOnEvent::eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_061886b33964a9af], a0.this$, a1.this$, a2));
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
    namespace propagation {
      namespace events {
        namespace handlers {
          static PyObject *t_FieldStopOnEvent_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldStopOnEvent_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldStopOnEvent_of_(t_FieldStopOnEvent *self, PyObject *args);
          static int t_FieldStopOnEvent_init_(t_FieldStopOnEvent *self, PyObject *args, PyObject *kwds);
          static PyObject *t_FieldStopOnEvent_eventOccurred(t_FieldStopOnEvent *self, PyObject *args);
          static PyObject *t_FieldStopOnEvent_get__parameters_(t_FieldStopOnEvent *self, void *data);
          static PyGetSetDef t_FieldStopOnEvent__fields_[] = {
            DECLARE_GET_FIELD(t_FieldStopOnEvent, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldStopOnEvent__methods_[] = {
            DECLARE_METHOD(t_FieldStopOnEvent, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldStopOnEvent, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldStopOnEvent, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldStopOnEvent, eventOccurred, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldStopOnEvent)[] = {
            { Py_tp_methods, t_FieldStopOnEvent__methods_ },
            { Py_tp_init, (void *) t_FieldStopOnEvent_init_ },
            { Py_tp_getset, t_FieldStopOnEvent__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldStopOnEvent)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldStopOnEvent, t_FieldStopOnEvent, FieldStopOnEvent);
          PyObject *t_FieldStopOnEvent::wrap_Object(const FieldStopOnEvent& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldStopOnEvent::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldStopOnEvent *self = (t_FieldStopOnEvent *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldStopOnEvent::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldStopOnEvent::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldStopOnEvent *self = (t_FieldStopOnEvent *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldStopOnEvent::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldStopOnEvent), &PY_TYPE_DEF(FieldStopOnEvent), module, "FieldStopOnEvent", 0);
          }

          void t_FieldStopOnEvent::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnEvent), "class_", make_descriptor(FieldStopOnEvent::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnEvent), "wrapfn_", make_descriptor(t_FieldStopOnEvent::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldStopOnEvent), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldStopOnEvent_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldStopOnEvent::initializeClass, 1)))
              return NULL;
            return t_FieldStopOnEvent::wrap_Object(FieldStopOnEvent(((t_FieldStopOnEvent *) arg)->object.this$));
          }
          static PyObject *t_FieldStopOnEvent_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldStopOnEvent::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldStopOnEvent_of_(t_FieldStopOnEvent *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_FieldStopOnEvent_init_(t_FieldStopOnEvent *self, PyObject *args, PyObject *kwds)
          {
            FieldStopOnEvent object((jobject) NULL);

            INT_CALL(object = FieldStopOnEvent());
            self->object = object;

            return 0;
          }

          static PyObject *t_FieldStopOnEvent_eventOccurred(t_FieldStopOnEvent *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::events::FieldEventDetector a1((jobject) NULL);
            PyTypeObject **p1;
            jboolean a2;
            ::org::hipparchus::ode::events::Action result((jobject) NULL);

            if (!parseArgs(args, "KKZ", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a2))
            {
              OBJ_CALL(result = self->object.eventOccurred(a0, a1, a2));
              return ::org::hipparchus::ode::events::t_Action::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "eventOccurred", args);
            return NULL;
          }
          static PyObject *t_FieldStopOnEvent_get__parameters_(t_FieldStopOnEvent *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/util/BigRealField.h"
#include "org/hipparchus/util/BigReal.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/util/BigRealField.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *BigRealField::class$ = NULL;
      jmethodID *BigRealField::mids$ = NULL;
      bool BigRealField::live$ = false;

      jclass BigRealField::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/BigRealField");

          mids$ = new jmethodID[max_mid];
          mids$[mid_equals_221e8e85cb385209] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_getInstance_5a46ddf8e02ff43d] = env->getStaticMethodID(cls, "getInstance", "()Lorg/hipparchus/util/BigRealField;");
          mids$[mid_getOne_2073e31f7b6bcf19] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/util/BigReal;");
          mids$[mid_getRuntimeClass_d4b191ff8147475d] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
          mids$[mid_getZero_2073e31f7b6bcf19] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/util/BigReal;");
          mids$[mid_hashCode_412668abc8d889e9] = env->getMethodID(cls, "hashCode", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jboolean BigRealField::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_221e8e85cb385209], a0.this$);
      }

      BigRealField BigRealField::getInstance()
      {
        jclass cls = env->getClass(initializeClass);
        return BigRealField(env->callStaticObjectMethod(cls, mids$[mid_getInstance_5a46ddf8e02ff43d]));
      }

      ::org::hipparchus::util::BigReal BigRealField::getOne() const
      {
        return ::org::hipparchus::util::BigReal(env->callObjectMethod(this$, mids$[mid_getOne_2073e31f7b6bcf19]));
      }

      ::java::lang::Class BigRealField::getRuntimeClass() const
      {
        return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_d4b191ff8147475d]));
      }

      ::org::hipparchus::util::BigReal BigRealField::getZero() const
      {
        return ::org::hipparchus::util::BigReal(env->callObjectMethod(this$, mids$[mid_getZero_2073e31f7b6bcf19]));
      }

      jint BigRealField::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_412668abc8d889e9]);
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
      static PyObject *t_BigRealField_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigRealField_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BigRealField_equals(t_BigRealField *self, PyObject *args);
      static PyObject *t_BigRealField_getInstance(PyTypeObject *type);
      static PyObject *t_BigRealField_getOne(t_BigRealField *self);
      static PyObject *t_BigRealField_getRuntimeClass(t_BigRealField *self);
      static PyObject *t_BigRealField_getZero(t_BigRealField *self);
      static PyObject *t_BigRealField_hashCode(t_BigRealField *self, PyObject *args);
      static PyObject *t_BigRealField_get__instance(t_BigRealField *self, void *data);
      static PyObject *t_BigRealField_get__one(t_BigRealField *self, void *data);
      static PyObject *t_BigRealField_get__runtimeClass(t_BigRealField *self, void *data);
      static PyObject *t_BigRealField_get__zero(t_BigRealField *self, void *data);
      static PyGetSetDef t_BigRealField__fields_[] = {
        DECLARE_GET_FIELD(t_BigRealField, instance),
        DECLARE_GET_FIELD(t_BigRealField, one),
        DECLARE_GET_FIELD(t_BigRealField, runtimeClass),
        DECLARE_GET_FIELD(t_BigRealField, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BigRealField__methods_[] = {
        DECLARE_METHOD(t_BigRealField, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigRealField, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BigRealField, equals, METH_VARARGS),
        DECLARE_METHOD(t_BigRealField, getInstance, METH_NOARGS | METH_CLASS),
        DECLARE_METHOD(t_BigRealField, getOne, METH_NOARGS),
        DECLARE_METHOD(t_BigRealField, getRuntimeClass, METH_NOARGS),
        DECLARE_METHOD(t_BigRealField, getZero, METH_NOARGS),
        DECLARE_METHOD(t_BigRealField, hashCode, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BigRealField)[] = {
        { Py_tp_methods, t_BigRealField__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BigRealField__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BigRealField)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BigRealField, t_BigRealField, BigRealField);

      void t_BigRealField::install(PyObject *module)
      {
        installType(&PY_TYPE(BigRealField), &PY_TYPE_DEF(BigRealField), module, "BigRealField", 0);
      }

      void t_BigRealField::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigRealField), "class_", make_descriptor(BigRealField::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigRealField), "wrapfn_", make_descriptor(t_BigRealField::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BigRealField), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BigRealField_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BigRealField::initializeClass, 1)))
          return NULL;
        return t_BigRealField::wrap_Object(BigRealField(((t_BigRealField *) arg)->object.this$));
      }
      static PyObject *t_BigRealField_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BigRealField::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BigRealField_equals(t_BigRealField *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(BigRealField), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_BigRealField_getInstance(PyTypeObject *type)
      {
        BigRealField result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::util::BigRealField::getInstance());
        return t_BigRealField::wrap_Object(result);
      }

      static PyObject *t_BigRealField_getOne(t_BigRealField *self)
      {
        ::org::hipparchus::util::BigReal result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return ::org::hipparchus::util::t_BigReal::wrap_Object(result);
      }

      static PyObject *t_BigRealField_getRuntimeClass(t_BigRealField *self)
      {
        ::java::lang::Class result((jobject) NULL);
        OBJ_CALL(result = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(result, ::org::hipparchus::util::PY_TYPE(BigReal));
      }

      static PyObject *t_BigRealField_getZero(t_BigRealField *self)
      {
        ::org::hipparchus::util::BigReal result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return ::org::hipparchus::util::t_BigReal::wrap_Object(result);
      }

      static PyObject *t_BigRealField_hashCode(t_BigRealField *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(BigRealField), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_BigRealField_get__instance(t_BigRealField *self, void *data)
      {
        BigRealField value((jobject) NULL);
        OBJ_CALL(value = self->object.getInstance());
        return t_BigRealField::wrap_Object(value);
      }

      static PyObject *t_BigRealField_get__one(t_BigRealField *self, void *data)
      {
        ::org::hipparchus::util::BigReal value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return ::org::hipparchus::util::t_BigReal::wrap_Object(value);
      }

      static PyObject *t_BigRealField_get__runtimeClass(t_BigRealField *self, void *data)
      {
        ::java::lang::Class value((jobject) NULL);
        OBJ_CALL(value = self->object.getRuntimeClass());
        return ::java::lang::t_Class::wrap_Object(value);
      }

      static PyObject *t_BigRealField_get__zero(t_BigRealField *self, void *data)
      {
        ::org::hipparchus::util::BigReal value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return ::org::hipparchus::util::t_BigReal::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/AbstractGNSSAttitudeProvider.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/gnss/attitude/GNSSAttitudeProvider.h"
#include "org/orekit/utils/PVCoordinatesProvider.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "org/orekit/utils/FieldPVCoordinatesProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *AbstractGNSSAttitudeProvider::class$ = NULL;
        jmethodID *AbstractGNSSAttitudeProvider::mids$ = NULL;
        bool AbstractGNSSAttitudeProvider::live$ = false;

        jclass AbstractGNSSAttitudeProvider::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/AbstractGNSSAttitudeProvider");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getAttitude_1306ac39e1d2de3f] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/PVCoordinatesProvider;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/Attitude;");
            mids$[mid_getAttitude_77e3383de01f3e48] = env->getMethodID(cls, "getAttitude", "(Lorg/orekit/utils/FieldPVCoordinatesProvider;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/attitudes/FieldAttitude;");
            mids$[mid_validityEnd_7a97f7e149e79afb] = env->getMethodID(cls, "validityEnd", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_validityStart_7a97f7e149e79afb] = env->getMethodID(cls, "validityStart", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getSun_9aa0b612d90098c2] = env->getMethodID(cls, "getSun", "()Lorg/orekit/utils/ExtendedPVCoordinatesProvider;");
            mids$[mid_getInertialFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_correctedYaw_c46751716d57fe1f] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSAttitudeContext;)Lorg/orekit/utils/TimeStampedAngularCoordinates;");
            mids$[mid_correctedYaw_2a43991494de952e] = env->getMethodID(cls, "correctedYaw", "(Lorg/orekit/gnss/attitude/GNSSFieldAttitudeContext;)Lorg/orekit/utils/TimeStampedFieldAngularCoordinates;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::orekit::attitudes::Attitude AbstractGNSSAttitudeProvider::getAttitude(const ::org::orekit::utils::PVCoordinatesProvider & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
        {
          return ::org::orekit::attitudes::Attitude(env->callObjectMethod(this$, mids$[mid_getAttitude_1306ac39e1d2de3f], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::attitudes::FieldAttitude AbstractGNSSAttitudeProvider::getAttitude(const ::org::orekit::utils::FieldPVCoordinatesProvider & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::frames::Frame & a2) const
        {
          return ::org::orekit::attitudes::FieldAttitude(env->callObjectMethod(this$, mids$[mid_getAttitude_77e3383de01f3e48], a0.this$, a1.this$, a2.this$));
        }

        ::org::orekit::time::AbsoluteDate AbstractGNSSAttitudeProvider::validityEnd() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_validityEnd_7a97f7e149e79afb]));
        }

        ::org::orekit::time::AbsoluteDate AbstractGNSSAttitudeProvider::validityStart() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_validityStart_7a97f7e149e79afb]));
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
      namespace attitude {
        static PyObject *t_AbstractGNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractGNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractGNSSAttitudeProvider_getAttitude(t_AbstractGNSSAttitudeProvider *self, PyObject *args);
        static PyObject *t_AbstractGNSSAttitudeProvider_validityEnd(t_AbstractGNSSAttitudeProvider *self);
        static PyObject *t_AbstractGNSSAttitudeProvider_validityStart(t_AbstractGNSSAttitudeProvider *self);

        static PyMethodDef t_AbstractGNSSAttitudeProvider__methods_[] = {
          DECLARE_METHOD(t_AbstractGNSSAttitudeProvider, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractGNSSAttitudeProvider, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractGNSSAttitudeProvider, getAttitude, METH_VARARGS),
          DECLARE_METHOD(t_AbstractGNSSAttitudeProvider, validityEnd, METH_NOARGS),
          DECLARE_METHOD(t_AbstractGNSSAttitudeProvider, validityStart, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractGNSSAttitudeProvider)[] = {
          { Py_tp_methods, t_AbstractGNSSAttitudeProvider__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractGNSSAttitudeProvider)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AbstractGNSSAttitudeProvider, t_AbstractGNSSAttitudeProvider, AbstractGNSSAttitudeProvider);

        void t_AbstractGNSSAttitudeProvider::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractGNSSAttitudeProvider), &PY_TYPE_DEF(AbstractGNSSAttitudeProvider), module, "AbstractGNSSAttitudeProvider", 0);
        }

        void t_AbstractGNSSAttitudeProvider::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGNSSAttitudeProvider), "class_", make_descriptor(AbstractGNSSAttitudeProvider::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGNSSAttitudeProvider), "wrapfn_", make_descriptor(t_AbstractGNSSAttitudeProvider::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractGNSSAttitudeProvider), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractGNSSAttitudeProvider_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractGNSSAttitudeProvider::initializeClass, 1)))
            return NULL;
          return t_AbstractGNSSAttitudeProvider::wrap_Object(AbstractGNSSAttitudeProvider(((t_AbstractGNSSAttitudeProvider *) arg)->object.this$));
        }
        static PyObject *t_AbstractGNSSAttitudeProvider_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractGNSSAttitudeProvider::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractGNSSAttitudeProvider_getAttitude(t_AbstractGNSSAttitudeProvider *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
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
          }

          PyErr_SetArgsError((PyObject *) self, "getAttitude", args);
          return NULL;
        }

        static PyObject *t_AbstractGNSSAttitudeProvider_validityEnd(t_AbstractGNSSAttitudeProvider *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.validityEnd());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_AbstractGNSSAttitudeProvider_validityStart(t_AbstractGNSSAttitudeProvider *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.validityStart());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/PythonBoundedPropagator.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "java/util/Collection.h"
#include "org/orekit/propagation/events/EventDetector.h"
#include "org/orekit/propagation/EphemerisGenerator.h"
#include "org/orekit/utils/TimeStampedPVCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/sampling/StepHandlerMultiplexer.h"
#include "org/orekit/propagation/BoundedPropagator.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "java/lang/String.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {

      ::java::lang::Class *PythonBoundedPropagator::class$ = NULL;
      jmethodID *PythonBoundedPropagator::mids$ = NULL;
      bool PythonBoundedPropagator::live$ = false;

      jclass PythonBoundedPropagator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/propagation/PythonBoundedPropagator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_0640e6acf969ed28] = env->getMethodID(cls, "<init>", "()V");
          mids$[mid_addAdditionalStateProvider_8af102d28e19f725] = env->getMethodID(cls, "addAdditionalStateProvider", "(Lorg/orekit/propagation/AdditionalStateProvider;)V");
          mids$[mid_addEventDetector_2e2dfaf38ed50d1d] = env->getMethodID(cls, "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V");
          mids$[mid_clearEventsDetectors_0640e6acf969ed28] = env->getMethodID(cls, "clearEventsDetectors", "()V");
          mids$[mid_finalize_0640e6acf969ed28] = env->getMethodID(cls, "finalize", "()V");
          mids$[mid_getAdditionalStateProviders_0d9551367f7ecdef] = env->getMethodID(cls, "getAdditionalStateProviders", "()Ljava/util/List;");
          mids$[mid_getAttitudeProvider_6df6b78ab9377151] = env->getMethodID(cls, "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;");
          mids$[mid_getEphemerisGenerator_6a3edfe13bcee780] = env->getMethodID(cls, "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;");
          mids$[mid_getEventsDetectors_12ee61573a18f417] = env->getMethodID(cls, "getEventsDetectors", "()Ljava/util/Collection;");
          mids$[mid_getFrame_6c9bc0a928c56d4e] = env->getMethodID(cls, "getFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_getInitialState_15e85d5301b90ef8] = env->getMethodID(cls, "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_getManagedAdditionalStates_5d7d8c500345981d] = env->getMethodID(cls, "getManagedAdditionalStates", "()[Ljava/lang/String;");
          mids$[mid_getMaxDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMinDate_7a97f7e149e79afb] = env->getMethodID(cls, "getMinDate", "()Lorg/orekit/time/AbsoluteDate;");
          mids$[mid_getMultiplexer_82f3fa0ddb2ba923] = env->getMethodID(cls, "getMultiplexer", "()Lorg/orekit/propagation/sampling/StepHandlerMultiplexer;");
          mids$[mid_getPVCoordinates_17742a9a6655bdb1] = env->getMethodID(cls, "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;");
          mids$[mid_isAdditionalStateManaged_fd2162b8a05a22fe] = env->getMethodID(cls, "isAdditionalStateManaged", "(Ljava/lang/String;)Z");
          mids$[mid_propagate_15e0d02372b1347b] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_propagate_b96c0d97a162784d] = env->getMethodID(cls, "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;");
          mids$[mid_pythonDecRef_0640e6acf969ed28] = env->getMethodID(cls, "pythonDecRef", "()V");
          mids$[mid_pythonExtension_9e26256fb0d384a2] = env->getMethodID(cls, "pythonExtension", "()J");
          mids$[mid_pythonExtension_3cd6a6b354c6aa22] = env->getMethodID(cls, "pythonExtension", "(J)V");
          mids$[mid_resetInitialState_8655761ebf04b503] = env->getMethodID(cls, "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V");
          mids$[mid_setAttitudeProvider_8fa6c0c067ead7b2] = env->getMethodID(cls, "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      PythonBoundedPropagator::PythonBoundedPropagator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0640e6acf969ed28)) {}

      void PythonBoundedPropagator::finalize() const
      {
        env->callVoidMethod(this$, mids$[mid_finalize_0640e6acf969ed28]);
      }

      jlong PythonBoundedPropagator::pythonExtension() const
      {
        return env->callLongMethod(this$, mids$[mid_pythonExtension_9e26256fb0d384a2]);
      }

      void PythonBoundedPropagator::pythonExtension(jlong a0) const
      {
        env->callVoidMethod(this$, mids$[mid_pythonExtension_3cd6a6b354c6aa22], a0);
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
      static PyObject *t_PythonBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_PythonBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg);
      static int t_PythonBoundedPropagator_init_(t_PythonBoundedPropagator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_PythonBoundedPropagator_finalize(t_PythonBoundedPropagator *self);
      static PyObject *t_PythonBoundedPropagator_pythonExtension(t_PythonBoundedPropagator *self, PyObject *args);
      static void JNICALL t_PythonBoundedPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonBoundedPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonBoundedPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getFrame7(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getInitialState8(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getMaxDate10(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getMinDate11(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getMultiplexer12(JNIEnv *jenv, jobject jobj);
      static jobject JNICALL t_PythonBoundedPropagator_getPVCoordinates13(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static jboolean JNICALL t_PythonBoundedPropagator_isAdditionalStateManaged14(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonBoundedPropagator_propagate15(JNIEnv *jenv, jobject jobj, jobject a0);
      static jobject JNICALL t_PythonBoundedPropagator_propagate16(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
      static void JNICALL t_PythonBoundedPropagator_pythonDecRef17(JNIEnv *jenv, jobject jobj);
      static void JNICALL t_PythonBoundedPropagator_resetInitialState18(JNIEnv *jenv, jobject jobj, jobject a0);
      static void JNICALL t_PythonBoundedPropagator_setAttitudeProvider19(JNIEnv *jenv, jobject jobj, jobject a0);
      static PyObject *t_PythonBoundedPropagator_get__self(t_PythonBoundedPropagator *self, void *data);
      static PyGetSetDef t_PythonBoundedPropagator__fields_[] = {
        DECLARE_GET_FIELD(t_PythonBoundedPropagator, self),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_PythonBoundedPropagator__methods_[] = {
        DECLARE_METHOD(t_PythonBoundedPropagator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonBoundedPropagator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_PythonBoundedPropagator, finalize, METH_NOARGS),
        DECLARE_METHOD(t_PythonBoundedPropagator, pythonExtension, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(PythonBoundedPropagator)[] = {
        { Py_tp_methods, t_PythonBoundedPropagator__methods_ },
        { Py_tp_init, (void *) t_PythonBoundedPropagator_init_ },
        { Py_tp_getset, t_PythonBoundedPropagator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(PythonBoundedPropagator)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(PythonBoundedPropagator, t_PythonBoundedPropagator, PythonBoundedPropagator);

      void t_PythonBoundedPropagator::install(PyObject *module)
      {
        installType(&PY_TYPE(PythonBoundedPropagator), &PY_TYPE_DEF(PythonBoundedPropagator), module, "PythonBoundedPropagator", 1);
      }

      void t_PythonBoundedPropagator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBoundedPropagator), "class_", make_descriptor(PythonBoundedPropagator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBoundedPropagator), "wrapfn_", make_descriptor(t_PythonBoundedPropagator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(PythonBoundedPropagator), "boxfn_", make_descriptor(boxObject));
        jclass cls = env->getClass(PythonBoundedPropagator::initializeClass);
        JNINativeMethod methods[] = {
          { "addAdditionalStateProvider", "(Lorg/orekit/propagation/AdditionalStateProvider;)V", (void *) t_PythonBoundedPropagator_addAdditionalStateProvider0 },
          { "addEventDetector", "(Lorg/orekit/propagation/events/EventDetector;)V", (void *) t_PythonBoundedPropagator_addEventDetector1 },
          { "clearEventsDetectors", "()V", (void *) t_PythonBoundedPropagator_clearEventsDetectors2 },
          { "getAdditionalStateProviders", "()Ljava/util/List;", (void *) t_PythonBoundedPropagator_getAdditionalStateProviders3 },
          { "getAttitudeProvider", "()Lorg/orekit/attitudes/AttitudeProvider;", (void *) t_PythonBoundedPropagator_getAttitudeProvider4 },
          { "getEphemerisGenerator", "()Lorg/orekit/propagation/EphemerisGenerator;", (void *) t_PythonBoundedPropagator_getEphemerisGenerator5 },
          { "getEventsDetectors", "()Ljava/util/Collection;", (void *) t_PythonBoundedPropagator_getEventsDetectors6 },
          { "getFrame", "()Lorg/orekit/frames/Frame;", (void *) t_PythonBoundedPropagator_getFrame7 },
          { "getInitialState", "()Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonBoundedPropagator_getInitialState8 },
          { "getManagedAdditionalStates", "()[Ljava/lang/String;", (void *) t_PythonBoundedPropagator_getManagedAdditionalStates9 },
          { "getMaxDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonBoundedPropagator_getMaxDate10 },
          { "getMinDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonBoundedPropagator_getMinDate11 },
          { "getMultiplexer", "()Lorg/orekit/propagation/sampling/StepHandlerMultiplexer;", (void *) t_PythonBoundedPropagator_getMultiplexer12 },
          { "getPVCoordinates", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/frames/Frame;)Lorg/orekit/utils/TimeStampedPVCoordinates;", (void *) t_PythonBoundedPropagator_getPVCoordinates13 },
          { "isAdditionalStateManaged", "(Ljava/lang/String;)Z", (void *) t_PythonBoundedPropagator_isAdditionalStateManaged14 },
          { "propagate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonBoundedPropagator_propagate15 },
          { "propagate", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/propagation/SpacecraftState;", (void *) t_PythonBoundedPropagator_propagate16 },
          { "pythonDecRef", "()V", (void *) t_PythonBoundedPropagator_pythonDecRef17 },
          { "resetInitialState", "(Lorg/orekit/propagation/SpacecraftState;)V", (void *) t_PythonBoundedPropagator_resetInitialState18 },
          { "setAttitudeProvider", "(Lorg/orekit/attitudes/AttitudeProvider;)V", (void *) t_PythonBoundedPropagator_setAttitudeProvider19 },
        };
        env->registerNatives(cls, methods, 20);
      }

      static PyObject *t_PythonBoundedPropagator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, PythonBoundedPropagator::initializeClass, 1)))
          return NULL;
        return t_PythonBoundedPropagator::wrap_Object(PythonBoundedPropagator(((t_PythonBoundedPropagator *) arg)->object.this$));
      }
      static PyObject *t_PythonBoundedPropagator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, PythonBoundedPropagator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_PythonBoundedPropagator_init_(t_PythonBoundedPropagator *self, PyObject *args, PyObject *kwds)
      {
        PythonBoundedPropagator object((jobject) NULL);

        INT_CALL(object = PythonBoundedPropagator());
        self->object = object;

        Py_INCREF((PyObject *) self);
        self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

        return 0;
      }

      static PyObject *t_PythonBoundedPropagator_finalize(t_PythonBoundedPropagator *self)
      {
        OBJ_CALL(self->object.finalize());
        Py_RETURN_NONE;
      }

      static PyObject *t_PythonBoundedPropagator_pythonExtension(t_PythonBoundedPropagator *self, PyObject *args)
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

      static void JNICALL t_PythonBoundedPropagator_addAdditionalStateProvider0(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_AdditionalStateProvider::wrap_Object(::org::orekit::propagation::AdditionalStateProvider(a0));
        PyObject *result = PyObject_CallMethod(obj, "addAdditionalStateProvider", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonBoundedPropagator_addEventDetector1(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::events::t_EventDetector::wrap_Object(::org::orekit::propagation::events::EventDetector(a0));
        PyObject *result = PyObject_CallMethod(obj, "addEventDetector", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonBoundedPropagator_clearEventsDetectors2(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *result = PyObject_CallMethod(obj, "clearEventsDetectors", "");
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static jobject JNICALL t_PythonBoundedPropagator_getAdditionalStateProviders3(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::List value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getAdditionalStateProviders", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
        {
          throwTypeError("getAdditionalStateProviders", result);
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

      static jobject JNICALL t_PythonBoundedPropagator_getAttitudeProvider4(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::attitudes::AttitudeProvider value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getAttitudeProvider", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::attitudes::AttitudeProvider::initializeClass, &value))
        {
          throwTypeError("getAttitudeProvider", result);
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

      static jobject JNICALL t_PythonBoundedPropagator_getEphemerisGenerator5(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::EphemerisGenerator value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEphemerisGenerator", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::EphemerisGenerator::initializeClass, &value))
        {
          throwTypeError("getEphemerisGenerator", result);
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

      static jobject JNICALL t_PythonBoundedPropagator_getEventsDetectors6(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::java::util::Collection value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getEventsDetectors", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::java::util::Collection::initializeClass, &value))
        {
          throwTypeError("getEventsDetectors", result);
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

      static jobject JNICALL t_PythonBoundedPropagator_getFrame7(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::frames::Frame value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getFrame", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::frames::Frame::initializeClass, &value))
        {
          throwTypeError("getFrame", result);
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

      static jobject JNICALL t_PythonBoundedPropagator_getInitialState8(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getInitialState", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
        {
          throwTypeError("getInitialState", result);
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

      static jobject JNICALL t_PythonBoundedPropagator_getManagedAdditionalStates9(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        JArray< ::java::lang::String > value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getManagedAdditionalStates", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "[s", &value))
        {
          throwTypeError("getManagedAdditionalStates", result);
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

      static jobject JNICALL t_PythonBoundedPropagator_getMaxDate10(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMaxDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getMaxDate", result);
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

      static jobject JNICALL t_PythonBoundedPropagator_getMinDate11(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::time::AbsoluteDate value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMinDate", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
        {
          throwTypeError("getMinDate", result);
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

      static jobject JNICALL t_PythonBoundedPropagator_getMultiplexer12(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::sampling::StepHandlerMultiplexer value((jobject) NULL);
        PyObject *result = PyObject_CallMethod(obj, "getMultiplexer", "");
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::sampling::StepHandlerMultiplexer::initializeClass, &value))
        {
          throwTypeError("getMultiplexer", result);
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

      static jobject JNICALL t_PythonBoundedPropagator_getPVCoordinates13(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::utils::TimeStampedPVCoordinates value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::frames::t_Frame::wrap_Object(::org::orekit::frames::Frame(a1));
        PyObject *result = PyObject_CallMethod(obj, "getPVCoordinates", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::utils::TimeStampedPVCoordinates::initializeClass, &value))
        {
          throwTypeError("getPVCoordinates", result);
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

      static jboolean JNICALL t_PythonBoundedPropagator_isAdditionalStateManaged14(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        jboolean value;
        PyObject *o0 = env->fromJString((jstring) a0, 0);
        PyObject *result = PyObject_CallMethod(obj, "isAdditionalStateManaged", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "Z", &value))
        {
          throwTypeError("isAdditionalStateManaged", result);
          Py_DECREF(result);
        }
        else
        {
          Py_DECREF(result);
          return value;
        }

        return (jboolean) 0;
      }

      static jobject JNICALL t_PythonBoundedPropagator_propagate15(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
        {
          throwTypeError("propagate", result);
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

      static jobject JNICALL t_PythonBoundedPropagator_propagate16(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
        PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
        PyObject *o1 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a1));
        PyObject *result = PyObject_CallMethod(obj, "propagate", "OO", o0, o1);
        Py_DECREF(o0);
        Py_DECREF(o1);
        if (!result)
          throwPythonError();
        else if (parseArg(result, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
        {
          throwTypeError("propagate", result);
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

      static void JNICALL t_PythonBoundedPropagator_pythonDecRef17(JNIEnv *jenv, jobject jobj)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

        if (obj != NULL)
        {
          jenv->CallVoidMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_3cd6a6b354c6aa22], (jlong) 0);
          env->finalizeObject(jenv, obj);
        }
      }

      static void JNICALL t_PythonBoundedPropagator_resetInitialState18(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
        PyObject *result = PyObject_CallMethod(obj, "resetInitialState", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static void JNICALL t_PythonBoundedPropagator_setAttitudeProvider19(JNIEnv *jenv, jobject jobj, jobject a0)
      {
        jlong ptr = jenv->CallLongMethod(jobj, PythonBoundedPropagator::mids$[PythonBoundedPropagator::mid_pythonExtension_9e26256fb0d384a2]);
        PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
        PythonGIL gil(jenv);
        PyObject *o0 = ::org::orekit::attitudes::t_AttitudeProvider::wrap_Object(::org::orekit::attitudes::AttitudeProvider(a0));
        PyObject *result = PyObject_CallMethod(obj, "setAttitudeProvider", "O", o0);
        Py_DECREF(o0);
        if (!result)
          throwPythonError();
        else
          Py_DECREF(result);
      }

      static PyObject *t_PythonBoundedPropagator_get__self(t_PythonBoundedPropagator *self, void *data)
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
#include "org/orekit/propagation/sampling/FieldOrekitStepNormalizer.h"
#include "org/orekit/propagation/sampling/FieldOrekitFixedStepHandler.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepInterpolator.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/sampling/FieldOrekitStepHandler.h"
#include "java/lang/Class.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace sampling {

        ::java::lang::Class *FieldOrekitStepNormalizer::class$ = NULL;
        jmethodID *FieldOrekitStepNormalizer::mids$ = NULL;
        bool FieldOrekitStepNormalizer::live$ = false;

        jclass FieldOrekitStepNormalizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/sampling/FieldOrekitStepNormalizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c9f4018f814d2514] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/propagation/sampling/FieldOrekitFixedStepHandler;)V");
            mids$[mid_finish_b66c84a5711243d5] = env->getMethodID(cls, "finish", "(Lorg/orekit/propagation/FieldSpacecraftState;)V");
            mids$[mid_getFixedStepHandler_a49ed83bbdd0eefd] = env->getMethodID(cls, "getFixedStepHandler", "()Lorg/orekit/propagation/sampling/FieldOrekitFixedStepHandler;");
            mids$[mid_getFixedTimeStep_613c8f46c659f636] = env->getMethodID(cls, "getFixedTimeStep", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_handleStep_c006764357a9d9b2] = env->getMethodID(cls, "handleStep", "(Lorg/orekit/propagation/sampling/FieldOrekitStepInterpolator;)V");
            mids$[mid_init_811e49dad2467b67] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;)V");
            mids$[mid_requiresDenseOutput_89b302893bdbe1f1] = env->getMethodID(cls, "requiresDenseOutput", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldOrekitStepNormalizer::FieldOrekitStepNormalizer(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c9f4018f814d2514, a0.this$, a1.this$)) {}

        void FieldOrekitStepNormalizer::finish(const ::org::orekit::propagation::FieldSpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_b66c84a5711243d5], a0.this$);
        }

        ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler FieldOrekitStepNormalizer::getFixedStepHandler() const
        {
          return ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler(env->callObjectMethod(this$, mids$[mid_getFixedStepHandler_a49ed83bbdd0eefd]));
        }

        ::org::hipparchus::CalculusFieldElement FieldOrekitStepNormalizer::getFixedTimeStep() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFixedTimeStep_613c8f46c659f636]));
        }

        void FieldOrekitStepNormalizer::handleStep(const ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_c006764357a9d9b2], a0.this$);
        }

        void FieldOrekitStepNormalizer::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_811e49dad2467b67], a0.this$, a1.this$);
        }

        jboolean FieldOrekitStepNormalizer::requiresDenseOutput() const
        {
          return env->callBooleanMethod(this$, mids$[mid_requiresDenseOutput_89b302893bdbe1f1]);
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
      namespace sampling {
        static PyObject *t_FieldOrekitStepNormalizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitStepNormalizer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldOrekitStepNormalizer_of_(t_FieldOrekitStepNormalizer *self, PyObject *args);
        static int t_FieldOrekitStepNormalizer_init_(t_FieldOrekitStepNormalizer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldOrekitStepNormalizer_finish(t_FieldOrekitStepNormalizer *self, PyObject *arg);
        static PyObject *t_FieldOrekitStepNormalizer_getFixedStepHandler(t_FieldOrekitStepNormalizer *self);
        static PyObject *t_FieldOrekitStepNormalizer_getFixedTimeStep(t_FieldOrekitStepNormalizer *self);
        static PyObject *t_FieldOrekitStepNormalizer_handleStep(t_FieldOrekitStepNormalizer *self, PyObject *arg);
        static PyObject *t_FieldOrekitStepNormalizer_init(t_FieldOrekitStepNormalizer *self, PyObject *args);
        static PyObject *t_FieldOrekitStepNormalizer_requiresDenseOutput(t_FieldOrekitStepNormalizer *self);
        static PyObject *t_FieldOrekitStepNormalizer_get__fixedStepHandler(t_FieldOrekitStepNormalizer *self, void *data);
        static PyObject *t_FieldOrekitStepNormalizer_get__fixedTimeStep(t_FieldOrekitStepNormalizer *self, void *data);
        static PyObject *t_FieldOrekitStepNormalizer_get__parameters_(t_FieldOrekitStepNormalizer *self, void *data);
        static PyGetSetDef t_FieldOrekitStepNormalizer__fields_[] = {
          DECLARE_GET_FIELD(t_FieldOrekitStepNormalizer, fixedStepHandler),
          DECLARE_GET_FIELD(t_FieldOrekitStepNormalizer, fixedTimeStep),
          DECLARE_GET_FIELD(t_FieldOrekitStepNormalizer, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldOrekitStepNormalizer__methods_[] = {
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, finish, METH_O),
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, getFixedStepHandler, METH_NOARGS),
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, getFixedTimeStep, METH_NOARGS),
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, handleStep, METH_O),
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, init, METH_VARARGS),
          DECLARE_METHOD(t_FieldOrekitStepNormalizer, requiresDenseOutput, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldOrekitStepNormalizer)[] = {
          { Py_tp_methods, t_FieldOrekitStepNormalizer__methods_ },
          { Py_tp_init, (void *) t_FieldOrekitStepNormalizer_init_ },
          { Py_tp_getset, t_FieldOrekitStepNormalizer__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldOrekitStepNormalizer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FieldOrekitStepNormalizer, t_FieldOrekitStepNormalizer, FieldOrekitStepNormalizer);
        PyObject *t_FieldOrekitStepNormalizer::wrap_Object(const FieldOrekitStepNormalizer& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitStepNormalizer::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitStepNormalizer *self = (t_FieldOrekitStepNormalizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldOrekitStepNormalizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldOrekitStepNormalizer::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldOrekitStepNormalizer *self = (t_FieldOrekitStepNormalizer *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldOrekitStepNormalizer::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldOrekitStepNormalizer), &PY_TYPE_DEF(FieldOrekitStepNormalizer), module, "FieldOrekitStepNormalizer", 0);
        }

        void t_FieldOrekitStepNormalizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepNormalizer), "class_", make_descriptor(FieldOrekitStepNormalizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepNormalizer), "wrapfn_", make_descriptor(t_FieldOrekitStepNormalizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldOrekitStepNormalizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldOrekitStepNormalizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldOrekitStepNormalizer::initializeClass, 1)))
            return NULL;
          return t_FieldOrekitStepNormalizer::wrap_Object(FieldOrekitStepNormalizer(((t_FieldOrekitStepNormalizer *) arg)->object.this$));
        }
        static PyObject *t_FieldOrekitStepNormalizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldOrekitStepNormalizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldOrekitStepNormalizer_of_(t_FieldOrekitStepNormalizer *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldOrekitStepNormalizer_init_(t_FieldOrekitStepNormalizer *self, PyObject *args, PyObject *kwds)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler a1((jobject) NULL);
          PyTypeObject **p1;
          FieldOrekitStepNormalizer object((jobject) NULL);

          if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::orekit::propagation::sampling::t_FieldOrekitFixedStepHandler::parameters_))
          {
            INT_CALL(object = FieldOrekitStepNormalizer(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_FieldOrekitStepNormalizer_finish(t_FieldOrekitStepNormalizer *self, PyObject *arg)
        {
          ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_FieldOrekitStepNormalizer_getFixedStepHandler(t_FieldOrekitStepNormalizer *self)
        {
          ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler result((jobject) NULL);
          OBJ_CALL(result = self->object.getFixedStepHandler());
          return ::org::orekit::propagation::sampling::t_FieldOrekitFixedStepHandler::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldOrekitStepNormalizer_getFixedTimeStep(t_FieldOrekitStepNormalizer *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getFixedTimeStep());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldOrekitStepNormalizer_handleStep(t_FieldOrekitStepNormalizer *self, PyObject *arg)
        {
          ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::orekit::propagation::sampling::FieldOrekitStepInterpolator::initializeClass, &a0, &p0, ::org::orekit::propagation::sampling::t_FieldOrekitStepInterpolator::parameters_))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_FieldOrekitStepNormalizer_init(t_FieldOrekitStepNormalizer *self, PyObject *args)
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

        static PyObject *t_FieldOrekitStepNormalizer_requiresDenseOutput(t_FieldOrekitStepNormalizer *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.requiresDenseOutput());
          Py_RETURN_BOOL(result);
        }
        static PyObject *t_FieldOrekitStepNormalizer_get__parameters_(t_FieldOrekitStepNormalizer *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldOrekitStepNormalizer_get__fixedStepHandler(t_FieldOrekitStepNormalizer *self, void *data)
        {
          ::org::orekit::propagation::sampling::FieldOrekitFixedStepHandler value((jobject) NULL);
          OBJ_CALL(value = self->object.getFixedStepHandler());
          return ::org::orekit::propagation::sampling::t_FieldOrekitFixedStepHandler::wrap_Object(value);
        }

        static PyObject *t_FieldOrekitStepNormalizer_get__fixedTimeStep(t_FieldOrekitStepNormalizer *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getFixedTimeStep());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }
      }
    }
  }
}

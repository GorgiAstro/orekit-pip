#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/FieldArrayDictionary$Entry.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/FieldArrayDictionary$Entry.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *FieldArrayDictionary$Entry::class$ = NULL;
      jmethodID *FieldArrayDictionary$Entry::mids$ = NULL;
      bool FieldArrayDictionary$Entry::live$ = false;

      jclass FieldArrayDictionary$Entry::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/FieldArrayDictionary$Entry");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getKey_0090f7797e403f43] = env->getMethodID(cls, "getKey", "()Ljava/lang/String;");
          mids$[mid_getValue_01c7d10e96d5cf94] = env->getMethodID(cls, "getValue", "()[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_increment_ebc26dcaf4761286] = env->getMethodID(cls, "increment", "([D)V");
          mids$[mid_increment_4c337e4c1ec6f647] = env->getMethodID(cls, "increment", "([Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_scaledIncrement_1ad54eff90aceadc] = env->getMethodID(cls, "scaledIncrement", "(DLorg/orekit/utils/FieldArrayDictionary$Entry;)V");
          mids$[mid_scaledIncrement_ecb3894f7162b4c6] = env->getMethodID(cls, "scaledIncrement", "(Lorg/hipparchus/CalculusFieldElement;Lorg/orekit/utils/FieldArrayDictionary$Entry;)V");
          mids$[mid_size_f2f64475e4580546] = env->getMethodID(cls, "size", "()I");
          mids$[mid_zero_7ae3461a92a43152] = env->getMethodID(cls, "zero", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String FieldArrayDictionary$Entry::getKey() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getKey_0090f7797e403f43]));
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldArrayDictionary$Entry::getValue() const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_getValue_01c7d10e96d5cf94]));
      }

      void FieldArrayDictionary$Entry::increment(const JArray< jdouble > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_increment_ebc26dcaf4761286], a0.this$);
      }

      void FieldArrayDictionary$Entry::increment(const JArray< ::org::hipparchus::CalculusFieldElement > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_increment_4c337e4c1ec6f647], a0.this$);
      }

      void FieldArrayDictionary$Entry::scaledIncrement(jdouble a0, const FieldArrayDictionary$Entry & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_scaledIncrement_1ad54eff90aceadc], a0, a1.this$);
      }

      void FieldArrayDictionary$Entry::scaledIncrement(const ::org::hipparchus::CalculusFieldElement & a0, const FieldArrayDictionary$Entry & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_scaledIncrement_ecb3894f7162b4c6], a0.this$, a1.this$);
      }

      jint FieldArrayDictionary$Entry::size() const
      {
        return env->callIntMethod(this$, mids$[mid_size_f2f64475e4580546]);
      }

      void FieldArrayDictionary$Entry::zero() const
      {
        env->callVoidMethod(this$, mids$[mid_zero_7ae3461a92a43152]);
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
      static PyObject *t_FieldArrayDictionary$Entry_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldArrayDictionary$Entry_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldArrayDictionary$Entry_of_(t_FieldArrayDictionary$Entry *self, PyObject *args);
      static PyObject *t_FieldArrayDictionary$Entry_getKey(t_FieldArrayDictionary$Entry *self);
      static PyObject *t_FieldArrayDictionary$Entry_getValue(t_FieldArrayDictionary$Entry *self);
      static PyObject *t_FieldArrayDictionary$Entry_increment(t_FieldArrayDictionary$Entry *self, PyObject *args);
      static PyObject *t_FieldArrayDictionary$Entry_scaledIncrement(t_FieldArrayDictionary$Entry *self, PyObject *args);
      static PyObject *t_FieldArrayDictionary$Entry_size(t_FieldArrayDictionary$Entry *self);
      static PyObject *t_FieldArrayDictionary$Entry_zero(t_FieldArrayDictionary$Entry *self);
      static PyObject *t_FieldArrayDictionary$Entry_get__key(t_FieldArrayDictionary$Entry *self, void *data);
      static PyObject *t_FieldArrayDictionary$Entry_get__value(t_FieldArrayDictionary$Entry *self, void *data);
      static PyObject *t_FieldArrayDictionary$Entry_get__parameters_(t_FieldArrayDictionary$Entry *self, void *data);
      static PyGetSetDef t_FieldArrayDictionary$Entry__fields_[] = {
        DECLARE_GET_FIELD(t_FieldArrayDictionary$Entry, key),
        DECLARE_GET_FIELD(t_FieldArrayDictionary$Entry, value),
        DECLARE_GET_FIELD(t_FieldArrayDictionary$Entry, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldArrayDictionary$Entry__methods_[] = {
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, getKey, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, getValue, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, increment, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, scaledIncrement, METH_VARARGS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, size, METH_NOARGS),
        DECLARE_METHOD(t_FieldArrayDictionary$Entry, zero, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldArrayDictionary$Entry)[] = {
        { Py_tp_methods, t_FieldArrayDictionary$Entry__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldArrayDictionary$Entry__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldArrayDictionary$Entry)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldArrayDictionary$Entry, t_FieldArrayDictionary$Entry, FieldArrayDictionary$Entry);
      PyObject *t_FieldArrayDictionary$Entry::wrap_Object(const FieldArrayDictionary$Entry& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldArrayDictionary$Entry::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldArrayDictionary$Entry *self = (t_FieldArrayDictionary$Entry *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldArrayDictionary$Entry::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldArrayDictionary$Entry::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldArrayDictionary$Entry *self = (t_FieldArrayDictionary$Entry *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldArrayDictionary$Entry::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldArrayDictionary$Entry), &PY_TYPE_DEF(FieldArrayDictionary$Entry), module, "FieldArrayDictionary$Entry", 0);
      }

      void t_FieldArrayDictionary$Entry::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldArrayDictionary$Entry), "class_", make_descriptor(FieldArrayDictionary$Entry::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldArrayDictionary$Entry), "wrapfn_", make_descriptor(t_FieldArrayDictionary$Entry::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldArrayDictionary$Entry), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldArrayDictionary$Entry_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldArrayDictionary$Entry::initializeClass, 1)))
          return NULL;
        return t_FieldArrayDictionary$Entry::wrap_Object(FieldArrayDictionary$Entry(((t_FieldArrayDictionary$Entry *) arg)->object.this$));
      }
      static PyObject *t_FieldArrayDictionary$Entry_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldArrayDictionary$Entry::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldArrayDictionary$Entry_of_(t_FieldArrayDictionary$Entry *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldArrayDictionary$Entry_getKey(t_FieldArrayDictionary$Entry *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getKey());
        return j2p(result);
      }

      static PyObject *t_FieldArrayDictionary$Entry_getValue(t_FieldArrayDictionary$Entry *self)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);
        OBJ_CALL(result = self->object.getValue());
        return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }

      static PyObject *t_FieldArrayDictionary$Entry_increment(t_FieldArrayDictionary$Entry *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            JArray< jdouble > a0((jobject) NULL);

            if (!parseArgs(args, "[D", &a0))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }
          }
          {
            JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArgs(args, "[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(self->object.increment(a0));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "increment", args);
        return NULL;
      }

      static PyObject *t_FieldArrayDictionary$Entry_scaledIncrement(t_FieldArrayDictionary$Entry *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            FieldArrayDictionary$Entry a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "DK", FieldArrayDictionary$Entry::initializeClass, &a0, &a1, &p1, t_FieldArrayDictionary$Entry::parameters_))
            {
              OBJ_CALL(self->object.scaledIncrement(a0, a1));
              Py_RETURN_NONE;
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            FieldArrayDictionary$Entry a1((jobject) NULL);
            PyTypeObject **p1;

            if (!parseArgs(args, "KK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldArrayDictionary$Entry::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldArrayDictionary$Entry::parameters_))
            {
              OBJ_CALL(self->object.scaledIncrement(a0, a1));
              Py_RETURN_NONE;
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "scaledIncrement", args);
        return NULL;
      }

      static PyObject *t_FieldArrayDictionary$Entry_size(t_FieldArrayDictionary$Entry *self)
      {
        jint result;
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldArrayDictionary$Entry_zero(t_FieldArrayDictionary$Entry *self)
      {
        OBJ_CALL(self->object.zero());
        Py_RETURN_NONE;
      }
      static PyObject *t_FieldArrayDictionary$Entry_get__parameters_(t_FieldArrayDictionary$Entry *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldArrayDictionary$Entry_get__key(t_FieldArrayDictionary$Entry *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getKey());
        return j2p(value);
      }

      static PyObject *t_FieldArrayDictionary$Entry_get__value(t_FieldArrayDictionary$Entry *self, void *data)
      {
        JArray< ::org::hipparchus::CalculusFieldElement > value((jobject) NULL);
        OBJ_CALL(value = self->object.getValue());
        return JArray<jobject>(value.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/weather/GlobalPressureTemperatureModel.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/data/DataContext.h"
#include "java/lang/Class.h"
#include "org/orekit/models/earth/weather/WeatherModel.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace weather {

          ::java::lang::Class *GlobalPressureTemperatureModel::class$ = NULL;
          jmethodID *GlobalPressureTemperatureModel::mids$ = NULL;
          bool GlobalPressureTemperatureModel::live$ = false;

          jclass GlobalPressureTemperatureModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/weather/GlobalPressureTemperatureModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_67a8caec77669819] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/Frame;)V");
              mids$[mid_init$_5e3f3f16cd8961b3] = env->getMethodID(cls, "<init>", "(DDLorg/orekit/frames/Frame;Lorg/orekit/data/DataContext;)V");
              mids$[mid_getPressure_456d9a2f64d6b28d] = env->getMethodID(cls, "getPressure", "()D");
              mids$[mid_getTemperature_456d9a2f64d6b28d] = env->getMethodID(cls, "getTemperature", "()D");
              mids$[mid_weatherParameters_82dcc83e88ee1b1f] = env->getMethodID(cls, "weatherParameters", "(DLorg/orekit/time/AbsoluteDate;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          GlobalPressureTemperatureModel::GlobalPressureTemperatureModel(jdouble a0, jdouble a1, const ::org::orekit::frames::Frame & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_67a8caec77669819, a0, a1, a2.this$)) {}

          GlobalPressureTemperatureModel::GlobalPressureTemperatureModel(jdouble a0, jdouble a1, const ::org::orekit::frames::Frame & a2, const ::org::orekit::data::DataContext & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_5e3f3f16cd8961b3, a0, a1, a2.this$, a3.this$)) {}

          jdouble GlobalPressureTemperatureModel::getPressure() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getPressure_456d9a2f64d6b28d]);
          }

          jdouble GlobalPressureTemperatureModel::getTemperature() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTemperature_456d9a2f64d6b28d]);
          }

          void GlobalPressureTemperatureModel::weatherParameters(jdouble a0, const ::org::orekit::time::AbsoluteDate & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_weatherParameters_82dcc83e88ee1b1f], a0, a1.this$);
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
        namespace weather {
          static PyObject *t_GlobalPressureTemperatureModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GlobalPressureTemperatureModel_instance_(PyTypeObject *type, PyObject *arg);
          static int t_GlobalPressureTemperatureModel_init_(t_GlobalPressureTemperatureModel *self, PyObject *args, PyObject *kwds);
          static PyObject *t_GlobalPressureTemperatureModel_getPressure(t_GlobalPressureTemperatureModel *self);
          static PyObject *t_GlobalPressureTemperatureModel_getTemperature(t_GlobalPressureTemperatureModel *self);
          static PyObject *t_GlobalPressureTemperatureModel_weatherParameters(t_GlobalPressureTemperatureModel *self, PyObject *args);
          static PyObject *t_GlobalPressureTemperatureModel_get__pressure(t_GlobalPressureTemperatureModel *self, void *data);
          static PyObject *t_GlobalPressureTemperatureModel_get__temperature(t_GlobalPressureTemperatureModel *self, void *data);
          static PyGetSetDef t_GlobalPressureTemperatureModel__fields_[] = {
            DECLARE_GET_FIELD(t_GlobalPressureTemperatureModel, pressure),
            DECLARE_GET_FIELD(t_GlobalPressureTemperatureModel, temperature),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_GlobalPressureTemperatureModel__methods_[] = {
            DECLARE_METHOD(t_GlobalPressureTemperatureModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalPressureTemperatureModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GlobalPressureTemperatureModel, getPressure, METH_NOARGS),
            DECLARE_METHOD(t_GlobalPressureTemperatureModel, getTemperature, METH_NOARGS),
            DECLARE_METHOD(t_GlobalPressureTemperatureModel, weatherParameters, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GlobalPressureTemperatureModel)[] = {
            { Py_tp_methods, t_GlobalPressureTemperatureModel__methods_ },
            { Py_tp_init, (void *) t_GlobalPressureTemperatureModel_init_ },
            { Py_tp_getset, t_GlobalPressureTemperatureModel__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GlobalPressureTemperatureModel)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(GlobalPressureTemperatureModel, t_GlobalPressureTemperatureModel, GlobalPressureTemperatureModel);

          void t_GlobalPressureTemperatureModel::install(PyObject *module)
          {
            installType(&PY_TYPE(GlobalPressureTemperatureModel), &PY_TYPE_DEF(GlobalPressureTemperatureModel), module, "GlobalPressureTemperatureModel", 0);
          }

          void t_GlobalPressureTemperatureModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalPressureTemperatureModel), "class_", make_descriptor(GlobalPressureTemperatureModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalPressureTemperatureModel), "wrapfn_", make_descriptor(t_GlobalPressureTemperatureModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GlobalPressureTemperatureModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GlobalPressureTemperatureModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GlobalPressureTemperatureModel::initializeClass, 1)))
              return NULL;
            return t_GlobalPressureTemperatureModel::wrap_Object(GlobalPressureTemperatureModel(((t_GlobalPressureTemperatureModel *) arg)->object.this$));
          }
          static PyObject *t_GlobalPressureTemperatureModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GlobalPressureTemperatureModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_GlobalPressureTemperatureModel_init_(t_GlobalPressureTemperatureModel *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                GlobalPressureTemperatureModel object((jobject) NULL);

                if (!parseArgs(args, "DDk", ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = GlobalPressureTemperatureModel(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                jdouble a0;
                jdouble a1;
                ::org::orekit::frames::Frame a2((jobject) NULL);
                ::org::orekit::data::DataContext a3((jobject) NULL);
                GlobalPressureTemperatureModel object((jobject) NULL);

                if (!parseArgs(args, "DDkk", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::data::DataContext::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = GlobalPressureTemperatureModel(a0, a1, a2, a3));
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

          static PyObject *t_GlobalPressureTemperatureModel_getPressure(t_GlobalPressureTemperatureModel *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getPressure());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_GlobalPressureTemperatureModel_getTemperature(t_GlobalPressureTemperatureModel *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTemperature());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_GlobalPressureTemperatureModel_weatherParameters(t_GlobalPressureTemperatureModel *self, PyObject *args)
          {
            jdouble a0;
            ::org::orekit::time::AbsoluteDate a1((jobject) NULL);

            if (!parseArgs(args, "Dk", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
            {
              OBJ_CALL(self->object.weatherParameters(a0, a1));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "weatherParameters", args);
            return NULL;
          }

          static PyObject *t_GlobalPressureTemperatureModel_get__pressure(t_GlobalPressureTemperatureModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getPressure());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_GlobalPressureTemperatureModel_get__temperature(t_GlobalPressureTemperatureModel *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTemperature());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/HessenbergTransformer.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *HessenbergTransformer::class$ = NULL;
      jmethodID *HessenbergTransformer::mids$ = NULL;
      bool HessenbergTransformer::live$ = false;

      jclass HessenbergTransformer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/HessenbergTransformer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_30aa151fd03f3096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_getH_7116bbecdd8ceb21] = env->getMethodID(cls, "getH", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getP_7116bbecdd8ceb21] = env->getMethodID(cls, "getP", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getPT_7116bbecdd8ceb21] = env->getMethodID(cls, "getPT", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      HessenbergTransformer::HessenbergTransformer(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_30aa151fd03f3096, a0.this$)) {}

      ::org::hipparchus::linear::RealMatrix HessenbergTransformer::getH() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getH_7116bbecdd8ceb21]));
      }

      ::org::hipparchus::linear::RealMatrix HessenbergTransformer::getP() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getP_7116bbecdd8ceb21]));
      }

      ::org::hipparchus::linear::RealMatrix HessenbergTransformer::getPT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getPT_7116bbecdd8ceb21]));
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
      static PyObject *t_HessenbergTransformer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_HessenbergTransformer_instance_(PyTypeObject *type, PyObject *arg);
      static int t_HessenbergTransformer_init_(t_HessenbergTransformer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_HessenbergTransformer_getH(t_HessenbergTransformer *self);
      static PyObject *t_HessenbergTransformer_getP(t_HessenbergTransformer *self);
      static PyObject *t_HessenbergTransformer_getPT(t_HessenbergTransformer *self);
      static PyObject *t_HessenbergTransformer_get__h(t_HessenbergTransformer *self, void *data);
      static PyObject *t_HessenbergTransformer_get__p(t_HessenbergTransformer *self, void *data);
      static PyObject *t_HessenbergTransformer_get__pT(t_HessenbergTransformer *self, void *data);
      static PyGetSetDef t_HessenbergTransformer__fields_[] = {
        DECLARE_GET_FIELD(t_HessenbergTransformer, h),
        DECLARE_GET_FIELD(t_HessenbergTransformer, p),
        DECLARE_GET_FIELD(t_HessenbergTransformer, pT),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_HessenbergTransformer__methods_[] = {
        DECLARE_METHOD(t_HessenbergTransformer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HessenbergTransformer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_HessenbergTransformer, getH, METH_NOARGS),
        DECLARE_METHOD(t_HessenbergTransformer, getP, METH_NOARGS),
        DECLARE_METHOD(t_HessenbergTransformer, getPT, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(HessenbergTransformer)[] = {
        { Py_tp_methods, t_HessenbergTransformer__methods_ },
        { Py_tp_init, (void *) t_HessenbergTransformer_init_ },
        { Py_tp_getset, t_HessenbergTransformer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(HessenbergTransformer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(HessenbergTransformer, t_HessenbergTransformer, HessenbergTransformer);

      void t_HessenbergTransformer::install(PyObject *module)
      {
        installType(&PY_TYPE(HessenbergTransformer), &PY_TYPE_DEF(HessenbergTransformer), module, "HessenbergTransformer", 0);
      }

      void t_HessenbergTransformer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(HessenbergTransformer), "class_", make_descriptor(HessenbergTransformer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HessenbergTransformer), "wrapfn_", make_descriptor(t_HessenbergTransformer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(HessenbergTransformer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_HessenbergTransformer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, HessenbergTransformer::initializeClass, 1)))
          return NULL;
        return t_HessenbergTransformer::wrap_Object(HessenbergTransformer(((t_HessenbergTransformer *) arg)->object.this$));
      }
      static PyObject *t_HessenbergTransformer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, HessenbergTransformer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_HessenbergTransformer_init_(t_HessenbergTransformer *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
        HessenbergTransformer object((jobject) NULL);

        if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
        {
          INT_CALL(object = HessenbergTransformer(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_HessenbergTransformer_getH(t_HessenbergTransformer *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getH());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_HessenbergTransformer_getP(t_HessenbergTransformer *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_HessenbergTransformer_getPT(t_HessenbergTransformer *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getPT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_HessenbergTransformer_get__h(t_HessenbergTransformer *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getH());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_HessenbergTransformer_get__p(t_HessenbergTransformer *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getP());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_HessenbergTransformer_get__pT(t_HessenbergTransformer *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getPT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/continuous/LogisticDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace continuous {

        ::java::lang::Class *LogisticDistribution::class$ = NULL;
        jmethodID *LogisticDistribution::mids$ = NULL;
        bool LogisticDistribution::live$ = false;

        jclass LogisticDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/continuous/LogisticDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_1d715fa3b7b756e1] = env->getMethodID(cls, "<init>", "(DD)V");
            mids$[mid_cumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "cumulativeProbability", "(D)D");
            mids$[mid_density_0ba5fed9597b693e] = env->getMethodID(cls, "density", "(D)D");
            mids$[mid_getLocation_456d9a2f64d6b28d] = env->getMethodID(cls, "getLocation", "()D");
            mids$[mid_getNumericalMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getScale_456d9a2f64d6b28d] = env->getMethodID(cls, "getScale", "()D");
            mids$[mid_getSupportLowerBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportLowerBound", "()D");
            mids$[mid_getSupportUpperBound_456d9a2f64d6b28d] = env->getMethodID(cls, "getSupportUpperBound", "()D");
            mids$[mid_inverseCumulativeProbability_0ba5fed9597b693e] = env->getMethodID(cls, "inverseCumulativeProbability", "(D)D");
            mids$[mid_isSupportConnected_e470b6d9e0d979db] = env->getMethodID(cls, "isSupportConnected", "()Z");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        LogisticDistribution::LogisticDistribution(jdouble a0, jdouble a1) : ::org::hipparchus::distribution::continuous::AbstractRealDistribution(env->newObject(initializeClass, &mids$, mid_init$_1d715fa3b7b756e1, a0, a1)) {}

        jdouble LogisticDistribution::cumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_0ba5fed9597b693e], a0);
        }

        jdouble LogisticDistribution::density(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_density_0ba5fed9597b693e], a0);
        }

        jdouble LogisticDistribution::getLocation() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getLocation_456d9a2f64d6b28d]);
        }

        jdouble LogisticDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_456d9a2f64d6b28d]);
        }

        jdouble LogisticDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_456d9a2f64d6b28d]);
        }

        jdouble LogisticDistribution::getScale() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getScale_456d9a2f64d6b28d]);
        }

        jdouble LogisticDistribution::getSupportLowerBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportLowerBound_456d9a2f64d6b28d]);
        }

        jdouble LogisticDistribution::getSupportUpperBound() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getSupportUpperBound_456d9a2f64d6b28d]);
        }

        jdouble LogisticDistribution::inverseCumulativeProbability(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_inverseCumulativeProbability_0ba5fed9597b693e], a0);
        }

        jboolean LogisticDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_e470b6d9e0d979db]);
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
        static PyObject *t_LogisticDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_LogisticDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_LogisticDistribution_init_(t_LogisticDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_LogisticDistribution_cumulativeProbability(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_density(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_getLocation(t_LogisticDistribution *self);
        static PyObject *t_LogisticDistribution_getNumericalMean(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_getNumericalVariance(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_getScale(t_LogisticDistribution *self);
        static PyObject *t_LogisticDistribution_getSupportLowerBound(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_getSupportUpperBound(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_inverseCumulativeProbability(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_isSupportConnected(t_LogisticDistribution *self, PyObject *args);
        static PyObject *t_LogisticDistribution_get__location(t_LogisticDistribution *self, void *data);
        static PyObject *t_LogisticDistribution_get__numericalMean(t_LogisticDistribution *self, void *data);
        static PyObject *t_LogisticDistribution_get__numericalVariance(t_LogisticDistribution *self, void *data);
        static PyObject *t_LogisticDistribution_get__scale(t_LogisticDistribution *self, void *data);
        static PyObject *t_LogisticDistribution_get__supportConnected(t_LogisticDistribution *self, void *data);
        static PyObject *t_LogisticDistribution_get__supportLowerBound(t_LogisticDistribution *self, void *data);
        static PyObject *t_LogisticDistribution_get__supportUpperBound(t_LogisticDistribution *self, void *data);
        static PyGetSetDef t_LogisticDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_LogisticDistribution, location),
          DECLARE_GET_FIELD(t_LogisticDistribution, numericalMean),
          DECLARE_GET_FIELD(t_LogisticDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_LogisticDistribution, scale),
          DECLARE_GET_FIELD(t_LogisticDistribution, supportConnected),
          DECLARE_GET_FIELD(t_LogisticDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_LogisticDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_LogisticDistribution__methods_[] = {
          DECLARE_METHOD(t_LogisticDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LogisticDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_LogisticDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, density, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, getLocation, METH_NOARGS),
          DECLARE_METHOD(t_LogisticDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, getScale, METH_NOARGS),
          DECLARE_METHOD(t_LogisticDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, inverseCumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_LogisticDistribution, isSupportConnected, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(LogisticDistribution)[] = {
          { Py_tp_methods, t_LogisticDistribution__methods_ },
          { Py_tp_init, (void *) t_LogisticDistribution_init_ },
          { Py_tp_getset, t_LogisticDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(LogisticDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::continuous::AbstractRealDistribution),
          NULL
        };

        DEFINE_TYPE(LogisticDistribution, t_LogisticDistribution, LogisticDistribution);

        void t_LogisticDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(LogisticDistribution), &PY_TYPE_DEF(LogisticDistribution), module, "LogisticDistribution", 0);
        }

        void t_LogisticDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(LogisticDistribution), "class_", make_descriptor(LogisticDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LogisticDistribution), "wrapfn_", make_descriptor(t_LogisticDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(LogisticDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_LogisticDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, LogisticDistribution::initializeClass, 1)))
            return NULL;
          return t_LogisticDistribution::wrap_Object(LogisticDistribution(((t_LogisticDistribution *) arg)->object.this$));
        }
        static PyObject *t_LogisticDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, LogisticDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_LogisticDistribution_init_(t_LogisticDistribution *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          LogisticDistribution object((jobject) NULL);

          if (!parseArgs(args, "DD", &a0, &a1))
          {
            INT_CALL(object = LogisticDistribution(a0, a1));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_LogisticDistribution_cumulativeProbability(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_LogisticDistribution_density(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.density(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "density", args, 2);
        }

        static PyObject *t_LogisticDistribution_getLocation(t_LogisticDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getLocation());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LogisticDistribution_getNumericalMean(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_LogisticDistribution_getNumericalVariance(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_LogisticDistribution_getScale(t_LogisticDistribution *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getScale());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_LogisticDistribution_getSupportLowerBound(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_LogisticDistribution_getSupportUpperBound(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_LogisticDistribution_inverseCumulativeProbability(t_LogisticDistribution *self, PyObject *args)
        {
          jdouble a0;
          jdouble result;

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.inverseCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "inverseCumulativeProbability", args, 2);
        }

        static PyObject *t_LogisticDistribution_isSupportConnected(t_LogisticDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(LogisticDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_LogisticDistribution_get__location(t_LogisticDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getLocation());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogisticDistribution_get__numericalMean(t_LogisticDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogisticDistribution_get__numericalVariance(t_LogisticDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogisticDistribution_get__scale(t_LogisticDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getScale());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogisticDistribution_get__supportConnected(t_LogisticDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_LogisticDistribution_get__supportLowerBound(t_LogisticDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_LogisticDistribution_get__supportUpperBound(t_LogisticDistribution *self, void *data)
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
#include "org/orekit/estimation/sequential/UnscentedKalmanEstimator.h"
#include "java/lang/Iterable.h"
#include "org/orekit/estimation/sequential/KalmanObserver.h"
#include "org/orekit/propagation/Propagator.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace sequential {

        ::java::lang::Class *UnscentedKalmanEstimator::class$ = NULL;
        jmethodID *UnscentedKalmanEstimator::mids$ = NULL;
        bool UnscentedKalmanEstimator::live$ = false;

        jclass UnscentedKalmanEstimator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/sequential/UnscentedKalmanEstimator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_estimationStep_637ed96db7decac9] = env->getMethodID(cls, "estimationStep", "(Lorg/orekit/estimation/measurements/ObservedMeasurement;)[Lorg/orekit/propagation/Propagator;");
            mids$[mid_processMeasurements_0f0906d0fce818f4] = env->getMethodID(cls, "processMeasurements", "(Ljava/lang/Iterable;)[Lorg/orekit/propagation/Propagator;");
            mids$[mid_setObserver_fe6775fb802fa129] = env->getMethodID(cls, "setObserver", "(Lorg/orekit/estimation/sequential/KalmanObserver;)V");
            mids$[mid_getKalmanEstimation_69a0a486b7aaf0c0] = env->getMethodID(cls, "getKalmanEstimation", "()Lorg/orekit/estimation/sequential/KalmanEstimation;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< ::org::orekit::propagation::Propagator > UnscentedKalmanEstimator::estimationStep(const ::org::orekit::estimation::measurements::ObservedMeasurement & a0) const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_estimationStep_637ed96db7decac9], a0.this$));
        }

        JArray< ::org::orekit::propagation::Propagator > UnscentedKalmanEstimator::processMeasurements(const ::java::lang::Iterable & a0) const
        {
          return JArray< ::org::orekit::propagation::Propagator >(env->callObjectMethod(this$, mids$[mid_processMeasurements_0f0906d0fce818f4], a0.this$));
        }

        void UnscentedKalmanEstimator::setObserver(const ::org::orekit::estimation::sequential::KalmanObserver & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setObserver_fe6775fb802fa129], a0.this$);
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
      namespace sequential {
        static PyObject *t_UnscentedKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnscentedKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnscentedKalmanEstimator_estimationStep(t_UnscentedKalmanEstimator *self, PyObject *arg);
        static PyObject *t_UnscentedKalmanEstimator_processMeasurements(t_UnscentedKalmanEstimator *self, PyObject *arg);
        static PyObject *t_UnscentedKalmanEstimator_setObserver(t_UnscentedKalmanEstimator *self, PyObject *arg);
        static int t_UnscentedKalmanEstimator_set__observer(t_UnscentedKalmanEstimator *self, PyObject *arg, void *data);
        static PyGetSetDef t_UnscentedKalmanEstimator__fields_[] = {
          DECLARE_SET_FIELD(t_UnscentedKalmanEstimator, observer),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_UnscentedKalmanEstimator__methods_[] = {
          DECLARE_METHOD(t_UnscentedKalmanEstimator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnscentedKalmanEstimator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnscentedKalmanEstimator, estimationStep, METH_O),
          DECLARE_METHOD(t_UnscentedKalmanEstimator, processMeasurements, METH_O),
          DECLARE_METHOD(t_UnscentedKalmanEstimator, setObserver, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnscentedKalmanEstimator)[] = {
          { Py_tp_methods, t_UnscentedKalmanEstimator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_UnscentedKalmanEstimator__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnscentedKalmanEstimator)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::sequential::AbstractKalmanEstimator),
          NULL
        };

        DEFINE_TYPE(UnscentedKalmanEstimator, t_UnscentedKalmanEstimator, UnscentedKalmanEstimator);

        void t_UnscentedKalmanEstimator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnscentedKalmanEstimator), &PY_TYPE_DEF(UnscentedKalmanEstimator), module, "UnscentedKalmanEstimator", 0);
        }

        void t_UnscentedKalmanEstimator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanEstimator), "class_", make_descriptor(UnscentedKalmanEstimator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanEstimator), "wrapfn_", make_descriptor(t_UnscentedKalmanEstimator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnscentedKalmanEstimator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnscentedKalmanEstimator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnscentedKalmanEstimator::initializeClass, 1)))
            return NULL;
          return t_UnscentedKalmanEstimator::wrap_Object(UnscentedKalmanEstimator(((t_UnscentedKalmanEstimator *) arg)->object.this$));
        }
        static PyObject *t_UnscentedKalmanEstimator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnscentedKalmanEstimator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnscentedKalmanEstimator_estimationStep(t_UnscentedKalmanEstimator *self, PyObject *arg)
        {
          ::org::orekit::estimation::measurements::ObservedMeasurement a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::orekit::estimation::measurements::ObservedMeasurement::initializeClass, &a0, &p0, ::org::orekit::estimation::measurements::t_ObservedMeasurement::parameters_))
          {
            OBJ_CALL(result = self->object.estimationStep(a0));
            return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "estimationStep", arg);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanEstimator_processMeasurements(t_UnscentedKalmanEstimator *self, PyObject *arg)
        {
          ::java::lang::Iterable a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::orekit::propagation::Propagator > result((jobject) NULL);

          if (!parseArg(arg, "K", ::java::lang::Iterable::initializeClass, &a0, &p0, ::java::lang::t_Iterable::parameters_))
          {
            OBJ_CALL(result = self->object.processMeasurements(a0));
            return JArray<jobject>(result.this$).wrap(::org::orekit::propagation::t_Propagator::wrap_jobject);
          }

          PyErr_SetArgsError((PyObject *) self, "processMeasurements", arg);
          return NULL;
        }

        static PyObject *t_UnscentedKalmanEstimator_setObserver(t_UnscentedKalmanEstimator *self, PyObject *arg)
        {
          ::org::orekit::estimation::sequential::KalmanObserver a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setObserver(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setObserver", arg);
          return NULL;
        }

        static int t_UnscentedKalmanEstimator_set__observer(t_UnscentedKalmanEstimator *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::estimation::sequential::KalmanObserver value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::estimation::sequential::KalmanObserver::initializeClass, &value))
            {
              INT_CALL(self->object.setObserver(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "observer", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/drag/PythonAbstractDragForceModel.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "java/lang/Throwable.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/models/earth/atmosphere/Atmosphere.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace drag {

        ::java::lang::Class *PythonAbstractDragForceModel::class$ = NULL;
        jmethodID *PythonAbstractDragForceModel::mids$ = NULL;
        bool PythonAbstractDragForceModel::live$ = false;

        jclass PythonAbstractDragForceModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/drag/PythonAbstractDragForceModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_4d6992c3a12f4751] = env->getMethodID(cls, "<init>", "(Lorg/orekit/models/earth/atmosphere/Atmosphere;)V");
            mids$[mid_acceleration_78989e44b99f7cc2] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_acceleration_00aba28d3abe9a8c] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
            mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
            mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
            mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
            mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        PythonAbstractDragForceModel::PythonAbstractDragForceModel(const ::org::orekit::models::earth::atmosphere::Atmosphere & a0) : ::org::orekit::forces::drag::AbstractDragForceModel(env->newObject(initializeClass, &mids$, mid_init$_4d6992c3a12f4751, a0.this$)) {}

        void PythonAbstractDragForceModel::finalize() const
        {
          env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
        }

        jlong PythonAbstractDragForceModel::pythonExtension() const
        {
          return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
        }

        void PythonAbstractDragForceModel::pythonExtension(jlong a0) const
        {
          env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      namespace drag {
        static PyObject *t_PythonAbstractDragForceModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_PythonAbstractDragForceModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_PythonAbstractDragForceModel_init_(t_PythonAbstractDragForceModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_PythonAbstractDragForceModel_finalize(t_PythonAbstractDragForceModel *self);
        static PyObject *t_PythonAbstractDragForceModel_pythonExtension(t_PythonAbstractDragForceModel *self, PyObject *args);
        static jobject JNICALL t_PythonAbstractDragForceModel_acceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonAbstractDragForceModel_acceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
        static jobject JNICALL t_PythonAbstractDragForceModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj);
        static void JNICALL t_PythonAbstractDragForceModel_pythonDecRef3(JNIEnv *jenv, jobject jobj);
        static PyObject *t_PythonAbstractDragForceModel_get__self(t_PythonAbstractDragForceModel *self, void *data);
        static PyGetSetDef t_PythonAbstractDragForceModel__fields_[] = {
          DECLARE_GET_FIELD(t_PythonAbstractDragForceModel, self),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_PythonAbstractDragForceModel__methods_[] = {
          DECLARE_METHOD(t_PythonAbstractDragForceModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractDragForceModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_PythonAbstractDragForceModel, finalize, METH_NOARGS),
          DECLARE_METHOD(t_PythonAbstractDragForceModel, pythonExtension, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(PythonAbstractDragForceModel)[] = {
          { Py_tp_methods, t_PythonAbstractDragForceModel__methods_ },
          { Py_tp_init, (void *) t_PythonAbstractDragForceModel_init_ },
          { Py_tp_getset, t_PythonAbstractDragForceModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(PythonAbstractDragForceModel)[] = {
          &PY_TYPE_DEF(::org::orekit::forces::drag::AbstractDragForceModel),
          NULL
        };

        DEFINE_TYPE(PythonAbstractDragForceModel, t_PythonAbstractDragForceModel, PythonAbstractDragForceModel);

        void t_PythonAbstractDragForceModel::install(PyObject *module)
        {
          installType(&PY_TYPE(PythonAbstractDragForceModel), &PY_TYPE_DEF(PythonAbstractDragForceModel), module, "PythonAbstractDragForceModel", 1);
        }

        void t_PythonAbstractDragForceModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDragForceModel), "class_", make_descriptor(PythonAbstractDragForceModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDragForceModel), "wrapfn_", make_descriptor(t_PythonAbstractDragForceModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(PythonAbstractDragForceModel), "boxfn_", make_descriptor(boxObject));
          jclass cls = env->getClass(PythonAbstractDragForceModel::initializeClass);
          JNINativeMethod methods[] = {
            { "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;", (void *) t_PythonAbstractDragForceModel_acceleration0 },
            { "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;", (void *) t_PythonAbstractDragForceModel_acceleration1 },
            { "getParametersDrivers", "()Ljava/util/List;", (void *) t_PythonAbstractDragForceModel_getParametersDrivers2 },
            { "pythonDecRef", "()V", (void *) t_PythonAbstractDragForceModel_pythonDecRef3 },
          };
          env->registerNatives(cls, methods, 4);
        }

        static PyObject *t_PythonAbstractDragForceModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, PythonAbstractDragForceModel::initializeClass, 1)))
            return NULL;
          return t_PythonAbstractDragForceModel::wrap_Object(PythonAbstractDragForceModel(((t_PythonAbstractDragForceModel *) arg)->object.this$));
        }
        static PyObject *t_PythonAbstractDragForceModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, PythonAbstractDragForceModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_PythonAbstractDragForceModel_init_(t_PythonAbstractDragForceModel *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::models::earth::atmosphere::Atmosphere a0((jobject) NULL);
          PythonAbstractDragForceModel object((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::models::earth::atmosphere::Atmosphere::initializeClass, &a0))
          {
            INT_CALL(object = PythonAbstractDragForceModel(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          Py_INCREF((PyObject *) self);
          self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

          return 0;
        }

        static PyObject *t_PythonAbstractDragForceModel_finalize(t_PythonAbstractDragForceModel *self)
        {
          OBJ_CALL(self->object.finalize());
          Py_RETURN_NONE;
        }

        static PyObject *t_PythonAbstractDragForceModel_pythonExtension(t_PythonAbstractDragForceModel *self, PyObject *args)
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

        static jobject JNICALL t_PythonAbstractDragForceModel_acceleration0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDragForceModel::mids$[PythonAbstractDragForceModel::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
          PyObject *o1 = JArray<jdouble>(a1).wrap();
          PyObject *result = PyObject_CallMethod(obj, "acceleration", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &value))
          {
            throwTypeError("acceleration", result);
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

        static jobject JNICALL t_PythonAbstractDragForceModel_acceleration1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDragForceModel::mids$[PythonAbstractDragForceModel::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D value((jobject) NULL);
          PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
          PyObject *o1 = JArray<jobject>(a1).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
          PyObject *result = PyObject_CallMethod(obj, "acceleration", "OO", o0, o1);
          Py_DECREF(o0);
          Py_DECREF(o1);
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::org::hipparchus::geometry::euclidean::threed::FieldVector3D::initializeClass, &value))
          {
            throwTypeError("acceleration", result);
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

        static jobject JNICALL t_PythonAbstractDragForceModel_getParametersDrivers2(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDragForceModel::mids$[PythonAbstractDragForceModel::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
          PythonGIL gil(jenv);
          ::java::util::List value((jobject) NULL);
          PyObject *result = PyObject_CallMethod(obj, "getParametersDrivers", "");
          if (!result)
            throwPythonError();
          else if (parseArg(result, "k", ::java::util::List::initializeClass, &value))
          {
            throwTypeError("getParametersDrivers", result);
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

        static void JNICALL t_PythonAbstractDragForceModel_pythonDecRef3(JNIEnv *jenv, jobject jobj)
        {
          jlong ptr = jenv->CallLongMethod(jobj, PythonAbstractDragForceModel::mids$[PythonAbstractDragForceModel::mid_pythonExtension_a27fc9afd27e559d]);
          PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

          if (obj != NULL)
          {
            jenv->CallVoidMethod(jobj, PythonAbstractDragForceModel::mids$[PythonAbstractDragForceModel::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
            env->finalizeObject(jenv, obj);
          }
        }

        static PyObject *t_PythonAbstractDragForceModel_get__self(t_PythonAbstractDragForceModel *self, void *data)
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
#include "org/orekit/files/ccsds/utils/lexical/ParseToken$DateConsumer.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace utils {
          namespace lexical {

            ::java::lang::Class *ParseToken$DateConsumer::class$ = NULL;
            jmethodID *ParseToken$DateConsumer::mids$ = NULL;
            bool ParseToken$DateConsumer::live$ = false;

            jclass ParseToken$DateConsumer::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/utils/lexical/ParseToken$DateConsumer");

                mids$ = new jmethodID[max_mid];
                mids$[mid_accept_e82d68cd9f886886] = env->getMethodID(cls, "accept", "(Lorg/orekit/time/AbsoluteDate;)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            void ParseToken$DateConsumer::accept(const ::org::orekit::time::AbsoluteDate & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_accept_e82d68cd9f886886], a0.this$);
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
        namespace utils {
          namespace lexical {
            static PyObject *t_ParseToken$DateConsumer_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DateConsumer_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_ParseToken$DateConsumer_accept(t_ParseToken$DateConsumer *self, PyObject *arg);

            static PyMethodDef t_ParseToken$DateConsumer__methods_[] = {
              DECLARE_METHOD(t_ParseToken$DateConsumer, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DateConsumer, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_ParseToken$DateConsumer, accept, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(ParseToken$DateConsumer)[] = {
              { Py_tp_methods, t_ParseToken$DateConsumer__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(ParseToken$DateConsumer)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(ParseToken$DateConsumer, t_ParseToken$DateConsumer, ParseToken$DateConsumer);

            void t_ParseToken$DateConsumer::install(PyObject *module)
            {
              installType(&PY_TYPE(ParseToken$DateConsumer), &PY_TYPE_DEF(ParseToken$DateConsumer), module, "ParseToken$DateConsumer", 0);
            }

            void t_ParseToken$DateConsumer::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DateConsumer), "class_", make_descriptor(ParseToken$DateConsumer::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DateConsumer), "wrapfn_", make_descriptor(t_ParseToken$DateConsumer::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(ParseToken$DateConsumer), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_ParseToken$DateConsumer_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, ParseToken$DateConsumer::initializeClass, 1)))
                return NULL;
              return t_ParseToken$DateConsumer::wrap_Object(ParseToken$DateConsumer(((t_ParseToken$DateConsumer *) arg)->object.this$));
            }
            static PyObject *t_ParseToken$DateConsumer_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, ParseToken$DateConsumer::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_ParseToken$DateConsumer_accept(t_ParseToken$DateConsumer *self, PyObject *arg)
            {
              ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
              {
                OBJ_CALL(self->object.accept(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "accept", arg);
              return NULL;
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/potential/PythonRawSphericalHarmonicsProvider.h"
#include "java/lang/Throwable.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics.h"
#include "java/lang/Class.h"
#include "org/orekit/forces/gravity/potential/TideSystem.h"
#include "org/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {
        namespace potential {

          ::java::lang::Class *PythonRawSphericalHarmonicsProvider::class$ = NULL;
          jmethodID *PythonRawSphericalHarmonicsProvider::mids$ = NULL;
          bool PythonRawSphericalHarmonicsProvider::live$ = false;

          jclass PythonRawSphericalHarmonicsProvider::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/potential/PythonRawSphericalHarmonicsProvider");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_getAe_456d9a2f64d6b28d] = env->getMethodID(cls, "getAe", "()D");
              mids$[mid_getMaxDegree_f2f64475e4580546] = env->getMethodID(cls, "getMaxDegree", "()I");
              mids$[mid_getMaxOrder_f2f64475e4580546] = env->getMethodID(cls, "getMaxOrder", "()I");
              mids$[mid_getMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getMu", "()D");
              mids$[mid_getReferenceDate_aaa854c403487cf3] = env->getMethodID(cls, "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getTideSystem_b3b39360f3c8a6ac] = env->getMethodID(cls, "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;");
              mids$[mid_onDate_e337a8de1b487ef8] = env->getMethodID(cls, "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics;");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonRawSphericalHarmonicsProvider::PythonRawSphericalHarmonicsProvider() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonRawSphericalHarmonicsProvider::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonRawSphericalHarmonicsProvider::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonRawSphericalHarmonicsProvider::pythonExtension(jlong a0) const
          {
            env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
      namespace gravity {
        namespace potential {
          static PyObject *t_PythonRawSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonRawSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonRawSphericalHarmonicsProvider_init_(t_PythonRawSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonRawSphericalHarmonicsProvider_finalize(t_PythonRawSphericalHarmonicsProvider *self);
          static PyObject *t_PythonRawSphericalHarmonicsProvider_pythonExtension(t_PythonRawSphericalHarmonicsProvider *self, PyObject *args);
          static jdouble JNICALL t_PythonRawSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonRawSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj);
          static jint JNICALL t_PythonRawSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj);
          static jdouble JNICALL t_PythonRawSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonRawSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonRawSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj);
          static jobject JNICALL t_PythonRawSphericalHarmonicsProvider_onDate6(JNIEnv *jenv, jobject jobj, jobject a0);
          static void JNICALL t_PythonRawSphericalHarmonicsProvider_pythonDecRef7(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonRawSphericalHarmonicsProvider_get__self(t_PythonRawSphericalHarmonicsProvider *self, void *data);
          static PyGetSetDef t_PythonRawSphericalHarmonicsProvider__fields_[] = {
            DECLARE_GET_FIELD(t_PythonRawSphericalHarmonicsProvider, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonRawSphericalHarmonicsProvider__methods_[] = {
            DECLARE_METHOD(t_PythonRawSphericalHarmonicsProvider, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonRawSphericalHarmonicsProvider, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonRawSphericalHarmonicsProvider, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonRawSphericalHarmonicsProvider, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonRawSphericalHarmonicsProvider)[] = {
            { Py_tp_methods, t_PythonRawSphericalHarmonicsProvider__methods_ },
            { Py_tp_init, (void *) t_PythonRawSphericalHarmonicsProvider_init_ },
            { Py_tp_getset, t_PythonRawSphericalHarmonicsProvider__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonRawSphericalHarmonicsProvider)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonRawSphericalHarmonicsProvider, t_PythonRawSphericalHarmonicsProvider, PythonRawSphericalHarmonicsProvider);

          void t_PythonRawSphericalHarmonicsProvider::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonRawSphericalHarmonicsProvider), &PY_TYPE_DEF(PythonRawSphericalHarmonicsProvider), module, "PythonRawSphericalHarmonicsProvider", 1);
          }

          void t_PythonRawSphericalHarmonicsProvider::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRawSphericalHarmonicsProvider), "class_", make_descriptor(PythonRawSphericalHarmonicsProvider::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRawSphericalHarmonicsProvider), "wrapfn_", make_descriptor(t_PythonRawSphericalHarmonicsProvider::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonRawSphericalHarmonicsProvider), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonRawSphericalHarmonicsProvider::initializeClass);
            JNINativeMethod methods[] = {
              { "getAe", "()D", (void *) t_PythonRawSphericalHarmonicsProvider_getAe0 },
              { "getMaxDegree", "()I", (void *) t_PythonRawSphericalHarmonicsProvider_getMaxDegree1 },
              { "getMaxOrder", "()I", (void *) t_PythonRawSphericalHarmonicsProvider_getMaxOrder2 },
              { "getMu", "()D", (void *) t_PythonRawSphericalHarmonicsProvider_getMu3 },
              { "getReferenceDate", "()Lorg/orekit/time/AbsoluteDate;", (void *) t_PythonRawSphericalHarmonicsProvider_getReferenceDate4 },
              { "getTideSystem", "()Lorg/orekit/forces/gravity/potential/TideSystem;", (void *) t_PythonRawSphericalHarmonicsProvider_getTideSystem5 },
              { "onDate", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/forces/gravity/potential/RawSphericalHarmonicsProvider$RawSphericalHarmonics;", (void *) t_PythonRawSphericalHarmonicsProvider_onDate6 },
              { "pythonDecRef", "()V", (void *) t_PythonRawSphericalHarmonicsProvider_pythonDecRef7 },
            };
            env->registerNatives(cls, methods, 8);
          }

          static PyObject *t_PythonRawSphericalHarmonicsProvider_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonRawSphericalHarmonicsProvider::initializeClass, 1)))
              return NULL;
            return t_PythonRawSphericalHarmonicsProvider::wrap_Object(PythonRawSphericalHarmonicsProvider(((t_PythonRawSphericalHarmonicsProvider *) arg)->object.this$));
          }
          static PyObject *t_PythonRawSphericalHarmonicsProvider_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonRawSphericalHarmonicsProvider::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonRawSphericalHarmonicsProvider_init_(t_PythonRawSphericalHarmonicsProvider *self, PyObject *args, PyObject *kwds)
          {
            PythonRawSphericalHarmonicsProvider object((jobject) NULL);

            INT_CALL(object = PythonRawSphericalHarmonicsProvider());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonRawSphericalHarmonicsProvider_finalize(t_PythonRawSphericalHarmonicsProvider *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonRawSphericalHarmonicsProvider_pythonExtension(t_PythonRawSphericalHarmonicsProvider *self, PyObject *args)
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

          static jdouble JNICALL t_PythonRawSphericalHarmonicsProvider_getAe0(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getAe", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getAe", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jint JNICALL t_PythonRawSphericalHarmonicsProvider_getMaxDegree1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "getMaxDegree", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("getMaxDegree", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static jint JNICALL t_PythonRawSphericalHarmonicsProvider_getMaxOrder2(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jint value;
            PyObject *result = PyObject_CallMethod(obj, "getMaxOrder", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "I", &value))
            {
              throwTypeError("getMaxOrder", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jint) 0;
          }

          static jdouble JNICALL t_PythonRawSphericalHarmonicsProvider_getMu3(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jdouble value;
            PyObject *result = PyObject_CallMethod(obj, "getMu", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "D", &value))
            {
              throwTypeError("getMu", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jdouble) 0;
          }

          static jobject JNICALL t_PythonRawSphericalHarmonicsProvider_getReferenceDate4(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getReferenceDate", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
            {
              throwTypeError("getReferenceDate", result);
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

          static jobject JNICALL t_PythonRawSphericalHarmonicsProvider_getTideSystem5(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::TideSystem value((jobject) NULL);
            PyObject *result = PyObject_CallMethod(obj, "getTideSystem", "");
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::TideSystem::initializeClass, &value))
            {
              throwTypeError("getTideSystem", result);
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

          static jobject JNICALL t_PythonRawSphericalHarmonicsProvider_onDate6(JNIEnv *jenv, jobject jobj, jobject a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider$RawSphericalHarmonics value((jobject) NULL);
            PyObject *o0 = ::org::orekit::time::t_AbsoluteDate::wrap_Object(::org::orekit::time::AbsoluteDate(a0));
            PyObject *result = PyObject_CallMethod(obj, "onDate", "O", o0);
            Py_DECREF(o0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "k", ::org::orekit::forces::gravity::potential::RawSphericalHarmonicsProvider$RawSphericalHarmonics::initializeClass, &value))
            {
              throwTypeError("onDate", result);
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

          static void JNICALL t_PythonRawSphericalHarmonicsProvider_pythonDecRef7(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonRawSphericalHarmonicsProvider::mids$[PythonRawSphericalHarmonicsProvider::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonRawSphericalHarmonicsProvider_get__self(t_PythonRawSphericalHarmonicsProvider *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/NamedParameterJacobianProvider.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *NamedParameterJacobianProvider::class$ = NULL;
      jmethodID *NamedParameterJacobianProvider::mids$ = NULL;
      bool NamedParameterJacobianProvider::live$ = false;

      jclass NamedParameterJacobianProvider::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/NamedParameterJacobianProvider");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeParameterJacobian_b64b3db9d797dca8] = env->getMethodID(cls, "computeParameterJacobian", "(D[D[DLjava/lang/String;)[D");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > NamedParameterJacobianProvider::computeParameterJacobian(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2, const ::java::lang::String & a3) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeParameterJacobian_b64b3db9d797dca8], a0, a1.this$, a2.this$, a3.this$));
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
      static PyObject *t_NamedParameterJacobianProvider_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NamedParameterJacobianProvider_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_NamedParameterJacobianProvider_computeParameterJacobian(t_NamedParameterJacobianProvider *self, PyObject *args);

      static PyMethodDef t_NamedParameterJacobianProvider__methods_[] = {
        DECLARE_METHOD(t_NamedParameterJacobianProvider, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NamedParameterJacobianProvider, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_NamedParameterJacobianProvider, computeParameterJacobian, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(NamedParameterJacobianProvider)[] = {
        { Py_tp_methods, t_NamedParameterJacobianProvider__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(NamedParameterJacobianProvider)[] = {
        &PY_TYPE_DEF(::org::hipparchus::ode::Parameterizable),
        NULL
      };

      DEFINE_TYPE(NamedParameterJacobianProvider, t_NamedParameterJacobianProvider, NamedParameterJacobianProvider);

      void t_NamedParameterJacobianProvider::install(PyObject *module)
      {
        installType(&PY_TYPE(NamedParameterJacobianProvider), &PY_TYPE_DEF(NamedParameterJacobianProvider), module, "NamedParameterJacobianProvider", 0);
      }

      void t_NamedParameterJacobianProvider::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(NamedParameterJacobianProvider), "class_", make_descriptor(NamedParameterJacobianProvider::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NamedParameterJacobianProvider), "wrapfn_", make_descriptor(t_NamedParameterJacobianProvider::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(NamedParameterJacobianProvider), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_NamedParameterJacobianProvider_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, NamedParameterJacobianProvider::initializeClass, 1)))
          return NULL;
        return t_NamedParameterJacobianProvider::wrap_Object(NamedParameterJacobianProvider(((t_NamedParameterJacobianProvider *) arg)->object.this$));
      }
      static PyObject *t_NamedParameterJacobianProvider_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, NamedParameterJacobianProvider::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_NamedParameterJacobianProvider_computeParameterJacobian(t_NamedParameterJacobianProvider *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);
        ::java::lang::String a3((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "D[D[Ds", &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.computeParameterJacobian(a0, a1, a2, a3));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "computeParameterJacobian", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/Plane.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "org/hipparchus/geometry/euclidean/threed/SubPlane.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/PolyhedronsSet.h"
#include "org/hipparchus/geometry/euclidean/threed/Rotation.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/geometry/partitioning/Embedding.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/euclidean/twod/Euclidean2D.h"
#include "org/hipparchus/geometry/euclidean/threed/Line.h"
#include "org/hipparchus/geometry/euclidean/threed/Plane.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *Plane::class$ = NULL;
          jmethodID *Plane::mids$ = NULL;
          bool Plane::live$ = false;

          jclass Plane::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/Plane");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_c1cd2c1af3ffd51b] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_init$_7b3ba1964c11031c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_init$_6ae122e418c08fb7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
              mids$[mid_contains_c8fb5394ceb559de] = env->getMethodID(cls, "contains", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Z");
              mids$[mid_copySelf_aff8e78f15321997] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/euclidean/threed/Plane;");
              mids$[mid_emptyHyperplane_876cf5d918461b4c] = env->getMethodID(cls, "emptyHyperplane", "()Lorg/hipparchus/geometry/euclidean/threed/SubPlane;");
              mids$[mid_getNormal_17a952530a808943] = env->getMethodID(cls, "getNormal", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getOffset_8f8cd769e2ea7090] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/euclidean/threed/Plane;)D");
              mids$[mid_getOffset_726dc963fac3505e] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_getOffset_05fa5f52db18503d] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_getOrigin_17a952530a808943] = env->getMethodID(cls, "getOrigin", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getPointAt_1606225a086ef4a2] = env->getMethodID(cls, "getPointAt", "(Lorg/hipparchus/geometry/euclidean/twod/Vector2D;D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getTolerance_456d9a2f64d6b28d] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_getU_17a952530a808943] = env->getMethodID(cls, "getU", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getV_17a952530a808943] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_intersection_26c38ef25f8d6fd7] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/threed/Line;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_intersection_12a6be865bfd0631] = env->getMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/threed/Plane;)Lorg/hipparchus/geometry/euclidean/threed/Line;");
              mids$[mid_intersection_88aec6de31ddfb9c] = env->getStaticMethodID(cls, "intersection", "(Lorg/hipparchus/geometry/euclidean/threed/Plane;Lorg/hipparchus/geometry/euclidean/threed/Plane;Lorg/hipparchus/geometry/euclidean/threed/Plane;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_isSimilarTo_bbfd2fd6c0e6d731] = env->getMethodID(cls, "isSimilarTo", "(Lorg/hipparchus/geometry/euclidean/threed/Plane;)Z");
              mids$[mid_project_ac445dfe898b403a] = env->getMethodID(cls, "project", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
              mids$[mid_reset_724ea66e471a6906] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/threed/Plane;)V");
              mids$[mid_reset_bedd188d9f399c34] = env->getMethodID(cls, "reset", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_revertSelf_7ae3461a92a43152] = env->getMethodID(cls, "revertSelf", "()V");
              mids$[mid_rotate_35a9ecae4a81c49a] = env->getMethodID(cls, "rotate", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Rotation;)Lorg/hipparchus/geometry/euclidean/threed/Plane;");
              mids$[mid_sameOrientationAs_b99f508aafd89c77] = env->getMethodID(cls, "sameOrientationAs", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
              mids$[mid_toSpace_a49086d4148c0139] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_toSpace_7a21411cb28c8c28] = env->getMethodID(cls, "toSpace", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_toSubSpace_b3a52e5d1fbea985] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_toSubSpace_6698e195f6e5dfff] = env->getMethodID(cls, "toSubSpace", "(Lorg/hipparchus/geometry/Vector;)Lorg/hipparchus/geometry/euclidean/twod/Vector2D;");
              mids$[mid_translate_ff434f54623559ee] = env->getMethodID(cls, "translate", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Plane;");
              mids$[mid_wholeHyperplane_876cf5d918461b4c] = env->getMethodID(cls, "wholeHyperplane", "()Lorg/hipparchus/geometry/euclidean/threed/SubPlane;");
              mids$[mid_wholeSpace_17971aa7029eaa3b] = env->getMethodID(cls, "wholeSpace", "()Lorg/hipparchus/geometry/euclidean/threed/PolyhedronsSet;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          Plane::Plane(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_c1cd2c1af3ffd51b, a0.this$, a1)) {}

          Plane::Plane(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7b3ba1964c11031c, a0.this$, a1.this$, a2)) {}

          Plane::Plane(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6ae122e418c08fb7, a0.this$, a1.this$, a2.this$, a3)) {}

          jboolean Plane::contains(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_contains_c8fb5394ceb559de], a0.this$);
          }

          Plane Plane::copySelf() const
          {
            return Plane(env->callObjectMethod(this$, mids$[mid_copySelf_aff8e78f15321997]));
          }

          ::org::hipparchus::geometry::euclidean::threed::SubPlane Plane::emptyHyperplane() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::SubPlane(env->callObjectMethod(this$, mids$[mid_emptyHyperplane_876cf5d918461b4c]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::getNormal() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getNormal_17a952530a808943]));
          }

          jdouble Plane::getOffset(const Plane & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_8f8cd769e2ea7090], a0.this$);
          }

          jdouble Plane::getOffset(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_726dc963fac3505e], a0.this$);
          }

          jdouble Plane::getOffset(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_05fa5f52db18503d], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::getOrigin() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getOrigin_17a952530a808943]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::getPointAt(const ::org::hipparchus::geometry::euclidean::twod::Vector2D & a0, jdouble a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPointAt_1606225a086ef4a2], a0.this$, a1));
          }

          jdouble Plane::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_456d9a2f64d6b28d]);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::getU() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getU_17a952530a808943]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::getV() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getV_17a952530a808943]));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::intersection(const ::org::hipparchus::geometry::euclidean::threed::Line & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_intersection_26c38ef25f8d6fd7], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Line Plane::intersection(const Plane & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Line(env->callObjectMethod(this$, mids$[mid_intersection_12a6be865bfd0631], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::intersection(const Plane & a0, const Plane & a1, const Plane & a2)
          {
            jclass cls = env->getClass(initializeClass);
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callStaticObjectMethod(cls, mids$[mid_intersection_88aec6de31ddfb9c], a0.this$, a1.this$, a2.this$));
          }

          jboolean Plane::isSimilarTo(const Plane & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_isSimilarTo_bbfd2fd6c0e6d731], a0.this$);
          }

          ::org::hipparchus::geometry::Point Plane::project(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_project_ac445dfe898b403a], a0.this$));
          }

          void Plane::reset(const Plane & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_724ea66e471a6906], a0.this$);
          }

          void Plane::reset(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) const
          {
            env->callVoidMethod(this$, mids$[mid_reset_bedd188d9f399c34], a0.this$, a1.this$);
          }

          void Plane::revertSelf() const
          {
            env->callVoidMethod(this$, mids$[mid_revertSelf_7ae3461a92a43152]);
          }

          Plane Plane::rotate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Rotation & a1) const
          {
            return Plane(env->callObjectMethod(this$, mids$[mid_rotate_35a9ecae4a81c49a], a0.this$, a1.this$));
          }

          jboolean Plane::sameOrientationAs(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_sameOrientationAs_b99f508aafd89c77], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::toSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_toSpace_a49086d4148c0139], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D Plane::toSpace(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_toSpace_7a21411cb28c8c28], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Plane::toSubSpace(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_toSubSpace_b3a52e5d1fbea985], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::twod::Vector2D Plane::toSubSpace(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::twod::Vector2D(env->callObjectMethod(this$, mids$[mid_toSubSpace_6698e195f6e5dfff], a0.this$));
          }

          Plane Plane::translate(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0) const
          {
            return Plane(env->callObjectMethod(this$, mids$[mid_translate_ff434f54623559ee], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::SubPlane Plane::wholeHyperplane() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::SubPlane(env->callObjectMethod(this$, mids$[mid_wholeHyperplane_876cf5d918461b4c]));
          }

          ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet Plane::wholeSpace() const
          {
            return ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet(env->callObjectMethod(this$, mids$[mid_wholeSpace_17971aa7029eaa3b]));
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
          static PyObject *t_Plane_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_Plane_instance_(PyTypeObject *type, PyObject *arg);
          static int t_Plane_init_(t_Plane *self, PyObject *args, PyObject *kwds);
          static PyObject *t_Plane_contains(t_Plane *self, PyObject *arg);
          static PyObject *t_Plane_copySelf(t_Plane *self);
          static PyObject *t_Plane_emptyHyperplane(t_Plane *self);
          static PyObject *t_Plane_getNormal(t_Plane *self);
          static PyObject *t_Plane_getOffset(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_getOrigin(t_Plane *self);
          static PyObject *t_Plane_getPointAt(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_getTolerance(t_Plane *self);
          static PyObject *t_Plane_getU(t_Plane *self);
          static PyObject *t_Plane_getV(t_Plane *self);
          static PyObject *t_Plane_intersection(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_intersection_(PyTypeObject *type, PyObject *args);
          static PyObject *t_Plane_isSimilarTo(t_Plane *self, PyObject *arg);
          static PyObject *t_Plane_project(t_Plane *self, PyObject *arg);
          static PyObject *t_Plane_reset(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_revertSelf(t_Plane *self);
          static PyObject *t_Plane_rotate(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_sameOrientationAs(t_Plane *self, PyObject *arg);
          static PyObject *t_Plane_toSpace(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_toSubSpace(t_Plane *self, PyObject *args);
          static PyObject *t_Plane_translate(t_Plane *self, PyObject *arg);
          static PyObject *t_Plane_wholeHyperplane(t_Plane *self);
          static PyObject *t_Plane_wholeSpace(t_Plane *self);
          static PyObject *t_Plane_get__normal(t_Plane *self, void *data);
          static PyObject *t_Plane_get__origin(t_Plane *self, void *data);
          static PyObject *t_Plane_get__tolerance(t_Plane *self, void *data);
          static PyObject *t_Plane_get__u(t_Plane *self, void *data);
          static PyObject *t_Plane_get__v(t_Plane *self, void *data);
          static PyGetSetDef t_Plane__fields_[] = {
            DECLARE_GET_FIELD(t_Plane, normal),
            DECLARE_GET_FIELD(t_Plane, origin),
            DECLARE_GET_FIELD(t_Plane, tolerance),
            DECLARE_GET_FIELD(t_Plane, u),
            DECLARE_GET_FIELD(t_Plane, v),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_Plane__methods_[] = {
            DECLARE_METHOD(t_Plane, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Plane, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_Plane, contains, METH_O),
            DECLARE_METHOD(t_Plane, copySelf, METH_NOARGS),
            DECLARE_METHOD(t_Plane, emptyHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_Plane, getNormal, METH_NOARGS),
            DECLARE_METHOD(t_Plane, getOffset, METH_VARARGS),
            DECLARE_METHOD(t_Plane, getOrigin, METH_NOARGS),
            DECLARE_METHOD(t_Plane, getPointAt, METH_VARARGS),
            DECLARE_METHOD(t_Plane, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_Plane, getU, METH_NOARGS),
            DECLARE_METHOD(t_Plane, getV, METH_NOARGS),
            DECLARE_METHOD(t_Plane, intersection, METH_VARARGS),
            DECLARE_METHOD(t_Plane, intersection_, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_Plane, isSimilarTo, METH_O),
            DECLARE_METHOD(t_Plane, project, METH_O),
            DECLARE_METHOD(t_Plane, reset, METH_VARARGS),
            DECLARE_METHOD(t_Plane, revertSelf, METH_NOARGS),
            DECLARE_METHOD(t_Plane, rotate, METH_VARARGS),
            DECLARE_METHOD(t_Plane, sameOrientationAs, METH_O),
            DECLARE_METHOD(t_Plane, toSpace, METH_VARARGS),
            DECLARE_METHOD(t_Plane, toSubSpace, METH_VARARGS),
            DECLARE_METHOD(t_Plane, translate, METH_O),
            DECLARE_METHOD(t_Plane, wholeHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_Plane, wholeSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(Plane)[] = {
            { Py_tp_methods, t_Plane__methods_ },
            { Py_tp_init, (void *) t_Plane_init_ },
            { Py_tp_getset, t_Plane__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(Plane)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(Plane, t_Plane, Plane);

          void t_Plane::install(PyObject *module)
          {
            installType(&PY_TYPE(Plane), &PY_TYPE_DEF(Plane), module, "Plane", 0);
          }

          void t_Plane::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(Plane), "class_", make_descriptor(Plane::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Plane), "wrapfn_", make_descriptor(t_Plane::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(Plane), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_Plane_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, Plane::initializeClass, 1)))
              return NULL;
            return t_Plane::wrap_Object(Plane(((t_Plane *) arg)->object.this$));
          }
          static PyObject *t_Plane_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, Plane::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_Plane_init_(t_Plane *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                jdouble a1;
                Plane object((jobject) NULL);

                if (!parseArgs(args, "kD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  INT_CALL(object = Plane(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                jdouble a2;
                Plane object((jobject) NULL);

                if (!parseArgs(args, "kkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
                {
                  INT_CALL(object = Plane(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
                jdouble a3;
                Plane object((jobject) NULL);

                if (!parseArgs(args, "kkkD", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = Plane(a0, a1, a2, a3));
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

          static PyObject *t_Plane_contains(t_Plane *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.contains(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "contains", arg);
            return NULL;
          }

          static PyObject *t_Plane_copySelf(t_Plane *self)
          {
            Plane result((jobject) NULL);
            OBJ_CALL(result = self->object.copySelf());
            return t_Plane::wrap_Object(result);
          }

          static PyObject *t_Plane_emptyHyperplane(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::SubPlane result((jobject) NULL);
            OBJ_CALL(result = self->object.emptyHyperplane());
            return ::org::hipparchus::geometry::euclidean::threed::t_SubPlane::wrap_Object(result);
          }

          static PyObject *t_Plane_getNormal(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getNormal());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Plane_getOffset(t_Plane *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                Plane a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", Plane::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getOffset", args);
            return NULL;
          }

          static PyObject *t_Plane_getOrigin(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getOrigin());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Plane_getPointAt(t_Plane *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::twod::Vector2D a0((jobject) NULL);
            jdouble a1;
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::geometry::euclidean::twod::Vector2D::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.getPointAt(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getPointAt", args);
            return NULL;
          }

          static PyObject *t_Plane_getTolerance(t_Plane *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_Plane_getU(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getU());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Plane_getV(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
            OBJ_CALL(result = self->object.getV());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
          }

          static PyObject *t_Plane_intersection(t_Plane *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::euclidean::threed::Line a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::hipparchus::geometry::euclidean::threed::Line::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.intersection(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                Plane a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Line result((jobject) NULL);

                if (!parseArgs(args, "k", Plane::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.intersection(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Line::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "intersection", args);
            return NULL;
          }

          static PyObject *t_Plane_intersection_(PyTypeObject *type, PyObject *args)
          {
            Plane a0((jobject) NULL);
            Plane a1((jobject) NULL);
            Plane a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", Plane::initializeClass, Plane::initializeClass, Plane::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::geometry::euclidean::threed::Plane::intersection(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError(type, "intersection_", args);
            return NULL;
          }

          static PyObject *t_Plane_isSimilarTo(t_Plane *self, PyObject *arg)
          {
            Plane a0((jobject) NULL);
            jboolean result;

            if (!parseArg(arg, "k", Plane::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.isSimilarTo(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "isSimilarTo", arg);
            return NULL;
          }

          static PyObject *t_Plane_project(t_Plane *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.project(a0));
              return ::org::hipparchus::geometry::t_Point::wrap_Object(result, ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D));
            }

            PyErr_SetArgsError((PyObject *) self, "project", arg);
            return NULL;
          }

          static PyObject *t_Plane_reset(t_Plane *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                Plane a0((jobject) NULL);

                if (!parseArgs(args, "k", Plane::initializeClass, &a0))
                {
                  OBJ_CALL(self->object.reset(a0));
                  Py_RETURN_NONE;
                }
              }
              break;
             case 2:
              {
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);

                if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(self->object.reset(a0, a1));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "reset", args);
            return NULL;
          }

          static PyObject *t_Plane_revertSelf(t_Plane *self)
          {
            OBJ_CALL(self->object.revertSelf());
            Py_RETURN_NONE;
          }

          static PyObject *t_Plane_rotate(t_Plane *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Rotation a1((jobject) NULL);
            Plane result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Rotation::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.rotate(a0, a1));
              return t_Plane::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "rotate", args);
            return NULL;
          }

          static PyObject *t_Plane_sameOrientationAs(t_Plane *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.sameOrientationAs(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "sameOrientationAs", arg);
            return NULL;
          }

          static PyObject *t_Plane_toSpace(t_Plane *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.toSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.toSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "toSpace", args);
            return NULL;
          }

          static PyObject *t_Plane_toSubSpace(t_Plane *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.toSubSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::hipparchus::geometry::euclidean::twod::Vector2D result((jobject) NULL);

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.toSubSpace(a0));
                  return ::org::hipparchus::geometry::euclidean::twod::t_Vector2D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "toSubSpace", args);
            return NULL;
          }

          static PyObject *t_Plane_translate(t_Plane *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            Plane result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.translate(a0));
              return t_Plane::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "translate", arg);
            return NULL;
          }

          static PyObject *t_Plane_wholeHyperplane(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::SubPlane result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeHyperplane());
            return ::org::hipparchus::geometry::euclidean::threed::t_SubPlane::wrap_Object(result);
          }

          static PyObject *t_Plane_wholeSpace(t_Plane *self)
          {
            ::org::hipparchus::geometry::euclidean::threed::PolyhedronsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeSpace());
            return ::org::hipparchus::geometry::euclidean::threed::t_PolyhedronsSet::wrap_Object(result);
          }

          static PyObject *t_Plane_get__normal(t_Plane *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getNormal());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Plane_get__origin(t_Plane *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getOrigin());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Plane_get__tolerance(t_Plane *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTolerance());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_Plane_get__u(t_Plane *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getU());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }

          static PyObject *t_Plane_get__v(t_Plane *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
            OBJ_CALL(value = self->object.getV());
            return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/LocalizedGeometryFormats.h"
#include "java/util/Locale.h"
#include "org/hipparchus/geometry/LocalizedGeometryFormats.h"
#include "org/hipparchus/exception/Localizable.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {

      ::java::lang::Class *LocalizedGeometryFormats::class$ = NULL;
      jmethodID *LocalizedGeometryFormats::mids$ = NULL;
      bool LocalizedGeometryFormats::live$ = false;
      LocalizedGeometryFormats *LocalizedGeometryFormats::CANNOT_NORMALIZE_A_ZERO_NORM_VECTOR = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::CLOSEST_ORTHOGONAL_MATRIX_HAS_NEGATIVE_DETERMINANT = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::CLOSE_VERTICES = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::CROSSING_BOUNDARY_LOOPS = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::EDGE_CONNECTED_TO_ONE_FACET = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::FACET_ORIENTATION_MISMATCH = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::FACET_WITH_SEVERAL_BOUNDARY_LOOPS = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::INCONSISTENT_STATE_AT_2_PI_WRAPPING = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::INVALID_ROTATION_ORDER_NAME = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::NON_INVERTIBLE_TRANSFORM = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::NOT_CONVEX = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::NOT_CONVEX_HYPERPLANES = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::NOT_SUPPORTED_IN_DIMENSION_N = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::OUTLINE_BOUNDARY_LOOP_OPEN = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::OUT_OF_PLANE = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::ROTATION_MATRIX_DIMENSIONS = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::TOO_SMALL_TOLERANCE = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::UNABLE_TO_ORTHOGONOLIZE_MATRIX = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::ZERO_NORM_FOR_ROTATION_AXIS = NULL;
      LocalizedGeometryFormats *LocalizedGeometryFormats::ZERO_NORM_FOR_ROTATION_DEFINING_VECTOR = NULL;

      jclass LocalizedGeometryFormats::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/geometry/LocalizedGeometryFormats");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getLocalizedString_bab3be9b232acc5a] = env->getMethodID(cls, "getLocalizedString", "(Ljava/util/Locale;)Ljava/lang/String;");
          mids$[mid_getSourceString_0090f7797e403f43] = env->getMethodID(cls, "getSourceString", "()Ljava/lang/String;");
          mids$[mid_valueOf_e8e38b600cbe21d4] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/hipparchus/geometry/LocalizedGeometryFormats;");
          mids$[mid_values_7e3ff576f1798244] = env->getStaticMethodID(cls, "values", "()[Lorg/hipparchus/geometry/LocalizedGeometryFormats;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          CANNOT_NORMALIZE_A_ZERO_NORM_VECTOR = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "CANNOT_NORMALIZE_A_ZERO_NORM_VECTOR", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          CLOSEST_ORTHOGONAL_MATRIX_HAS_NEGATIVE_DETERMINANT = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "CLOSEST_ORTHOGONAL_MATRIX_HAS_NEGATIVE_DETERMINANT", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          CLOSE_VERTICES = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "CLOSE_VERTICES", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          CROSSING_BOUNDARY_LOOPS = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "CROSSING_BOUNDARY_LOOPS", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          EDGE_CONNECTED_TO_ONE_FACET = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "EDGE_CONNECTED_TO_ONE_FACET", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          FACET_ORIENTATION_MISMATCH = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "FACET_ORIENTATION_MISMATCH", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          FACET_WITH_SEVERAL_BOUNDARY_LOOPS = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "FACET_WITH_SEVERAL_BOUNDARY_LOOPS", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          INCONSISTENT_STATE_AT_2_PI_WRAPPING = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "INCONSISTENT_STATE_AT_2_PI_WRAPPING", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          INVALID_ROTATION_ORDER_NAME = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "INVALID_ROTATION_ORDER_NAME", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          NON_INVERTIBLE_TRANSFORM = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "NON_INVERTIBLE_TRANSFORM", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          NOT_CONVEX = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "NOT_CONVEX", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          NOT_CONVEX_HYPERPLANES = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "NOT_CONVEX_HYPERPLANES", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          NOT_SUPPORTED_IN_DIMENSION_N = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "NOT_SUPPORTED_IN_DIMENSION_N", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          OUTLINE_BOUNDARY_LOOP_OPEN = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "OUTLINE_BOUNDARY_LOOP_OPEN", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          OUT_OF_PLANE = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "OUT_OF_PLANE", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          ROTATION_MATRIX_DIMENSIONS = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "ROTATION_MATRIX_DIMENSIONS", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          TOO_SMALL_TOLERANCE = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "TOO_SMALL_TOLERANCE", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          UNABLE_TO_ORTHOGONOLIZE_MATRIX = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "UNABLE_TO_ORTHOGONOLIZE_MATRIX", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          ZERO_NORM_FOR_ROTATION_AXIS = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "ZERO_NORM_FOR_ROTATION_AXIS", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          ZERO_NORM_FOR_ROTATION_DEFINING_VECTOR = new LocalizedGeometryFormats(env->getStaticObjectField(cls, "ZERO_NORM_FOR_ROTATION_DEFINING_VECTOR", "Lorg/hipparchus/geometry/LocalizedGeometryFormats;"));
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::java::lang::String LocalizedGeometryFormats::getLocalizedString(const ::java::util::Locale & a0) const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getLocalizedString_bab3be9b232acc5a], a0.this$));
      }

      ::java::lang::String LocalizedGeometryFormats::getSourceString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSourceString_0090f7797e403f43]));
      }

      LocalizedGeometryFormats LocalizedGeometryFormats::valueOf(const ::java::lang::String & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return LocalizedGeometryFormats(env->callStaticObjectMethod(cls, mids$[mid_valueOf_e8e38b600cbe21d4], a0.this$));
      }

      JArray< LocalizedGeometryFormats > LocalizedGeometryFormats::values()
      {
        jclass cls = env->getClass(initializeClass);
        return JArray< LocalizedGeometryFormats >(env->callStaticObjectMethod(cls, mids$[mid_values_7e3ff576f1798244]));
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
      static PyObject *t_LocalizedGeometryFormats_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedGeometryFormats_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_LocalizedGeometryFormats_of_(t_LocalizedGeometryFormats *self, PyObject *args);
      static PyObject *t_LocalizedGeometryFormats_getLocalizedString(t_LocalizedGeometryFormats *self, PyObject *arg);
      static PyObject *t_LocalizedGeometryFormats_getSourceString(t_LocalizedGeometryFormats *self);
      static PyObject *t_LocalizedGeometryFormats_valueOf(PyTypeObject *type, PyObject *args);
      static PyObject *t_LocalizedGeometryFormats_values(PyTypeObject *type);
      static PyObject *t_LocalizedGeometryFormats_get__sourceString(t_LocalizedGeometryFormats *self, void *data);
      static PyObject *t_LocalizedGeometryFormats_get__parameters_(t_LocalizedGeometryFormats *self, void *data);
      static PyGetSetDef t_LocalizedGeometryFormats__fields_[] = {
        DECLARE_GET_FIELD(t_LocalizedGeometryFormats, sourceString),
        DECLARE_GET_FIELD(t_LocalizedGeometryFormats, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_LocalizedGeometryFormats__methods_[] = {
        DECLARE_METHOD(t_LocalizedGeometryFormats, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedGeometryFormats, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_LocalizedGeometryFormats, of_, METH_VARARGS),
        DECLARE_METHOD(t_LocalizedGeometryFormats, getLocalizedString, METH_O),
        DECLARE_METHOD(t_LocalizedGeometryFormats, getSourceString, METH_NOARGS),
        DECLARE_METHOD(t_LocalizedGeometryFormats, valueOf, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_LocalizedGeometryFormats, values, METH_NOARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(LocalizedGeometryFormats)[] = {
        { Py_tp_methods, t_LocalizedGeometryFormats__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_LocalizedGeometryFormats__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(LocalizedGeometryFormats)[] = {
        &PY_TYPE_DEF(::java::lang::Enum),
        NULL
      };

      DEFINE_TYPE(LocalizedGeometryFormats, t_LocalizedGeometryFormats, LocalizedGeometryFormats);
      PyObject *t_LocalizedGeometryFormats::wrap_Object(const LocalizedGeometryFormats& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedGeometryFormats::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedGeometryFormats *self = (t_LocalizedGeometryFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_LocalizedGeometryFormats::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_LocalizedGeometryFormats::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_LocalizedGeometryFormats *self = (t_LocalizedGeometryFormats *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_LocalizedGeometryFormats::install(PyObject *module)
      {
        installType(&PY_TYPE(LocalizedGeometryFormats), &PY_TYPE_DEF(LocalizedGeometryFormats), module, "LocalizedGeometryFormats", 0);
      }

      void t_LocalizedGeometryFormats::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "class_", make_descriptor(LocalizedGeometryFormats::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "wrapfn_", make_descriptor(t_LocalizedGeometryFormats::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "boxfn_", make_descriptor(boxObject));
        env->getClass(LocalizedGeometryFormats::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "CANNOT_NORMALIZE_A_ZERO_NORM_VECTOR", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::CANNOT_NORMALIZE_A_ZERO_NORM_VECTOR)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "CLOSEST_ORTHOGONAL_MATRIX_HAS_NEGATIVE_DETERMINANT", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::CLOSEST_ORTHOGONAL_MATRIX_HAS_NEGATIVE_DETERMINANT)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "CLOSE_VERTICES", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::CLOSE_VERTICES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "CROSSING_BOUNDARY_LOOPS", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::CROSSING_BOUNDARY_LOOPS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "EDGE_CONNECTED_TO_ONE_FACET", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::EDGE_CONNECTED_TO_ONE_FACET)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "FACET_ORIENTATION_MISMATCH", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::FACET_ORIENTATION_MISMATCH)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "FACET_WITH_SEVERAL_BOUNDARY_LOOPS", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::FACET_WITH_SEVERAL_BOUNDARY_LOOPS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "INCONSISTENT_STATE_AT_2_PI_WRAPPING", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::INCONSISTENT_STATE_AT_2_PI_WRAPPING)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "INVALID_ROTATION_ORDER_NAME", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::INVALID_ROTATION_ORDER_NAME)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "NON_INVERTIBLE_TRANSFORM", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::NON_INVERTIBLE_TRANSFORM)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "NOT_CONVEX", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::NOT_CONVEX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "NOT_CONVEX_HYPERPLANES", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::NOT_CONVEX_HYPERPLANES)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "NOT_SUPPORTED_IN_DIMENSION_N", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::NOT_SUPPORTED_IN_DIMENSION_N)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "OUTLINE_BOUNDARY_LOOP_OPEN", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::OUTLINE_BOUNDARY_LOOP_OPEN)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "OUT_OF_PLANE", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::OUT_OF_PLANE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "ROTATION_MATRIX_DIMENSIONS", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::ROTATION_MATRIX_DIMENSIONS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "TOO_SMALL_TOLERANCE", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::TOO_SMALL_TOLERANCE)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "UNABLE_TO_ORTHOGONOLIZE_MATRIX", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::UNABLE_TO_ORTHOGONOLIZE_MATRIX)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "ZERO_NORM_FOR_ROTATION_AXIS", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::ZERO_NORM_FOR_ROTATION_AXIS)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(LocalizedGeometryFormats), "ZERO_NORM_FOR_ROTATION_DEFINING_VECTOR", make_descriptor(t_LocalizedGeometryFormats::wrap_Object(*LocalizedGeometryFormats::ZERO_NORM_FOR_ROTATION_DEFINING_VECTOR)));
      }

      static PyObject *t_LocalizedGeometryFormats_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, LocalizedGeometryFormats::initializeClass, 1)))
          return NULL;
        return t_LocalizedGeometryFormats::wrap_Object(LocalizedGeometryFormats(((t_LocalizedGeometryFormats *) arg)->object.this$));
      }
      static PyObject *t_LocalizedGeometryFormats_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, LocalizedGeometryFormats::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_LocalizedGeometryFormats_of_(t_LocalizedGeometryFormats *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_LocalizedGeometryFormats_getLocalizedString(t_LocalizedGeometryFormats *self, PyObject *arg)
      {
        ::java::util::Locale a0((jobject) NULL);
        ::java::lang::String result((jobject) NULL);

        if (!parseArg(arg, "k", ::java::util::Locale::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getLocalizedString(a0));
          return j2p(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getLocalizedString", arg);
        return NULL;
      }

      static PyObject *t_LocalizedGeometryFormats_getSourceString(t_LocalizedGeometryFormats *self)
      {
        ::java::lang::String result((jobject) NULL);
        OBJ_CALL(result = self->object.getSourceString());
        return j2p(result);
      }

      static PyObject *t_LocalizedGeometryFormats_valueOf(PyTypeObject *type, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        LocalizedGeometryFormats result((jobject) NULL);

        if (!parseArgs(args, "s", &a0))
        {
          OBJ_CALL(result = ::org::hipparchus::geometry::LocalizedGeometryFormats::valueOf(a0));
          return t_LocalizedGeometryFormats::wrap_Object(result);
        }

        return callSuper(type, "valueOf", args, 2);
      }

      static PyObject *t_LocalizedGeometryFormats_values(PyTypeObject *type)
      {
        JArray< LocalizedGeometryFormats > result((jobject) NULL);
        OBJ_CALL(result = ::org::hipparchus::geometry::LocalizedGeometryFormats::values());
        return JArray<jobject>(result.this$).wrap(t_LocalizedGeometryFormats::wrap_jobject);
      }
      static PyObject *t_LocalizedGeometryFormats_get__parameters_(t_LocalizedGeometryFormats *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_LocalizedGeometryFormats_get__sourceString(t_LocalizedGeometryFormats *self, void *data)
      {
        ::java::lang::String value((jobject) NULL);
        OBJ_CALL(value = self->object.getSourceString());
        return j2p(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/threed/SphereGenerator.h"
#include "org/hipparchus/geometry/euclidean/threed/Euclidean3D.h"
#include "org/hipparchus/geometry/enclosing/EnclosingBall.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/hipparchus/geometry/enclosing/SupportBallGenerator.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace threed {

          ::java::lang::Class *SphereGenerator::class$ = NULL;
          jmethodID *SphereGenerator::mids$ = NULL;
          bool SphereGenerator::live$ = false;

          jclass SphereGenerator::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/threed/SphereGenerator");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_ballOnSupport_5189031e8a0790ca] = env->getMethodID(cls, "ballOnSupport", "(Ljava/util/List;)Lorg/hipparchus/geometry/enclosing/EnclosingBall;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SphereGenerator::SphereGenerator() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          ::org::hipparchus::geometry::enclosing::EnclosingBall SphereGenerator::ballOnSupport(const ::java::util::List & a0) const
          {
            return ::org::hipparchus::geometry::enclosing::EnclosingBall(env->callObjectMethod(this$, mids$[mid_ballOnSupport_5189031e8a0790ca], a0.this$));
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
          static PyObject *t_SphereGenerator_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SphereGenerator_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SphereGenerator_init_(t_SphereGenerator *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SphereGenerator_ballOnSupport(t_SphereGenerator *self, PyObject *arg);

          static PyMethodDef t_SphereGenerator__methods_[] = {
            DECLARE_METHOD(t_SphereGenerator, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphereGenerator, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SphereGenerator, ballOnSupport, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SphereGenerator)[] = {
            { Py_tp_methods, t_SphereGenerator__methods_ },
            { Py_tp_init, (void *) t_SphereGenerator_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SphereGenerator)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SphereGenerator, t_SphereGenerator, SphereGenerator);

          void t_SphereGenerator::install(PyObject *module)
          {
            installType(&PY_TYPE(SphereGenerator), &PY_TYPE_DEF(SphereGenerator), module, "SphereGenerator", 0);
          }

          void t_SphereGenerator::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphereGenerator), "class_", make_descriptor(SphereGenerator::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphereGenerator), "wrapfn_", make_descriptor(t_SphereGenerator::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SphereGenerator), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SphereGenerator_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SphereGenerator::initializeClass, 1)))
              return NULL;
            return t_SphereGenerator::wrap_Object(SphereGenerator(((t_SphereGenerator *) arg)->object.this$));
          }
          static PyObject *t_SphereGenerator_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SphereGenerator::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SphereGenerator_init_(t_SphereGenerator *self, PyObject *args, PyObject *kwds)
          {
            SphereGenerator object((jobject) NULL);

            INT_CALL(object = SphereGenerator());
            self->object = object;

            return 0;
          }

          static PyObject *t_SphereGenerator_ballOnSupport(t_SphereGenerator *self, PyObject *arg)
          {
            ::java::util::List a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::enclosing::EnclosingBall result((jobject) NULL);

            if (!parseArg(arg, "K", ::java::util::List::initializeClass, &a0, &p0, ::java::util::t_List::parameters_))
            {
              OBJ_CALL(result = self->object.ballOnSupport(a0));
              return ::org::hipparchus::geometry::enclosing::t_EnclosingBall::wrap_Object(result, ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Euclidean3D), ::org::hipparchus::geometry::euclidean::threed::PY_TYPE(Vector3D));
            }

            PyErr_SetArgsError((PyObject *) self, "ballOnSupport", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/oned/OrientedPoint.h"
#include "org/hipparchus/geometry/euclidean/oned/Euclidean1D.h"
#include "org/hipparchus/geometry/euclidean/oned/OrientedPoint.h"
#include "org/hipparchus/geometry/euclidean/oned/SubOrientedPoint.h"
#include "org/hipparchus/geometry/partitioning/Hyperplane.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/Point.h"
#include "org/hipparchus/geometry/Vector.h"
#include "org/hipparchus/geometry/euclidean/oned/IntervalsSet.h"
#include "org/hipparchus/geometry/euclidean/oned/Vector1D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace oned {

          ::java::lang::Class *OrientedPoint::class$ = NULL;
          jmethodID *OrientedPoint::mids$ = NULL;
          bool OrientedPoint::live$ = false;

          jclass OrientedPoint::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/oned/OrientedPoint");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_720dce0683153e53] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/oned/Vector1D;ZD)V");
              mids$[mid_copySelf_9eae96258c20e3c4] = env->getMethodID(cls, "copySelf", "()Lorg/hipparchus/geometry/euclidean/oned/OrientedPoint;");
              mids$[mid_emptyHyperplane_faea651993278be1] = env->getMethodID(cls, "emptyHyperplane", "()Lorg/hipparchus/geometry/euclidean/oned/SubOrientedPoint;");
              mids$[mid_getLocation_382bf37547292fb5] = env->getMethodID(cls, "getLocation", "()Lorg/hipparchus/geometry/euclidean/oned/Vector1D;");
              mids$[mid_getOffset_726dc963fac3505e] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Point;)D");
              mids$[mid_getOffset_05fa5f52db18503d] = env->getMethodID(cls, "getOffset", "(Lorg/hipparchus/geometry/Vector;)D");
              mids$[mid_getTolerance_456d9a2f64d6b28d] = env->getMethodID(cls, "getTolerance", "()D");
              mids$[mid_isDirect_e470b6d9e0d979db] = env->getMethodID(cls, "isDirect", "()Z");
              mids$[mid_project_ac445dfe898b403a] = env->getMethodID(cls, "project", "(Lorg/hipparchus/geometry/Point;)Lorg/hipparchus/geometry/Point;");
              mids$[mid_revertSelf_7ae3461a92a43152] = env->getMethodID(cls, "revertSelf", "()V");
              mids$[mid_sameOrientationAs_b99f508aafd89c77] = env->getMethodID(cls, "sameOrientationAs", "(Lorg/hipparchus/geometry/partitioning/Hyperplane;)Z");
              mids$[mid_wholeHyperplane_faea651993278be1] = env->getMethodID(cls, "wholeHyperplane", "()Lorg/hipparchus/geometry/euclidean/oned/SubOrientedPoint;");
              mids$[mid_wholeSpace_9f4769cdc5713998] = env->getMethodID(cls, "wholeSpace", "()Lorg/hipparchus/geometry/euclidean/oned/IntervalsSet;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OrientedPoint::OrientedPoint(const ::org::hipparchus::geometry::euclidean::oned::Vector1D & a0, jboolean a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_720dce0683153e53, a0.this$, a1, a2)) {}

          OrientedPoint OrientedPoint::copySelf() const
          {
            return OrientedPoint(env->callObjectMethod(this$, mids$[mid_copySelf_9eae96258c20e3c4]));
          }

          ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint OrientedPoint::emptyHyperplane() const
          {
            return ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint(env->callObjectMethod(this$, mids$[mid_emptyHyperplane_faea651993278be1]));
          }

          ::org::hipparchus::geometry::euclidean::oned::Vector1D OrientedPoint::getLocation() const
          {
            return ::org::hipparchus::geometry::euclidean::oned::Vector1D(env->callObjectMethod(this$, mids$[mid_getLocation_382bf37547292fb5]));
          }

          jdouble OrientedPoint::getOffset(const ::org::hipparchus::geometry::Point & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_726dc963fac3505e], a0.this$);
          }

          jdouble OrientedPoint::getOffset(const ::org::hipparchus::geometry::Vector & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOffset_05fa5f52db18503d], a0.this$);
          }

          jdouble OrientedPoint::getTolerance() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTolerance_456d9a2f64d6b28d]);
          }

          jboolean OrientedPoint::isDirect() const
          {
            return env->callBooleanMethod(this$, mids$[mid_isDirect_e470b6d9e0d979db]);
          }

          ::org::hipparchus::geometry::Point OrientedPoint::project(const ::org::hipparchus::geometry::Point & a0) const
          {
            return ::org::hipparchus::geometry::Point(env->callObjectMethod(this$, mids$[mid_project_ac445dfe898b403a], a0.this$));
          }

          void OrientedPoint::revertSelf() const
          {
            env->callVoidMethod(this$, mids$[mid_revertSelf_7ae3461a92a43152]);
          }

          jboolean OrientedPoint::sameOrientationAs(const ::org::hipparchus::geometry::partitioning::Hyperplane & a0) const
          {
            return env->callBooleanMethod(this$, mids$[mid_sameOrientationAs_b99f508aafd89c77], a0.this$);
          }

          ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint OrientedPoint::wholeHyperplane() const
          {
            return ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint(env->callObjectMethod(this$, mids$[mid_wholeHyperplane_faea651993278be1]));
          }

          ::org::hipparchus::geometry::euclidean::oned::IntervalsSet OrientedPoint::wholeSpace() const
          {
            return ::org::hipparchus::geometry::euclidean::oned::IntervalsSet(env->callObjectMethod(this$, mids$[mid_wholeSpace_9f4769cdc5713998]));
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
        namespace oned {
          static PyObject *t_OrientedPoint_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OrientedPoint_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OrientedPoint_init_(t_OrientedPoint *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OrientedPoint_copySelf(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_emptyHyperplane(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_getLocation(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_getOffset(t_OrientedPoint *self, PyObject *args);
          static PyObject *t_OrientedPoint_getTolerance(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_isDirect(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_project(t_OrientedPoint *self, PyObject *arg);
          static PyObject *t_OrientedPoint_revertSelf(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_sameOrientationAs(t_OrientedPoint *self, PyObject *arg);
          static PyObject *t_OrientedPoint_wholeHyperplane(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_wholeSpace(t_OrientedPoint *self);
          static PyObject *t_OrientedPoint_get__direct(t_OrientedPoint *self, void *data);
          static PyObject *t_OrientedPoint_get__location(t_OrientedPoint *self, void *data);
          static PyObject *t_OrientedPoint_get__tolerance(t_OrientedPoint *self, void *data);
          static PyGetSetDef t_OrientedPoint__fields_[] = {
            DECLARE_GET_FIELD(t_OrientedPoint, direct),
            DECLARE_GET_FIELD(t_OrientedPoint, location),
            DECLARE_GET_FIELD(t_OrientedPoint, tolerance),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OrientedPoint__methods_[] = {
            DECLARE_METHOD(t_OrientedPoint, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OrientedPoint, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OrientedPoint, copySelf, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, emptyHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, getLocation, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, getOffset, METH_VARARGS),
            DECLARE_METHOD(t_OrientedPoint, getTolerance, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, isDirect, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, project, METH_O),
            DECLARE_METHOD(t_OrientedPoint, revertSelf, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, sameOrientationAs, METH_O),
            DECLARE_METHOD(t_OrientedPoint, wholeHyperplane, METH_NOARGS),
            DECLARE_METHOD(t_OrientedPoint, wholeSpace, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OrientedPoint)[] = {
            { Py_tp_methods, t_OrientedPoint__methods_ },
            { Py_tp_init, (void *) t_OrientedPoint_init_ },
            { Py_tp_getset, t_OrientedPoint__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OrientedPoint)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OrientedPoint, t_OrientedPoint, OrientedPoint);

          void t_OrientedPoint::install(PyObject *module)
          {
            installType(&PY_TYPE(OrientedPoint), &PY_TYPE_DEF(OrientedPoint), module, "OrientedPoint", 0);
          }

          void t_OrientedPoint::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrientedPoint), "class_", make_descriptor(OrientedPoint::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrientedPoint), "wrapfn_", make_descriptor(t_OrientedPoint::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OrientedPoint), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OrientedPoint_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OrientedPoint::initializeClass, 1)))
              return NULL;
            return t_OrientedPoint::wrap_Object(OrientedPoint(((t_OrientedPoint *) arg)->object.this$));
          }
          static PyObject *t_OrientedPoint_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OrientedPoint::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OrientedPoint_init_(t_OrientedPoint *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::oned::Vector1D a0((jobject) NULL);
            jboolean a1;
            jdouble a2;
            OrientedPoint object((jobject) NULL);

            if (!parseArgs(args, "kZD", ::org::hipparchus::geometry::euclidean::oned::Vector1D::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = OrientedPoint(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OrientedPoint_copySelf(t_OrientedPoint *self)
          {
            OrientedPoint result((jobject) NULL);
            OBJ_CALL(result = self->object.copySelf());
            return t_OrientedPoint::wrap_Object(result);
          }

          static PyObject *t_OrientedPoint_emptyHyperplane(t_OrientedPoint *self)
          {
            ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint result((jobject) NULL);
            OBJ_CALL(result = self->object.emptyHyperplane());
            return ::org::hipparchus::geometry::euclidean::oned::t_SubOrientedPoint::wrap_Object(result);
          }

          static PyObject *t_OrientedPoint_getLocation(t_OrientedPoint *self)
          {
            ::org::hipparchus::geometry::euclidean::oned::Vector1D result((jobject) NULL);
            OBJ_CALL(result = self->object.getLocation());
            return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(result);
          }

          static PyObject *t_OrientedPoint_getOffset(t_OrientedPoint *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::hipparchus::geometry::Point a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              {
                ::org::hipparchus::geometry::Vector a0((jobject) NULL);
                PyTypeObject **p0;
                jdouble result;

                if (!parseArgs(args, "K", ::org::hipparchus::geometry::Vector::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Vector::parameters_))
                {
                  OBJ_CALL(result = self->object.getOffset(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getOffset", args);
            return NULL;
          }

          static PyObject *t_OrientedPoint_getTolerance(t_OrientedPoint *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTolerance());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_OrientedPoint_isDirect(t_OrientedPoint *self)
          {
            jboolean result;
            OBJ_CALL(result = self->object.isDirect());
            Py_RETURN_BOOL(result);
          }

          static PyObject *t_OrientedPoint_project(t_OrientedPoint *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::Point a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::geometry::Point result((jobject) NULL);

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::Point::initializeClass, &a0, &p0, ::org::hipparchus::geometry::t_Point::parameters_))
            {
              OBJ_CALL(result = self->object.project(a0));
              return ::org::hipparchus::geometry::t_Point::wrap_Object(result, ::org::hipparchus::geometry::euclidean::oned::PY_TYPE(Euclidean1D));
            }

            PyErr_SetArgsError((PyObject *) self, "project", arg);
            return NULL;
          }

          static PyObject *t_OrientedPoint_revertSelf(t_OrientedPoint *self)
          {
            OBJ_CALL(self->object.revertSelf());
            Py_RETURN_NONE;
          }

          static PyObject *t_OrientedPoint_sameOrientationAs(t_OrientedPoint *self, PyObject *arg)
          {
            ::org::hipparchus::geometry::partitioning::Hyperplane a0((jobject) NULL);
            PyTypeObject **p0;
            jboolean result;

            if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::Hyperplane::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_Hyperplane::parameters_))
            {
              OBJ_CALL(result = self->object.sameOrientationAs(a0));
              Py_RETURN_BOOL(result);
            }

            PyErr_SetArgsError((PyObject *) self, "sameOrientationAs", arg);
            return NULL;
          }

          static PyObject *t_OrientedPoint_wholeHyperplane(t_OrientedPoint *self)
          {
            ::org::hipparchus::geometry::euclidean::oned::SubOrientedPoint result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeHyperplane());
            return ::org::hipparchus::geometry::euclidean::oned::t_SubOrientedPoint::wrap_Object(result);
          }

          static PyObject *t_OrientedPoint_wholeSpace(t_OrientedPoint *self)
          {
            ::org::hipparchus::geometry::euclidean::oned::IntervalsSet result((jobject) NULL);
            OBJ_CALL(result = self->object.wholeSpace());
            return ::org::hipparchus::geometry::euclidean::oned::t_IntervalsSet::wrap_Object(result);
          }

          static PyObject *t_OrientedPoint_get__direct(t_OrientedPoint *self, void *data)
          {
            jboolean value;
            OBJ_CALL(value = self->object.isDirect());
            Py_RETURN_BOOL(value);
          }

          static PyObject *t_OrientedPoint_get__location(t_OrientedPoint *self, void *data)
          {
            ::org::hipparchus::geometry::euclidean::oned::Vector1D value((jobject) NULL);
            OBJ_CALL(value = self->object.getLocation());
            return ::org::hipparchus::geometry::euclidean::oned::t_Vector1D::wrap_Object(value);
          }

          static PyObject *t_OrientedPoint_get__tolerance(t_OrientedPoint *self, void *data)
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
#include "org/hipparchus/util/Precision.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace util {

      ::java::lang::Class *Precision::class$ = NULL;
      jmethodID *Precision::mids$ = NULL;
      bool Precision::live$ = false;
      jdouble Precision::EPSILON = (jdouble) 0;
      jdouble Precision::SAFE_MIN = (jdouble) 0;

      jclass Precision::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/util/Precision");

          mids$ = new jmethodID[max_mid];
          mids$[mid_compareTo_fe0b1fbd10d11831] = env->getStaticMethodID(cls, "compareTo", "(DDD)I");
          mids$[mid_compareTo_1357e77796432e28] = env->getStaticMethodID(cls, "compareTo", "(DDI)I");
          mids$[mid_equals_a836bdf37f582c99] = env->getStaticMethodID(cls, "equals", "(DD)Z");
          mids$[mid_equals_6895c32540f5864b] = env->getStaticMethodID(cls, "equals", "(FF)Z");
          mids$[mid_equals_15ea3a7b52896f96] = env->getStaticMethodID(cls, "equals", "(DDD)Z");
          mids$[mid_equals_7d6ea926035b2c2b] = env->getStaticMethodID(cls, "equals", "(DDI)Z");
          mids$[mid_equals_cc8c7ed1bd223bbd] = env->getStaticMethodID(cls, "equals", "(FFF)Z");
          mids$[mid_equals_0c1ced09367e9d20] = env->getStaticMethodID(cls, "equals", "(FFI)Z");
          mids$[mid_equalsIncludingNaN_a836bdf37f582c99] = env->getStaticMethodID(cls, "equalsIncludingNaN", "(DD)Z");
          mids$[mid_equalsIncludingNaN_6895c32540f5864b] = env->getStaticMethodID(cls, "equalsIncludingNaN", "(FF)Z");
          mids$[mid_equalsIncludingNaN_15ea3a7b52896f96] = env->getStaticMethodID(cls, "equalsIncludingNaN", "(DDD)Z");
          mids$[mid_equalsIncludingNaN_cc8c7ed1bd223bbd] = env->getStaticMethodID(cls, "equalsIncludingNaN", "(FFF)Z");
          mids$[mid_equalsIncludingNaN_7d6ea926035b2c2b] = env->getStaticMethodID(cls, "equalsIncludingNaN", "(DDI)Z");
          mids$[mid_equalsIncludingNaN_0c1ced09367e9d20] = env->getStaticMethodID(cls, "equalsIncludingNaN", "(FFI)Z");
          mids$[mid_equalsWithRelativeTolerance_15ea3a7b52896f96] = env->getStaticMethodID(cls, "equalsWithRelativeTolerance", "(DDD)Z");
          mids$[mid_isMathematicalInteger_e18fb1101b70dcca] = env->getStaticMethodID(cls, "isMathematicalInteger", "(D)Z");
          mids$[mid_isMathematicalInteger_17deb5e1968726fd] = env->getStaticMethodID(cls, "isMathematicalInteger", "(F)Z");
          mids$[mid_representableDelta_824133ce4aec3505] = env->getStaticMethodID(cls, "representableDelta", "(DD)D");
          mids$[mid_round_bcad94b64f1e2dd8] = env->getStaticMethodID(cls, "round", "(DI)D");
          mids$[mid_round_7206cd26f5dcc2c0] = env->getStaticMethodID(cls, "round", "(FI)F");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          EPSILON = env->getStaticDoubleField(cls, "EPSILON");
          SAFE_MIN = env->getStaticDoubleField(cls, "SAFE_MIN");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint Precision::compareTo(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_compareTo_fe0b1fbd10d11831], a0, a1, a2);
      }

      jint Precision::compareTo(jdouble a0, jdouble a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticIntMethod(cls, mids$[mid_compareTo_1357e77796432e28], a0, a1, a2);
      }

      jboolean Precision::equals(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_a836bdf37f582c99], a0, a1);
      }

      jboolean Precision::equals(jfloat a0, jfloat a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_6895c32540f5864b], a0, a1);
      }

      jboolean Precision::equals(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_15ea3a7b52896f96], a0, a1, a2);
      }

      jboolean Precision::equals(jdouble a0, jdouble a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_7d6ea926035b2c2b], a0, a1, a2);
      }

      jboolean Precision::equals(jfloat a0, jfloat a1, jfloat a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_cc8c7ed1bd223bbd], a0, a1, a2);
      }

      jboolean Precision::equals(jfloat a0, jfloat a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equals_0c1ced09367e9d20], a0, a1, a2);
      }

      jboolean Precision::equalsIncludingNaN(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_a836bdf37f582c99], a0, a1);
      }

      jboolean Precision::equalsIncludingNaN(jfloat a0, jfloat a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_6895c32540f5864b], a0, a1);
      }

      jboolean Precision::equalsIncludingNaN(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_15ea3a7b52896f96], a0, a1, a2);
      }

      jboolean Precision::equalsIncludingNaN(jfloat a0, jfloat a1, jfloat a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_cc8c7ed1bd223bbd], a0, a1, a2);
      }

      jboolean Precision::equalsIncludingNaN(jdouble a0, jdouble a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_7d6ea926035b2c2b], a0, a1, a2);
      }

      jboolean Precision::equalsIncludingNaN(jfloat a0, jfloat a1, jint a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsIncludingNaN_0c1ced09367e9d20], a0, a1, a2);
      }

      jboolean Precision::equalsWithRelativeTolerance(jdouble a0, jdouble a1, jdouble a2)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_equalsWithRelativeTolerance_15ea3a7b52896f96], a0, a1, a2);
      }

      jboolean Precision::isMathematicalInteger(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_isMathematicalInteger_e18fb1101b70dcca], a0);
      }

      jboolean Precision::isMathematicalInteger(jfloat a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticBooleanMethod(cls, mids$[mid_isMathematicalInteger_17deb5e1968726fd], a0);
      }

      jdouble Precision::representableDelta(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_representableDelta_824133ce4aec3505], a0, a1);
      }

      jdouble Precision::round(jdouble a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_round_bcad94b64f1e2dd8], a0, a1);
      }

      jfloat Precision::round(jfloat a0, jint a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticFloatMethod(cls, mids$[mid_round_7206cd26f5dcc2c0], a0, a1);
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
      static PyObject *t_Precision_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Precision_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Precision_compareTo(PyTypeObject *type, PyObject *args);
      static PyObject *t_Precision_equals(PyTypeObject *type, PyObject *args);
      static PyObject *t_Precision_equalsIncludingNaN(PyTypeObject *type, PyObject *args);
      static PyObject *t_Precision_equalsWithRelativeTolerance(PyTypeObject *type, PyObject *args);
      static PyObject *t_Precision_isMathematicalInteger(PyTypeObject *type, PyObject *args);
      static PyObject *t_Precision_representableDelta(PyTypeObject *type, PyObject *args);
      static PyObject *t_Precision_round(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_Precision__methods_[] = {
        DECLARE_METHOD(t_Precision, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Precision, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Precision, compareTo, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Precision, equals, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Precision, equalsIncludingNaN, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Precision, equalsWithRelativeTolerance, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Precision, isMathematicalInteger, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Precision, representableDelta, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Precision, round, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Precision)[] = {
        { Py_tp_methods, t_Precision__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Precision)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Precision, t_Precision, Precision);

      void t_Precision::install(PyObject *module)
      {
        installType(&PY_TYPE(Precision), &PY_TYPE_DEF(Precision), module, "Precision", 0);
      }

      void t_Precision::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Precision), "class_", make_descriptor(Precision::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Precision), "wrapfn_", make_descriptor(t_Precision::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Precision), "boxfn_", make_descriptor(boxObject));
        env->getClass(Precision::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Precision), "EPSILON", make_descriptor(Precision::EPSILON));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Precision), "SAFE_MIN", make_descriptor(Precision::SAFE_MIN));
      }

      static PyObject *t_Precision_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Precision::initializeClass, 1)))
          return NULL;
        return t_Precision::wrap_Object(Precision(((t_Precision *) arg)->object.this$));
      }
      static PyObject *t_Precision_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Precision::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Precision_compareTo(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jint result;

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::compareTo(a0, a1, a2));
              return PyLong_FromLong((long) result);
            }
          }
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            jint result;

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::compareTo(a0, a1, a2));
              return PyLong_FromLong((long) result);
            }
          }
        }

        PyErr_SetArgsError(type, "compareTo", args);
        return NULL;
      }

      static PyObject *t_Precision_equals(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jboolean result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jboolean result;

            if (!parseArgs(args, "FF", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equals(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          break;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jboolean result;

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jfloat a2;
            jboolean result;

            if (!parseArgs(args, "FFF", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            jboolean result;

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jint a2;
            jboolean result;

            if (!parseArgs(args, "FFI", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equals(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
        }

        return callSuper(type, "equals", args, 2);
      }

      static PyObject *t_Precision_equalsIncludingNaN(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jboolean result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsIncludingNaN(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jboolean result;

            if (!parseArgs(args, "FF", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsIncludingNaN(a0, a1));
              Py_RETURN_BOOL(result);
            }
          }
          break;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jboolean result;

            if (!parseArgs(args, "DDD", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsIncludingNaN(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            jboolean result;

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsIncludingNaN(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jfloat a2;
            jboolean result;

            if (!parseArgs(args, "FFF", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsIncludingNaN(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jfloat a1;
            jint a2;
            jboolean result;

            if (!parseArgs(args, "FFI", &a0, &a1, &a2))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsIncludingNaN(a0, a1, a2));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "equalsIncludingNaN", args);
        return NULL;
      }

      static PyObject *t_Precision_equalsWithRelativeTolerance(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble a2;
        jboolean result;

        if (!parseArgs(args, "DDD", &a0, &a1, &a2))
        {
          OBJ_CALL(result = ::org::hipparchus::util::Precision::equalsWithRelativeTolerance(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError(type, "equalsWithRelativeTolerance", args);
        return NULL;
      }

      static PyObject *t_Precision_isMathematicalInteger(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jboolean result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::isMathematicalInteger(a0));
              Py_RETURN_BOOL(result);
            }
          }
          {
            jfloat a0;
            jboolean result;

            if (!parseArgs(args, "F", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::isMathematicalInteger(a0));
              Py_RETURN_BOOL(result);
            }
          }
        }

        PyErr_SetArgsError(type, "isMathematicalInteger", args);
        return NULL;
      }

      static PyObject *t_Precision_representableDelta(PyTypeObject *type, PyObject *args)
      {
        jdouble a0;
        jdouble a1;
        jdouble result;

        if (!parseArgs(args, "DD", &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::util::Precision::representableDelta(a0, a1));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError(type, "representableDelta", args);
        return NULL;
      }

      static PyObject *t_Precision_round(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jint a1;
            jdouble result;

            if (!parseArgs(args, "DI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::round(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            jfloat a0;
            jint a1;
            jfloat result;

            if (!parseArgs(args, "FI", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::util::Precision::round(a0, a1));
              return PyFloat_FromDouble((double) result);
            }
          }
        }

        PyErr_SetArgsError(type, "round", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/solvers/AbstractPolynomialSolver.h"
#include "org/hipparchus/analysis/polynomials/PolynomialFunction.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/solvers/PolynomialSolver.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace solvers {

        ::java::lang::Class *AbstractPolynomialSolver::class$ = NULL;
        jmethodID *AbstractPolynomialSolver::mids$ = NULL;
        bool AbstractPolynomialSolver::live$ = false;

        jclass AbstractPolynomialSolver::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/solvers/AbstractPolynomialSolver");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getCoefficients_7cdc325af0834901] = env->getMethodID(cls, "getCoefficients", "()[D");
            mids$[mid_setup_beba1b4b11856bf4] = env->getMethodID(cls, "setup", "(ILorg/hipparchus/analysis/polynomials/PolynomialFunction;DDD)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
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
      namespace solvers {
        static PyObject *t_AbstractPolynomialSolver_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractPolynomialSolver_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractPolynomialSolver_of_(t_AbstractPolynomialSolver *self, PyObject *args);
        static PyObject *t_AbstractPolynomialSolver_get__parameters_(t_AbstractPolynomialSolver *self, void *data);
        static PyGetSetDef t_AbstractPolynomialSolver__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractPolynomialSolver, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractPolynomialSolver__methods_[] = {
          DECLARE_METHOD(t_AbstractPolynomialSolver, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractPolynomialSolver, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractPolynomialSolver, of_, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractPolynomialSolver)[] = {
          { Py_tp_methods, t_AbstractPolynomialSolver__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractPolynomialSolver__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractPolynomialSolver)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::solvers::BaseAbstractUnivariateSolver),
          NULL
        };

        DEFINE_TYPE(AbstractPolynomialSolver, t_AbstractPolynomialSolver, AbstractPolynomialSolver);
        PyObject *t_AbstractPolynomialSolver::wrap_Object(const AbstractPolynomialSolver& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractPolynomialSolver::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractPolynomialSolver *self = (t_AbstractPolynomialSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AbstractPolynomialSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AbstractPolynomialSolver::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AbstractPolynomialSolver *self = (t_AbstractPolynomialSolver *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AbstractPolynomialSolver::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractPolynomialSolver), &PY_TYPE_DEF(AbstractPolynomialSolver), module, "AbstractPolynomialSolver", 0);
        }

        void t_AbstractPolynomialSolver::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPolynomialSolver), "class_", make_descriptor(AbstractPolynomialSolver::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPolynomialSolver), "wrapfn_", make_descriptor(t_AbstractPolynomialSolver::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractPolynomialSolver), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractPolynomialSolver_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractPolynomialSolver::initializeClass, 1)))
            return NULL;
          return t_AbstractPolynomialSolver::wrap_Object(AbstractPolynomialSolver(((t_AbstractPolynomialSolver *) arg)->object.this$));
        }
        static PyObject *t_AbstractPolynomialSolver_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractPolynomialSolver::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractPolynomialSolver_of_(t_AbstractPolynomialSolver *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }
        static PyObject *t_AbstractPolynomialSolver_get__parameters_(t_AbstractPolynomialSolver *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/distribution/discrete/HypergeometricDistribution.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace distribution {
      namespace discrete {

        ::java::lang::Class *HypergeometricDistribution::class$ = NULL;
        jmethodID *HypergeometricDistribution::mids$ = NULL;
        bool HypergeometricDistribution::live$ = false;

        jclass HypergeometricDistribution::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/distribution/discrete/HypergeometricDistribution");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_c80ec2f7d8b5fe87] = env->getMethodID(cls, "<init>", "(III)V");
            mids$[mid_cumulativeProbability_b772323fc98b7293] = env->getMethodID(cls, "cumulativeProbability", "(I)D");
            mids$[mid_getNumberOfSuccesses_f2f64475e4580546] = env->getMethodID(cls, "getNumberOfSuccesses", "()I");
            mids$[mid_getNumericalMean_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalMean", "()D");
            mids$[mid_getNumericalVariance_456d9a2f64d6b28d] = env->getMethodID(cls, "getNumericalVariance", "()D");
            mids$[mid_getPopulationSize_f2f64475e4580546] = env->getMethodID(cls, "getPopulationSize", "()I");
            mids$[mid_getSampleSize_f2f64475e4580546] = env->getMethodID(cls, "getSampleSize", "()I");
            mids$[mid_getSupportLowerBound_f2f64475e4580546] = env->getMethodID(cls, "getSupportLowerBound", "()I");
            mids$[mid_getSupportUpperBound_f2f64475e4580546] = env->getMethodID(cls, "getSupportUpperBound", "()I");
            mids$[mid_isSupportConnected_e470b6d9e0d979db] = env->getMethodID(cls, "isSupportConnected", "()Z");
            mids$[mid_logProbability_b772323fc98b7293] = env->getMethodID(cls, "logProbability", "(I)D");
            mids$[mid_probability_b772323fc98b7293] = env->getMethodID(cls, "probability", "(I)D");
            mids$[mid_upperCumulativeProbability_b772323fc98b7293] = env->getMethodID(cls, "upperCumulativeProbability", "(I)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HypergeometricDistribution::HypergeometricDistribution(jint a0, jint a1, jint a2) : ::org::hipparchus::distribution::discrete::AbstractIntegerDistribution(env->newObject(initializeClass, &mids$, mid_init$_c80ec2f7d8b5fe87, a0, a1, a2)) {}

        jdouble HypergeometricDistribution::cumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_cumulativeProbability_b772323fc98b7293], a0);
        }

        jint HypergeometricDistribution::getNumberOfSuccesses() const
        {
          return env->callIntMethod(this$, mids$[mid_getNumberOfSuccesses_f2f64475e4580546]);
        }

        jdouble HypergeometricDistribution::getNumericalMean() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalMean_456d9a2f64d6b28d]);
        }

        jdouble HypergeometricDistribution::getNumericalVariance() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getNumericalVariance_456d9a2f64d6b28d]);
        }

        jint HypergeometricDistribution::getPopulationSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getPopulationSize_f2f64475e4580546]);
        }

        jint HypergeometricDistribution::getSampleSize() const
        {
          return env->callIntMethod(this$, mids$[mid_getSampleSize_f2f64475e4580546]);
        }

        jint HypergeometricDistribution::getSupportLowerBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportLowerBound_f2f64475e4580546]);
        }

        jint HypergeometricDistribution::getSupportUpperBound() const
        {
          return env->callIntMethod(this$, mids$[mid_getSupportUpperBound_f2f64475e4580546]);
        }

        jboolean HypergeometricDistribution::isSupportConnected() const
        {
          return env->callBooleanMethod(this$, mids$[mid_isSupportConnected_e470b6d9e0d979db]);
        }

        jdouble HypergeometricDistribution::logProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_logProbability_b772323fc98b7293], a0);
        }

        jdouble HypergeometricDistribution::probability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_probability_b772323fc98b7293], a0);
        }

        jdouble HypergeometricDistribution::upperCumulativeProbability(jint a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_upperCumulativeProbability_b772323fc98b7293], a0);
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
      namespace discrete {
        static PyObject *t_HypergeometricDistribution_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HypergeometricDistribution_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HypergeometricDistribution_init_(t_HypergeometricDistribution *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HypergeometricDistribution_cumulativeProbability(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_getNumberOfSuccesses(t_HypergeometricDistribution *self);
        static PyObject *t_HypergeometricDistribution_getNumericalMean(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_getNumericalVariance(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_getPopulationSize(t_HypergeometricDistribution *self);
        static PyObject *t_HypergeometricDistribution_getSampleSize(t_HypergeometricDistribution *self);
        static PyObject *t_HypergeometricDistribution_getSupportLowerBound(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_getSupportUpperBound(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_isSupportConnected(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_logProbability(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_probability(t_HypergeometricDistribution *self, PyObject *args);
        static PyObject *t_HypergeometricDistribution_upperCumulativeProbability(t_HypergeometricDistribution *self, PyObject *arg);
        static PyObject *t_HypergeometricDistribution_get__numberOfSuccesses(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__numericalMean(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__numericalVariance(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__populationSize(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__sampleSize(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__supportConnected(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__supportLowerBound(t_HypergeometricDistribution *self, void *data);
        static PyObject *t_HypergeometricDistribution_get__supportUpperBound(t_HypergeometricDistribution *self, void *data);
        static PyGetSetDef t_HypergeometricDistribution__fields_[] = {
          DECLARE_GET_FIELD(t_HypergeometricDistribution, numberOfSuccesses),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, numericalMean),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, numericalVariance),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, populationSize),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, sampleSize),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, supportConnected),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, supportLowerBound),
          DECLARE_GET_FIELD(t_HypergeometricDistribution, supportUpperBound),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_HypergeometricDistribution__methods_[] = {
          DECLARE_METHOD(t_HypergeometricDistribution, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HypergeometricDistribution, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HypergeometricDistribution, cumulativeProbability, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getNumberOfSuccesses, METH_NOARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getNumericalMean, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getNumericalVariance, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getPopulationSize, METH_NOARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getSampleSize, METH_NOARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getSupportLowerBound, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, getSupportUpperBound, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, isSupportConnected, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, logProbability, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, probability, METH_VARARGS),
          DECLARE_METHOD(t_HypergeometricDistribution, upperCumulativeProbability, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HypergeometricDistribution)[] = {
          { Py_tp_methods, t_HypergeometricDistribution__methods_ },
          { Py_tp_init, (void *) t_HypergeometricDistribution_init_ },
          { Py_tp_getset, t_HypergeometricDistribution__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HypergeometricDistribution)[] = {
          &PY_TYPE_DEF(::org::hipparchus::distribution::discrete::AbstractIntegerDistribution),
          NULL
        };

        DEFINE_TYPE(HypergeometricDistribution, t_HypergeometricDistribution, HypergeometricDistribution);

        void t_HypergeometricDistribution::install(PyObject *module)
        {
          installType(&PY_TYPE(HypergeometricDistribution), &PY_TYPE_DEF(HypergeometricDistribution), module, "HypergeometricDistribution", 0);
        }

        void t_HypergeometricDistribution::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HypergeometricDistribution), "class_", make_descriptor(HypergeometricDistribution::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HypergeometricDistribution), "wrapfn_", make_descriptor(t_HypergeometricDistribution::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HypergeometricDistribution), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HypergeometricDistribution_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HypergeometricDistribution::initializeClass, 1)))
            return NULL;
          return t_HypergeometricDistribution::wrap_Object(HypergeometricDistribution(((t_HypergeometricDistribution *) arg)->object.this$));
        }
        static PyObject *t_HypergeometricDistribution_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HypergeometricDistribution::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HypergeometricDistribution_init_(t_HypergeometricDistribution *self, PyObject *args, PyObject *kwds)
        {
          jint a0;
          jint a1;
          jint a2;
          HypergeometricDistribution object((jobject) NULL);

          if (!parseArgs(args, "III", &a0, &a1, &a2))
          {
            INT_CALL(object = HypergeometricDistribution(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_HypergeometricDistribution_cumulativeProbability(t_HypergeometricDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.cumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "cumulativeProbability", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_getNumberOfSuccesses(t_HypergeometricDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getNumberOfSuccesses());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_HypergeometricDistribution_getNumericalMean(t_HypergeometricDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalMean());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "getNumericalMean", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_getNumericalVariance(t_HypergeometricDistribution *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getNumericalVariance());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "getNumericalVariance", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_getPopulationSize(t_HypergeometricDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getPopulationSize());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_HypergeometricDistribution_getSampleSize(t_HypergeometricDistribution *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getSampleSize());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_HypergeometricDistribution_getSupportLowerBound(t_HypergeometricDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportLowerBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "getSupportLowerBound", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_getSupportUpperBound(t_HypergeometricDistribution *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getSupportUpperBound());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "getSupportUpperBound", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_isSupportConnected(t_HypergeometricDistribution *self, PyObject *args)
        {
          jboolean result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.isSupportConnected());
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "isSupportConnected", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_logProbability(t_HypergeometricDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.logProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "logProbability", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_probability(t_HypergeometricDistribution *self, PyObject *args)
        {
          jint a0;
          jdouble result;

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.probability(a0));
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(HypergeometricDistribution), (PyObject *) self, "probability", args, 2);
        }

        static PyObject *t_HypergeometricDistribution_upperCumulativeProbability(t_HypergeometricDistribution *self, PyObject *arg)
        {
          jint a0;
          jdouble result;

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.upperCumulativeProbability(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "upperCumulativeProbability", arg);
          return NULL;
        }

        static PyObject *t_HypergeometricDistribution_get__numberOfSuccesses(t_HypergeometricDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getNumberOfSuccesses());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_HypergeometricDistribution_get__numericalMean(t_HypergeometricDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalMean());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_HypergeometricDistribution_get__numericalVariance(t_HypergeometricDistribution *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getNumericalVariance());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_HypergeometricDistribution_get__populationSize(t_HypergeometricDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getPopulationSize());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_HypergeometricDistribution_get__sampleSize(t_HypergeometricDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSampleSize());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_HypergeometricDistribution_get__supportConnected(t_HypergeometricDistribution *self, void *data)
        {
          jboolean value;
          OBJ_CALL(value = self->object.isSupportConnected());
          Py_RETURN_BOOL(value);
        }

        static PyObject *t_HypergeometricDistribution_get__supportLowerBound(t_HypergeometricDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportLowerBound());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_HypergeometricDistribution_get__supportUpperBound(t_HypergeometricDistribution *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getSupportUpperBound());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/propulsion/ThrustPropulsionModel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/attitudes/Attitude.h"
#include "org/orekit/attitudes/FieldAttitude.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {
        namespace propulsion {

          ::java::lang::Class *ThrustPropulsionModel::class$ = NULL;
          jmethodID *ThrustPropulsionModel::mids$ = NULL;
          bool ThrustPropulsionModel::live$ = false;

          jclass ThrustPropulsionModel::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/propulsion/ThrustPropulsionModel");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAcceleration_64acd703c3b3c863] = env->getMethodID(cls, "getAcceleration", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/attitudes/Attitude;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getAcceleration_be3781a72bd4ba13] = env->getMethodID(cls, "getAcceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/attitudes/FieldAttitude;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
              mids$[mid_getDirection_78226ca7935182ea] = env->getMethodID(cls, "getDirection", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getFlowRate_66a2f071e6ed0c06] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_getFlowRate_4368a5d862927c08] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getFlowRate_79518d097c897d26] = env->getMethodID(cls, "getFlowRate", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getIsp_66a2f071e6ed0c06] = env->getMethodID(cls, "getIsp", "(Lorg/orekit/propagation/SpacecraftState;)D");
              mids$[mid_getMassDerivatives_4368a5d862927c08] = env->getMethodID(cls, "getMassDerivatives", "(Lorg/orekit/propagation/SpacecraftState;[D)D");
              mids$[mid_getMassDerivatives_79518d097c897d26] = env->getMethodID(cls, "getMassDerivatives", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_getThrustVector_78226ca7935182ea] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_00aba28d3abe9a8c] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getThrustVector_78989e44b99f7cc2] = env->getMethodID(cls, "getThrustVector", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ThrustPropulsionModel::getAcceleration(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::attitudes::Attitude & a1, const JArray< jdouble > & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_64acd703c3b3c863], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ThrustPropulsionModel::getAcceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::attitudes::FieldAttitude & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getAcceleration_be3781a72bd4ba13], a0.this$, a1.this$, a2.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ThrustPropulsionModel::getDirection(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getDirection_78226ca7935182ea], a0.this$));
          }

          jdouble ThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_66a2f071e6ed0c06], a0.this$);
          }

          jdouble ThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getFlowRate_4368a5d862927c08], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement ThrustPropulsionModel::getFlowRate(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFlowRate_79518d097c897d26], a0.this$, a1.this$));
          }

          jdouble ThrustPropulsionModel::getIsp(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getIsp_66a2f071e6ed0c06], a0.this$);
          }

          jdouble ThrustPropulsionModel::getMassDerivatives(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return env->callDoubleMethod(this$, mids$[mid_getMassDerivatives_4368a5d862927c08], a0.this$, a1.this$);
          }

          ::org::hipparchus::CalculusFieldElement ThrustPropulsionModel::getMassDerivatives(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getMassDerivatives_79518d097c897d26], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::SpacecraftState & a0) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_78226ca7935182ea], a0.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::Vector3D ThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_00aba28d3abe9a8c], a0.this$, a1.this$));
          }

          ::org::hipparchus::geometry::euclidean::threed::FieldVector3D ThrustPropulsionModel::getThrustVector(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_getThrustVector_78989e44b99f7cc2], a0.this$, a1.this$));
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
        namespace propulsion {
          static PyObject *t_ThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ThrustPropulsionModel_getAcceleration(t_ThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ThrustPropulsionModel_getDirection(t_ThrustPropulsionModel *self, PyObject *arg);
          static PyObject *t_ThrustPropulsionModel_getFlowRate(t_ThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ThrustPropulsionModel_getIsp(t_ThrustPropulsionModel *self, PyObject *arg);
          static PyObject *t_ThrustPropulsionModel_getMassDerivatives(t_ThrustPropulsionModel *self, PyObject *args);
          static PyObject *t_ThrustPropulsionModel_getThrustVector(t_ThrustPropulsionModel *self, PyObject *args);

          static PyMethodDef t_ThrustPropulsionModel__methods_[] = {
            DECLARE_METHOD(t_ThrustPropulsionModel, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ThrustPropulsionModel, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ThrustPropulsionModel, getAcceleration, METH_VARARGS),
            DECLARE_METHOD(t_ThrustPropulsionModel, getDirection, METH_O),
            DECLARE_METHOD(t_ThrustPropulsionModel, getFlowRate, METH_VARARGS),
            DECLARE_METHOD(t_ThrustPropulsionModel, getIsp, METH_O),
            DECLARE_METHOD(t_ThrustPropulsionModel, getMassDerivatives, METH_VARARGS),
            DECLARE_METHOD(t_ThrustPropulsionModel, getThrustVector, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ThrustPropulsionModel)[] = {
            { Py_tp_methods, t_ThrustPropulsionModel__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ThrustPropulsionModel)[] = {
            &PY_TYPE_DEF(::org::orekit::forces::maneuvers::propulsion::PropulsionModel),
            NULL
          };

          DEFINE_TYPE(ThrustPropulsionModel, t_ThrustPropulsionModel, ThrustPropulsionModel);

          void t_ThrustPropulsionModel::install(PyObject *module)
          {
            installType(&PY_TYPE(ThrustPropulsionModel), &PY_TYPE_DEF(ThrustPropulsionModel), module, "ThrustPropulsionModel", 0);
          }

          void t_ThrustPropulsionModel::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustPropulsionModel), "class_", make_descriptor(ThrustPropulsionModel::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustPropulsionModel), "wrapfn_", make_descriptor(t_ThrustPropulsionModel::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ThrustPropulsionModel), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ThrustPropulsionModel_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ThrustPropulsionModel::initializeClass, 1)))
              return NULL;
            return t_ThrustPropulsionModel::wrap_Object(ThrustPropulsionModel(((t_ThrustPropulsionModel *) arg)->object.this$));
          }
          static PyObject *t_ThrustPropulsionModel_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ThrustPropulsionModel::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ThrustPropulsionModel_getAcceleration(t_ThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                ::org::orekit::attitudes::FieldAttitude a1((jobject) NULL);
                PyTypeObject **p1;
                JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
                PyTypeObject **p2;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "KK[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::attitudes::FieldAttitude::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::attitudes::t_FieldAttitude::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getAcceleration(a0, a1, a2));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::orekit::attitudes::Attitude a1((jobject) NULL);
                JArray< jdouble > a2((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "kk[D", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::attitudes::Attitude::initializeClass, &a0, &a1, &a2))
                {
                  OBJ_CALL(result = self->object.getAcceleration(a0, a1, a2));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            return callSuper(PY_TYPE(ThrustPropulsionModel), (PyObject *) self, "getAcceleration", args, 2);
          }

          static PyObject *t_ThrustPropulsionModel_getDirection(t_ThrustPropulsionModel *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getDirection(a0));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getDirection", arg);
            return NULL;
          }

          static PyObject *t_ThrustPropulsionModel_getFlowRate(t_ThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0));
                  return PyFloat_FromDouble((double) result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getFlowRate(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getFlowRate", args);
            return NULL;
          }

          static PyObject *t_ThrustPropulsionModel_getIsp(t_ThrustPropulsionModel *self, PyObject *arg)
          {
            ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
            jdouble result;

            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.getIsp(a0));
              return PyFloat_FromDouble((double) result);
            }

            PyErr_SetArgsError((PyObject *) self, "getIsp", arg);
            return NULL;
          }

          static PyObject *t_ThrustPropulsionModel_getMassDerivatives(t_ThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getMassDerivatives(a0, a1));
                  return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                jdouble result;

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getMassDerivatives(a0, a1));
                  return PyFloat_FromDouble((double) result);
                }
              }
            }

            return callSuper(PY_TYPE(ThrustPropulsionModel), (PyObject *) self, "getMassDerivatives", args, 2);
          }

          static PyObject *t_ThrustPropulsionModel_getThrustVector(t_ThrustPropulsionModel *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 1:
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
              break;
             case 2:
              {
                ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
                PyTypeObject **p0;
                JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
                PyTypeObject **p1;
                ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

                if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
                }
              }
              {
                ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
                JArray< jdouble > a1((jobject) NULL);
                ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

                if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
                {
                  OBJ_CALL(result = self->object.getThrustVector(a0, a1));
                  return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "getThrustVector", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ccsds/ndm/tdm/IntegrationReference.h"
#include "org/orekit/files/ccsds/ndm/tdm/IntegrationReference.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace tdm {

            ::java::lang::Class *IntegrationReference::class$ = NULL;
            jmethodID *IntegrationReference::mids$ = NULL;
            bool IntegrationReference::live$ = false;
            IntegrationReference *IntegrationReference::END = NULL;
            IntegrationReference *IntegrationReference::MIDDLE = NULL;
            IntegrationReference *IntegrationReference::START = NULL;

            jclass IntegrationReference::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/tdm/IntegrationReference");

                mids$ = new jmethodID[max_mid];
                mids$[mid_valueOf_1b2818a13c1a4c89] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;");
                mids$[mid_values_7a01740a7f27efe4] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;");

                class$ = new ::java::lang::Class(cls);
                cls = (jclass) class$->this$;

                END = new IntegrationReference(env->getStaticObjectField(cls, "END", "Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;"));
                MIDDLE = new IntegrationReference(env->getStaticObjectField(cls, "MIDDLE", "Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;"));
                START = new IntegrationReference(env->getStaticObjectField(cls, "START", "Lorg/orekit/files/ccsds/ndm/tdm/IntegrationReference;"));
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            IntegrationReference IntegrationReference::valueOf(const ::java::lang::String & a0)
            {
              jclass cls = env->getClass(initializeClass);
              return IntegrationReference(env->callStaticObjectMethod(cls, mids$[mid_valueOf_1b2818a13c1a4c89], a0.this$));
            }

            JArray< IntegrationReference > IntegrationReference::values()
            {
              jclass cls = env->getClass(initializeClass);
              return JArray< IntegrationReference >(env->callStaticObjectMethod(cls, mids$[mid_values_7a01740a7f27efe4]));
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
          namespace tdm {
            static PyObject *t_IntegrationReference_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_IntegrationReference_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_IntegrationReference_of_(t_IntegrationReference *self, PyObject *args);
            static PyObject *t_IntegrationReference_valueOf(PyTypeObject *type, PyObject *args);
            static PyObject *t_IntegrationReference_values(PyTypeObject *type);
            static PyObject *t_IntegrationReference_get__parameters_(t_IntegrationReference *self, void *data);
            static PyGetSetDef t_IntegrationReference__fields_[] = {
              DECLARE_GET_FIELD(t_IntegrationReference, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_IntegrationReference__methods_[] = {
              DECLARE_METHOD(t_IntegrationReference, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IntegrationReference, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_IntegrationReference, of_, METH_VARARGS),
              DECLARE_METHOD(t_IntegrationReference, valueOf, METH_VARARGS | METH_CLASS),
              DECLARE_METHOD(t_IntegrationReference, values, METH_NOARGS | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(IntegrationReference)[] = {
              { Py_tp_methods, t_IntegrationReference__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_IntegrationReference__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(IntegrationReference)[] = {
              &PY_TYPE_DEF(::java::lang::Enum),
              NULL
            };

            DEFINE_TYPE(IntegrationReference, t_IntegrationReference, IntegrationReference);
            PyObject *t_IntegrationReference::wrap_Object(const IntegrationReference& object, PyTypeObject *p0)
            {
              PyObject *obj = t_IntegrationReference::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_IntegrationReference *self = (t_IntegrationReference *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_IntegrationReference::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_IntegrationReference::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_IntegrationReference *self = (t_IntegrationReference *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_IntegrationReference::install(PyObject *module)
            {
              installType(&PY_TYPE(IntegrationReference), &PY_TYPE_DEF(IntegrationReference), module, "IntegrationReference", 0);
            }

            void t_IntegrationReference::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(IntegrationReference), "class_", make_descriptor(IntegrationReference::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IntegrationReference), "wrapfn_", make_descriptor(t_IntegrationReference::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IntegrationReference), "boxfn_", make_descriptor(boxObject));
              env->getClass(IntegrationReference::initializeClass);
              PyObject_SetAttrString((PyObject *) PY_TYPE(IntegrationReference), "END", make_descriptor(t_IntegrationReference::wrap_Object(*IntegrationReference::END)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IntegrationReference), "MIDDLE", make_descriptor(t_IntegrationReference::wrap_Object(*IntegrationReference::MIDDLE)));
              PyObject_SetAttrString((PyObject *) PY_TYPE(IntegrationReference), "START", make_descriptor(t_IntegrationReference::wrap_Object(*IntegrationReference::START)));
            }

            static PyObject *t_IntegrationReference_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, IntegrationReference::initializeClass, 1)))
                return NULL;
              return t_IntegrationReference::wrap_Object(IntegrationReference(((t_IntegrationReference *) arg)->object.this$));
            }
            static PyObject *t_IntegrationReference_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, IntegrationReference::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_IntegrationReference_of_(t_IntegrationReference *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_IntegrationReference_valueOf(PyTypeObject *type, PyObject *args)
            {
              ::java::lang::String a0((jobject) NULL);
              IntegrationReference result((jobject) NULL);

              if (!parseArgs(args, "s", &a0))
              {
                OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference::valueOf(a0));
                return t_IntegrationReference::wrap_Object(result);
              }

              return callSuper(type, "valueOf", args, 2);
            }

            static PyObject *t_IntegrationReference_values(PyTypeObject *type)
            {
              JArray< IntegrationReference > result((jobject) NULL);
              OBJ_CALL(result = ::org::orekit::files::ccsds::ndm::tdm::IntegrationReference::values());
              return JArray<jobject>(result.this$).wrap(t_IntegrationReference::wrap_jobject);
            }
            static PyObject *t_IntegrationReference_get__parameters_(t_IntegrationReference *self, void *data)
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
#include "org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201.h"
#include "java/util/List.h"
#include "org/orekit/models/earth/ionosphere/SsrVtecIonosphericModel.h"
#include "org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Header.h"
#include "java/lang/Class.h"
#include "org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Data.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace messages {
          namespace ssr {
            namespace subtype {

              ::java::lang::Class *SsrIm201::class$ = NULL;
              jmethodID *SsrIm201::mids$ = NULL;
              bool SsrIm201::live$ = false;

              jclass SsrIm201::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/messages/ssr/subtype/SsrIm201");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_b402bb3b3428ecac] = env->getMethodID(cls, "<init>", "(ILorg/orekit/gnss/metric/messages/ssr/subtype/SsrIm201Header;Ljava/util/List;)V");
                  mids$[mid_getIonosphericModel_0a56129c55d05ad7] = env->getMethodID(cls, "getIonosphericModel", "()Lorg/orekit/models/earth/ionosphere/SsrVtecIonosphericModel;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              SsrIm201::SsrIm201(jint a0, const ::org::orekit::gnss::metric::messages::ssr::subtype::SsrIm201Header & a1, const ::java::util::List & a2) : ::org::orekit::gnss::metric::messages::ssr::SsrMessage(env->newObject(initializeClass, &mids$, mid_init$_b402bb3b3428ecac, a0, a1.this$, a2.this$)) {}

              ::org::orekit::models::earth::ionosphere::SsrVtecIonosphericModel SsrIm201::getIonosphericModel() const
              {
                return ::org::orekit::models::earth::ionosphere::SsrVtecIonosphericModel(env->callObjectMethod(this$, mids$[mid_getIonosphericModel_0a56129c55d05ad7]));
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
          namespace ssr {
            namespace subtype {
              static PyObject *t_SsrIm201_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIm201_instance_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_SsrIm201_of_(t_SsrIm201 *self, PyObject *args);
              static int t_SsrIm201_init_(t_SsrIm201 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_SsrIm201_getIonosphericModel(t_SsrIm201 *self);
              static PyObject *t_SsrIm201_get__ionosphericModel(t_SsrIm201 *self, void *data);
              static PyObject *t_SsrIm201_get__parameters_(t_SsrIm201 *self, void *data);
              static PyGetSetDef t_SsrIm201__fields_[] = {
                DECLARE_GET_FIELD(t_SsrIm201, ionosphericModel),
                DECLARE_GET_FIELD(t_SsrIm201, parameters_),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_SsrIm201__methods_[] = {
                DECLARE_METHOD(t_SsrIm201, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIm201, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_SsrIm201, of_, METH_VARARGS),
                DECLARE_METHOD(t_SsrIm201, getIonosphericModel, METH_NOARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(SsrIm201)[] = {
                { Py_tp_methods, t_SsrIm201__methods_ },
                { Py_tp_init, (void *) t_SsrIm201_init_ },
                { Py_tp_getset, t_SsrIm201__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(SsrIm201)[] = {
                &PY_TYPE_DEF(::org::orekit::gnss::metric::messages::ssr::SsrMessage),
                NULL
              };

              DEFINE_TYPE(SsrIm201, t_SsrIm201, SsrIm201);
              PyObject *t_SsrIm201::wrap_Object(const SsrIm201& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIm201::wrap_Object(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIm201 *self = (t_SsrIm201 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              PyObject *t_SsrIm201::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
              {
                PyObject *obj = t_SsrIm201::wrap_jobject(object);
                if (obj != NULL && obj != Py_None)
                {
                  t_SsrIm201 *self = (t_SsrIm201 *) obj;
                  self->parameters[0] = p0;
                  self->parameters[1] = p1;
                }
                return obj;
              }

              void t_SsrIm201::install(PyObject *module)
              {
                installType(&PY_TYPE(SsrIm201), &PY_TYPE_DEF(SsrIm201), module, "SsrIm201", 0);
              }

              void t_SsrIm201::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201), "class_", make_descriptor(SsrIm201::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201), "wrapfn_", make_descriptor(t_SsrIm201::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(SsrIm201), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_SsrIm201_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, SsrIm201::initializeClass, 1)))
                  return NULL;
                return t_SsrIm201::wrap_Object(SsrIm201(((t_SsrIm201 *) arg)->object.this$));
              }
              static PyObject *t_SsrIm201_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, SsrIm201::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static PyObject *t_SsrIm201_of_(t_SsrIm201 *self, PyObject *args)
              {
                if (!parseArg(args, "T", 2, &(self->parameters)))
                  Py_RETURN_SELF;
                return PyErr_SetArgsError((PyObject *) self, "of_", args);
              }

              static int t_SsrIm201_init_(t_SsrIm201 *self, PyObject *args, PyObject *kwds)
              {
                jint a0;
                ::org::orekit::gnss::metric::messages::ssr::subtype::SsrIm201Header a1((jobject) NULL);
                ::java::util::List a2((jobject) NULL);
                PyTypeObject **p2;
                SsrIm201 object((jobject) NULL);

                if (!parseArgs(args, "IkK", ::org::orekit::gnss::metric::messages::ssr::subtype::SsrIm201Header::initializeClass, ::java::util::List::initializeClass, &a0, &a1, &a2, &p2, ::java::util::t_List::parameters_))
                {
                  INT_CALL(object = SsrIm201(a0, a1, a2));
                  self->object = object;
                  self->parameters[0] = ::org::orekit::gnss::metric::messages::ssr::subtype::PY_TYPE(SsrIm201Header);
                  self->parameters[1] = ::org::orekit::gnss::metric::messages::ssr::subtype::PY_TYPE(SsrIm201Data);
                }
                else
                {
                  PyErr_SetArgsError((PyObject *) self, "__init__", args);
                  return -1;
                }

                return 0;
              }

              static PyObject *t_SsrIm201_getIonosphericModel(t_SsrIm201 *self)
              {
                ::org::orekit::models::earth::ionosphere::SsrVtecIonosphericModel result((jobject) NULL);
                OBJ_CALL(result = self->object.getIonosphericModel());
                return ::org::orekit::models::earth::ionosphere::t_SsrVtecIonosphericModel::wrap_Object(result);
              }
              static PyObject *t_SsrIm201_get__parameters_(t_SsrIm201 *self, void *data)
              {
                return typeParameters(self->parameters, sizeof(self->parameters));
              }

              static PyObject *t_SsrIm201_get__ionosphericModel(t_SsrIm201 *self, void *data)
              {
                ::org::orekit::models::earth::ionosphere::SsrVtecIonosphericModel value((jobject) NULL);
                OBJ_CALL(value = self->object.getIonosphericModel());
                return ::org::orekit::models::earth::ionosphere::t_SsrVtecIonosphericModel::wrap_Object(value);
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
#include "org/orekit/files/ilrs/CRDConfiguration$BaseConfiguration.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRDConfiguration$BaseConfiguration::class$ = NULL;
        jmethodID *CRDConfiguration$BaseConfiguration::mids$ = NULL;
        bool CRDConfiguration$BaseConfiguration::live$ = false;

        jclass CRDConfiguration$BaseConfiguration::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRDConfiguration$BaseConfiguration");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getConfigurationId_0090f7797e403f43] = env->getMethodID(cls, "getConfigurationId", "()Ljava/lang/String;");
            mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_setConfigurationId_e939c6558ae8d313] = env->getMethodID(cls, "setConfigurationId", "(Ljava/lang/String;)V");
            mids$[mid_toCrdString_0090f7797e403f43] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRDConfiguration$BaseConfiguration::CRDConfiguration$BaseConfiguration() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jboolean CRDConfiguration$BaseConfiguration::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
        }

        ::java::lang::String CRDConfiguration$BaseConfiguration::getConfigurationId() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getConfigurationId_0090f7797e403f43]));
        }

        jint CRDConfiguration$BaseConfiguration::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
        }

        void CRDConfiguration$BaseConfiguration::setConfigurationId(const ::java::lang::String & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setConfigurationId_e939c6558ae8d313], a0.this$);
        }

        ::java::lang::String CRDConfiguration$BaseConfiguration::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_0090f7797e403f43]));
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
        static PyObject *t_CRDConfiguration$BaseConfiguration_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRDConfiguration$BaseConfiguration_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRDConfiguration$BaseConfiguration_init_(t_CRDConfiguration$BaseConfiguration *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRDConfiguration$BaseConfiguration_equals(t_CRDConfiguration$BaseConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$BaseConfiguration_getConfigurationId(t_CRDConfiguration$BaseConfiguration *self);
        static PyObject *t_CRDConfiguration$BaseConfiguration_hashCode(t_CRDConfiguration$BaseConfiguration *self, PyObject *args);
        static PyObject *t_CRDConfiguration$BaseConfiguration_setConfigurationId(t_CRDConfiguration$BaseConfiguration *self, PyObject *arg);
        static PyObject *t_CRDConfiguration$BaseConfiguration_toCrdString(t_CRDConfiguration$BaseConfiguration *self);
        static PyObject *t_CRDConfiguration$BaseConfiguration_get__configurationId(t_CRDConfiguration$BaseConfiguration *self, void *data);
        static int t_CRDConfiguration$BaseConfiguration_set__configurationId(t_CRDConfiguration$BaseConfiguration *self, PyObject *arg, void *data);
        static PyGetSetDef t_CRDConfiguration$BaseConfiguration__fields_[] = {
          DECLARE_GETSET_FIELD(t_CRDConfiguration$BaseConfiguration, configurationId),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRDConfiguration$BaseConfiguration__methods_[] = {
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, equals, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, getConfigurationId, METH_NOARGS),
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, setConfigurationId, METH_O),
          DECLARE_METHOD(t_CRDConfiguration$BaseConfiguration, toCrdString, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRDConfiguration$BaseConfiguration)[] = {
          { Py_tp_methods, t_CRDConfiguration$BaseConfiguration__methods_ },
          { Py_tp_init, (void *) t_CRDConfiguration$BaseConfiguration_init_ },
          { Py_tp_getset, t_CRDConfiguration$BaseConfiguration__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRDConfiguration$BaseConfiguration)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(CRDConfiguration$BaseConfiguration, t_CRDConfiguration$BaseConfiguration, CRDConfiguration$BaseConfiguration);

        void t_CRDConfiguration$BaseConfiguration::install(PyObject *module)
        {
          installType(&PY_TYPE(CRDConfiguration$BaseConfiguration), &PY_TYPE_DEF(CRDConfiguration$BaseConfiguration), module, "CRDConfiguration$BaseConfiguration", 0);
        }

        void t_CRDConfiguration$BaseConfiguration::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$BaseConfiguration), "class_", make_descriptor(CRDConfiguration$BaseConfiguration::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$BaseConfiguration), "wrapfn_", make_descriptor(t_CRDConfiguration$BaseConfiguration::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRDConfiguration$BaseConfiguration), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRDConfiguration$BaseConfiguration::initializeClass, 1)))
            return NULL;
          return t_CRDConfiguration$BaseConfiguration::wrap_Object(CRDConfiguration$BaseConfiguration(((t_CRDConfiguration$BaseConfiguration *) arg)->object.this$));
        }
        static PyObject *t_CRDConfiguration$BaseConfiguration_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRDConfiguration$BaseConfiguration::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRDConfiguration$BaseConfiguration_init_(t_CRDConfiguration$BaseConfiguration *self, PyObject *args, PyObject *kwds)
        {
          CRDConfiguration$BaseConfiguration object((jobject) NULL);

          INT_CALL(object = CRDConfiguration$BaseConfiguration());
          self->object = object;

          return 0;
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_equals(t_CRDConfiguration$BaseConfiguration *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$BaseConfiguration), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_getConfigurationId(t_CRDConfiguration$BaseConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getConfigurationId());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_hashCode(t_CRDConfiguration$BaseConfiguration *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(CRDConfiguration$BaseConfiguration), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_setConfigurationId(t_CRDConfiguration$BaseConfiguration *self, PyObject *arg)
        {
          ::java::lang::String a0((jobject) NULL);

          if (!parseArg(arg, "s", &a0))
          {
            OBJ_CALL(self->object.setConfigurationId(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setConfigurationId", arg);
          return NULL;
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_toCrdString(t_CRDConfiguration$BaseConfiguration *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.toCrdString());
          return j2p(result);
        }

        static PyObject *t_CRDConfiguration$BaseConfiguration_get__configurationId(t_CRDConfiguration$BaseConfiguration *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getConfigurationId());
          return j2p(value);
        }
        static int t_CRDConfiguration$BaseConfiguration_set__configurationId(t_CRDConfiguration$BaseConfiguration *self, PyObject *arg, void *data)
        {
          {
            ::java::lang::String value((jobject) NULL);
            if (!parseArg(arg, "s", &value))
            {
              INT_CALL(self->object.setConfigurationId(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "configurationId", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/CRD$FrRangeMeasurement.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *CRD$FrRangeMeasurement::class$ = NULL;
        jmethodID *CRD$FrRangeMeasurement::mids$ = NULL;
        bool CRD$FrRangeMeasurement::live$ = false;

        jclass CRD$FrRangeMeasurement::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/CRD$FrRangeMeasurement");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_6317ca48aa013d0b] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;DILjava/lang/String;IIIII)V");
            mids$[mid_getDetectorChannel_f2f64475e4580546] = env->getMethodID(cls, "getDetectorChannel", "()I");
            mids$[mid_getFilterFlag_f2f64475e4580546] = env->getMethodID(cls, "getFilterFlag", "()I");
            mids$[mid_getReceiveAmplitude_f2f64475e4580546] = env->getMethodID(cls, "getReceiveAmplitude", "()I");
            mids$[mid_getStopNumber_f2f64475e4580546] = env->getMethodID(cls, "getStopNumber", "()I");
            mids$[mid_getTransmitAmplitude_f2f64475e4580546] = env->getMethodID(cls, "getTransmitAmplitude", "()I");
            mids$[mid_toCrdString_0090f7797e403f43] = env->getMethodID(cls, "toCrdString", "()Ljava/lang/String;");
            mids$[mid_toString_0090f7797e403f43] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        CRD$FrRangeMeasurement::CRD$FrRangeMeasurement(const ::org::orekit::time::AbsoluteDate & a0, jdouble a1, jint a2, const ::java::lang::String & a3, jint a4, jint a5, jint a6, jint a7, jint a8) : ::org::orekit::files::ilrs::CRD$RangeMeasurement(env->newObject(initializeClass, &mids$, mid_init$_6317ca48aa013d0b, a0.this$, a1, a2, a3.this$, a4, a5, a6, a7, a8)) {}

        jint CRD$FrRangeMeasurement::getDetectorChannel() const
        {
          return env->callIntMethod(this$, mids$[mid_getDetectorChannel_f2f64475e4580546]);
        }

        jint CRD$FrRangeMeasurement::getFilterFlag() const
        {
          return env->callIntMethod(this$, mids$[mid_getFilterFlag_f2f64475e4580546]);
        }

        jint CRD$FrRangeMeasurement::getReceiveAmplitude() const
        {
          return env->callIntMethod(this$, mids$[mid_getReceiveAmplitude_f2f64475e4580546]);
        }

        jint CRD$FrRangeMeasurement::getStopNumber() const
        {
          return env->callIntMethod(this$, mids$[mid_getStopNumber_f2f64475e4580546]);
        }

        jint CRD$FrRangeMeasurement::getTransmitAmplitude() const
        {
          return env->callIntMethod(this$, mids$[mid_getTransmitAmplitude_f2f64475e4580546]);
        }

        ::java::lang::String CRD$FrRangeMeasurement::toCrdString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toCrdString_0090f7797e403f43]));
        }

        ::java::lang::String CRD$FrRangeMeasurement::toString() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_0090f7797e403f43]));
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
        static PyObject *t_CRD$FrRangeMeasurement_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_CRD$FrRangeMeasurement_instance_(PyTypeObject *type, PyObject *arg);
        static int t_CRD$FrRangeMeasurement_init_(t_CRD$FrRangeMeasurement *self, PyObject *args, PyObject *kwds);
        static PyObject *t_CRD$FrRangeMeasurement_getDetectorChannel(t_CRD$FrRangeMeasurement *self);
        static PyObject *t_CRD$FrRangeMeasurement_getFilterFlag(t_CRD$FrRangeMeasurement *self);
        static PyObject *t_CRD$FrRangeMeasurement_getReceiveAmplitude(t_CRD$FrRangeMeasurement *self);
        static PyObject *t_CRD$FrRangeMeasurement_getStopNumber(t_CRD$FrRangeMeasurement *self);
        static PyObject *t_CRD$FrRangeMeasurement_getTransmitAmplitude(t_CRD$FrRangeMeasurement *self);
        static PyObject *t_CRD$FrRangeMeasurement_toCrdString(t_CRD$FrRangeMeasurement *self, PyObject *args);
        static PyObject *t_CRD$FrRangeMeasurement_toString(t_CRD$FrRangeMeasurement *self, PyObject *args);
        static PyObject *t_CRD$FrRangeMeasurement_get__detectorChannel(t_CRD$FrRangeMeasurement *self, void *data);
        static PyObject *t_CRD$FrRangeMeasurement_get__filterFlag(t_CRD$FrRangeMeasurement *self, void *data);
        static PyObject *t_CRD$FrRangeMeasurement_get__receiveAmplitude(t_CRD$FrRangeMeasurement *self, void *data);
        static PyObject *t_CRD$FrRangeMeasurement_get__stopNumber(t_CRD$FrRangeMeasurement *self, void *data);
        static PyObject *t_CRD$FrRangeMeasurement_get__transmitAmplitude(t_CRD$FrRangeMeasurement *self, void *data);
        static PyGetSetDef t_CRD$FrRangeMeasurement__fields_[] = {
          DECLARE_GET_FIELD(t_CRD$FrRangeMeasurement, detectorChannel),
          DECLARE_GET_FIELD(t_CRD$FrRangeMeasurement, filterFlag),
          DECLARE_GET_FIELD(t_CRD$FrRangeMeasurement, receiveAmplitude),
          DECLARE_GET_FIELD(t_CRD$FrRangeMeasurement, stopNumber),
          DECLARE_GET_FIELD(t_CRD$FrRangeMeasurement, transmitAmplitude),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_CRD$FrRangeMeasurement__methods_[] = {
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, getDetectorChannel, METH_NOARGS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, getFilterFlag, METH_NOARGS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, getReceiveAmplitude, METH_NOARGS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, getStopNumber, METH_NOARGS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, getTransmitAmplitude, METH_NOARGS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, toCrdString, METH_VARARGS),
          DECLARE_METHOD(t_CRD$FrRangeMeasurement, toString, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(CRD$FrRangeMeasurement)[] = {
          { Py_tp_methods, t_CRD$FrRangeMeasurement__methods_ },
          { Py_tp_init, (void *) t_CRD$FrRangeMeasurement_init_ },
          { Py_tp_getset, t_CRD$FrRangeMeasurement__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(CRD$FrRangeMeasurement)[] = {
          &PY_TYPE_DEF(::org::orekit::files::ilrs::CRD$RangeMeasurement),
          NULL
        };

        DEFINE_TYPE(CRD$FrRangeMeasurement, t_CRD$FrRangeMeasurement, CRD$FrRangeMeasurement);

        void t_CRD$FrRangeMeasurement::install(PyObject *module)
        {
          installType(&PY_TYPE(CRD$FrRangeMeasurement), &PY_TYPE_DEF(CRD$FrRangeMeasurement), module, "CRD$FrRangeMeasurement", 0);
        }

        void t_CRD$FrRangeMeasurement::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$FrRangeMeasurement), "class_", make_descriptor(CRD$FrRangeMeasurement::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$FrRangeMeasurement), "wrapfn_", make_descriptor(t_CRD$FrRangeMeasurement::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(CRD$FrRangeMeasurement), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_CRD$FrRangeMeasurement_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, CRD$FrRangeMeasurement::initializeClass, 1)))
            return NULL;
          return t_CRD$FrRangeMeasurement::wrap_Object(CRD$FrRangeMeasurement(((t_CRD$FrRangeMeasurement *) arg)->object.this$));
        }
        static PyObject *t_CRD$FrRangeMeasurement_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, CRD$FrRangeMeasurement::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_CRD$FrRangeMeasurement_init_(t_CRD$FrRangeMeasurement *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          jdouble a1;
          jint a2;
          ::java::lang::String a3((jobject) NULL);
          jint a4;
          jint a5;
          jint a6;
          jint a7;
          jint a8;
          CRD$FrRangeMeasurement object((jobject) NULL);

          if (!parseArgs(args, "kDIsIIIII", ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8))
          {
            INT_CALL(object = CRD$FrRangeMeasurement(a0, a1, a2, a3, a4, a5, a6, a7, a8));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_CRD$FrRangeMeasurement_getDetectorChannel(t_CRD$FrRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getDetectorChannel());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$FrRangeMeasurement_getFilterFlag(t_CRD$FrRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getFilterFlag());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$FrRangeMeasurement_getReceiveAmplitude(t_CRD$FrRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getReceiveAmplitude());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$FrRangeMeasurement_getStopNumber(t_CRD$FrRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getStopNumber());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$FrRangeMeasurement_getTransmitAmplitude(t_CRD$FrRangeMeasurement *self)
        {
          jint result;
          OBJ_CALL(result = self->object.getTransmitAmplitude());
          return PyLong_FromLong((long) result);
        }

        static PyObject *t_CRD$FrRangeMeasurement_toCrdString(t_CRD$FrRangeMeasurement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toCrdString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$FrRangeMeasurement), (PyObject *) self, "toCrdString", args, 2);
        }

        static PyObject *t_CRD$FrRangeMeasurement_toString(t_CRD$FrRangeMeasurement *self, PyObject *args)
        {
          ::java::lang::String result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toString());
            return j2p(result);
          }

          return callSuper(PY_TYPE(CRD$FrRangeMeasurement), (PyObject *) self, "toString", args, 2);
        }

        static PyObject *t_CRD$FrRangeMeasurement_get__detectorChannel(t_CRD$FrRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getDetectorChannel());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$FrRangeMeasurement_get__filterFlag(t_CRD$FrRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getFilterFlag());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$FrRangeMeasurement_get__receiveAmplitude(t_CRD$FrRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getReceiveAmplitude());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$FrRangeMeasurement_get__stopNumber(t_CRD$FrRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getStopNumber());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_CRD$FrRangeMeasurement_get__transmitAmplitude(t_CRD$FrRangeMeasurement *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getTransmitAmplitude());
          return PyLong_FromLong((long) value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/utils/TimeSpanMap.h"
#include "org/orekit/utils/TimeSpanMap$Transition.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeSpanMap$Span.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *TimeSpanMap::class$ = NULL;
      jmethodID *TimeSpanMap::mids$ = NULL;
      bool TimeSpanMap::live$ = false;

      jclass TimeSpanMap::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/TimeSpanMap");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_7ca0d9438822cb0b] = env->getMethodID(cls, "<init>", "(Ljava/lang/Object;)V");
          mids$[mid_addValidAfter_ca4358fd12ef177a] = env->getMethodID(cls, "addValidAfter", "(Ljava/lang/Object;Lorg/orekit/time/AbsoluteDate;Z)Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_addValidBefore_ca4358fd12ef177a] = env->getMethodID(cls, "addValidBefore", "(Ljava/lang/Object;Lorg/orekit/time/AbsoluteDate;Z)Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_addValidBetween_da4ec72bdd0da05a] = env->getMethodID(cls, "addValidBetween", "(Ljava/lang/Object;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_extractRange_df7496d2771de2ea] = env->getMethodID(cls, "extractRange", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap;");
          mids$[mid_get_19bb07a4e369f4a4] = env->getMethodID(cls, "get", "(Lorg/orekit/time/AbsoluteDate;)Ljava/lang/Object;");
          mids$[mid_getFirstSpan_39a1e35b17737f60] = env->getMethodID(cls, "getFirstSpan", "()Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_getFirstTransition_bfa1ec341cbef3d2] = env->getMethodID(cls, "getFirstTransition", "()Lorg/orekit/utils/TimeSpanMap$Transition;");
          mids$[mid_getLastSpan_39a1e35b17737f60] = env->getMethodID(cls, "getLastSpan", "()Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_getLastTransition_bfa1ec341cbef3d2] = env->getMethodID(cls, "getLastTransition", "()Lorg/orekit/utils/TimeSpanMap$Transition;");
          mids$[mid_getSpan_e815c41e031d3908] = env->getMethodID(cls, "getSpan", "(Lorg/orekit/time/AbsoluteDate;)Lorg/orekit/utils/TimeSpanMap$Span;");
          mids$[mid_getSpansNumber_f2f64475e4580546] = env->getMethodID(cls, "getSpansNumber", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      TimeSpanMap::TimeSpanMap(const ::java::lang::Object & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ca0d9438822cb0b, a0.this$)) {}

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap::addValidAfter(const ::java::lang::Object & a0, const ::org::orekit::time::AbsoluteDate & a1, jboolean a2) const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_addValidAfter_ca4358fd12ef177a], a0.this$, a1.this$, a2));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap::addValidBefore(const ::java::lang::Object & a0, const ::org::orekit::time::AbsoluteDate & a1, jboolean a2) const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_addValidBefore_ca4358fd12ef177a], a0.this$, a1.this$, a2));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap::addValidBetween(const ::java::lang::Object & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::time::AbsoluteDate & a2) const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_addValidBetween_da4ec72bdd0da05a], a0.this$, a1.this$, a2.this$));
      }

      TimeSpanMap TimeSpanMap::extractRange(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1) const
      {
        return TimeSpanMap(env->callObjectMethod(this$, mids$[mid_extractRange_df7496d2771de2ea], a0.this$, a1.this$));
      }

      ::java::lang::Object TimeSpanMap::get$(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_get_19bb07a4e369f4a4], a0.this$));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap::getFirstSpan() const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getFirstSpan_39a1e35b17737f60]));
      }

      ::org::orekit::utils::TimeSpanMap$Transition TimeSpanMap::getFirstTransition() const
      {
        return ::org::orekit::utils::TimeSpanMap$Transition(env->callObjectMethod(this$, mids$[mid_getFirstTransition_bfa1ec341cbef3d2]));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap::getLastSpan() const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getLastSpan_39a1e35b17737f60]));
      }

      ::org::orekit::utils::TimeSpanMap$Transition TimeSpanMap::getLastTransition() const
      {
        return ::org::orekit::utils::TimeSpanMap$Transition(env->callObjectMethod(this$, mids$[mid_getLastTransition_bfa1ec341cbef3d2]));
      }

      ::org::orekit::utils::TimeSpanMap$Span TimeSpanMap::getSpan(const ::org::orekit::time::AbsoluteDate & a0) const
      {
        return ::org::orekit::utils::TimeSpanMap$Span(env->callObjectMethod(this$, mids$[mid_getSpan_e815c41e031d3908], a0.this$));
      }

      jint TimeSpanMap::getSpansNumber() const
      {
        return env->callIntMethod(this$, mids$[mid_getSpansNumber_f2f64475e4580546]);
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
      static PyObject *t_TimeSpanMap_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSpanMap_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_TimeSpanMap_of_(t_TimeSpanMap *self, PyObject *args);
      static int t_TimeSpanMap_init_(t_TimeSpanMap *self, PyObject *args, PyObject *kwds);
      static PyObject *t_TimeSpanMap_addValidAfter(t_TimeSpanMap *self, PyObject *args);
      static PyObject *t_TimeSpanMap_addValidBefore(t_TimeSpanMap *self, PyObject *args);
      static PyObject *t_TimeSpanMap_addValidBetween(t_TimeSpanMap *self, PyObject *args);
      static PyObject *t_TimeSpanMap_extractRange(t_TimeSpanMap *self, PyObject *args);
      static PyObject *t_TimeSpanMap_get(t_TimeSpanMap *self, PyObject *arg);
      static PyObject *t_TimeSpanMap_getFirstSpan(t_TimeSpanMap *self);
      static PyObject *t_TimeSpanMap_getFirstTransition(t_TimeSpanMap *self);
      static PyObject *t_TimeSpanMap_getLastSpan(t_TimeSpanMap *self);
      static PyObject *t_TimeSpanMap_getLastTransition(t_TimeSpanMap *self);
      static PyObject *t_TimeSpanMap_getSpan(t_TimeSpanMap *self, PyObject *arg);
      static PyObject *t_TimeSpanMap_getSpansNumber(t_TimeSpanMap *self);
      static PyObject *t_TimeSpanMap_get__firstSpan(t_TimeSpanMap *self, void *data);
      static PyObject *t_TimeSpanMap_get__firstTransition(t_TimeSpanMap *self, void *data);
      static PyObject *t_TimeSpanMap_get__lastSpan(t_TimeSpanMap *self, void *data);
      static PyObject *t_TimeSpanMap_get__lastTransition(t_TimeSpanMap *self, void *data);
      static PyObject *t_TimeSpanMap_get__spansNumber(t_TimeSpanMap *self, void *data);
      static PyObject *t_TimeSpanMap_get__parameters_(t_TimeSpanMap *self, void *data);
      static PyGetSetDef t_TimeSpanMap__fields_[] = {
        DECLARE_GET_FIELD(t_TimeSpanMap, firstSpan),
        DECLARE_GET_FIELD(t_TimeSpanMap, firstTransition),
        DECLARE_GET_FIELD(t_TimeSpanMap, lastSpan),
        DECLARE_GET_FIELD(t_TimeSpanMap, lastTransition),
        DECLARE_GET_FIELD(t_TimeSpanMap, spansNumber),
        DECLARE_GET_FIELD(t_TimeSpanMap, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_TimeSpanMap__methods_[] = {
        DECLARE_METHOD(t_TimeSpanMap, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSpanMap, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_TimeSpanMap, of_, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap, addValidAfter, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap, addValidBefore, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap, addValidBetween, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap, extractRange, METH_VARARGS),
        DECLARE_METHOD(t_TimeSpanMap, get, METH_O),
        DECLARE_METHOD(t_TimeSpanMap, getFirstSpan, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap, getFirstTransition, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap, getLastSpan, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap, getLastTransition, METH_NOARGS),
        DECLARE_METHOD(t_TimeSpanMap, getSpan, METH_O),
        DECLARE_METHOD(t_TimeSpanMap, getSpansNumber, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(TimeSpanMap)[] = {
        { Py_tp_methods, t_TimeSpanMap__methods_ },
        { Py_tp_init, (void *) t_TimeSpanMap_init_ },
        { Py_tp_getset, t_TimeSpanMap__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(TimeSpanMap)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(TimeSpanMap, t_TimeSpanMap, TimeSpanMap);
      PyObject *t_TimeSpanMap::wrap_Object(const TimeSpanMap& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSpanMap::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSpanMap *self = (t_TimeSpanMap *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_TimeSpanMap::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_TimeSpanMap::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_TimeSpanMap *self = (t_TimeSpanMap *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_TimeSpanMap::install(PyObject *module)
      {
        installType(&PY_TYPE(TimeSpanMap), &PY_TYPE_DEF(TimeSpanMap), module, "TimeSpanMap", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap), "Span", make_descriptor(&PY_TYPE_DEF(TimeSpanMap$Span)));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap), "Transition", make_descriptor(&PY_TYPE_DEF(TimeSpanMap$Transition)));
      }

      void t_TimeSpanMap::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap), "class_", make_descriptor(TimeSpanMap::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap), "wrapfn_", make_descriptor(t_TimeSpanMap::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(TimeSpanMap), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_TimeSpanMap_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, TimeSpanMap::initializeClass, 1)))
          return NULL;
        return t_TimeSpanMap::wrap_Object(TimeSpanMap(((t_TimeSpanMap *) arg)->object.this$));
      }
      static PyObject *t_TimeSpanMap_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, TimeSpanMap::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_TimeSpanMap_of_(t_TimeSpanMap *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_TimeSpanMap_init_(t_TimeSpanMap *self, PyObject *args, PyObject *kwds)
      {
        ::java::lang::Object a0((jobject) NULL);
        TimeSpanMap object((jobject) NULL);

        if (!parseArgs(args, "o", &a0))
        {
          INT_CALL(object = TimeSpanMap(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_TimeSpanMap_addValidAfter(t_TimeSpanMap *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        jboolean a2;
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);

        if (!parseArgs(args, "OkZ", self->parameters[0], ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.addValidAfter(a0, a1, a2));
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "addValidAfter", args);
        return NULL;
      }

      static PyObject *t_TimeSpanMap_addValidBefore(t_TimeSpanMap *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        jboolean a2;
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);

        if (!parseArgs(args, "OkZ", self->parameters[0], ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.addValidBefore(a0, a1, a2));
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "addValidBefore", args);
        return NULL;
      }

      static PyObject *t_TimeSpanMap_addValidBetween(t_TimeSpanMap *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);

        if (!parseArgs(args, "Okk", self->parameters[0], ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.addValidBetween(a0, a1, a2));
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "addValidBetween", args);
        return NULL;
      }

      static PyObject *t_TimeSpanMap_extractRange(t_TimeSpanMap *self, PyObject *args)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
        TimeSpanMap result((jobject) NULL);

        if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.extractRange(a0, a1));
          return t_TimeSpanMap::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "extractRange", args);
        return NULL;
      }

      static PyObject *t_TimeSpanMap_get(t_TimeSpanMap *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::java::lang::Object result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.get$(a0));
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "get", arg);
        return NULL;
      }

      static PyObject *t_TimeSpanMap_getFirstSpan(t_TimeSpanMap *self)
      {
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);
        OBJ_CALL(result = self->object.getFirstSpan());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap_getFirstTransition(t_TimeSpanMap *self)
      {
        ::org::orekit::utils::TimeSpanMap$Transition result((jobject) NULL);
        OBJ_CALL(result = self->object.getFirstTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap_getLastSpan(t_TimeSpanMap *self)
      {
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);
        OBJ_CALL(result = self->object.getLastSpan());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap_getLastTransition(t_TimeSpanMap *self)
      {
        ::org::orekit::utils::TimeSpanMap$Transition result((jobject) NULL);
        OBJ_CALL(result = self->object.getLastTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_TimeSpanMap_getSpan(t_TimeSpanMap *self, PyObject *arg)
      {
        ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
        ::org::orekit::utils::TimeSpanMap$Span result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.getSpan(a0));
          return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "getSpan", arg);
        return NULL;
      }

      static PyObject *t_TimeSpanMap_getSpansNumber(t_TimeSpanMap *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getSpansNumber());
        return PyLong_FromLong((long) result);
      }
      static PyObject *t_TimeSpanMap_get__parameters_(t_TimeSpanMap *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_TimeSpanMap_get__firstSpan(t_TimeSpanMap *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Span value((jobject) NULL);
        OBJ_CALL(value = self->object.getFirstSpan());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap_get__firstTransition(t_TimeSpanMap *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Transition value((jobject) NULL);
        OBJ_CALL(value = self->object.getFirstTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap_get__lastSpan(t_TimeSpanMap *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Span value((jobject) NULL);
        OBJ_CALL(value = self->object.getLastSpan());
        return ::org::orekit::utils::t_TimeSpanMap$Span::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap_get__lastTransition(t_TimeSpanMap *self, void *data)
      {
        ::org::orekit::utils::TimeSpanMap$Transition value((jobject) NULL);
        OBJ_CALL(value = self->object.getLastTransition());
        return ::org::orekit::utils::t_TimeSpanMap$Transition::wrap_Object(value);
      }

      static PyObject *t_TimeSpanMap_get__spansNumber(t_TimeSpanMap *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getSpansNumber());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/modifiers/ShapiroOneWayGNSSPhaseModifier.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "org/orekit/estimation/measurements/gnss/OneWayGNSSPhase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *ShapiroOneWayGNSSPhaseModifier::class$ = NULL;
          jmethodID *ShapiroOneWayGNSSPhaseModifier::mids$ = NULL;
          bool ShapiroOneWayGNSSPhaseModifier::live$ = false;

          jclass ShapiroOneWayGNSSPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/ShapiroOneWayGNSSPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_77e0f9a1f260e2e5] = env->getMethodID(cls, "<init>", "(D)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ShapiroOneWayGNSSPhaseModifier::ShapiroOneWayGNSSPhaseModifier(jdouble a0) : ::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier(env->newObject(initializeClass, &mids$, mid_init$_77e0f9a1f260e2e5, a0)) {}

          ::java::util::List ShapiroOneWayGNSSPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void ShapiroOneWayGNSSPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_modifyWithoutDerivatives_811f96960c94c1de], a0.this$);
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
          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ShapiroOneWayGNSSPhaseModifier_init_(t_ShapiroOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_getParametersDrivers(t_ShapiroOneWayGNSSPhaseModifier *self);
          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_ShapiroOneWayGNSSPhaseModifier *self, PyObject *arg);
          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_get__parametersDrivers(t_ShapiroOneWayGNSSPhaseModifier *self, void *data);
          static PyGetSetDef t_ShapiroOneWayGNSSPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_ShapiroOneWayGNSSPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ShapiroOneWayGNSSPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_ShapiroOneWayGNSSPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroOneWayGNSSPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ShapiroOneWayGNSSPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_ShapiroOneWayGNSSPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ShapiroOneWayGNSSPhaseModifier)[] = {
            { Py_tp_methods, t_ShapiroOneWayGNSSPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_ShapiroOneWayGNSSPhaseModifier_init_ },
            { Py_tp_getset, t_ShapiroOneWayGNSSPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ShapiroOneWayGNSSPhaseModifier)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::modifiers::AbstractShapiroBaseModifier),
            NULL
          };

          DEFINE_TYPE(ShapiroOneWayGNSSPhaseModifier, t_ShapiroOneWayGNSSPhaseModifier, ShapiroOneWayGNSSPhaseModifier);

          void t_ShapiroOneWayGNSSPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(ShapiroOneWayGNSSPhaseModifier), &PY_TYPE_DEF(ShapiroOneWayGNSSPhaseModifier), module, "ShapiroOneWayGNSSPhaseModifier", 0);
          }

          void t_ShapiroOneWayGNSSPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroOneWayGNSSPhaseModifier), "class_", make_descriptor(ShapiroOneWayGNSSPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroOneWayGNSSPhaseModifier), "wrapfn_", make_descriptor(t_ShapiroOneWayGNSSPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ShapiroOneWayGNSSPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ShapiroOneWayGNSSPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_ShapiroOneWayGNSSPhaseModifier::wrap_Object(ShapiroOneWayGNSSPhaseModifier(((t_ShapiroOneWayGNSSPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ShapiroOneWayGNSSPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ShapiroOneWayGNSSPhaseModifier_init_(t_ShapiroOneWayGNSSPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            jdouble a0;
            ShapiroOneWayGNSSPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              INT_CALL(object = ShapiroOneWayGNSSPhaseModifier(a0));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_getParametersDrivers(t_ShapiroOneWayGNSSPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_modifyWithoutDerivatives(t_ShapiroOneWayGNSSPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_ShapiroOneWayGNSSPhaseModifier_get__parametersDrivers(t_ShapiroOneWayGNSSPhaseModifier *self, void *data)
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
#include "org/orekit/files/rinex/observation/ObservationData.h"
#include "org/orekit/gnss/ObservationType.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace observation {

          ::java::lang::Class *ObservationData::class$ = NULL;
          jmethodID *ObservationData::mids$ = NULL;
          bool ObservationData::live$ = false;

          jclass ObservationData::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/observation/ObservationData");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_f641c95c86b5073f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/ObservationType;DII)V");
              mids$[mid_getLossOfLockIndicator_f2f64475e4580546] = env->getMethodID(cls, "getLossOfLockIndicator", "()I");
              mids$[mid_getObservationType_5edc6553f2bb4ae7] = env->getMethodID(cls, "getObservationType", "()Lorg/orekit/gnss/ObservationType;");
              mids$[mid_getSignalStrength_f2f64475e4580546] = env->getMethodID(cls, "getSignalStrength", "()I");
              mids$[mid_getValue_456d9a2f64d6b28d] = env->getMethodID(cls, "getValue", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ObservationData::ObservationData(const ::org::orekit::gnss::ObservationType & a0, jdouble a1, jint a2, jint a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f641c95c86b5073f, a0.this$, a1, a2, a3)) {}

          jint ObservationData::getLossOfLockIndicator() const
          {
            return env->callIntMethod(this$, mids$[mid_getLossOfLockIndicator_f2f64475e4580546]);
          }

          ::org::orekit::gnss::ObservationType ObservationData::getObservationType() const
          {
            return ::org::orekit::gnss::ObservationType(env->callObjectMethod(this$, mids$[mid_getObservationType_5edc6553f2bb4ae7]));
          }

          jint ObservationData::getSignalStrength() const
          {
            return env->callIntMethod(this$, mids$[mid_getSignalStrength_f2f64475e4580546]);
          }

          jdouble ObservationData::getValue() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getValue_456d9a2f64d6b28d]);
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
        namespace observation {
          static PyObject *t_ObservationData_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ObservationData_instance_(PyTypeObject *type, PyObject *arg);
          static int t_ObservationData_init_(t_ObservationData *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ObservationData_getLossOfLockIndicator(t_ObservationData *self);
          static PyObject *t_ObservationData_getObservationType(t_ObservationData *self);
          static PyObject *t_ObservationData_getSignalStrength(t_ObservationData *self);
          static PyObject *t_ObservationData_getValue(t_ObservationData *self);
          static PyObject *t_ObservationData_get__lossOfLockIndicator(t_ObservationData *self, void *data);
          static PyObject *t_ObservationData_get__observationType(t_ObservationData *self, void *data);
          static PyObject *t_ObservationData_get__signalStrength(t_ObservationData *self, void *data);
          static PyObject *t_ObservationData_get__value(t_ObservationData *self, void *data);
          static PyGetSetDef t_ObservationData__fields_[] = {
            DECLARE_GET_FIELD(t_ObservationData, lossOfLockIndicator),
            DECLARE_GET_FIELD(t_ObservationData, observationType),
            DECLARE_GET_FIELD(t_ObservationData, signalStrength),
            DECLARE_GET_FIELD(t_ObservationData, value),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ObservationData__methods_[] = {
            DECLARE_METHOD(t_ObservationData, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObservationData, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ObservationData, getLossOfLockIndicator, METH_NOARGS),
            DECLARE_METHOD(t_ObservationData, getObservationType, METH_NOARGS),
            DECLARE_METHOD(t_ObservationData, getSignalStrength, METH_NOARGS),
            DECLARE_METHOD(t_ObservationData, getValue, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ObservationData)[] = {
            { Py_tp_methods, t_ObservationData__methods_ },
            { Py_tp_init, (void *) t_ObservationData_init_ },
            { Py_tp_getset, t_ObservationData__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ObservationData)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(ObservationData, t_ObservationData, ObservationData);

          void t_ObservationData::install(PyObject *module)
          {
            installType(&PY_TYPE(ObservationData), &PY_TYPE_DEF(ObservationData), module, "ObservationData", 0);
          }

          void t_ObservationData::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationData), "class_", make_descriptor(ObservationData::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationData), "wrapfn_", make_descriptor(t_ObservationData::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ObservationData), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ObservationData_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ObservationData::initializeClass, 1)))
              return NULL;
            return t_ObservationData::wrap_Object(ObservationData(((t_ObservationData *) arg)->object.this$));
          }
          static PyObject *t_ObservationData_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ObservationData::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_ObservationData_init_(t_ObservationData *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::ObservationType a0((jobject) NULL);
            PyTypeObject **p0;
            jdouble a1;
            jint a2;
            jint a3;
            ObservationData object((jobject) NULL);

            if (!parseArgs(args, "KDII", ::org::orekit::gnss::ObservationType::initializeClass, &a0, &p0, ::org::orekit::gnss::t_ObservationType::parameters_, &a1, &a2, &a3))
            {
              INT_CALL(object = ObservationData(a0, a1, a2, a3));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_ObservationData_getLossOfLockIndicator(t_ObservationData *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getLossOfLockIndicator());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_ObservationData_getObservationType(t_ObservationData *self)
          {
            ::org::orekit::gnss::ObservationType result((jobject) NULL);
            OBJ_CALL(result = self->object.getObservationType());
            return ::org::orekit::gnss::t_ObservationType::wrap_Object(result);
          }

          static PyObject *t_ObservationData_getSignalStrength(t_ObservationData *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSignalStrength());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_ObservationData_getValue(t_ObservationData *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getValue());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_ObservationData_get__lossOfLockIndicator(t_ObservationData *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getLossOfLockIndicator());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_ObservationData_get__observationType(t_ObservationData *self, void *data)
          {
            ::org::orekit::gnss::ObservationType value((jobject) NULL);
            OBJ_CALL(value = self->object.getObservationType());
            return ::org::orekit::gnss::t_ObservationType::wrap_Object(value);
          }

          static PyObject *t_ObservationData_get__signalStrength(t_ObservationData *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSignalStrength());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_ObservationData_get__value(t_ObservationData *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getValue());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/EigenDecompositionSymmetric.h"
#include "org/hipparchus/linear/RealVector.h"
#include "org/hipparchus/linear/DecompositionSolver.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/hipparchus/exception/MathRuntimeException.h"
#include "org/hipparchus/linear/DiagonalMatrix.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *EigenDecompositionSymmetric::class$ = NULL;
      jmethodID *EigenDecompositionSymmetric::mids$ = NULL;
      bool EigenDecompositionSymmetric::live$ = false;
      jdouble EigenDecompositionSymmetric::DEFAULT_EPSILON = (jdouble) 0;

      jclass EigenDecompositionSymmetric::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/EigenDecompositionSymmetric");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_30aa151fd03f3096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_0d03c8a1d7f56f02] = env->getMethodID(cls, "<init>", "([D[D)V");
          mids$[mid_init$_497eef03cab7a0ca] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;DZ)V");
          mids$[mid_init$_cd56c20c08d19761] = env->getMethodID(cls, "<init>", "([D[DDZ)V");
          mids$[mid_getD_6938007bdd8d6602] = env->getMethodID(cls, "getD", "()Lorg/hipparchus/linear/DiagonalMatrix;");
          mids$[mid_getDeterminant_456d9a2f64d6b28d] = env->getMethodID(cls, "getDeterminant", "()D");
          mids$[mid_getEigenvalue_b772323fc98b7293] = env->getMethodID(cls, "getEigenvalue", "(I)D");
          mids$[mid_getEigenvalues_7cdc325af0834901] = env->getMethodID(cls, "getEigenvalues", "()[D");
          mids$[mid_getEigenvector_2cafd1b18558ed5f] = env->getMethodID(cls, "getEigenvector", "(I)Lorg/hipparchus/linear/RealVector;");
          mids$[mid_getEpsilon_456d9a2f64d6b28d] = env->getMethodID(cls, "getEpsilon", "()D");
          mids$[mid_getSolver_73ddb95911119e87] = env->getMethodID(cls, "getSolver", "()Lorg/hipparchus/linear/DecompositionSolver;");
          mids$[mid_getSquareRoot_7116bbecdd8ceb21] = env->getMethodID(cls, "getSquareRoot", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getV_7116bbecdd8ceb21] = env->getMethodID(cls, "getV", "()Lorg/hipparchus/linear/RealMatrix;");
          mids$[mid_getVT_7116bbecdd8ceb21] = env->getMethodID(cls, "getVT", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          DEFAULT_EPSILON = env->getStaticDoubleField(cls, "DEFAULT_EPSILON");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      EigenDecompositionSymmetric::EigenDecompositionSymmetric(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_30aa151fd03f3096, a0.this$)) {}

      EigenDecompositionSymmetric::EigenDecompositionSymmetric(const JArray< jdouble > & a0, const JArray< jdouble > & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0d03c8a1d7f56f02, a0.this$, a1.this$)) {}

      EigenDecompositionSymmetric::EigenDecompositionSymmetric(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_497eef03cab7a0ca, a0.this$, a1, a2)) {}

      EigenDecompositionSymmetric::EigenDecompositionSymmetric(const JArray< jdouble > & a0, const JArray< jdouble > & a1, jdouble a2, jboolean a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_cd56c20c08d19761, a0.this$, a1.this$, a2, a3)) {}

      ::org::hipparchus::linear::DiagonalMatrix EigenDecompositionSymmetric::getD() const
      {
        return ::org::hipparchus::linear::DiagonalMatrix(env->callObjectMethod(this$, mids$[mid_getD_6938007bdd8d6602]));
      }

      jdouble EigenDecompositionSymmetric::getDeterminant() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getDeterminant_456d9a2f64d6b28d]);
      }

      jdouble EigenDecompositionSymmetric::getEigenvalue(jint a0) const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEigenvalue_b772323fc98b7293], a0);
      }

      JArray< jdouble > EigenDecompositionSymmetric::getEigenvalues() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getEigenvalues_7cdc325af0834901]));
      }

      ::org::hipparchus::linear::RealVector EigenDecompositionSymmetric::getEigenvector(jint a0) const
      {
        return ::org::hipparchus::linear::RealVector(env->callObjectMethod(this$, mids$[mid_getEigenvector_2cafd1b18558ed5f], a0));
      }

      jdouble EigenDecompositionSymmetric::getEpsilon() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getEpsilon_456d9a2f64d6b28d]);
      }

      ::org::hipparchus::linear::DecompositionSolver EigenDecompositionSymmetric::getSolver() const
      {
        return ::org::hipparchus::linear::DecompositionSolver(env->callObjectMethod(this$, mids$[mid_getSolver_73ddb95911119e87]));
      }

      ::org::hipparchus::linear::RealMatrix EigenDecompositionSymmetric::getSquareRoot() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getSquareRoot_7116bbecdd8ceb21]));
      }

      ::org::hipparchus::linear::RealMatrix EigenDecompositionSymmetric::getV() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getV_7116bbecdd8ceb21]));
      }

      ::org::hipparchus::linear::RealMatrix EigenDecompositionSymmetric::getVT() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getVT_7116bbecdd8ceb21]));
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
      static PyObject *t_EigenDecompositionSymmetric_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_EigenDecompositionSymmetric_instance_(PyTypeObject *type, PyObject *arg);
      static int t_EigenDecompositionSymmetric_init_(t_EigenDecompositionSymmetric *self, PyObject *args, PyObject *kwds);
      static PyObject *t_EigenDecompositionSymmetric_getD(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getDeterminant(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getEigenvalue(t_EigenDecompositionSymmetric *self, PyObject *arg);
      static PyObject *t_EigenDecompositionSymmetric_getEigenvalues(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getEigenvector(t_EigenDecompositionSymmetric *self, PyObject *arg);
      static PyObject *t_EigenDecompositionSymmetric_getEpsilon(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getSolver(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getSquareRoot(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getV(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_getVT(t_EigenDecompositionSymmetric *self);
      static PyObject *t_EigenDecompositionSymmetric_get__d(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__determinant(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__eigenvalues(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__epsilon(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__solver(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__squareRoot(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__v(t_EigenDecompositionSymmetric *self, void *data);
      static PyObject *t_EigenDecompositionSymmetric_get__vT(t_EigenDecompositionSymmetric *self, void *data);
      static PyGetSetDef t_EigenDecompositionSymmetric__fields_[] = {
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, d),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, determinant),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, eigenvalues),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, epsilon),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, solver),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, squareRoot),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, v),
        DECLARE_GET_FIELD(t_EigenDecompositionSymmetric, vT),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_EigenDecompositionSymmetric__methods_[] = {
        DECLARE_METHOD(t_EigenDecompositionSymmetric, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getD, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getDeterminant, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getEigenvalue, METH_O),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getEigenvalues, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getEigenvector, METH_O),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getEpsilon, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getSolver, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getSquareRoot, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getV, METH_NOARGS),
        DECLARE_METHOD(t_EigenDecompositionSymmetric, getVT, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(EigenDecompositionSymmetric)[] = {
        { Py_tp_methods, t_EigenDecompositionSymmetric__methods_ },
        { Py_tp_init, (void *) t_EigenDecompositionSymmetric_init_ },
        { Py_tp_getset, t_EigenDecompositionSymmetric__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(EigenDecompositionSymmetric)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(EigenDecompositionSymmetric, t_EigenDecompositionSymmetric, EigenDecompositionSymmetric);

      void t_EigenDecompositionSymmetric::install(PyObject *module)
      {
        installType(&PY_TYPE(EigenDecompositionSymmetric), &PY_TYPE_DEF(EigenDecompositionSymmetric), module, "EigenDecompositionSymmetric", 0);
      }

      void t_EigenDecompositionSymmetric::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionSymmetric), "class_", make_descriptor(EigenDecompositionSymmetric::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionSymmetric), "wrapfn_", make_descriptor(t_EigenDecompositionSymmetric::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionSymmetric), "boxfn_", make_descriptor(boxObject));
        env->getClass(EigenDecompositionSymmetric::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(EigenDecompositionSymmetric), "DEFAULT_EPSILON", make_descriptor(EigenDecompositionSymmetric::DEFAULT_EPSILON));
      }

      static PyObject *t_EigenDecompositionSymmetric_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, EigenDecompositionSymmetric::initializeClass, 1)))
          return NULL;
        return t_EigenDecompositionSymmetric::wrap_Object(EigenDecompositionSymmetric(((t_EigenDecompositionSymmetric *) arg)->object.this$));
      }
      static PyObject *t_EigenDecompositionSymmetric_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, EigenDecompositionSymmetric::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_EigenDecompositionSymmetric_init_(t_EigenDecompositionSymmetric *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            EigenDecompositionSymmetric object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = EigenDecompositionSymmetric(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            EigenDecompositionSymmetric object((jobject) NULL);

            if (!parseArgs(args, "[D[D", &a0, &a1))
            {
              INT_CALL(object = EigenDecompositionSymmetric(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 3:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            jboolean a2;
            EigenDecompositionSymmetric object((jobject) NULL);

            if (!parseArgs(args, "kDZ", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = EigenDecompositionSymmetric(a0, a1, a2));
              self->object = object;
              break;
            }
          }
          goto err;
         case 4:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< jdouble > a1((jobject) NULL);
            jdouble a2;
            jboolean a3;
            EigenDecompositionSymmetric object((jobject) NULL);

            if (!parseArgs(args, "[D[DDZ", &a0, &a1, &a2, &a3))
            {
              INT_CALL(object = EigenDecompositionSymmetric(a0, a1, a2, a3));
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

      static PyObject *t_EigenDecompositionSymmetric_getD(t_EigenDecompositionSymmetric *self)
      {
        ::org::hipparchus::linear::DiagonalMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getD());
        return ::org::hipparchus::linear::t_DiagonalMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionSymmetric_getDeterminant(t_EigenDecompositionSymmetric *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getDeterminant());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EigenDecompositionSymmetric_getEigenvalue(t_EigenDecompositionSymmetric *self, PyObject *arg)
      {
        jint a0;
        jdouble result;

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEigenvalue(a0));
          return PyFloat_FromDouble((double) result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEigenvalue", arg);
        return NULL;
      }

      static PyObject *t_EigenDecompositionSymmetric_getEigenvalues(t_EigenDecompositionSymmetric *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.getEigenvalues());
        return result.wrap();
      }

      static PyObject *t_EigenDecompositionSymmetric_getEigenvector(t_EigenDecompositionSymmetric *self, PyObject *arg)
      {
        jint a0;
        ::org::hipparchus::linear::RealVector result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.getEigenvector(a0));
          return ::org::hipparchus::linear::t_RealVector::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "getEigenvector", arg);
        return NULL;
      }

      static PyObject *t_EigenDecompositionSymmetric_getEpsilon(t_EigenDecompositionSymmetric *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getEpsilon());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_EigenDecompositionSymmetric_getSolver(t_EigenDecompositionSymmetric *self)
      {
        ::org::hipparchus::linear::DecompositionSolver result((jobject) NULL);
        OBJ_CALL(result = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionSymmetric_getSquareRoot(t_EigenDecompositionSymmetric *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getSquareRoot());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionSymmetric_getV(t_EigenDecompositionSymmetric *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getV());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionSymmetric_getVT(t_EigenDecompositionSymmetric *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getVT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__d(t_EigenDecompositionSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::DiagonalMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getD());
        return ::org::hipparchus::linear::t_DiagonalMatrix::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__determinant(t_EigenDecompositionSymmetric *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getDeterminant());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__eigenvalues(t_EigenDecompositionSymmetric *self, void *data)
      {
        JArray< jdouble > value((jobject) NULL);
        OBJ_CALL(value = self->object.getEigenvalues());
        return value.wrap();
      }

      static PyObject *t_EigenDecompositionSymmetric_get__epsilon(t_EigenDecompositionSymmetric *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getEpsilon());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__solver(t_EigenDecompositionSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::DecompositionSolver value((jobject) NULL);
        OBJ_CALL(value = self->object.getSolver());
        return ::org::hipparchus::linear::t_DecompositionSolver::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__squareRoot(t_EigenDecompositionSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getSquareRoot());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__v(t_EigenDecompositionSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getV());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }

      static PyObject *t_EigenDecompositionSymmetric_get__vT(t_EigenDecompositionSymmetric *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getVT());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/Identity.h"
#include "org/hipparchus/analysis/differentiation/UnivariateDifferentiableFunction.h"
#include "org/hipparchus/analysis/differentiation/Derivative.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *Identity::class$ = NULL;
        jmethodID *Identity::mids$ = NULL;
        bool Identity::live$ = false;

        jclass Identity::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/Identity");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_value_0ba5fed9597b693e] = env->getMethodID(cls, "value", "(D)D");
            mids$[mid_value_1f22c1881e72229d] = env->getMethodID(cls, "value", "(Lorg/hipparchus/analysis/differentiation/Derivative;)Lorg/hipparchus/analysis/differentiation/Derivative;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Identity::Identity() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

        jdouble Identity::value(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_0ba5fed9597b693e], a0);
        }

        ::org::hipparchus::analysis::differentiation::Derivative Identity::value(const ::org::hipparchus::analysis::differentiation::Derivative & a0) const
        {
          return ::org::hipparchus::analysis::differentiation::Derivative(env->callObjectMethod(this$, mids$[mid_value_1f22c1881e72229d], a0.this$));
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
        static PyObject *t_Identity_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Identity_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Identity_init_(t_Identity *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Identity_value(t_Identity *self, PyObject *args);

        static PyMethodDef t_Identity__methods_[] = {
          DECLARE_METHOD(t_Identity, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Identity, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Identity, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Identity)[] = {
          { Py_tp_methods, t_Identity__methods_ },
          { Py_tp_init, (void *) t_Identity_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Identity)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Identity, t_Identity, Identity);

        void t_Identity::install(PyObject *module)
        {
          installType(&PY_TYPE(Identity), &PY_TYPE_DEF(Identity), module, "Identity", 0);
        }

        void t_Identity::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Identity), "class_", make_descriptor(Identity::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Identity), "wrapfn_", make_descriptor(t_Identity::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Identity), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Identity_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Identity::initializeClass, 1)))
            return NULL;
          return t_Identity::wrap_Object(Identity(((t_Identity *) arg)->object.this$));
        }
        static PyObject *t_Identity_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Identity::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Identity_init_(t_Identity *self, PyObject *args, PyObject *kwds)
        {
          Identity object((jobject) NULL);

          INT_CALL(object = Identity());
          self->object = object;

          return 0;
        }

        static PyObject *t_Identity_value(t_Identity *self, PyObject *args)
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
#include "org/orekit/files/ccsds/ndm/odm/OdmParser.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace odm {

            ::java::lang::Class *OdmParser::class$ = NULL;
            jmethodID *OdmParser::mids$ = NULL;
            bool OdmParser::live$ = false;

            jclass OdmParser::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/odm/OdmParser");

                mids$ = new jmethodID[max_mid];
                mids$[mid_getMissionReferenceDate_aaa854c403487cf3] = env->getMethodID(cls, "getMissionReferenceDate", "()Lorg/orekit/time/AbsoluteDate;");
                mids$[mid_getSelectedMu_456d9a2f64d6b28d] = env->getMethodID(cls, "getSelectedMu", "()D");
                mids$[mid_setMuCreated_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMuCreated", "(D)V");
                mids$[mid_setMuParsed_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMuParsed", "(D)V");
                mids$[mid_getMuSet_456d9a2f64d6b28d] = env->getMethodID(cls, "getMuSet", "()D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::orekit::time::AbsoluteDate OdmParser::getMissionReferenceDate() const
            {
              return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getMissionReferenceDate_aaa854c403487cf3]));
            }

            jdouble OdmParser::getSelectedMu() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getSelectedMu_456d9a2f64d6b28d]);
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
          namespace odm {
            static PyObject *t_OdmParser_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmParser_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_OdmParser_of_(t_OdmParser *self, PyObject *args);
            static PyObject *t_OdmParser_getMissionReferenceDate(t_OdmParser *self);
            static PyObject *t_OdmParser_getSelectedMu(t_OdmParser *self);
            static PyObject *t_OdmParser_get__missionReferenceDate(t_OdmParser *self, void *data);
            static PyObject *t_OdmParser_get__selectedMu(t_OdmParser *self, void *data);
            static PyObject *t_OdmParser_get__parameters_(t_OdmParser *self, void *data);
            static PyGetSetDef t_OdmParser__fields_[] = {
              DECLARE_GET_FIELD(t_OdmParser, missionReferenceDate),
              DECLARE_GET_FIELD(t_OdmParser, selectedMu),
              DECLARE_GET_FIELD(t_OdmParser, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_OdmParser__methods_[] = {
              DECLARE_METHOD(t_OdmParser, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmParser, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_OdmParser, of_, METH_VARARGS),
              DECLARE_METHOD(t_OdmParser, getMissionReferenceDate, METH_NOARGS),
              DECLARE_METHOD(t_OdmParser, getSelectedMu, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(OdmParser)[] = {
              { Py_tp_methods, t_OdmParser__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_OdmParser__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(OdmParser)[] = {
              &PY_TYPE_DEF(::org::orekit::files::ccsds::utils::parsing::AbstractConstituentParser),
              NULL
            };

            DEFINE_TYPE(OdmParser, t_OdmParser, OdmParser);
            PyObject *t_OdmParser::wrap_Object(const OdmParser& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_OdmParser::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_OdmParser *self = (t_OdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            PyObject *t_OdmParser::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
            {
              PyObject *obj = t_OdmParser::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_OdmParser *self = (t_OdmParser *) obj;
                self->parameters[0] = p0;
                self->parameters[1] = p1;
              }
              return obj;
            }

            void t_OdmParser::install(PyObject *module)
            {
              installType(&PY_TYPE(OdmParser), &PY_TYPE_DEF(OdmParser), module, "OdmParser", 0);
            }

            void t_OdmParser::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmParser), "class_", make_descriptor(OdmParser::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmParser), "wrapfn_", make_descriptor(t_OdmParser::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(OdmParser), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_OdmParser_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, OdmParser::initializeClass, 1)))
                return NULL;
              return t_OdmParser::wrap_Object(OdmParser(((t_OdmParser *) arg)->object.this$));
            }
            static PyObject *t_OdmParser_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, OdmParser::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_OdmParser_of_(t_OdmParser *self, PyObject *args)
            {
              if (!parseArg(args, "T", 2, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static PyObject *t_OdmParser_getMissionReferenceDate(t_OdmParser *self)
            {
              ::org::orekit::time::AbsoluteDate result((jobject) NULL);
              OBJ_CALL(result = self->object.getMissionReferenceDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
            }

            static PyObject *t_OdmParser_getSelectedMu(t_OdmParser *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getSelectedMu());
              return PyFloat_FromDouble((double) result);
            }
            static PyObject *t_OdmParser_get__parameters_(t_OdmParser *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_OdmParser_get__missionReferenceDate(t_OdmParser *self, void *data)
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              OBJ_CALL(value = self->object.getMissionReferenceDate());
              return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
            }

            static PyObject *t_OdmParser_get__selectedMu(t_OdmParser *self, void *data)
            {
              jdouble value;
              OBJ_CALL(value = self->object.getSelectedMu());
              return PyFloat_FromDouble((double) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldLUDecomposer.h"
#include "org/hipparchus/linear/FieldMatrixDecomposer.h"
#include "org/hipparchus/linear/FieldDecompositionSolver.h"
#include "org/hipparchus/FieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldLUDecomposer::class$ = NULL;
      jmethodID *FieldLUDecomposer::mids$ = NULL;
      bool FieldLUDecomposer::live$ = false;

      jclass FieldLUDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldLUDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_decompose_0fef744431e41279] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldDecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::linear::FieldDecompositionSolver FieldLUDecomposer::decompose(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldDecompositionSolver(env->callObjectMethod(this$, mids$[mid_decompose_0fef744431e41279], a0.this$));
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
      static PyObject *t_FieldLUDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldLUDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldLUDecomposer_of_(t_FieldLUDecomposer *self, PyObject *args);
      static PyObject *t_FieldLUDecomposer_decompose(t_FieldLUDecomposer *self, PyObject *arg);
      static PyObject *t_FieldLUDecomposer_get__parameters_(t_FieldLUDecomposer *self, void *data);
      static PyGetSetDef t_FieldLUDecomposer__fields_[] = {
        DECLARE_GET_FIELD(t_FieldLUDecomposer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldLUDecomposer__methods_[] = {
        DECLARE_METHOD(t_FieldLUDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldLUDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldLUDecomposer, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldLUDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldLUDecomposer)[] = {
        { Py_tp_methods, t_FieldLUDecomposer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldLUDecomposer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldLUDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldLUDecomposer, t_FieldLUDecomposer, FieldLUDecomposer);
      PyObject *t_FieldLUDecomposer::wrap_Object(const FieldLUDecomposer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldLUDecomposer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldLUDecomposer *self = (t_FieldLUDecomposer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldLUDecomposer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldLUDecomposer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldLUDecomposer *self = (t_FieldLUDecomposer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldLUDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldLUDecomposer), &PY_TYPE_DEF(FieldLUDecomposer), module, "FieldLUDecomposer", 0);
      }

      void t_FieldLUDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLUDecomposer), "class_", make_descriptor(FieldLUDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLUDecomposer), "wrapfn_", make_descriptor(t_FieldLUDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldLUDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldLUDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldLUDecomposer::initializeClass, 1)))
          return NULL;
        return t_FieldLUDecomposer::wrap_Object(FieldLUDecomposer(((t_FieldLUDecomposer *) arg)->object.this$));
      }
      static PyObject *t_FieldLUDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldLUDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldLUDecomposer_of_(t_FieldLUDecomposer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldLUDecomposer_decompose(t_FieldLUDecomposer *self, PyObject *arg)
      {
        ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
        PyTypeObject **p0;
        ::org::hipparchus::linear::FieldDecompositionSolver result((jobject) NULL);

        if (!parseArg(arg, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
        {
          OBJ_CALL(result = self->object.decompose(a0));
          return ::org::hipparchus::linear::t_FieldDecompositionSolver::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "decompose", arg);
        return NULL;
      }
      static PyObject *t_FieldLUDecomposer_get__parameters_(t_FieldLUDecomposer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {

    ::java::lang::Class *CalculusFieldElement::class$ = NULL;
    jmethodID *CalculusFieldElement::mids$ = NULL;
    bool CalculusFieldElement::live$ = false;

    jclass CalculusFieldElement::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("org/hipparchus/CalculusFieldElement");

        mids$ = new jmethodID[max_mid];
        mids$[mid_abs_7e89936bdf79375b] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_acos_7e89936bdf79375b] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_acosh_7e89936bdf79375b] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_add_3b5476c43c448e8a] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_asin_7e89936bdf79375b] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_asinh_7e89936bdf79375b] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_atan_7e89936bdf79375b] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_atan2_2ab3500f2b9ac35d] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_atanh_7e89936bdf79375b] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_cbrt_7e89936bdf79375b] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_ceil_7e89936bdf79375b] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_copySign_3b5476c43c448e8a] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_copySign_2ab3500f2b9ac35d] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_cos_7e89936bdf79375b] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_cosh_7e89936bdf79375b] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_divide_3b5476c43c448e8a] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_exp_7e89936bdf79375b] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_expm1_7e89936bdf79375b] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_floor_7e89936bdf79375b] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_getExponent_f2f64475e4580546] = env->getMethodID(cls, "getExponent", "()I");
        mids$[mid_getPi_7e89936bdf79375b] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_hypot_2ab3500f2b9ac35d] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_isFinite_e470b6d9e0d979db] = env->getMethodID(cls, "isFinite", "()Z");
        mids$[mid_isInfinite_e470b6d9e0d979db] = env->getMethodID(cls, "isInfinite", "()Z");
        mids$[mid_isNaN_e470b6d9e0d979db] = env->getMethodID(cls, "isNaN", "()Z");
        mids$[mid_linearCombination_eedf53227b3d102c] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_6e75d7e881756940] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/FieldElement;[Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_249186cb085c5a37] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/FieldElement;DLorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_f1fc024d133a6394] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_ad53502daa0afef4] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/FieldElement;DLorg/hipparchus/FieldElement;DLorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_363270d7927f748a] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_ccc93889d78d864f] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/FieldElement;DLorg/hipparchus/FieldElement;DLorg/hipparchus/FieldElement;DLorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_linearCombination_d108427c89c6d24c] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_log_7e89936bdf79375b] = env->getMethodID(cls, "log", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_log10_7e89936bdf79375b] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_log1p_7e89936bdf79375b] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_multiply_3b5476c43c448e8a] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_newInstance_3b5476c43c448e8a] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_norm_456d9a2f64d6b28d] = env->getMethodID(cls, "norm", "()D");
        mids$[mid_pow_3b5476c43c448e8a] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_pow_5e30662bac3edb02] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/FieldElement;");
        mids$[mid_pow_2ab3500f2b9ac35d] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_reciprocal_7e89936bdf79375b] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_remainder_3b5476c43c448e8a] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_remainder_2ab3500f2b9ac35d] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/FieldElement;)Lorg/hipparchus/FieldElement;");
        mids$[mid_rint_7e89936bdf79375b] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_rootN_5e30662bac3edb02] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/FieldElement;");
        mids$[mid_round_a27fc9afd27e559d] = env->getMethodID(cls, "round", "()J");
        mids$[mid_scalb_5e30662bac3edb02] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/FieldElement;");
        mids$[mid_sign_7e89936bdf79375b] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_sin_7e89936bdf79375b] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_sinCos_35f2499c71416a1a] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
        mids$[mid_sinh_7e89936bdf79375b] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_sinhCosh_c388a3eefde9d597] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
        mids$[mid_sqrt_7e89936bdf79375b] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_subtract_3b5476c43c448e8a] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/FieldElement;");
        mids$[mid_tan_7e89936bdf79375b] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_tanh_7e89936bdf79375b] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_toDegrees_7e89936bdf79375b] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_toRadians_7e89936bdf79375b] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/FieldElement;");
        mids$[mid_ulp_7e89936bdf79375b] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/FieldElement;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::abs() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_abs_7e89936bdf79375b]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::acos() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_acos_7e89936bdf79375b]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::acosh() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_acosh_7e89936bdf79375b]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::add(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_add_3b5476c43c448e8a], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::asin() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_asin_7e89936bdf79375b]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::asinh() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_asinh_7e89936bdf79375b]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::atan() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_atan_7e89936bdf79375b]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::atan2(const ::org::hipparchus::FieldElement & a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_atan2_2ab3500f2b9ac35d], a0.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::atanh() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_atanh_7e89936bdf79375b]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::cbrt() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_cbrt_7e89936bdf79375b]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::ceil() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_ceil_7e89936bdf79375b]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::copySign(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_copySign_3b5476c43c448e8a], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::copySign(const ::org::hipparchus::FieldElement & a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_copySign_2ab3500f2b9ac35d], a0.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::cos() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_cos_7e89936bdf79375b]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::cosh() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_cosh_7e89936bdf79375b]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::divide(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_divide_3b5476c43c448e8a], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::exp() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_exp_7e89936bdf79375b]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::expm1() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_expm1_7e89936bdf79375b]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::floor() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_floor_7e89936bdf79375b]));
    }

    jint CalculusFieldElement::getExponent() const
    {
      return env->callIntMethod(this$, mids$[mid_getExponent_f2f64475e4580546]);
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::getPi() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_getPi_7e89936bdf79375b]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::hypot(const ::org::hipparchus::FieldElement & a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_hypot_2ab3500f2b9ac35d], a0.this$));
    }

    jboolean CalculusFieldElement::isFinite() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isFinite_e470b6d9e0d979db]);
    }

    jboolean CalculusFieldElement::isInfinite() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isInfinite_e470b6d9e0d979db]);
    }

    jboolean CalculusFieldElement::isNaN() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isNaN_e470b6d9e0d979db]);
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(const JArray< jdouble > & a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_eedf53227b3d102c], a0.this$, a1.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(const JArray< ::org::hipparchus::FieldElement > & a0, const JArray< ::org::hipparchus::FieldElement > & a1) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_6e75d7e881756940], a0.this$, a1.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(jdouble a0, const ::org::hipparchus::FieldElement & a1, jdouble a2, const ::org::hipparchus::FieldElement & a3) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_249186cb085c5a37], a0, a1.this$, a2, a3.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(const ::org::hipparchus::FieldElement & a0, const ::org::hipparchus::FieldElement & a1, const ::org::hipparchus::FieldElement & a2, const ::org::hipparchus::FieldElement & a3) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_f1fc024d133a6394], a0.this$, a1.this$, a2.this$, a3.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(jdouble a0, const ::org::hipparchus::FieldElement & a1, jdouble a2, const ::org::hipparchus::FieldElement & a3, jdouble a4, const ::org::hipparchus::FieldElement & a5) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_ad53502daa0afef4], a0, a1.this$, a2, a3.this$, a4, a5.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(const ::org::hipparchus::FieldElement & a0, const ::org::hipparchus::FieldElement & a1, const ::org::hipparchus::FieldElement & a2, const ::org::hipparchus::FieldElement & a3, const ::org::hipparchus::FieldElement & a4, const ::org::hipparchus::FieldElement & a5) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_363270d7927f748a], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(jdouble a0, const ::org::hipparchus::FieldElement & a1, jdouble a2, const ::org::hipparchus::FieldElement & a3, jdouble a4, const ::org::hipparchus::FieldElement & a5, jdouble a6, const ::org::hipparchus::FieldElement & a7) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_ccc93889d78d864f], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::linearCombination(const ::org::hipparchus::FieldElement & a0, const ::org::hipparchus::FieldElement & a1, const ::org::hipparchus::FieldElement & a2, const ::org::hipparchus::FieldElement & a3, const ::org::hipparchus::FieldElement & a4, const ::org::hipparchus::FieldElement & a5, const ::org::hipparchus::FieldElement & a6, const ::org::hipparchus::FieldElement & a7) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_linearCombination_d108427c89c6d24c], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::log() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_log_7e89936bdf79375b]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::log10() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_log10_7e89936bdf79375b]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::log1p() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_log1p_7e89936bdf79375b]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::multiply(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_multiply_3b5476c43c448e8a], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::newInstance(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_newInstance_3b5476c43c448e8a], a0));
    }

    jdouble CalculusFieldElement::norm() const
    {
      return env->callDoubleMethod(this$, mids$[mid_norm_456d9a2f64d6b28d]);
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::pow(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_pow_3b5476c43c448e8a], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::pow(jint a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_pow_5e30662bac3edb02], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::pow(const ::org::hipparchus::FieldElement & a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_pow_2ab3500f2b9ac35d], a0.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::reciprocal() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_reciprocal_7e89936bdf79375b]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::remainder(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_remainder_3b5476c43c448e8a], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::remainder(const ::org::hipparchus::FieldElement & a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_remainder_2ab3500f2b9ac35d], a0.this$));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::rint() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_rint_7e89936bdf79375b]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::rootN(jint a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_rootN_5e30662bac3edb02], a0));
    }

    jlong CalculusFieldElement::round() const
    {
      return env->callLongMethod(this$, mids$[mid_round_a27fc9afd27e559d]);
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::scalb(jint a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_scalb_5e30662bac3edb02], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::sign() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_sign_7e89936bdf79375b]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::sin() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_sin_7e89936bdf79375b]));
    }

    ::org::hipparchus::util::FieldSinCos CalculusFieldElement::sinCos() const
    {
      return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_35f2499c71416a1a]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::sinh() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_sinh_7e89936bdf79375b]));
    }

    ::org::hipparchus::util::FieldSinhCosh CalculusFieldElement::sinhCosh() const
    {
      return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_c388a3eefde9d597]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::sqrt() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_sqrt_7e89936bdf79375b]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::subtract(jdouble a0) const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_subtract_3b5476c43c448e8a], a0));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::tan() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_tan_7e89936bdf79375b]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::tanh() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_tanh_7e89936bdf79375b]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::toDegrees() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_toDegrees_7e89936bdf79375b]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::toRadians() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_toRadians_7e89936bdf79375b]));
    }

    ::org::hipparchus::FieldElement CalculusFieldElement::ulp() const
    {
      return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_ulp_7e89936bdf79375b]));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    static PyObject *t_CalculusFieldElement_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_CalculusFieldElement_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_CalculusFieldElement_of_(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_abs(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_acos(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_acosh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_add(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_asin(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_asinh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_atan(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_atan2(t_CalculusFieldElement *self, PyObject *arg);
    static PyObject *t_CalculusFieldElement_atanh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_cbrt(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_ceil(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_copySign(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_cos(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_cosh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_divide(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_exp(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_expm1(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_floor(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_getExponent(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_getPi(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_hypot(t_CalculusFieldElement *self, PyObject *arg);
    static PyObject *t_CalculusFieldElement_isFinite(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_isInfinite(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_isNaN(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_linearCombination(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_log(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_log10(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_log1p(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_multiply(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_newInstance(t_CalculusFieldElement *self, PyObject *arg);
    static PyObject *t_CalculusFieldElement_norm(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_pow(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_reciprocal(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_remainder(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_rint(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_rootN(t_CalculusFieldElement *self, PyObject *arg);
    static PyObject *t_CalculusFieldElement_round(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_scalb(t_CalculusFieldElement *self, PyObject *arg);
    static PyObject *t_CalculusFieldElement_sign(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_sin(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_sinCos(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_sinh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_sinhCosh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_sqrt(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_subtract(t_CalculusFieldElement *self, PyObject *args);
    static PyObject *t_CalculusFieldElement_tan(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_tanh(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_toDegrees(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_toRadians(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_ulp(t_CalculusFieldElement *self);
    static PyObject *t_CalculusFieldElement_get__exponent(t_CalculusFieldElement *self, void *data);
    static PyObject *t_CalculusFieldElement_get__finite(t_CalculusFieldElement *self, void *data);
    static PyObject *t_CalculusFieldElement_get__infinite(t_CalculusFieldElement *self, void *data);
    static PyObject *t_CalculusFieldElement_get__naN(t_CalculusFieldElement *self, void *data);
    static PyObject *t_CalculusFieldElement_get__pi(t_CalculusFieldElement *self, void *data);
    static PyObject *t_CalculusFieldElement_get__parameters_(t_CalculusFieldElement *self, void *data);
    static PyGetSetDef t_CalculusFieldElement__fields_[] = {
      DECLARE_GET_FIELD(t_CalculusFieldElement, exponent),
      DECLARE_GET_FIELD(t_CalculusFieldElement, finite),
      DECLARE_GET_FIELD(t_CalculusFieldElement, infinite),
      DECLARE_GET_FIELD(t_CalculusFieldElement, naN),
      DECLARE_GET_FIELD(t_CalculusFieldElement, pi),
      DECLARE_GET_FIELD(t_CalculusFieldElement, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_CalculusFieldElement__methods_[] = {
      DECLARE_METHOD(t_CalculusFieldElement, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_CalculusFieldElement, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_CalculusFieldElement, of_, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, abs, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, acos, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, acosh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, add, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, asin, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, asinh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, atan, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, atan2, METH_O),
      DECLARE_METHOD(t_CalculusFieldElement, atanh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, cbrt, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, ceil, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, copySign, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, cos, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, cosh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, divide, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, exp, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, expm1, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, floor, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, getExponent, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, getPi, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, hypot, METH_O),
      DECLARE_METHOD(t_CalculusFieldElement, isFinite, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, isInfinite, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, isNaN, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, linearCombination, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, log, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, log10, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, log1p, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, multiply, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, newInstance, METH_O),
      DECLARE_METHOD(t_CalculusFieldElement, norm, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, pow, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, reciprocal, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, remainder, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, rint, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, rootN, METH_O),
      DECLARE_METHOD(t_CalculusFieldElement, round, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, scalb, METH_O),
      DECLARE_METHOD(t_CalculusFieldElement, sign, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, sin, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, sinCos, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, sinh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, sinhCosh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, sqrt, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, subtract, METH_VARARGS),
      DECLARE_METHOD(t_CalculusFieldElement, tan, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, tanh, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, toDegrees, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, toRadians, METH_NOARGS),
      DECLARE_METHOD(t_CalculusFieldElement, ulp, METH_NOARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(CalculusFieldElement)[] = {
      { Py_tp_methods, t_CalculusFieldElement__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_CalculusFieldElement__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(CalculusFieldElement)[] = {
      &PY_TYPE_DEF(::org::hipparchus::FieldElement),
      NULL
    };

    DEFINE_TYPE(CalculusFieldElement, t_CalculusFieldElement, CalculusFieldElement);
    PyObject *t_CalculusFieldElement::wrap_Object(const CalculusFieldElement& object, PyTypeObject *p0)
    {
      PyObject *obj = t_CalculusFieldElement::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_CalculusFieldElement *self = (t_CalculusFieldElement *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_CalculusFieldElement::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_CalculusFieldElement::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_CalculusFieldElement *self = (t_CalculusFieldElement *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_CalculusFieldElement::install(PyObject *module)
    {
      installType(&PY_TYPE(CalculusFieldElement), &PY_TYPE_DEF(CalculusFieldElement), module, "CalculusFieldElement", 0);
    }

    void t_CalculusFieldElement::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldElement), "class_", make_descriptor(CalculusFieldElement::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldElement), "wrapfn_", make_descriptor(t_CalculusFieldElement::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(CalculusFieldElement), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_CalculusFieldElement_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, CalculusFieldElement::initializeClass, 1)))
        return NULL;
      return t_CalculusFieldElement::wrap_Object(CalculusFieldElement(((t_CalculusFieldElement *) arg)->object.this$));
    }
    static PyObject *t_CalculusFieldElement_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, CalculusFieldElement::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_CalculusFieldElement_of_(t_CalculusFieldElement *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_CalculusFieldElement_abs(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.abs());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_acos(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.acos());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_acosh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.acosh());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_add(t_CalculusFieldElement *self, PyObject *args)
    {
      jdouble a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArgs(args, "D", &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      return callSuper(PY_TYPE(CalculusFieldElement), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_CalculusFieldElement_asin(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.asin());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_asinh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.asinh());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_atan(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.atan());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_atan2(t_CalculusFieldElement *self, PyObject *arg)
    {
      ::org::hipparchus::FieldElement a0((jobject) NULL);
      PyTypeObject **p0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
      {
        OBJ_CALL(result = self->object.atan2(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "atan2", arg);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_atanh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.atanh());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_cbrt(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.cbrt());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_ceil(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.ceil());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_copySign(t_CalculusFieldElement *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jdouble a0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.copySign(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.copySign(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "copySign", args);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_cos(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.cos());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_cosh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.cosh());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_divide(t_CalculusFieldElement *self, PyObject *args)
    {
      jdouble a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArgs(args, "D", &a0))
      {
        OBJ_CALL(result = self->object.divide(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      return callSuper(PY_TYPE(CalculusFieldElement), (PyObject *) self, "divide", args, 2);
    }

    static PyObject *t_CalculusFieldElement_exp(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.exp());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_expm1(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.expm1());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_floor(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.floor());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_getExponent(t_CalculusFieldElement *self)
    {
      jint result;
      OBJ_CALL(result = self->object.getExponent());
      return PyLong_FromLong((long) result);
    }

    static PyObject *t_CalculusFieldElement_getPi(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.getPi());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_hypot(t_CalculusFieldElement *self, PyObject *arg)
    {
      ::org::hipparchus::FieldElement a0((jobject) NULL);
      PyTypeObject **p0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArg(arg, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
      {
        OBJ_CALL(result = self->object.hypot(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "hypot", arg);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_isFinite(t_CalculusFieldElement *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isFinite());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_CalculusFieldElement_isInfinite(t_CalculusFieldElement *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isInfinite());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_CalculusFieldElement_isNaN(t_CalculusFieldElement *self)
    {
      jboolean result;
      OBJ_CALL(result = self->object.isNaN());
      Py_RETURN_BOOL(result);
    }

    static PyObject *t_CalculusFieldElement_linearCombination(t_CalculusFieldElement *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 2:
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "[D[K", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          JArray< ::org::hipparchus::FieldElement > a0((jobject) NULL);
          PyTypeObject **p0;
          JArray< ::org::hipparchus::FieldElement > a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "[K[K", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        break;
       case 4:
        {
          jdouble a0;
          ::org::hipparchus::FieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          jdouble a2;
          ::org::hipparchus::FieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "DKDK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::FieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::FieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::FieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "KKKK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        break;
       case 6:
        {
          jdouble a0;
          ::org::hipparchus::FieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          jdouble a2;
          ::org::hipparchus::FieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          jdouble a4;
          ::org::hipparchus::FieldElement a5((jobject) NULL);
          PyTypeObject **p5;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "DKDKDK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_FieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::FieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::FieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::FieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::FieldElement a4((jobject) NULL);
          PyTypeObject **p4;
          ::org::hipparchus::FieldElement a5((jobject) NULL);
          PyTypeObject **p5;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "KKKKKK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_FieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_FieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        break;
       case 8:
        {
          jdouble a0;
          ::org::hipparchus::FieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          jdouble a2;
          ::org::hipparchus::FieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          jdouble a4;
          ::org::hipparchus::FieldElement a5((jobject) NULL);
          PyTypeObject **p5;
          jdouble a6;
          ::org::hipparchus::FieldElement a7((jobject) NULL);
          PyTypeObject **p7;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "DKDKDKDK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &a3, &p3, ::org::hipparchus::t_FieldElement::parameters_, &a4, &a5, &p5, ::org::hipparchus::t_FieldElement::parameters_, &a6, &a7, &p7, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::FieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::FieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::FieldElement a3((jobject) NULL);
          PyTypeObject **p3;
          ::org::hipparchus::FieldElement a4((jobject) NULL);
          PyTypeObject **p4;
          ::org::hipparchus::FieldElement a5((jobject) NULL);
          PyTypeObject **p5;
          ::org::hipparchus::FieldElement a6((jobject) NULL);
          PyTypeObject **p6;
          ::org::hipparchus::FieldElement a7((jobject) NULL);
          PyTypeObject **p7;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "KKKKKKKK", ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_FieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_, &a3, &p3, ::org::hipparchus::t_FieldElement::parameters_, &a4, &p4, ::org::hipparchus::t_FieldElement::parameters_, &a5, &p5, ::org::hipparchus::t_FieldElement::parameters_, &a6, &p6, ::org::hipparchus::t_FieldElement::parameters_, &a7, &p7, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_log(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.log());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_log10(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.log10());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_log1p(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.log1p());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_multiply(t_CalculusFieldElement *self, PyObject *args)
    {
      jdouble a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArgs(args, "D", &a0))
      {
        OBJ_CALL(result = self->object.multiply(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      return callSuper(PY_TYPE(CalculusFieldElement), (PyObject *) self, "multiply", args, 2);
    }

    static PyObject *t_CalculusFieldElement_newInstance(t_CalculusFieldElement *self, PyObject *arg)
    {
      jdouble a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArg(arg, "D", &a0))
      {
        OBJ_CALL(result = self->object.newInstance(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "newInstance", arg);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_norm(t_CalculusFieldElement *self)
    {
      jdouble result;
      OBJ_CALL(result = self->object.norm());
      return PyFloat_FromDouble((double) result);
    }

    static PyObject *t_CalculusFieldElement_pow(t_CalculusFieldElement *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jdouble a0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.pow(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          jint a0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.pow(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.pow(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "pow", args);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_reciprocal(t_CalculusFieldElement *self, PyObject *args)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.reciprocal());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      return callSuper(PY_TYPE(CalculusFieldElement), (PyObject *) self, "reciprocal", args, 2);
    }

    static PyObject *t_CalculusFieldElement_remainder(t_CalculusFieldElement *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 1:
        {
          jdouble a0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.remainder(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
        {
          ::org::hipparchus::FieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::FieldElement result((jobject) NULL);

          if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.remainder(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
          }
        }
      }

      PyErr_SetArgsError((PyObject *) self, "remainder", args);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_rint(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.rint());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_rootN(t_CalculusFieldElement *self, PyObject *arg)
    {
      jint a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.rootN(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "rootN", arg);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_round(t_CalculusFieldElement *self)
    {
      jlong result;
      OBJ_CALL(result = self->object.round());
      return PyLong_FromLongLong((PY_LONG_LONG) result);
    }

    static PyObject *t_CalculusFieldElement_scalb(t_CalculusFieldElement *self, PyObject *arg)
    {
      jint a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArg(arg, "I", &a0))
      {
        OBJ_CALL(result = self->object.scalb(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      PyErr_SetArgsError((PyObject *) self, "scalb", arg);
      return NULL;
    }

    static PyObject *t_CalculusFieldElement_sign(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.sign());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_sin(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.sin());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_sinCos(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
      OBJ_CALL(result = self->object.sinCos());
      return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_CalculusFieldElement_sinh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.sinh());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_sinhCosh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
      OBJ_CALL(result = self->object.sinhCosh());
      return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_CalculusFieldElement_sqrt(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.sqrt());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_subtract(t_CalculusFieldElement *self, PyObject *args)
    {
      jdouble a0;
      ::org::hipparchus::FieldElement result((jobject) NULL);

      if (!parseArgs(args, "D", &a0))
      {
        OBJ_CALL(result = self->object.subtract(a0));
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      return callSuper(PY_TYPE(CalculusFieldElement), (PyObject *) self, "subtract", args, 2);
    }

    static PyObject *t_CalculusFieldElement_tan(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.tan());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_tanh(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.tanh());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_toDegrees(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.toDegrees());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_toRadians(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.toRadians());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }

    static PyObject *t_CalculusFieldElement_ulp(t_CalculusFieldElement *self)
    {
      ::org::hipparchus::FieldElement result((jobject) NULL);
      OBJ_CALL(result = self->object.ulp());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
    }
    static PyObject *t_CalculusFieldElement_get__parameters_(t_CalculusFieldElement *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_CalculusFieldElement_get__exponent(t_CalculusFieldElement *self, void *data)
    {
      jint value;
      OBJ_CALL(value = self->object.getExponent());
      return PyLong_FromLong((long) value);
    }

    static PyObject *t_CalculusFieldElement_get__finite(t_CalculusFieldElement *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isFinite());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_CalculusFieldElement_get__infinite(t_CalculusFieldElement *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isInfinite());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_CalculusFieldElement_get__naN(t_CalculusFieldElement *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isNaN());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_CalculusFieldElement_get__pi(t_CalculusFieldElement *self, void *data)
    {
      ::org::hipparchus::FieldElement value((jobject) NULL);
      OBJ_CALL(value = self->object.getPi());
      return ::org::hipparchus::t_FieldElement::wrap_Object(value);
    }
  }
}

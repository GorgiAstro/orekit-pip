#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/rugged/adjustment/measurements/SensorToSensorMapping.h"
#include "java/util/Map$Entry.h"
#include "java/util/List.h"
#include "java/lang/Double.h"
#include "org/orekit/rugged/linesensor/SensorPixel.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace rugged {
      namespace adjustment {
        namespace measurements {

          ::java::lang::Class *SensorToSensorMapping::class$ = NULL;
          jmethodID *SensorToSensorMapping::mids$ = NULL;
          bool SensorToSensorMapping::live$ = false;

          jclass SensorToSensorMapping::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/rugged/adjustment/measurements/SensorToSensorMapping");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_96073c87872b7a97] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_f7e4436e61826cb4] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;D)V");
              mids$[mid_init$_dc789c6b17416ede] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V");
              mids$[mid_init$_d7e86d2d520c520a] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;D)V");
              mids$[mid_addMapping_baa040d3b267859e] = env->getMethodID(cls, "addMapping", "(Lorg/orekit/rugged/linesensor/SensorPixel;Lorg/orekit/rugged/linesensor/SensorPixel;Ljava/lang/Double;)V");
              mids$[mid_addMapping_2a58fe29d61c2d8c] = env->getMethodID(cls, "addMapping", "(Lorg/orekit/rugged/linesensor/SensorPixel;Lorg/orekit/rugged/linesensor/SensorPixel;Ljava/lang/Double;Ljava/lang/Double;)V");
              mids$[mid_getBodyConstraintWeight_456d9a2f64d6b28d] = env->getMethodID(cls, "getBodyConstraintWeight", "()D");
              mids$[mid_getBodyDistance_dec2f52f07867392] = env->getMethodID(cls, "getBodyDistance", "(I)Ljava/lang/Double;");
              mids$[mid_getBodyDistances_a6156df500549a58] = env->getMethodID(cls, "getBodyDistances", "()Ljava/util/List;");
              mids$[mid_getLosDistance_dec2f52f07867392] = env->getMethodID(cls, "getLosDistance", "(I)Ljava/lang/Double;");
              mids$[mid_getLosDistances_a6156df500549a58] = env->getMethodID(cls, "getLosDistances", "()Ljava/util/List;");
              mids$[mid_getMapping_e9e1a6780fe94297] = env->getMethodID(cls, "getMapping", "()Ljava/util/Set;");
              mids$[mid_getRuggedNameA_0090f7797e403f43] = env->getMethodID(cls, "getRuggedNameA", "()Ljava/lang/String;");
              mids$[mid_getRuggedNameB_0090f7797e403f43] = env->getMethodID(cls, "getRuggedNameB", "()Ljava/lang/String;");
              mids$[mid_getSensorNameA_0090f7797e403f43] = env->getMethodID(cls, "getSensorNameA", "()Ljava/lang/String;");
              mids$[mid_getSensorNameB_0090f7797e403f43] = env->getMethodID(cls, "getSensorNameB", "()Ljava/lang/String;");
              mids$[mid_setBodyConstraintWeight_77e0f9a1f260e2e5] = env->getMethodID(cls, "setBodyConstraintWeight", "(D)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SensorToSensorMapping::SensorToSensorMapping(const ::java::lang::String & a0, const ::java::lang::String & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_96073c87872b7a97, a0.this$, a1.this$)) {}

          SensorToSensorMapping::SensorToSensorMapping(const ::java::lang::String & a0, const ::java::lang::String & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f7e4436e61826cb4, a0.this$, a1.this$, a2)) {}

          SensorToSensorMapping::SensorToSensorMapping(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_dc789c6b17416ede, a0.this$, a1.this$, a2.this$, a3.this$)) {}

          SensorToSensorMapping::SensorToSensorMapping(const ::java::lang::String & a0, const ::java::lang::String & a1, const ::java::lang::String & a2, const ::java::lang::String & a3, jdouble a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d7e86d2d520c520a, a0.this$, a1.this$, a2.this$, a3.this$, a4)) {}

          void SensorToSensorMapping::addMapping(const ::org::orekit::rugged::linesensor::SensorPixel & a0, const ::org::orekit::rugged::linesensor::SensorPixel & a1, const ::java::lang::Double & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_addMapping_baa040d3b267859e], a0.this$, a1.this$, a2.this$);
          }

          void SensorToSensorMapping::addMapping(const ::org::orekit::rugged::linesensor::SensorPixel & a0, const ::org::orekit::rugged::linesensor::SensorPixel & a1, const ::java::lang::Double & a2, const ::java::lang::Double & a3) const
          {
            env->callVoidMethod(this$, mids$[mid_addMapping_2a58fe29d61c2d8c], a0.this$, a1.this$, a2.this$, a3.this$);
          }

          jdouble SensorToSensorMapping::getBodyConstraintWeight() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getBodyConstraintWeight_456d9a2f64d6b28d]);
          }

          ::java::lang::Double SensorToSensorMapping::getBodyDistance(jint a0) const
          {
            return ::java::lang::Double(env->callObjectMethod(this$, mids$[mid_getBodyDistance_dec2f52f07867392], a0));
          }

          ::java::util::List SensorToSensorMapping::getBodyDistances() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getBodyDistances_a6156df500549a58]));
          }

          ::java::lang::Double SensorToSensorMapping::getLosDistance(jint a0) const
          {
            return ::java::lang::Double(env->callObjectMethod(this$, mids$[mid_getLosDistance_dec2f52f07867392], a0));
          }

          ::java::util::List SensorToSensorMapping::getLosDistances() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getLosDistances_a6156df500549a58]));
          }

          ::java::util::Set SensorToSensorMapping::getMapping() const
          {
            return ::java::util::Set(env->callObjectMethod(this$, mids$[mid_getMapping_e9e1a6780fe94297]));
          }

          ::java::lang::String SensorToSensorMapping::getRuggedNameA() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRuggedNameA_0090f7797e403f43]));
          }

          ::java::lang::String SensorToSensorMapping::getRuggedNameB() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getRuggedNameB_0090f7797e403f43]));
          }

          ::java::lang::String SensorToSensorMapping::getSensorNameA() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSensorNameA_0090f7797e403f43]));
          }

          ::java::lang::String SensorToSensorMapping::getSensorNameB() const
          {
            return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getSensorNameB_0090f7797e403f43]));
          }

          void SensorToSensorMapping::setBodyConstraintWeight(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setBodyConstraintWeight_77e0f9a1f260e2e5], a0);
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
    namespace rugged {
      namespace adjustment {
        namespace measurements {
          static PyObject *t_SensorToSensorMapping_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SensorToSensorMapping_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SensorToSensorMapping_init_(t_SensorToSensorMapping *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SensorToSensorMapping_addMapping(t_SensorToSensorMapping *self, PyObject *args);
          static PyObject *t_SensorToSensorMapping_getBodyConstraintWeight(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getBodyDistance(t_SensorToSensorMapping *self, PyObject *arg);
          static PyObject *t_SensorToSensorMapping_getBodyDistances(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getLosDistance(t_SensorToSensorMapping *self, PyObject *arg);
          static PyObject *t_SensorToSensorMapping_getLosDistances(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getMapping(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getRuggedNameA(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getRuggedNameB(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getSensorNameA(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_getSensorNameB(t_SensorToSensorMapping *self);
          static PyObject *t_SensorToSensorMapping_setBodyConstraintWeight(t_SensorToSensorMapping *self, PyObject *arg);
          static PyObject *t_SensorToSensorMapping_get__bodyConstraintWeight(t_SensorToSensorMapping *self, void *data);
          static int t_SensorToSensorMapping_set__bodyConstraintWeight(t_SensorToSensorMapping *self, PyObject *arg, void *data);
          static PyObject *t_SensorToSensorMapping_get__bodyDistances(t_SensorToSensorMapping *self, void *data);
          static PyObject *t_SensorToSensorMapping_get__losDistances(t_SensorToSensorMapping *self, void *data);
          static PyObject *t_SensorToSensorMapping_get__mapping(t_SensorToSensorMapping *self, void *data);
          static PyObject *t_SensorToSensorMapping_get__ruggedNameA(t_SensorToSensorMapping *self, void *data);
          static PyObject *t_SensorToSensorMapping_get__ruggedNameB(t_SensorToSensorMapping *self, void *data);
          static PyObject *t_SensorToSensorMapping_get__sensorNameA(t_SensorToSensorMapping *self, void *data);
          static PyObject *t_SensorToSensorMapping_get__sensorNameB(t_SensorToSensorMapping *self, void *data);
          static PyGetSetDef t_SensorToSensorMapping__fields_[] = {
            DECLARE_GETSET_FIELD(t_SensorToSensorMapping, bodyConstraintWeight),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, bodyDistances),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, losDistances),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, mapping),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, ruggedNameA),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, ruggedNameB),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, sensorNameA),
            DECLARE_GET_FIELD(t_SensorToSensorMapping, sensorNameB),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SensorToSensorMapping__methods_[] = {
            DECLARE_METHOD(t_SensorToSensorMapping, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SensorToSensorMapping, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SensorToSensorMapping, addMapping, METH_VARARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getBodyConstraintWeight, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getBodyDistance, METH_O),
            DECLARE_METHOD(t_SensorToSensorMapping, getBodyDistances, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getLosDistance, METH_O),
            DECLARE_METHOD(t_SensorToSensorMapping, getLosDistances, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getMapping, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getRuggedNameA, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getRuggedNameB, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getSensorNameA, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, getSensorNameB, METH_NOARGS),
            DECLARE_METHOD(t_SensorToSensorMapping, setBodyConstraintWeight, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SensorToSensorMapping)[] = {
            { Py_tp_methods, t_SensorToSensorMapping__methods_ },
            { Py_tp_init, (void *) t_SensorToSensorMapping_init_ },
            { Py_tp_getset, t_SensorToSensorMapping__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SensorToSensorMapping)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(SensorToSensorMapping, t_SensorToSensorMapping, SensorToSensorMapping);

          void t_SensorToSensorMapping::install(PyObject *module)
          {
            installType(&PY_TYPE(SensorToSensorMapping), &PY_TYPE_DEF(SensorToSensorMapping), module, "SensorToSensorMapping", 0);
          }

          void t_SensorToSensorMapping::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorToSensorMapping), "class_", make_descriptor(SensorToSensorMapping::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorToSensorMapping), "wrapfn_", make_descriptor(t_SensorToSensorMapping::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SensorToSensorMapping), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SensorToSensorMapping_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SensorToSensorMapping::initializeClass, 1)))
              return NULL;
            return t_SensorToSensorMapping::wrap_Object(SensorToSensorMapping(((t_SensorToSensorMapping *) arg)->object.this$));
          }
          static PyObject *t_SensorToSensorMapping_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SensorToSensorMapping::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SensorToSensorMapping_init_(t_SensorToSensorMapping *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 2:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                SensorToSensorMapping object((jobject) NULL);

                if (!parseArgs(args, "ss", &a0, &a1))
                {
                  INT_CALL(object = SensorToSensorMapping(a0, a1));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 3:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                jdouble a2;
                SensorToSensorMapping object((jobject) NULL);

                if (!parseArgs(args, "ssD", &a0, &a1, &a2))
                {
                  INT_CALL(object = SensorToSensorMapping(a0, a1, a2));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 4:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                ::java::lang::String a3((jobject) NULL);
                SensorToSensorMapping object((jobject) NULL);

                if (!parseArgs(args, "ssss", &a0, &a1, &a2, &a3))
                {
                  INT_CALL(object = SensorToSensorMapping(a0, a1, a2, a3));
                  self->object = object;
                  break;
                }
              }
              goto err;
             case 5:
              {
                ::java::lang::String a0((jobject) NULL);
                ::java::lang::String a1((jobject) NULL);
                ::java::lang::String a2((jobject) NULL);
                ::java::lang::String a3((jobject) NULL);
                jdouble a4;
                SensorToSensorMapping object((jobject) NULL);

                if (!parseArgs(args, "ssssD", &a0, &a1, &a2, &a3, &a4))
                {
                  INT_CALL(object = SensorToSensorMapping(a0, a1, a2, a3, a4));
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

          static PyObject *t_SensorToSensorMapping_addMapping(t_SensorToSensorMapping *self, PyObject *args)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 3:
              {
                ::org::orekit::rugged::linesensor::SensorPixel a0((jobject) NULL);
                ::org::orekit::rugged::linesensor::SensorPixel a1((jobject) NULL);
                ::java::lang::Double a2((jobject) NULL);

                if (!parseArgs(args, "kkO", ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, ::java::lang::PY_TYPE(Double), &a0, &a1, &a2))
                {
                  OBJ_CALL(self->object.addMapping(a0, a1, a2));
                  Py_RETURN_NONE;
                }
              }
              break;
             case 4:
              {
                ::org::orekit::rugged::linesensor::SensorPixel a0((jobject) NULL);
                ::org::orekit::rugged::linesensor::SensorPixel a1((jobject) NULL);
                ::java::lang::Double a2((jobject) NULL);
                ::java::lang::Double a3((jobject) NULL);

                if (!parseArgs(args, "kkOO", ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, ::org::orekit::rugged::linesensor::SensorPixel::initializeClass, ::java::lang::PY_TYPE(Double), ::java::lang::PY_TYPE(Double), &a0, &a1, &a2, &a3))
                {
                  OBJ_CALL(self->object.addMapping(a0, a1, a2, a3));
                  Py_RETURN_NONE;
                }
              }
            }

            PyErr_SetArgsError((PyObject *) self, "addMapping", args);
            return NULL;
          }

          static PyObject *t_SensorToSensorMapping_getBodyConstraintWeight(t_SensorToSensorMapping *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getBodyConstraintWeight());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SensorToSensorMapping_getBodyDistance(t_SensorToSensorMapping *self, PyObject *arg)
          {
            jint a0;
            ::java::lang::Double result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getBodyDistance(a0));
              return ::java::lang::t_Double::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getBodyDistance", arg);
            return NULL;
          }

          static PyObject *t_SensorToSensorMapping_getBodyDistances(t_SensorToSensorMapping *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getBodyDistances());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(Double));
          }

          static PyObject *t_SensorToSensorMapping_getLosDistance(t_SensorToSensorMapping *self, PyObject *arg)
          {
            jint a0;
            ::java::lang::Double result((jobject) NULL);

            if (!parseArg(arg, "I", &a0))
            {
              OBJ_CALL(result = self->object.getLosDistance(a0));
              return ::java::lang::t_Double::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "getLosDistance", arg);
            return NULL;
          }

          static PyObject *t_SensorToSensorMapping_getLosDistances(t_SensorToSensorMapping *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getLosDistances());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(Double));
          }

          static PyObject *t_SensorToSensorMapping_getMapping(t_SensorToSensorMapping *self)
          {
            ::java::util::Set result((jobject) NULL);
            OBJ_CALL(result = self->object.getMapping());
            return ::java::util::t_Set::wrap_Object(result);
          }

          static PyObject *t_SensorToSensorMapping_getRuggedNameA(t_SensorToSensorMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getRuggedNameA());
            return j2p(result);
          }

          static PyObject *t_SensorToSensorMapping_getRuggedNameB(t_SensorToSensorMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getRuggedNameB());
            return j2p(result);
          }

          static PyObject *t_SensorToSensorMapping_getSensorNameA(t_SensorToSensorMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSensorNameA());
            return j2p(result);
          }

          static PyObject *t_SensorToSensorMapping_getSensorNameB(t_SensorToSensorMapping *self)
          {
            ::java::lang::String result((jobject) NULL);
            OBJ_CALL(result = self->object.getSensorNameB());
            return j2p(result);
          }

          static PyObject *t_SensorToSensorMapping_setBodyConstraintWeight(t_SensorToSensorMapping *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setBodyConstraintWeight(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setBodyConstraintWeight", arg);
            return NULL;
          }

          static PyObject *t_SensorToSensorMapping_get__bodyConstraintWeight(t_SensorToSensorMapping *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getBodyConstraintWeight());
            return PyFloat_FromDouble((double) value);
          }
          static int t_SensorToSensorMapping_set__bodyConstraintWeight(t_SensorToSensorMapping *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setBodyConstraintWeight(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "bodyConstraintWeight", arg);
            return -1;
          }

          static PyObject *t_SensorToSensorMapping_get__bodyDistances(t_SensorToSensorMapping *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getBodyDistances());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SensorToSensorMapping_get__losDistances(t_SensorToSensorMapping *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getLosDistances());
            return ::java::util::t_List::wrap_Object(value);
          }

          static PyObject *t_SensorToSensorMapping_get__mapping(t_SensorToSensorMapping *self, void *data)
          {
            ::java::util::Set value((jobject) NULL);
            OBJ_CALL(value = self->object.getMapping());
            return ::java::util::t_Set::wrap_Object(value);
          }

          static PyObject *t_SensorToSensorMapping_get__ruggedNameA(t_SensorToSensorMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getRuggedNameA());
            return j2p(value);
          }

          static PyObject *t_SensorToSensorMapping_get__ruggedNameB(t_SensorToSensorMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getRuggedNameB());
            return j2p(value);
          }

          static PyObject *t_SensorToSensorMapping_get__sensorNameA(t_SensorToSensorMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSensorNameA());
            return j2p(value);
          }

          static PyObject *t_SensorToSensorMapping_get__sensorNameB(t_SensorToSensorMapping *self, void *data)
          {
            ::java::lang::String value((jobject) NULL);
            OBJ_CALL(value = self->object.getSensorNameB());
            return j2p(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/tle/FieldSDP4.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {

          ::java::lang::Class *FieldSDP4::class$ = NULL;
          jmethodID *FieldSDP4::mids$ = NULL;
          bool FieldSDP4::live$ = false;

          jclass FieldSDP4::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/FieldSDP4");

              mids$ = new jmethodID[max_mid];
              mids$[mid_sxpInitialize_4c337e4c1ec6f647] = env->getMethodID(cls, "sxpInitialize", "([Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_sxpPropagate_ef0bb554ba052051] = env->getMethodID(cls, "sxpPropagate", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_luniSolarTermsComputation_7ae3461a92a43152] = env->getMethodID(cls, "luniSolarTermsComputation", "()V");
              mids$[mid_deepSecularEffects_03a16642f77779e7] = env->getMethodID(cls, "deepSecularEffects", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_deepPeriodicEffects_03a16642f77779e7] = env->getMethodID(cls, "deepPeriodicEffects", "(Lorg/hipparchus/CalculusFieldElement;)V");
              mids$[mid_thetaG_2f201d67a80e0793] = env->getMethodID(cls, "thetaG", "(Lorg/orekit/time/FieldAbsoluteDate;)D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
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
      namespace analytical {
        namespace tle {
          static PyObject *t_FieldSDP4_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldSDP4_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldSDP4_of_(t_FieldSDP4 *self, PyObject *args);
          static PyObject *t_FieldSDP4_get__parameters_(t_FieldSDP4 *self, void *data);
          static PyGetSetDef t_FieldSDP4__fields_[] = {
            DECLARE_GET_FIELD(t_FieldSDP4, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldSDP4__methods_[] = {
            DECLARE_METHOD(t_FieldSDP4, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldSDP4, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldSDP4, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldSDP4)[] = {
            { Py_tp_methods, t_FieldSDP4__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldSDP4__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldSDP4)[] = {
            &PY_TYPE_DEF(::org::orekit::propagation::analytical::tle::FieldTLEPropagator),
            NULL
          };

          DEFINE_TYPE(FieldSDP4, t_FieldSDP4, FieldSDP4);
          PyObject *t_FieldSDP4::wrap_Object(const FieldSDP4& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldSDP4::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldSDP4 *self = (t_FieldSDP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldSDP4::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldSDP4::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldSDP4 *self = (t_FieldSDP4 *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldSDP4::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldSDP4), &PY_TYPE_DEF(FieldSDP4), module, "FieldSDP4", 0);
          }

          void t_FieldSDP4::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSDP4), "class_", make_descriptor(FieldSDP4::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSDP4), "wrapfn_", make_descriptor(t_FieldSDP4::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldSDP4), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldSDP4_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldSDP4::initializeClass, 1)))
              return NULL;
            return t_FieldSDP4::wrap_Object(FieldSDP4(((t_FieldSDP4 *) arg)->object.this$));
          }
          static PyObject *t_FieldSDP4_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldSDP4::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldSDP4_of_(t_FieldSDP4 *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }
          static PyObject *t_FieldSDP4_get__parameters_(t_FieldSDP4 *self, void *data)
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
#include "org/orekit/files/rinex/navigation/SystemTimeOffsetMessage.h"
#include "org/orekit/gnss/TimeSystem.h"
#include "org/orekit/gnss/SatelliteSystem.h"
#include "org/orekit/files/rinex/navigation/SbasId.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/navigation/UtcId.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *SystemTimeOffsetMessage::class$ = NULL;
          jmethodID *SystemTimeOffsetMessage::mids$ = NULL;
          bool SystemTimeOffsetMessage::live$ = false;

          jclass SystemTimeOffsetMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/SystemTimeOffsetMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_70c1a5d645cab07e] = env->getMethodID(cls, "<init>", "(Lorg/orekit/gnss/SatelliteSystem;ILjava/lang/String;)V");
              mids$[mid_getA0_456d9a2f64d6b28d] = env->getMethodID(cls, "getA0", "()D");
              mids$[mid_getA1_456d9a2f64d6b28d] = env->getMethodID(cls, "getA1", "()D");
              mids$[mid_getA2_456d9a2f64d6b28d] = env->getMethodID(cls, "getA2", "()D");
              mids$[mid_getDefinedTimeSystem_b58d3545739694ee] = env->getMethodID(cls, "getDefinedTimeSystem", "()Lorg/orekit/gnss/TimeSystem;");
              mids$[mid_getReferenceEpoch_aaa854c403487cf3] = env->getMethodID(cls, "getReferenceEpoch", "()Lorg/orekit/time/AbsoluteDate;");
              mids$[mid_getReferenceTimeSystem_b58d3545739694ee] = env->getMethodID(cls, "getReferenceTimeSystem", "()Lorg/orekit/gnss/TimeSystem;");
              mids$[mid_getSbasId_86f4b118dfb4f905] = env->getMethodID(cls, "getSbasId", "()Lorg/orekit/files/rinex/navigation/SbasId;");
              mids$[mid_getTransmissionTime_456d9a2f64d6b28d] = env->getMethodID(cls, "getTransmissionTime", "()D");
              mids$[mid_getUtcId_a04596e19ea6885d] = env->getMethodID(cls, "getUtcId", "()Lorg/orekit/files/rinex/navigation/UtcId;");
              mids$[mid_setA0_77e0f9a1f260e2e5] = env->getMethodID(cls, "setA0", "(D)V");
              mids$[mid_setA1_77e0f9a1f260e2e5] = env->getMethodID(cls, "setA1", "(D)V");
              mids$[mid_setA2_77e0f9a1f260e2e5] = env->getMethodID(cls, "setA2", "(D)V");
              mids$[mid_setDefinedTimeSystem_4733fc8266dc541c] = env->getMethodID(cls, "setDefinedTimeSystem", "(Lorg/orekit/gnss/TimeSystem;)V");
              mids$[mid_setReferenceEpoch_e82d68cd9f886886] = env->getMethodID(cls, "setReferenceEpoch", "(Lorg/orekit/time/AbsoluteDate;)V");
              mids$[mid_setReferenceTimeSystem_4733fc8266dc541c] = env->getMethodID(cls, "setReferenceTimeSystem", "(Lorg/orekit/gnss/TimeSystem;)V");
              mids$[mid_setSbasId_b0e795d92cebacb6] = env->getMethodID(cls, "setSbasId", "(Lorg/orekit/files/rinex/navigation/SbasId;)V");
              mids$[mid_setTransmissionTime_77e0f9a1f260e2e5] = env->getMethodID(cls, "setTransmissionTime", "(D)V");
              mids$[mid_setUtcId_278244b1741477cb] = env->getMethodID(cls, "setUtcId", "(Lorg/orekit/files/rinex/navigation/UtcId;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          SystemTimeOffsetMessage::SystemTimeOffsetMessage(const ::org::orekit::gnss::SatelliteSystem & a0, jint a1, const ::java::lang::String & a2) : ::org::orekit::files::rinex::navigation::TypeSvMessage(env->newObject(initializeClass, &mids$, mid_init$_70c1a5d645cab07e, a0.this$, a1, a2.this$)) {}

          jdouble SystemTimeOffsetMessage::getA0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getA0_456d9a2f64d6b28d]);
          }

          jdouble SystemTimeOffsetMessage::getA1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getA1_456d9a2f64d6b28d]);
          }

          jdouble SystemTimeOffsetMessage::getA2() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getA2_456d9a2f64d6b28d]);
          }

          ::org::orekit::gnss::TimeSystem SystemTimeOffsetMessage::getDefinedTimeSystem() const
          {
            return ::org::orekit::gnss::TimeSystem(env->callObjectMethod(this$, mids$[mid_getDefinedTimeSystem_b58d3545739694ee]));
          }

          ::org::orekit::time::AbsoluteDate SystemTimeOffsetMessage::getReferenceEpoch() const
          {
            return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getReferenceEpoch_aaa854c403487cf3]));
          }

          ::org::orekit::gnss::TimeSystem SystemTimeOffsetMessage::getReferenceTimeSystem() const
          {
            return ::org::orekit::gnss::TimeSystem(env->callObjectMethod(this$, mids$[mid_getReferenceTimeSystem_b58d3545739694ee]));
          }

          ::org::orekit::files::rinex::navigation::SbasId SystemTimeOffsetMessage::getSbasId() const
          {
            return ::org::orekit::files::rinex::navigation::SbasId(env->callObjectMethod(this$, mids$[mid_getSbasId_86f4b118dfb4f905]));
          }

          jdouble SystemTimeOffsetMessage::getTransmissionTime() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getTransmissionTime_456d9a2f64d6b28d]);
          }

          ::org::orekit::files::rinex::navigation::UtcId SystemTimeOffsetMessage::getUtcId() const
          {
            return ::org::orekit::files::rinex::navigation::UtcId(env->callObjectMethod(this$, mids$[mid_getUtcId_a04596e19ea6885d]));
          }

          void SystemTimeOffsetMessage::setA0(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setA0_77e0f9a1f260e2e5], a0);
          }

          void SystemTimeOffsetMessage::setA1(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setA1_77e0f9a1f260e2e5], a0);
          }

          void SystemTimeOffsetMessage::setA2(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setA2_77e0f9a1f260e2e5], a0);
          }

          void SystemTimeOffsetMessage::setDefinedTimeSystem(const ::org::orekit::gnss::TimeSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setDefinedTimeSystem_4733fc8266dc541c], a0.this$);
          }

          void SystemTimeOffsetMessage::setReferenceEpoch(const ::org::orekit::time::AbsoluteDate & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReferenceEpoch_e82d68cd9f886886], a0.this$);
          }

          void SystemTimeOffsetMessage::setReferenceTimeSystem(const ::org::orekit::gnss::TimeSystem & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setReferenceTimeSystem_4733fc8266dc541c], a0.this$);
          }

          void SystemTimeOffsetMessage::setSbasId(const ::org::orekit::files::rinex::navigation::SbasId & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setSbasId_b0e795d92cebacb6], a0.this$);
          }

          void SystemTimeOffsetMessage::setTransmissionTime(jdouble a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setTransmissionTime_77e0f9a1f260e2e5], a0);
          }

          void SystemTimeOffsetMessage::setUtcId(const ::org::orekit::files::rinex::navigation::UtcId & a0) const
          {
            env->callVoidMethod(this$, mids$[mid_setUtcId_278244b1741477cb], a0.this$);
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
        namespace navigation {
          static PyObject *t_SystemTimeOffsetMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_SystemTimeOffsetMessage_init_(t_SystemTimeOffsetMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_SystemTimeOffsetMessage_getA0(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getA1(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getA2(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getDefinedTimeSystem(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getReferenceEpoch(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getReferenceTimeSystem(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getSbasId(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getTransmissionTime(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_getUtcId(t_SystemTimeOffsetMessage *self);
          static PyObject *t_SystemTimeOffsetMessage_setA0(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setA1(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setA2(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setDefinedTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setReferenceEpoch(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setReferenceTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setSbasId(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setTransmissionTime(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_setUtcId(t_SystemTimeOffsetMessage *self, PyObject *arg);
          static PyObject *t_SystemTimeOffsetMessage_get__a0(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__a0(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__a1(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__a1(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__a2(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__a2(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__definedTimeSystem(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__definedTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__referenceEpoch(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__referenceEpoch(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__referenceTimeSystem(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__referenceTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__sbasId(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__sbasId(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__transmissionTime(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__transmissionTime(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyObject *t_SystemTimeOffsetMessage_get__utcId(t_SystemTimeOffsetMessage *self, void *data);
          static int t_SystemTimeOffsetMessage_set__utcId(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data);
          static PyGetSetDef t_SystemTimeOffsetMessage__fields_[] = {
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, a0),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, a1),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, a2),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, definedTimeSystem),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, referenceEpoch),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, referenceTimeSystem),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, sbasId),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, transmissionTime),
            DECLARE_GETSET_FIELD(t_SystemTimeOffsetMessage, utcId),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SystemTimeOffsetMessage__methods_[] = {
            DECLARE_METHOD(t_SystemTimeOffsetMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getA0, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getA1, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getA2, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getDefinedTimeSystem, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getReferenceEpoch, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getReferenceTimeSystem, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getSbasId, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getTransmissionTime, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, getUtcId, METH_NOARGS),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setA0, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setA1, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setA2, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setDefinedTimeSystem, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setReferenceEpoch, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setReferenceTimeSystem, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setSbasId, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setTransmissionTime, METH_O),
            DECLARE_METHOD(t_SystemTimeOffsetMessage, setUtcId, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SystemTimeOffsetMessage)[] = {
            { Py_tp_methods, t_SystemTimeOffsetMessage__methods_ },
            { Py_tp_init, (void *) t_SystemTimeOffsetMessage_init_ },
            { Py_tp_getset, t_SystemTimeOffsetMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SystemTimeOffsetMessage)[] = {
            &PY_TYPE_DEF(::org::orekit::files::rinex::navigation::TypeSvMessage),
            NULL
          };

          DEFINE_TYPE(SystemTimeOffsetMessage, t_SystemTimeOffsetMessage, SystemTimeOffsetMessage);

          void t_SystemTimeOffsetMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(SystemTimeOffsetMessage), &PY_TYPE_DEF(SystemTimeOffsetMessage), module, "SystemTimeOffsetMessage", 0);
          }

          void t_SystemTimeOffsetMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SystemTimeOffsetMessage), "class_", make_descriptor(SystemTimeOffsetMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SystemTimeOffsetMessage), "wrapfn_", make_descriptor(t_SystemTimeOffsetMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SystemTimeOffsetMessage), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SystemTimeOffsetMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SystemTimeOffsetMessage::initializeClass, 1)))
              return NULL;
            return t_SystemTimeOffsetMessage::wrap_Object(SystemTimeOffsetMessage(((t_SystemTimeOffsetMessage *) arg)->object.this$));
          }
          static PyObject *t_SystemTimeOffsetMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SystemTimeOffsetMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_SystemTimeOffsetMessage_init_(t_SystemTimeOffsetMessage *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::gnss::SatelliteSystem a0((jobject) NULL);
            PyTypeObject **p0;
            jint a1;
            ::java::lang::String a2((jobject) NULL);
            SystemTimeOffsetMessage object((jobject) NULL);

            if (!parseArgs(args, "KIs", ::org::orekit::gnss::SatelliteSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_SatelliteSystem::parameters_, &a1, &a2))
            {
              INT_CALL(object = SystemTimeOffsetMessage(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_SystemTimeOffsetMessage_getA0(t_SystemTimeOffsetMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getA0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getA1(t_SystemTimeOffsetMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getA1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getA2(t_SystemTimeOffsetMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getA2());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getDefinedTimeSystem(t_SystemTimeOffsetMessage *self)
          {
            ::org::orekit::gnss::TimeSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getDefinedTimeSystem());
            return ::org::orekit::gnss::t_TimeSystem::wrap_Object(result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getReferenceEpoch(t_SystemTimeOffsetMessage *self)
          {
            ::org::orekit::time::AbsoluteDate result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getReferenceTimeSystem(t_SystemTimeOffsetMessage *self)
          {
            ::org::orekit::gnss::TimeSystem result((jobject) NULL);
            OBJ_CALL(result = self->object.getReferenceTimeSystem());
            return ::org::orekit::gnss::t_TimeSystem::wrap_Object(result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getSbasId(t_SystemTimeOffsetMessage *self)
          {
            ::org::orekit::files::rinex::navigation::SbasId result((jobject) NULL);
            OBJ_CALL(result = self->object.getSbasId());
            return ::org::orekit::files::rinex::navigation::t_SbasId::wrap_Object(result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getTransmissionTime(t_SystemTimeOffsetMessage *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getTransmissionTime());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SystemTimeOffsetMessage_getUtcId(t_SystemTimeOffsetMessage *self)
          {
            ::org::orekit::files::rinex::navigation::UtcId result((jobject) NULL);
            OBJ_CALL(result = self->object.getUtcId());
            return ::org::orekit::files::rinex::navigation::t_UtcId::wrap_Object(result);
          }

          static PyObject *t_SystemTimeOffsetMessage_setA0(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setA0(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setA0", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setA1(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setA1(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setA1", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setA2(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setA2(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setA2", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setDefinedTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            ::org::orekit::gnss::TimeSystem a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::gnss::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_TimeSystem::parameters_))
            {
              OBJ_CALL(self->object.setDefinedTimeSystem(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setDefinedTimeSystem", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setReferenceEpoch(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &a0))
            {
              OBJ_CALL(self->object.setReferenceEpoch(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReferenceEpoch", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setReferenceTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            ::org::orekit::gnss::TimeSystem a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::gnss::TimeSystem::initializeClass, &a0, &p0, ::org::orekit::gnss::t_TimeSystem::parameters_))
            {
              OBJ_CALL(self->object.setReferenceTimeSystem(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setReferenceTimeSystem", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setSbasId(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::SbasId a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::rinex::navigation::SbasId::initializeClass, &a0, &p0, ::org::orekit::files::rinex::navigation::t_SbasId::parameters_))
            {
              OBJ_CALL(self->object.setSbasId(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setSbasId", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setTransmissionTime(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            jdouble a0;

            if (!parseArg(arg, "D", &a0))
            {
              OBJ_CALL(self->object.setTransmissionTime(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setTransmissionTime", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_setUtcId(t_SystemTimeOffsetMessage *self, PyObject *arg)
          {
            ::org::orekit::files::rinex::navigation::UtcId a0((jobject) NULL);
            PyTypeObject **p0;

            if (!parseArg(arg, "K", ::org::orekit::files::rinex::navigation::UtcId::initializeClass, &a0, &p0, ::org::orekit::files::rinex::navigation::t_UtcId::parameters_))
            {
              OBJ_CALL(self->object.setUtcId(a0));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "setUtcId", arg);
            return NULL;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__a0(t_SystemTimeOffsetMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getA0());
            return PyFloat_FromDouble((double) value);
          }
          static int t_SystemTimeOffsetMessage_set__a0(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setA0(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "a0", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__a1(t_SystemTimeOffsetMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getA1());
            return PyFloat_FromDouble((double) value);
          }
          static int t_SystemTimeOffsetMessage_set__a1(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setA1(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "a1", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__a2(t_SystemTimeOffsetMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getA2());
            return PyFloat_FromDouble((double) value);
          }
          static int t_SystemTimeOffsetMessage_set__a2(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setA2(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "a2", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__definedTimeSystem(t_SystemTimeOffsetMessage *self, void *data)
          {
            ::org::orekit::gnss::TimeSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getDefinedTimeSystem());
            return ::org::orekit::gnss::t_TimeSystem::wrap_Object(value);
          }
          static int t_SystemTimeOffsetMessage_set__definedTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::gnss::TimeSystem value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::gnss::TimeSystem::initializeClass, &value))
              {
                INT_CALL(self->object.setDefinedTimeSystem(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "definedTimeSystem", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__referenceEpoch(t_SystemTimeOffsetMessage *self, void *data)
          {
            ::org::orekit::time::AbsoluteDate value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceEpoch());
            return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
          }
          static int t_SystemTimeOffsetMessage_set__referenceEpoch(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::time::AbsoluteDate value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::time::AbsoluteDate::initializeClass, &value))
              {
                INT_CALL(self->object.setReferenceEpoch(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "referenceEpoch", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__referenceTimeSystem(t_SystemTimeOffsetMessage *self, void *data)
          {
            ::org::orekit::gnss::TimeSystem value((jobject) NULL);
            OBJ_CALL(value = self->object.getReferenceTimeSystem());
            return ::org::orekit::gnss::t_TimeSystem::wrap_Object(value);
          }
          static int t_SystemTimeOffsetMessage_set__referenceTimeSystem(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::gnss::TimeSystem value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::gnss::TimeSystem::initializeClass, &value))
              {
                INT_CALL(self->object.setReferenceTimeSystem(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "referenceTimeSystem", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__sbasId(t_SystemTimeOffsetMessage *self, void *data)
          {
            ::org::orekit::files::rinex::navigation::SbasId value((jobject) NULL);
            OBJ_CALL(value = self->object.getSbasId());
            return ::org::orekit::files::rinex::navigation::t_SbasId::wrap_Object(value);
          }
          static int t_SystemTimeOffsetMessage_set__sbasId(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::rinex::navigation::SbasId value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::SbasId::initializeClass, &value))
              {
                INT_CALL(self->object.setSbasId(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "sbasId", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__transmissionTime(t_SystemTimeOffsetMessage *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getTransmissionTime());
            return PyFloat_FromDouble((double) value);
          }
          static int t_SystemTimeOffsetMessage_set__transmissionTime(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              jdouble value;
              if (!parseArg(arg, "D", &value))
              {
                INT_CALL(self->object.setTransmissionTime(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "transmissionTime", arg);
            return -1;
          }

          static PyObject *t_SystemTimeOffsetMessage_get__utcId(t_SystemTimeOffsetMessage *self, void *data)
          {
            ::org::orekit::files::rinex::navigation::UtcId value((jobject) NULL);
            OBJ_CALL(value = self->object.getUtcId());
            return ::org::orekit::files::rinex::navigation::t_UtcId::wrap_Object(value);
          }
          static int t_SystemTimeOffsetMessage_set__utcId(t_SystemTimeOffsetMessage *self, PyObject *arg, void *data)
          {
            {
              ::org::orekit::files::rinex::navigation::UtcId value((jobject) NULL);
              if (!parseArg(arg, "k", ::org::orekit::files::rinex::navigation::UtcId::initializeClass, &value))
              {
                INT_CALL(self->object.setUtcId(value));
                return 0;
              }
            }
            PyErr_SetArgsError((PyObject *) self, "utcId", arg);
            return -1;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/DefaultFieldMatrixPreservingVisitor.h"
#include "org/hipparchus/FieldElement.h"
#include "org/hipparchus/linear/FieldMatrixPreservingVisitor.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *DefaultFieldMatrixPreservingVisitor::class$ = NULL;
      jmethodID *DefaultFieldMatrixPreservingVisitor::mids$ = NULL;
      bool DefaultFieldMatrixPreservingVisitor::live$ = false;

      jclass DefaultFieldMatrixPreservingVisitor::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/DefaultFieldMatrixPreservingVisitor");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_d517a7265f416cee] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/FieldElement;)V");
          mids$[mid_end_7e89936bdf79375b] = env->getMethodID(cls, "end", "()Lorg/hipparchus/FieldElement;");
          mids$[mid_start_47d591670cfcc314] = env->getMethodID(cls, "start", "(IIIIII)V");
          mids$[mid_visit_8c5ca78361f003c1] = env->getMethodID(cls, "visit", "(IILorg/hipparchus/FieldElement;)V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      DefaultFieldMatrixPreservingVisitor::DefaultFieldMatrixPreservingVisitor(const ::org::hipparchus::FieldElement & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_d517a7265f416cee, a0.this$)) {}

      ::org::hipparchus::FieldElement DefaultFieldMatrixPreservingVisitor::end() const
      {
        return ::org::hipparchus::FieldElement(env->callObjectMethod(this$, mids$[mid_end_7e89936bdf79375b]));
      }

      void DefaultFieldMatrixPreservingVisitor::start(jint a0, jint a1, jint a2, jint a3, jint a4, jint a5) const
      {
        env->callVoidMethod(this$, mids$[mid_start_47d591670cfcc314], a0, a1, a2, a3, a4, a5);
      }

      void DefaultFieldMatrixPreservingVisitor::visit(jint a0, jint a1, const ::org::hipparchus::FieldElement & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_visit_8c5ca78361f003c1], a0, a1, a2.this$);
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
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_of_(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args);
      static int t_DefaultFieldMatrixPreservingVisitor_init_(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args, PyObject *kwds);
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_end(t_DefaultFieldMatrixPreservingVisitor *self);
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_start(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_visit(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args);
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_get__parameters_(t_DefaultFieldMatrixPreservingVisitor *self, void *data);
      static PyGetSetDef t_DefaultFieldMatrixPreservingVisitor__fields_[] = {
        DECLARE_GET_FIELD(t_DefaultFieldMatrixPreservingVisitor, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_DefaultFieldMatrixPreservingVisitor__methods_[] = {
        DECLARE_METHOD(t_DefaultFieldMatrixPreservingVisitor, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultFieldMatrixPreservingVisitor, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_DefaultFieldMatrixPreservingVisitor, of_, METH_VARARGS),
        DECLARE_METHOD(t_DefaultFieldMatrixPreservingVisitor, end, METH_NOARGS),
        DECLARE_METHOD(t_DefaultFieldMatrixPreservingVisitor, start, METH_VARARGS),
        DECLARE_METHOD(t_DefaultFieldMatrixPreservingVisitor, visit, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(DefaultFieldMatrixPreservingVisitor)[] = {
        { Py_tp_methods, t_DefaultFieldMatrixPreservingVisitor__methods_ },
        { Py_tp_init, (void *) t_DefaultFieldMatrixPreservingVisitor_init_ },
        { Py_tp_getset, t_DefaultFieldMatrixPreservingVisitor__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(DefaultFieldMatrixPreservingVisitor)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(DefaultFieldMatrixPreservingVisitor, t_DefaultFieldMatrixPreservingVisitor, DefaultFieldMatrixPreservingVisitor);
      PyObject *t_DefaultFieldMatrixPreservingVisitor::wrap_Object(const DefaultFieldMatrixPreservingVisitor& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DefaultFieldMatrixPreservingVisitor::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DefaultFieldMatrixPreservingVisitor *self = (t_DefaultFieldMatrixPreservingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_DefaultFieldMatrixPreservingVisitor::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_DefaultFieldMatrixPreservingVisitor::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_DefaultFieldMatrixPreservingVisitor *self = (t_DefaultFieldMatrixPreservingVisitor *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_DefaultFieldMatrixPreservingVisitor::install(PyObject *module)
      {
        installType(&PY_TYPE(DefaultFieldMatrixPreservingVisitor), &PY_TYPE_DEF(DefaultFieldMatrixPreservingVisitor), module, "DefaultFieldMatrixPreservingVisitor", 0);
      }

      void t_DefaultFieldMatrixPreservingVisitor::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultFieldMatrixPreservingVisitor), "class_", make_descriptor(DefaultFieldMatrixPreservingVisitor::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultFieldMatrixPreservingVisitor), "wrapfn_", make_descriptor(t_DefaultFieldMatrixPreservingVisitor::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(DefaultFieldMatrixPreservingVisitor), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_DefaultFieldMatrixPreservingVisitor_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, DefaultFieldMatrixPreservingVisitor::initializeClass, 1)))
          return NULL;
        return t_DefaultFieldMatrixPreservingVisitor::wrap_Object(DefaultFieldMatrixPreservingVisitor(((t_DefaultFieldMatrixPreservingVisitor *) arg)->object.this$));
      }
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, DefaultFieldMatrixPreservingVisitor::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_DefaultFieldMatrixPreservingVisitor_of_(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_DefaultFieldMatrixPreservingVisitor_init_(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::FieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        DefaultFieldMatrixPreservingVisitor object((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::FieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_FieldElement::parameters_))
        {
          INT_CALL(object = DefaultFieldMatrixPreservingVisitor(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_DefaultFieldMatrixPreservingVisitor_end(t_DefaultFieldMatrixPreservingVisitor *self)
      {
        ::org::hipparchus::FieldElement result((jobject) NULL);
        OBJ_CALL(result = self->object.end());
        return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_FieldElement::wrap_Object(result);
      }

      static PyObject *t_DefaultFieldMatrixPreservingVisitor_start(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        jint a2;
        jint a3;
        jint a4;
        jint a5;

        if (!parseArgs(args, "IIIIII", &a0, &a1, &a2, &a3, &a4, &a5))
        {
          OBJ_CALL(self->object.start(a0, a1, a2, a3, a4, a5));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "start", args);
        return NULL;
      }

      static PyObject *t_DefaultFieldMatrixPreservingVisitor_visit(t_DefaultFieldMatrixPreservingVisitor *self, PyObject *args)
      {
        jint a0;
        jint a1;
        ::org::hipparchus::FieldElement a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "IIK", ::org::hipparchus::FieldElement::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::t_FieldElement::parameters_))
        {
          OBJ_CALL(self->object.visit(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "visit", args);
        return NULL;
      }
      static PyObject *t_DefaultFieldMatrixPreservingVisitor_get__parameters_(t_DefaultFieldMatrixPreservingVisitor *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/RectangularCholeskyDecomposition.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *RectangularCholeskyDecomposition::class$ = NULL;
      jmethodID *RectangularCholeskyDecomposition::mids$ = NULL;
      bool RectangularCholeskyDecomposition::live$ = false;

      jclass RectangularCholeskyDecomposition::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/RectangularCholeskyDecomposition");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_30aa151fd03f3096] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;)V");
          mids$[mid_init$_27ff5cf8ba76b4fe] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/linear/RealMatrix;D)V");
          mids$[mid_getRank_f2f64475e4580546] = env->getMethodID(cls, "getRank", "()I");
          mids$[mid_getRootMatrix_7116bbecdd8ceb21] = env->getMethodID(cls, "getRootMatrix", "()Lorg/hipparchus/linear/RealMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      RectangularCholeskyDecomposition::RectangularCholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_30aa151fd03f3096, a0.this$)) {}

      RectangularCholeskyDecomposition::RectangularCholeskyDecomposition(const ::org::hipparchus::linear::RealMatrix & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_27ff5cf8ba76b4fe, a0.this$, a1)) {}

      jint RectangularCholeskyDecomposition::getRank() const
      {
        return env->callIntMethod(this$, mids$[mid_getRank_f2f64475e4580546]);
      }

      ::org::hipparchus::linear::RealMatrix RectangularCholeskyDecomposition::getRootMatrix() const
      {
        return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getRootMatrix_7116bbecdd8ceb21]));
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
      static PyObject *t_RectangularCholeskyDecomposition_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_RectangularCholeskyDecomposition_instance_(PyTypeObject *type, PyObject *arg);
      static int t_RectangularCholeskyDecomposition_init_(t_RectangularCholeskyDecomposition *self, PyObject *args, PyObject *kwds);
      static PyObject *t_RectangularCholeskyDecomposition_getRank(t_RectangularCholeskyDecomposition *self);
      static PyObject *t_RectangularCholeskyDecomposition_getRootMatrix(t_RectangularCholeskyDecomposition *self);
      static PyObject *t_RectangularCholeskyDecomposition_get__rank(t_RectangularCholeskyDecomposition *self, void *data);
      static PyObject *t_RectangularCholeskyDecomposition_get__rootMatrix(t_RectangularCholeskyDecomposition *self, void *data);
      static PyGetSetDef t_RectangularCholeskyDecomposition__fields_[] = {
        DECLARE_GET_FIELD(t_RectangularCholeskyDecomposition, rank),
        DECLARE_GET_FIELD(t_RectangularCholeskyDecomposition, rootMatrix),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_RectangularCholeskyDecomposition__methods_[] = {
        DECLARE_METHOD(t_RectangularCholeskyDecomposition, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RectangularCholeskyDecomposition, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_RectangularCholeskyDecomposition, getRank, METH_NOARGS),
        DECLARE_METHOD(t_RectangularCholeskyDecomposition, getRootMatrix, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(RectangularCholeskyDecomposition)[] = {
        { Py_tp_methods, t_RectangularCholeskyDecomposition__methods_ },
        { Py_tp_init, (void *) t_RectangularCholeskyDecomposition_init_ },
        { Py_tp_getset, t_RectangularCholeskyDecomposition__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(RectangularCholeskyDecomposition)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(RectangularCholeskyDecomposition, t_RectangularCholeskyDecomposition, RectangularCholeskyDecomposition);

      void t_RectangularCholeskyDecomposition::install(PyObject *module)
      {
        installType(&PY_TYPE(RectangularCholeskyDecomposition), &PY_TYPE_DEF(RectangularCholeskyDecomposition), module, "RectangularCholeskyDecomposition", 0);
      }

      void t_RectangularCholeskyDecomposition::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(RectangularCholeskyDecomposition), "class_", make_descriptor(RectangularCholeskyDecomposition::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RectangularCholeskyDecomposition), "wrapfn_", make_descriptor(t_RectangularCholeskyDecomposition::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(RectangularCholeskyDecomposition), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_RectangularCholeskyDecomposition_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, RectangularCholeskyDecomposition::initializeClass, 1)))
          return NULL;
        return t_RectangularCholeskyDecomposition::wrap_Object(RectangularCholeskyDecomposition(((t_RectangularCholeskyDecomposition *) arg)->object.this$));
      }
      static PyObject *t_RectangularCholeskyDecomposition_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, RectangularCholeskyDecomposition::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_RectangularCholeskyDecomposition_init_(t_RectangularCholeskyDecomposition *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            RectangularCholeskyDecomposition object((jobject) NULL);

            if (!parseArgs(args, "k", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0))
            {
              INT_CALL(object = RectangularCholeskyDecomposition(a0));
              self->object = object;
              break;
            }
          }
          goto err;
         case 2:
          {
            ::org::hipparchus::linear::RealMatrix a0((jobject) NULL);
            jdouble a1;
            RectangularCholeskyDecomposition object((jobject) NULL);

            if (!parseArgs(args, "kD", ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &a1))
            {
              INT_CALL(object = RectangularCholeskyDecomposition(a0, a1));
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

      static PyObject *t_RectangularCholeskyDecomposition_getRank(t_RectangularCholeskyDecomposition *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRank());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_RectangularCholeskyDecomposition_getRootMatrix(t_RectangularCholeskyDecomposition *self)
      {
        ::org::hipparchus::linear::RealMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getRootMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
      }

      static PyObject *t_RectangularCholeskyDecomposition_get__rank(t_RectangularCholeskyDecomposition *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRank());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_RectangularCholeskyDecomposition_get__rootMatrix(t_RectangularCholeskyDecomposition *self, void *data)
      {
        ::org::hipparchus::linear::RealMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getRootMatrix());
        return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/spherical/oned/ArcsSet$InconsistentStateAt2PiWrapping.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/spherical/oned/Sphere1D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace spherical {
        namespace oned {

          ::java::lang::Class *ArcsSet$InconsistentStateAt2PiWrapping::class$ = NULL;
          jmethodID *ArcsSet$InconsistentStateAt2PiWrapping::mids$ = NULL;
          bool ArcsSet$InconsistentStateAt2PiWrapping::live$ = false;

          jclass ArcsSet$InconsistentStateAt2PiWrapping::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/geometry/spherical/oned/ArcsSet$InconsistentStateAt2PiWrapping");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ArcsSet$InconsistentStateAt2PiWrapping::ArcsSet$InconsistentStateAt2PiWrapping() : ::org::hipparchus::exception::MathIllegalArgumentException(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}
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
      namespace spherical {
        namespace oned {
          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_of_(t_ArcsSet$InconsistentStateAt2PiWrapping *self, PyObject *args);
          static int t_ArcsSet$InconsistentStateAt2PiWrapping_init_(t_ArcsSet$InconsistentStateAt2PiWrapping *self, PyObject *args, PyObject *kwds);
          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_get__parameters_(t_ArcsSet$InconsistentStateAt2PiWrapping *self, void *data);
          static PyGetSetDef t_ArcsSet$InconsistentStateAt2PiWrapping__fields_[] = {
            DECLARE_GET_FIELD(t_ArcsSet$InconsistentStateAt2PiWrapping, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_ArcsSet$InconsistentStateAt2PiWrapping__methods_[] = {
            DECLARE_METHOD(t_ArcsSet$InconsistentStateAt2PiWrapping, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ArcsSet$InconsistentStateAt2PiWrapping, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_ArcsSet$InconsistentStateAt2PiWrapping, of_, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(ArcsSet$InconsistentStateAt2PiWrapping)[] = {
            { Py_tp_methods, t_ArcsSet$InconsistentStateAt2PiWrapping__methods_ },
            { Py_tp_init, (void *) t_ArcsSet$InconsistentStateAt2PiWrapping_init_ },
            { Py_tp_getset, t_ArcsSet$InconsistentStateAt2PiWrapping__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(ArcsSet$InconsistentStateAt2PiWrapping)[] = {
            &PY_TYPE_DEF(::org::hipparchus::exception::MathIllegalArgumentException),
            NULL
          };

          DEFINE_TYPE(ArcsSet$InconsistentStateAt2PiWrapping, t_ArcsSet$InconsistentStateAt2PiWrapping, ArcsSet$InconsistentStateAt2PiWrapping);
          PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping::wrap_Object(const ArcsSet$InconsistentStateAt2PiWrapping& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_ArcsSet$InconsistentStateAt2PiWrapping::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ArcsSet$InconsistentStateAt2PiWrapping *self = (t_ArcsSet$InconsistentStateAt2PiWrapping *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping::wrap_jobject(const jobject& object, PyTypeObject *p0, PyTypeObject *p1)
          {
            PyObject *obj = t_ArcsSet$InconsistentStateAt2PiWrapping::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_ArcsSet$InconsistentStateAt2PiWrapping *self = (t_ArcsSet$InconsistentStateAt2PiWrapping *) obj;
              self->parameters[0] = p0;
              self->parameters[1] = p1;
            }
            return obj;
          }

          void t_ArcsSet$InconsistentStateAt2PiWrapping::install(PyObject *module)
          {
            installType(&PY_TYPE(ArcsSet$InconsistentStateAt2PiWrapping), &PY_TYPE_DEF(ArcsSet$InconsistentStateAt2PiWrapping), module, "ArcsSet$InconsistentStateAt2PiWrapping", 0);
          }

          void t_ArcsSet$InconsistentStateAt2PiWrapping::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet$InconsistentStateAt2PiWrapping), "class_", make_descriptor(ArcsSet$InconsistentStateAt2PiWrapping::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet$InconsistentStateAt2PiWrapping), "wrapfn_", make_descriptor(t_ArcsSet$InconsistentStateAt2PiWrapping::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(ArcsSet$InconsistentStateAt2PiWrapping), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, ArcsSet$InconsistentStateAt2PiWrapping::initializeClass, 1)))
              return NULL;
            return t_ArcsSet$InconsistentStateAt2PiWrapping::wrap_Object(ArcsSet$InconsistentStateAt2PiWrapping(((t_ArcsSet$InconsistentStateAt2PiWrapping *) arg)->object.this$));
          }
          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, ArcsSet$InconsistentStateAt2PiWrapping::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_of_(t_ArcsSet$InconsistentStateAt2PiWrapping *self, PyObject *args)
          {
            if (!parseArg(args, "T", 2, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static int t_ArcsSet$InconsistentStateAt2PiWrapping_init_(t_ArcsSet$InconsistentStateAt2PiWrapping *self, PyObject *args, PyObject *kwds)
          {
            ArcsSet$InconsistentStateAt2PiWrapping object((jobject) NULL);

            INT_CALL(object = ArcsSet$InconsistentStateAt2PiWrapping());
            self->object = object;
            self->parameters[0] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);
            self->parameters[1] = ::org::hipparchus::geometry::spherical::oned::PY_TYPE(Sphere1D);

            return 0;
          }
          static PyObject *t_ArcsSet$InconsistentStateAt2PiWrapping_get__parameters_(t_ArcsSet$InconsistentStateAt2PiWrapping *self, void *data)
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
#include "org/orekit/propagation/analytical/tle/generation/PythonTleGenerationAlgorithm.h"
#include "org/orekit/propagation/analytical/tle/FieldTLE.h"
#include "java/lang/Throwable.h"
#include "org/orekit/propagation/analytical/tle/TLE.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/propagation/analytical/tle/generation/TleGenerationAlgorithm.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {

            ::java::lang::Class *PythonTleGenerationAlgorithm::class$ = NULL;
            jmethodID *PythonTleGenerationAlgorithm::mids$ = NULL;
            bool PythonTleGenerationAlgorithm::live$ = false;

            jclass PythonTleGenerationAlgorithm::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/tle/generation/PythonTleGenerationAlgorithm");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
                mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
                mids$[mid_generate_70bd59273b78d702] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/analytical/tle/FieldTLE;)Lorg/orekit/propagation/analytical/tle/FieldTLE;");
                mids$[mid_generate_129bb6d4ed7ed841] = env->getMethodID(cls, "generate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/tle/TLE;)Lorg/orekit/propagation/analytical/tle/TLE;");
                mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
                mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
                mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            PythonTleGenerationAlgorithm::PythonTleGenerationAlgorithm() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

            void PythonTleGenerationAlgorithm::finalize() const
            {
              env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
            }

            jlong PythonTleGenerationAlgorithm::pythonExtension() const
            {
              return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
            }

            void PythonTleGenerationAlgorithm::pythonExtension(jlong a0) const
            {
              env->callVoidMethod(this$, mids$[mid_pythonExtension_fefb08975c10f0a1], a0);
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
    namespace propagation {
      namespace analytical {
        namespace tle {
          namespace generation {
            static PyObject *t_PythonTleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_PythonTleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg);
            static int t_PythonTleGenerationAlgorithm_init_(t_PythonTleGenerationAlgorithm *self, PyObject *args, PyObject *kwds);
            static PyObject *t_PythonTleGenerationAlgorithm_finalize(t_PythonTleGenerationAlgorithm *self);
            static PyObject *t_PythonTleGenerationAlgorithm_pythonExtension(t_PythonTleGenerationAlgorithm *self, PyObject *args);
            static jobject JNICALL t_PythonTleGenerationAlgorithm_generate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static jobject JNICALL t_PythonTleGenerationAlgorithm_generate1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1);
            static void JNICALL t_PythonTleGenerationAlgorithm_pythonDecRef2(JNIEnv *jenv, jobject jobj);
            static PyObject *t_PythonTleGenerationAlgorithm_get__self(t_PythonTleGenerationAlgorithm *self, void *data);
            static PyGetSetDef t_PythonTleGenerationAlgorithm__fields_[] = {
              DECLARE_GET_FIELD(t_PythonTleGenerationAlgorithm, self),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_PythonTleGenerationAlgorithm__methods_[] = {
              DECLARE_METHOD(t_PythonTleGenerationAlgorithm, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonTleGenerationAlgorithm, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_PythonTleGenerationAlgorithm, finalize, METH_NOARGS),
              DECLARE_METHOD(t_PythonTleGenerationAlgorithm, pythonExtension, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(PythonTleGenerationAlgorithm)[] = {
              { Py_tp_methods, t_PythonTleGenerationAlgorithm__methods_ },
              { Py_tp_init, (void *) t_PythonTleGenerationAlgorithm_init_ },
              { Py_tp_getset, t_PythonTleGenerationAlgorithm__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(PythonTleGenerationAlgorithm)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(PythonTleGenerationAlgorithm, t_PythonTleGenerationAlgorithm, PythonTleGenerationAlgorithm);

            void t_PythonTleGenerationAlgorithm::install(PyObject *module)
            {
              installType(&PY_TYPE(PythonTleGenerationAlgorithm), &PY_TYPE_DEF(PythonTleGenerationAlgorithm), module, "PythonTleGenerationAlgorithm", 1);
            }

            void t_PythonTleGenerationAlgorithm::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTleGenerationAlgorithm), "class_", make_descriptor(PythonTleGenerationAlgorithm::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTleGenerationAlgorithm), "wrapfn_", make_descriptor(t_PythonTleGenerationAlgorithm::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(PythonTleGenerationAlgorithm), "boxfn_", make_descriptor(boxObject));
              jclass cls = env->getClass(PythonTleGenerationAlgorithm::initializeClass);
              JNINativeMethod methods[] = {
                { "generate", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/analytical/tle/FieldTLE;)Lorg/orekit/propagation/analytical/tle/FieldTLE;", (void *) t_PythonTleGenerationAlgorithm_generate0 },
                { "generate", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/propagation/analytical/tle/TLE;)Lorg/orekit/propagation/analytical/tle/TLE;", (void *) t_PythonTleGenerationAlgorithm_generate1 },
                { "pythonDecRef", "()V", (void *) t_PythonTleGenerationAlgorithm_pythonDecRef2 },
              };
              env->registerNatives(cls, methods, 3);
            }

            static PyObject *t_PythonTleGenerationAlgorithm_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, PythonTleGenerationAlgorithm::initializeClass, 1)))
                return NULL;
              return t_PythonTleGenerationAlgorithm::wrap_Object(PythonTleGenerationAlgorithm(((t_PythonTleGenerationAlgorithm *) arg)->object.this$));
            }
            static PyObject *t_PythonTleGenerationAlgorithm_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, PythonTleGenerationAlgorithm::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_PythonTleGenerationAlgorithm_init_(t_PythonTleGenerationAlgorithm *self, PyObject *args, PyObject *kwds)
            {
              PythonTleGenerationAlgorithm object((jobject) NULL);

              INT_CALL(object = PythonTleGenerationAlgorithm());
              self->object = object;

              Py_INCREF((PyObject *) self);
              self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

              return 0;
            }

            static PyObject *t_PythonTleGenerationAlgorithm_finalize(t_PythonTleGenerationAlgorithm *self)
            {
              OBJ_CALL(self->object.finalize());
              Py_RETURN_NONE;
            }

            static PyObject *t_PythonTleGenerationAlgorithm_pythonExtension(t_PythonTleGenerationAlgorithm *self, PyObject *args)
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

            static jobject JNICALL t_PythonTleGenerationAlgorithm_generate0(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonTleGenerationAlgorithm::mids$[PythonTleGenerationAlgorithm::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::propagation::analytical::tle::FieldTLE value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(::org::orekit::propagation::FieldSpacecraftState(a0));
              PyObject *o1 = ::org::orekit::propagation::analytical::tle::t_FieldTLE::wrap_Object(::org::orekit::propagation::analytical::tle::FieldTLE(a1));
              PyObject *result = PyObject_CallMethod(obj, "generate", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::propagation::analytical::tle::FieldTLE::initializeClass, &value))
              {
                throwTypeError("generate", result);
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

            static jobject JNICALL t_PythonTleGenerationAlgorithm_generate1(JNIEnv *jenv, jobject jobj, jobject a0, jobject a1)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonTleGenerationAlgorithm::mids$[PythonTleGenerationAlgorithm::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
              PythonGIL gil(jenv);
              ::org::orekit::propagation::analytical::tle::TLE value((jobject) NULL);
              PyObject *o0 = ::org::orekit::propagation::t_SpacecraftState::wrap_Object(::org::orekit::propagation::SpacecraftState(a0));
              PyObject *o1 = ::org::orekit::propagation::analytical::tle::t_TLE::wrap_Object(::org::orekit::propagation::analytical::tle::TLE(a1));
              PyObject *result = PyObject_CallMethod(obj, "generate", "OO", o0, o1);
              Py_DECREF(o0);
              Py_DECREF(o1);
              if (!result)
                throwPythonError();
              else if (parseArg(result, "k", ::org::orekit::propagation::analytical::tle::TLE::initializeClass, &value))
              {
                throwTypeError("generate", result);
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

            static void JNICALL t_PythonTleGenerationAlgorithm_pythonDecRef2(JNIEnv *jenv, jobject jobj)
            {
              jlong ptr = jenv->CallLongMethod(jobj, PythonTleGenerationAlgorithm::mids$[PythonTleGenerationAlgorithm::mid_pythonExtension_a27fc9afd27e559d]);
              PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

              if (obj != NULL)
              {
                jenv->CallVoidMethod(jobj, PythonTleGenerationAlgorithm::mids$[PythonTleGenerationAlgorithm::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
                env->finalizeObject(jenv, obj);
              }
            }

            static PyObject *t_PythonTleGenerationAlgorithm_get__self(t_PythonTleGenerationAlgorithm *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/linear/FieldQRDecomposer.h"
#include "org/hipparchus/linear/FieldMatrixDecomposer.h"
#include "org/hipparchus/linear/FieldDecompositionSolver.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldQRDecomposer::class$ = NULL;
      jmethodID *FieldQRDecomposer::mids$ = NULL;
      bool FieldQRDecomposer::live$ = false;

      jclass FieldQRDecomposer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldQRDecomposer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_03a16642f77779e7] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_decompose_0fef744431e41279] = env->getMethodID(cls, "decompose", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldDecompositionSolver;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldQRDecomposer::FieldQRDecomposer(const ::org::hipparchus::CalculusFieldElement & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_03a16642f77779e7, a0.this$)) {}

      ::org::hipparchus::linear::FieldDecompositionSolver FieldQRDecomposer::decompose(const ::org::hipparchus::linear::FieldMatrix & a0) const
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
      static PyObject *t_FieldQRDecomposer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldQRDecomposer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldQRDecomposer_of_(t_FieldQRDecomposer *self, PyObject *args);
      static int t_FieldQRDecomposer_init_(t_FieldQRDecomposer *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldQRDecomposer_decompose(t_FieldQRDecomposer *self, PyObject *arg);
      static PyObject *t_FieldQRDecomposer_get__parameters_(t_FieldQRDecomposer *self, void *data);
      static PyGetSetDef t_FieldQRDecomposer__fields_[] = {
        DECLARE_GET_FIELD(t_FieldQRDecomposer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldQRDecomposer__methods_[] = {
        DECLARE_METHOD(t_FieldQRDecomposer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldQRDecomposer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldQRDecomposer, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldQRDecomposer, decompose, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldQRDecomposer)[] = {
        { Py_tp_methods, t_FieldQRDecomposer__methods_ },
        { Py_tp_init, (void *) t_FieldQRDecomposer_init_ },
        { Py_tp_getset, t_FieldQRDecomposer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldQRDecomposer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldQRDecomposer, t_FieldQRDecomposer, FieldQRDecomposer);
      PyObject *t_FieldQRDecomposer::wrap_Object(const FieldQRDecomposer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldQRDecomposer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldQRDecomposer *self = (t_FieldQRDecomposer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldQRDecomposer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldQRDecomposer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldQRDecomposer *self = (t_FieldQRDecomposer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldQRDecomposer::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldQRDecomposer), &PY_TYPE_DEF(FieldQRDecomposer), module, "FieldQRDecomposer", 0);
      }

      void t_FieldQRDecomposer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldQRDecomposer), "class_", make_descriptor(FieldQRDecomposer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldQRDecomposer), "wrapfn_", make_descriptor(t_FieldQRDecomposer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldQRDecomposer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldQRDecomposer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldQRDecomposer::initializeClass, 1)))
          return NULL;
        return t_FieldQRDecomposer::wrap_Object(FieldQRDecomposer(((t_FieldQRDecomposer *) arg)->object.this$));
      }
      static PyObject *t_FieldQRDecomposer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldQRDecomposer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldQRDecomposer_of_(t_FieldQRDecomposer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldQRDecomposer_init_(t_FieldQRDecomposer *self, PyObject *args, PyObject *kwds)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        FieldQRDecomposer object((jobject) NULL);

        if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          INT_CALL(object = FieldQRDecomposer(a0));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldQRDecomposer_decompose(t_FieldQRDecomposer *self, PyObject *arg)
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
      static PyObject *t_FieldQRDecomposer_get__parameters_(t_FieldQRDecomposer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/sp3/SP3Coordinate.h"
#include "org/orekit/files/sp3/SP3Coordinate.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/lang/Class.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace sp3 {

        ::java::lang::Class *SP3Coordinate::class$ = NULL;
        jmethodID *SP3Coordinate::mids$ = NULL;
        bool SP3Coordinate::live$ = false;
        SP3Coordinate *SP3Coordinate::DUMMY = NULL;

        jclass SP3Coordinate::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/sp3/SP3Coordinate");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_b0c44638f17df340] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;DDDDZZZZ)V");
            mids$[mid_getClockAccuracy_456d9a2f64d6b28d] = env->getMethodID(cls, "getClockAccuracy", "()D");
            mids$[mid_getClockCorrection_456d9a2f64d6b28d] = env->getMethodID(cls, "getClockCorrection", "()D");
            mids$[mid_getClockRateAccuracy_456d9a2f64d6b28d] = env->getMethodID(cls, "getClockRateAccuracy", "()D");
            mids$[mid_getClockRateChange_456d9a2f64d6b28d] = env->getMethodID(cls, "getClockRateChange", "()D");
            mids$[mid_getPositionAccuracy_17a952530a808943] = env->getMethodID(cls, "getPositionAccuracy", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getVelocityAccuracy_17a952530a808943] = env->getMethodID(cls, "getVelocityAccuracy", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_hasClockEvent_e470b6d9e0d979db] = env->getMethodID(cls, "hasClockEvent", "()Z");
            mids$[mid_hasClockPrediction_e470b6d9e0d979db] = env->getMethodID(cls, "hasClockPrediction", "()Z");
            mids$[mid_hasOrbitManeuverEvent_e470b6d9e0d979db] = env->getMethodID(cls, "hasOrbitManeuverEvent", "()Z");
            mids$[mid_hasOrbitPrediction_e470b6d9e0d979db] = env->getMethodID(cls, "hasOrbitPrediction", "()Z");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DUMMY = new SP3Coordinate(env->getStaticObjectField(cls, "DUMMY", "Lorg/orekit/files/sp3/SP3Coordinate;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SP3Coordinate::SP3Coordinate(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a3, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a4, jdouble a5, jdouble a6, jdouble a7, jdouble a8, jboolean a9, jboolean a10, jboolean a11, jboolean a12) : ::org::orekit::utils::TimeStampedPVCoordinates(env->newObject(initializeClass, &mids$, mid_init$_b0c44638f17df340, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5, a6, a7, a8, a9, a10, a11, a12)) {}

        jdouble SP3Coordinate::getClockAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getClockAccuracy_456d9a2f64d6b28d]);
        }

        jdouble SP3Coordinate::getClockCorrection() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getClockCorrection_456d9a2f64d6b28d]);
        }

        jdouble SP3Coordinate::getClockRateAccuracy() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getClockRateAccuracy_456d9a2f64d6b28d]);
        }

        jdouble SP3Coordinate::getClockRateChange() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getClockRateChange_456d9a2f64d6b28d]);
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SP3Coordinate::getPositionAccuracy() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getPositionAccuracy_17a952530a808943]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SP3Coordinate::getVelocityAccuracy() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getVelocityAccuracy_17a952530a808943]));
        }

        jboolean SP3Coordinate::hasClockEvent() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasClockEvent_e470b6d9e0d979db]);
        }

        jboolean SP3Coordinate::hasClockPrediction() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasClockPrediction_e470b6d9e0d979db]);
        }

        jboolean SP3Coordinate::hasOrbitManeuverEvent() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasOrbitManeuverEvent_e470b6d9e0d979db]);
        }

        jboolean SP3Coordinate::hasOrbitPrediction() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasOrbitPrediction_e470b6d9e0d979db]);
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
        static PyObject *t_SP3Coordinate_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SP3Coordinate_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SP3Coordinate_init_(t_SP3Coordinate *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SP3Coordinate_getClockAccuracy(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_getClockCorrection(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_getClockRateAccuracy(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_getClockRateChange(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_getPositionAccuracy(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_getVelocityAccuracy(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_hasClockEvent(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_hasClockPrediction(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_hasOrbitManeuverEvent(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_hasOrbitPrediction(t_SP3Coordinate *self);
        static PyObject *t_SP3Coordinate_get__clockAccuracy(t_SP3Coordinate *self, void *data);
        static PyObject *t_SP3Coordinate_get__clockCorrection(t_SP3Coordinate *self, void *data);
        static PyObject *t_SP3Coordinate_get__clockRateAccuracy(t_SP3Coordinate *self, void *data);
        static PyObject *t_SP3Coordinate_get__clockRateChange(t_SP3Coordinate *self, void *data);
        static PyObject *t_SP3Coordinate_get__positionAccuracy(t_SP3Coordinate *self, void *data);
        static PyObject *t_SP3Coordinate_get__velocityAccuracy(t_SP3Coordinate *self, void *data);
        static PyGetSetDef t_SP3Coordinate__fields_[] = {
          DECLARE_GET_FIELD(t_SP3Coordinate, clockAccuracy),
          DECLARE_GET_FIELD(t_SP3Coordinate, clockCorrection),
          DECLARE_GET_FIELD(t_SP3Coordinate, clockRateAccuracy),
          DECLARE_GET_FIELD(t_SP3Coordinate, clockRateChange),
          DECLARE_GET_FIELD(t_SP3Coordinate, positionAccuracy),
          DECLARE_GET_FIELD(t_SP3Coordinate, velocityAccuracy),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SP3Coordinate__methods_[] = {
          DECLARE_METHOD(t_SP3Coordinate, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Coordinate, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SP3Coordinate, getClockAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, getClockCorrection, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, getClockRateAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, getClockRateChange, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, getPositionAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, getVelocityAccuracy, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, hasClockEvent, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, hasClockPrediction, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, hasOrbitManeuverEvent, METH_NOARGS),
          DECLARE_METHOD(t_SP3Coordinate, hasOrbitPrediction, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SP3Coordinate)[] = {
          { Py_tp_methods, t_SP3Coordinate__methods_ },
          { Py_tp_init, (void *) t_SP3Coordinate_init_ },
          { Py_tp_getset, t_SP3Coordinate__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SP3Coordinate)[] = {
          &PY_TYPE_DEF(::org::orekit::utils::TimeStampedPVCoordinates),
          NULL
        };

        DEFINE_TYPE(SP3Coordinate, t_SP3Coordinate, SP3Coordinate);

        void t_SP3Coordinate::install(PyObject *module)
        {
          installType(&PY_TYPE(SP3Coordinate), &PY_TYPE_DEF(SP3Coordinate), module, "SP3Coordinate", 0);
        }

        void t_SP3Coordinate::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Coordinate), "class_", make_descriptor(SP3Coordinate::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Coordinate), "wrapfn_", make_descriptor(t_SP3Coordinate::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Coordinate), "boxfn_", make_descriptor(boxObject));
          env->getClass(SP3Coordinate::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(SP3Coordinate), "DUMMY", make_descriptor(t_SP3Coordinate::wrap_Object(*SP3Coordinate::DUMMY)));
        }

        static PyObject *t_SP3Coordinate_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SP3Coordinate::initializeClass, 1)))
            return NULL;
          return t_SP3Coordinate::wrap_Object(SP3Coordinate(((t_SP3Coordinate *) arg)->object.this$));
        }
        static PyObject *t_SP3Coordinate_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SP3Coordinate::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SP3Coordinate_init_(t_SP3Coordinate *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a3((jobject) NULL);
          ::org::hipparchus::geometry::euclidean::threed::Vector3D a4((jobject) NULL);
          jdouble a5;
          jdouble a6;
          jdouble a7;
          jdouble a8;
          jboolean a9;
          jboolean a10;
          jboolean a11;
          jboolean a12;
          SP3Coordinate object((jobject) NULL);

          if (!parseArgs(args, "kkkkkDDDDZZZZ", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10, &a11, &a12))
          {
            INT_CALL(object = SP3Coordinate(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_SP3Coordinate_getClockAccuracy(t_SP3Coordinate *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getClockAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Coordinate_getClockCorrection(t_SP3Coordinate *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getClockCorrection());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Coordinate_getClockRateAccuracy(t_SP3Coordinate *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getClockRateAccuracy());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Coordinate_getClockRateChange(t_SP3Coordinate *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getClockRateChange());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_SP3Coordinate_getPositionAccuracy(t_SP3Coordinate *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getPositionAccuracy());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SP3Coordinate_getVelocityAccuracy(t_SP3Coordinate *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getVelocityAccuracy());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SP3Coordinate_hasClockEvent(t_SP3Coordinate *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasClockEvent());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SP3Coordinate_hasClockPrediction(t_SP3Coordinate *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasClockPrediction());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SP3Coordinate_hasOrbitManeuverEvent(t_SP3Coordinate *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasOrbitManeuverEvent());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SP3Coordinate_hasOrbitPrediction(t_SP3Coordinate *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasOrbitPrediction());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_SP3Coordinate_get__clockAccuracy(t_SP3Coordinate *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getClockAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SP3Coordinate_get__clockCorrection(t_SP3Coordinate *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getClockCorrection());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SP3Coordinate_get__clockRateAccuracy(t_SP3Coordinate *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getClockRateAccuracy());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SP3Coordinate_get__clockRateChange(t_SP3Coordinate *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getClockRateChange());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_SP3Coordinate_get__positionAccuracy(t_SP3Coordinate *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAccuracy());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SP3Coordinate_get__velocityAccuracy(t_SP3Coordinate *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getVelocityAccuracy());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/TurnAroundRange.h"
#include "org/orekit/estimation/measurements/ObservableSatellite.h"
#include "org/orekit/estimation/measurements/TurnAroundRange.h"
#include "java/lang/Class.h"
#include "org/orekit/estimation/measurements/GroundStation.h"
#include "java/lang/String.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {

        ::java::lang::Class *TurnAroundRange::class$ = NULL;
        jmethodID *TurnAroundRange::mids$ = NULL;
        bool TurnAroundRange::live$ = false;
        ::java::lang::String *TurnAroundRange::MEASUREMENT_TYPE = NULL;

        jclass TurnAroundRange::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/TurnAroundRange");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_09e77fb07b836cc0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/estimation/measurements/GroundStation;Lorg/orekit/time/AbsoluteDate;DDDLorg/orekit/estimation/measurements/ObservableSatellite;)V");
            mids$[mid_getPrimaryStation_4a0fede0c03d79b0] = env->getMethodID(cls, "getPrimaryStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_getSecondaryStation_4a0fede0c03d79b0] = env->getMethodID(cls, "getSecondaryStation", "()Lorg/orekit/estimation/measurements/GroundStation;");
            mids$[mid_theoreticalEvaluationWithoutDerivatives_c188a3b50efa39a5] = env->getMethodID(cls, "theoreticalEvaluationWithoutDerivatives", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;");
            mids$[mid_theoreticalEvaluation_9d5a7270ffb14a9e] = env->getMethodID(cls, "theoreticalEvaluation", "(II[Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/estimation/measurements/EstimatedMeasurement;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            MEASUREMENT_TYPE = new ::java::lang::String(env->getStaticObjectField(cls, "MEASUREMENT_TYPE", "Ljava/lang/String;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        TurnAroundRange::TurnAroundRange(const ::org::orekit::estimation::measurements::GroundStation & a0, const ::org::orekit::estimation::measurements::GroundStation & a1, const ::org::orekit::time::AbsoluteDate & a2, jdouble a3, jdouble a4, jdouble a5, const ::org::orekit::estimation::measurements::ObservableSatellite & a6) : ::org::orekit::estimation::measurements::GroundReceiverMeasurement(env->newObject(initializeClass, &mids$, mid_init$_09e77fb07b836cc0, a0.this$, a1.this$, a2.this$, a3, a4, a5, a6.this$)) {}

        ::org::orekit::estimation::measurements::GroundStation TurnAroundRange::getPrimaryStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getPrimaryStation_4a0fede0c03d79b0]));
        }

        ::org::orekit::estimation::measurements::GroundStation TurnAroundRange::getSecondaryStation() const
        {
          return ::org::orekit::estimation::measurements::GroundStation(env->callObjectMethod(this$, mids$[mid_getSecondaryStation_4a0fede0c03d79b0]));
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
        static PyObject *t_TurnAroundRange_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TurnAroundRange_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_TurnAroundRange_of_(t_TurnAroundRange *self, PyObject *args);
        static int t_TurnAroundRange_init_(t_TurnAroundRange *self, PyObject *args, PyObject *kwds);
        static PyObject *t_TurnAroundRange_getPrimaryStation(t_TurnAroundRange *self);
        static PyObject *t_TurnAroundRange_getSecondaryStation(t_TurnAroundRange *self);
        static PyObject *t_TurnAroundRange_get__primaryStation(t_TurnAroundRange *self, void *data);
        static PyObject *t_TurnAroundRange_get__secondaryStation(t_TurnAroundRange *self, void *data);
        static PyObject *t_TurnAroundRange_get__parameters_(t_TurnAroundRange *self, void *data);
        static PyGetSetDef t_TurnAroundRange__fields_[] = {
          DECLARE_GET_FIELD(t_TurnAroundRange, primaryStation),
          DECLARE_GET_FIELD(t_TurnAroundRange, secondaryStation),
          DECLARE_GET_FIELD(t_TurnAroundRange, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_TurnAroundRange__methods_[] = {
          DECLARE_METHOD(t_TurnAroundRange, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TurnAroundRange, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_TurnAroundRange, of_, METH_VARARGS),
          DECLARE_METHOD(t_TurnAroundRange, getPrimaryStation, METH_NOARGS),
          DECLARE_METHOD(t_TurnAroundRange, getSecondaryStation, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(TurnAroundRange)[] = {
          { Py_tp_methods, t_TurnAroundRange__methods_ },
          { Py_tp_init, (void *) t_TurnAroundRange_init_ },
          { Py_tp_getset, t_TurnAroundRange__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(TurnAroundRange)[] = {
          &PY_TYPE_DEF(::org::orekit::estimation::measurements::GroundReceiverMeasurement),
          NULL
        };

        DEFINE_TYPE(TurnAroundRange, t_TurnAroundRange, TurnAroundRange);
        PyObject *t_TurnAroundRange::wrap_Object(const TurnAroundRange& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TurnAroundRange::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TurnAroundRange *self = (t_TurnAroundRange *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_TurnAroundRange::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_TurnAroundRange::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_TurnAroundRange *self = (t_TurnAroundRange *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_TurnAroundRange::install(PyObject *module)
        {
          installType(&PY_TYPE(TurnAroundRange), &PY_TYPE_DEF(TurnAroundRange), module, "TurnAroundRange", 0);
        }

        void t_TurnAroundRange::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRange), "class_", make_descriptor(TurnAroundRange::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRange), "wrapfn_", make_descriptor(t_TurnAroundRange::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRange), "boxfn_", make_descriptor(boxObject));
          env->getClass(TurnAroundRange::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(TurnAroundRange), "MEASUREMENT_TYPE", make_descriptor(j2p(*TurnAroundRange::MEASUREMENT_TYPE)));
        }

        static PyObject *t_TurnAroundRange_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, TurnAroundRange::initializeClass, 1)))
            return NULL;
          return t_TurnAroundRange::wrap_Object(TurnAroundRange(((t_TurnAroundRange *) arg)->object.this$));
        }
        static PyObject *t_TurnAroundRange_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, TurnAroundRange::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_TurnAroundRange_of_(t_TurnAroundRange *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_TurnAroundRange_init_(t_TurnAroundRange *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::estimation::measurements::GroundStation a0((jobject) NULL);
          ::org::orekit::estimation::measurements::GroundStation a1((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a2((jobject) NULL);
          jdouble a3;
          jdouble a4;
          jdouble a5;
          ::org::orekit::estimation::measurements::ObservableSatellite a6((jobject) NULL);
          TurnAroundRange object((jobject) NULL);

          if (!parseArgs(args, "kkkDDDk", ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::estimation::measurements::GroundStation::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::estimation::measurements::ObservableSatellite::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
          {
            INT_CALL(object = TurnAroundRange(a0, a1, a2, a3, a4, a5, a6));
            self->object = object;
            self->parameters[0] = ::org::orekit::estimation::measurements::PY_TYPE(TurnAroundRange);
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_TurnAroundRange_getPrimaryStation(t_TurnAroundRange *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getPrimaryStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }

        static PyObject *t_TurnAroundRange_getSecondaryStation(t_TurnAroundRange *self)
        {
          ::org::orekit::estimation::measurements::GroundStation result((jobject) NULL);
          OBJ_CALL(result = self->object.getSecondaryStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(result);
        }
        static PyObject *t_TurnAroundRange_get__parameters_(t_TurnAroundRange *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_TurnAroundRange_get__primaryStation(t_TurnAroundRange *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getPrimaryStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }

        static PyObject *t_TurnAroundRange_get__secondaryStation(t_TurnAroundRange *self, void *data)
        {
          ::org::orekit::estimation::measurements::GroundStation value((jobject) NULL);
          OBJ_CALL(value = self->object.getSecondaryStation());
          return ::org::orekit::estimation::measurements::t_GroundStation::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/elliptic/jacobi/FieldCopolarS.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {
      namespace elliptic {
        namespace jacobi {

          ::java::lang::Class *FieldCopolarS::class$ = NULL;
          jmethodID *FieldCopolarS::mids$ = NULL;
          bool FieldCopolarS::live$ = false;

          jclass FieldCopolarS::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/hipparchus/special/elliptic/jacobi/FieldCopolarS");

              mids$ = new jmethodID[max_mid];
              mids$[mid_cs_e6d4d3215c30992a] = env->getMethodID(cls, "cs", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_ds_e6d4d3215c30992a] = env->getMethodID(cls, "ds", "()Lorg/hipparchus/CalculusFieldElement;");
              mids$[mid_ns_e6d4d3215c30992a] = env->getMethodID(cls, "ns", "()Lorg/hipparchus/CalculusFieldElement;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarS::cs() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_cs_e6d4d3215c30992a]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarS::ds() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_ds_e6d4d3215c30992a]));
          }

          ::org::hipparchus::CalculusFieldElement FieldCopolarS::ns() const
          {
            return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_ns_e6d4d3215c30992a]));
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
        namespace jacobi {
          static PyObject *t_FieldCopolarS_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarS_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldCopolarS_of_(t_FieldCopolarS *self, PyObject *args);
          static PyObject *t_FieldCopolarS_cs(t_FieldCopolarS *self);
          static PyObject *t_FieldCopolarS_ds(t_FieldCopolarS *self);
          static PyObject *t_FieldCopolarS_ns(t_FieldCopolarS *self);
          static PyObject *t_FieldCopolarS_get__parameters_(t_FieldCopolarS *self, void *data);
          static PyGetSetDef t_FieldCopolarS__fields_[] = {
            DECLARE_GET_FIELD(t_FieldCopolarS, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldCopolarS__methods_[] = {
            DECLARE_METHOD(t_FieldCopolarS, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarS, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldCopolarS, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldCopolarS, cs, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarS, ds, METH_NOARGS),
            DECLARE_METHOD(t_FieldCopolarS, ns, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldCopolarS)[] = {
            { Py_tp_methods, t_FieldCopolarS__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldCopolarS__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldCopolarS)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldCopolarS, t_FieldCopolarS, FieldCopolarS);
          PyObject *t_FieldCopolarS::wrap_Object(const FieldCopolarS& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarS::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarS *self = (t_FieldCopolarS *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldCopolarS::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldCopolarS::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldCopolarS *self = (t_FieldCopolarS *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldCopolarS::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldCopolarS), &PY_TYPE_DEF(FieldCopolarS), module, "FieldCopolarS", 0);
          }

          void t_FieldCopolarS::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarS), "class_", make_descriptor(FieldCopolarS::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarS), "wrapfn_", make_descriptor(t_FieldCopolarS::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldCopolarS), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldCopolarS_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldCopolarS::initializeClass, 1)))
              return NULL;
            return t_FieldCopolarS::wrap_Object(FieldCopolarS(((t_FieldCopolarS *) arg)->object.this$));
          }
          static PyObject *t_FieldCopolarS_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldCopolarS::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldCopolarS_of_(t_FieldCopolarS *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldCopolarS_cs(t_FieldCopolarS *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.cs());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarS_ds(t_FieldCopolarS *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.ds());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          static PyObject *t_FieldCopolarS_ns(t_FieldCopolarS *self)
          {
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
            OBJ_CALL(result = self->object.ns());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }
          static PyObject *t_FieldCopolarS_get__parameters_(t_FieldCopolarS *self, void *data)
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
#include "org/hipparchus/analysis/interpolation/UnivariatePeriodicInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *UnivariatePeriodicInterpolator::class$ = NULL;
        jmethodID *UnivariatePeriodicInterpolator::mids$ = NULL;
        bool UnivariatePeriodicInterpolator::live$ = false;
        jint UnivariatePeriodicInterpolator::DEFAULT_EXTEND = (jint) 0;

        jclass UnivariatePeriodicInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/UnivariatePeriodicInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_829c3d5df327ad84] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/interpolation/UnivariateInterpolator;D)V");
            mids$[mid_init$_0743fafa735d2b7c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/interpolation/UnivariateInterpolator;DI)V");
            mids$[mid_interpolate_892e3f95ace99810] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/UnivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            DEFAULT_EXTEND = env->getStaticIntField(cls, "DEFAULT_EXTEND");
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        UnivariatePeriodicInterpolator::UnivariatePeriodicInterpolator(const ::org::hipparchus::analysis::interpolation::UnivariateInterpolator & a0, jdouble a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_829c3d5df327ad84, a0.this$, a1)) {}

        UnivariatePeriodicInterpolator::UnivariatePeriodicInterpolator(const ::org::hipparchus::analysis::interpolation::UnivariateInterpolator & a0, jdouble a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0743fafa735d2b7c, a0.this$, a1, a2)) {}

        ::org::hipparchus::analysis::UnivariateFunction UnivariatePeriodicInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::UnivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_892e3f95ace99810], a0.this$, a1.this$));
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
        static PyObject *t_UnivariatePeriodicInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariatePeriodicInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static int t_UnivariatePeriodicInterpolator_init_(t_UnivariatePeriodicInterpolator *self, PyObject *args, PyObject *kwds);
        static PyObject *t_UnivariatePeriodicInterpolator_interpolate(t_UnivariatePeriodicInterpolator *self, PyObject *args);

        static PyMethodDef t_UnivariatePeriodicInterpolator__methods_[] = {
          DECLARE_METHOD(t_UnivariatePeriodicInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariatePeriodicInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariatePeriodicInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariatePeriodicInterpolator)[] = {
          { Py_tp_methods, t_UnivariatePeriodicInterpolator__methods_ },
          { Py_tp_init, (void *) t_UnivariatePeriodicInterpolator_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariatePeriodicInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariatePeriodicInterpolator, t_UnivariatePeriodicInterpolator, UnivariatePeriodicInterpolator);

        void t_UnivariatePeriodicInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariatePeriodicInterpolator), &PY_TYPE_DEF(UnivariatePeriodicInterpolator), module, "UnivariatePeriodicInterpolator", 0);
        }

        void t_UnivariatePeriodicInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePeriodicInterpolator), "class_", make_descriptor(UnivariatePeriodicInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePeriodicInterpolator), "wrapfn_", make_descriptor(t_UnivariatePeriodicInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePeriodicInterpolator), "boxfn_", make_descriptor(boxObject));
          env->getClass(UnivariatePeriodicInterpolator::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariatePeriodicInterpolator), "DEFAULT_EXTEND", make_descriptor(UnivariatePeriodicInterpolator::DEFAULT_EXTEND));
        }

        static PyObject *t_UnivariatePeriodicInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariatePeriodicInterpolator::initializeClass, 1)))
            return NULL;
          return t_UnivariatePeriodicInterpolator::wrap_Object(UnivariatePeriodicInterpolator(((t_UnivariatePeriodicInterpolator *) arg)->object.this$));
        }
        static PyObject *t_UnivariatePeriodicInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariatePeriodicInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_UnivariatePeriodicInterpolator_init_(t_UnivariatePeriodicInterpolator *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::hipparchus::analysis::interpolation::UnivariateInterpolator a0((jobject) NULL);
              jdouble a1;
              UnivariatePeriodicInterpolator object((jobject) NULL);

              if (!parseArgs(args, "kD", ::org::hipparchus::analysis::interpolation::UnivariateInterpolator::initializeClass, &a0, &a1))
              {
                INT_CALL(object = UnivariatePeriodicInterpolator(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::analysis::interpolation::UnivariateInterpolator a0((jobject) NULL);
              jdouble a1;
              jint a2;
              UnivariatePeriodicInterpolator object((jobject) NULL);

              if (!parseArgs(args, "kDI", ::org::hipparchus::analysis::interpolation::UnivariateInterpolator::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = UnivariatePeriodicInterpolator(a0, a1, a2));
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

        static PyObject *t_UnivariatePeriodicInterpolator_interpolate(t_UnivariatePeriodicInterpolator *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::analysis::UnivariateFunction result((jobject) NULL);

          if (!parseArgs(args, "[D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.interpolate(a0, a1));
            return ::org::hipparchus::analysis::t_UnivariateFunction::wrap_Object(result);
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
#include "org/orekit/files/ccsds/ndm/cdm/CdmData.h"
#include "org/orekit/files/ccsds/ndm/cdm/XYZCovariance.h"
#include "org/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata.h"
#include "org/orekit/files/ccsds/ndm/cdm/ODParameters.h"
#include "java/util/List.h"
#include "org/orekit/files/ccsds/ndm/odm/UserDefined.h"
#include "org/orekit/files/ccsds/ndm/cdm/AdditionalParameters.h"
#include "org/orekit/files/ccsds/ndm/cdm/StateVector.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ccsds/section/CommentsContainer.h"
#include "java/lang/String.h"
#include "org/orekit/files/ccsds/ndm/cdm/RTNCovariance.h"
#include "org/orekit/files/ccsds/section/Data.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ccsds {
        namespace ndm {
          namespace cdm {

            ::java::lang::Class *CdmData::class$ = NULL;
            jmethodID *CdmData::mids$ = NULL;
            bool CdmData::live$ = false;

            jclass CdmData::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/files/ccsds/ndm/cdm/CdmData");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_bdfbbdb034a40897] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/CommentsContainer;Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;Lorg/orekit/files/ccsds/ndm/cdm/StateVector;Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;)V");
                mids$[mid_init$_ec942cc08a3afbcf] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/CommentsContainer;Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;Lorg/orekit/files/ccsds/ndm/cdm/StateVector;Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata;)V");
                mids$[mid_init$_113f8f0b5b4598cc] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/CommentsContainer;Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;Lorg/orekit/files/ccsds/ndm/cdm/StateVector;Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;Lorg/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata;)V");
                mids$[mid_init$_4d8570b5345d78e3] = env->getMethodID(cls, "<init>", "(Lorg/orekit/files/ccsds/section/CommentsContainer;Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;Lorg/orekit/files/ccsds/ndm/cdm/StateVector;Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;Lorg/orekit/files/ccsds/ndm/cdm/XYZCovariance;Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata;)V");
                mids$[mid_getAdditionalCovMetadataBlock_af8dc20564ce39e9] = env->getMethodID(cls, "getAdditionalCovMetadataBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/AdditionalCovarianceMetadata;");
                mids$[mid_getAdditionalParametersBlock_8ad46c056a31e1cb] = env->getMethodID(cls, "getAdditionalParametersBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;");
                mids$[mid_getComments_a6156df500549a58] = env->getMethodID(cls, "getComments", "()Ljava/util/List;");
                mids$[mid_getODParametersBlock_2a2a446c7c26cc29] = env->getMethodID(cls, "getODParametersBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;");
                mids$[mid_getRTNCovarianceBlock_4c85633c66cdc0a0] = env->getMethodID(cls, "getRTNCovarianceBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;");
                mids$[mid_getSig3EigVec3CovarianceBlock_4c4164cb29982aa0] = env->getMethodID(cls, "getSig3EigVec3CovarianceBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/SigmaEigenvectorsCovariance;");
                mids$[mid_getStateVectorBlock_2a0e2401a86f3fde] = env->getMethodID(cls, "getStateVectorBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/StateVector;");
                mids$[mid_getUserDefinedBlock_dc0ba09fd1c52b52] = env->getMethodID(cls, "getUserDefinedBlock", "()Lorg/orekit/files/ccsds/ndm/odm/UserDefined;");
                mids$[mid_getXYZCovarianceBlock_15049ef8342f86b0] = env->getMethodID(cls, "getXYZCovarianceBlock", "()Lorg/orekit/files/ccsds/ndm/cdm/XYZCovariance;");
                mids$[mid_setAdditionalParametersBlock_c304bdf0b9a42cdb] = env->getMethodID(cls, "setAdditionalParametersBlock", "(Lorg/orekit/files/ccsds/ndm/cdm/AdditionalParameters;)V");
                mids$[mid_setCovarianceMatrixBlock_218a3259a099f155] = env->getMethodID(cls, "setCovarianceMatrixBlock", "(Lorg/orekit/files/ccsds/ndm/cdm/RTNCovariance;)V");
                mids$[mid_setODParametersBlock_f452d8a949db32bb] = env->getMethodID(cls, "setODParametersBlock", "(Lorg/orekit/files/ccsds/ndm/cdm/ODParameters;)V");
                mids$[mid_setUserDefinedBlock_ca39a23845b77eab] = env->getMethodID(cls, "setUserDefinedBlock", "(Lorg/orekit/files/ccsds/ndm/odm/UserDefined;)V");
                mids$[mid_validate_77e0f9a1f260e2e5] = env->getMethodID(cls, "validate", "(D)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CdmData::CdmData(const ::org::orekit::files::ccsds::section::CommentsContainer & a0, const ::org::orekit::files::ccsds::ndm::cdm::ODParameters & a1, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters & a2, const ::org::orekit::files::ccsds::ndm::cdm::StateVector & a3, const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bdfbbdb034a40897, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

            CdmData::CdmData(const ::org::orekit::files::ccsds::section::CommentsContainer & a0, const ::org::orekit::files::ccsds::ndm::cdm::ODParameters & a1, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters & a2, const ::org::orekit::files::ccsds::ndm::cdm::StateVector & a3, const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance & a4, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata & a5) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_ec942cc08a3afbcf, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$)) {}

            CdmData::CdmData(const ::org::orekit::files::ccsds::section::CommentsContainer & a0, const ::org::orekit::files::ccsds::ndm::cdm::ODParameters & a1, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters & a2, const ::org::orekit::files::ccsds::ndm::cdm::StateVector & a3, const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance & a4, const ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance & a5, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_113f8f0b5b4598cc, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

            CdmData::CdmData(const ::org::orekit::files::ccsds::section::CommentsContainer & a0, const ::org::orekit::files::ccsds::ndm::cdm::ODParameters & a1, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters & a2, const ::org::orekit::files::ccsds::ndm::cdm::StateVector & a3, const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance & a4, const ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance & a5, const ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata & a6) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4d8570b5345d78e3, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$)) {}

            ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata CdmData::getAdditionalCovMetadataBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata(env->callObjectMethod(this$, mids$[mid_getAdditionalCovMetadataBlock_af8dc20564ce39e9]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters CdmData::getAdditionalParametersBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters(env->callObjectMethod(this$, mids$[mid_getAdditionalParametersBlock_8ad46c056a31e1cb]));
            }

            ::java::util::List CdmData::getComments() const
            {
              return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getComments_a6156df500549a58]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::ODParameters CdmData::getODParametersBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::ODParameters(env->callObjectMethod(this$, mids$[mid_getODParametersBlock_2a2a446c7c26cc29]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance CdmData::getRTNCovarianceBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance(env->callObjectMethod(this$, mids$[mid_getRTNCovarianceBlock_4c85633c66cdc0a0]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance CdmData::getSig3EigVec3CovarianceBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance(env->callObjectMethod(this$, mids$[mid_getSig3EigVec3CovarianceBlock_4c4164cb29982aa0]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::StateVector CdmData::getStateVectorBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::StateVector(env->callObjectMethod(this$, mids$[mid_getStateVectorBlock_2a0e2401a86f3fde]));
            }

            ::org::orekit::files::ccsds::ndm::odm::UserDefined CdmData::getUserDefinedBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::odm::UserDefined(env->callObjectMethod(this$, mids$[mid_getUserDefinedBlock_dc0ba09fd1c52b52]));
            }

            ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance CdmData::getXYZCovarianceBlock() const
            {
              return ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance(env->callObjectMethod(this$, mids$[mid_getXYZCovarianceBlock_15049ef8342f86b0]));
            }

            void CdmData::setAdditionalParametersBlock(const ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setAdditionalParametersBlock_c304bdf0b9a42cdb], a0.this$);
            }

            void CdmData::setCovarianceMatrixBlock(const ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setCovarianceMatrixBlock_218a3259a099f155], a0.this$);
            }

            void CdmData::setODParametersBlock(const ::org::orekit::files::ccsds::ndm::cdm::ODParameters & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setODParametersBlock_f452d8a949db32bb], a0.this$);
            }

            void CdmData::setUserDefinedBlock(const ::org::orekit::files::ccsds::ndm::odm::UserDefined & a0) const
            {
              env->callVoidMethod(this$, mids$[mid_setUserDefinedBlock_ca39a23845b77eab], a0.this$);
            }

            void CdmData::validate(jdouble a0) const
            {
              env->callVoidMethod(this$, mids$[mid_validate_77e0f9a1f260e2e5], a0);
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
          namespace cdm {
            static PyObject *t_CdmData_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CdmData_instance_(PyTypeObject *type, PyObject *arg);
            static int t_CdmData_init_(t_CdmData *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CdmData_getAdditionalCovMetadataBlock(t_CdmData *self);
            static PyObject *t_CdmData_getAdditionalParametersBlock(t_CdmData *self);
            static PyObject *t_CdmData_getComments(t_CdmData *self);
            static PyObject *t_CdmData_getODParametersBlock(t_CdmData *self);
            static PyObject *t_CdmData_getRTNCovarianceBlock(t_CdmData *self);
            static PyObject *t_CdmData_getSig3EigVec3CovarianceBlock(t_CdmData *self);
            static PyObject *t_CdmData_getStateVectorBlock(t_CdmData *self);
            static PyObject *t_CdmData_getUserDefinedBlock(t_CdmData *self);
            static PyObject *t_CdmData_getXYZCovarianceBlock(t_CdmData *self);
            static PyObject *t_CdmData_setAdditionalParametersBlock(t_CdmData *self, PyObject *arg);
            static PyObject *t_CdmData_setCovarianceMatrixBlock(t_CdmData *self, PyObject *arg);
            static PyObject *t_CdmData_setODParametersBlock(t_CdmData *self, PyObject *arg);
            static PyObject *t_CdmData_setUserDefinedBlock(t_CdmData *self, PyObject *arg);
            static PyObject *t_CdmData_validate(t_CdmData *self, PyObject *arg);
            static PyObject *t_CdmData_get__additionalCovMetadataBlock(t_CdmData *self, void *data);
            static PyObject *t_CdmData_get__additionalParametersBlock(t_CdmData *self, void *data);
            static int t_CdmData_set__additionalParametersBlock(t_CdmData *self, PyObject *arg, void *data);
            static PyObject *t_CdmData_get__comments(t_CdmData *self, void *data);
            static int t_CdmData_set__covarianceMatrixBlock(t_CdmData *self, PyObject *arg, void *data);
            static PyObject *t_CdmData_get__oDParametersBlock(t_CdmData *self, void *data);
            static int t_CdmData_set__oDParametersBlock(t_CdmData *self, PyObject *arg, void *data);
            static PyObject *t_CdmData_get__rTNCovarianceBlock(t_CdmData *self, void *data);
            static PyObject *t_CdmData_get__sig3EigVec3CovarianceBlock(t_CdmData *self, void *data);
            static PyObject *t_CdmData_get__stateVectorBlock(t_CdmData *self, void *data);
            static PyObject *t_CdmData_get__userDefinedBlock(t_CdmData *self, void *data);
            static int t_CdmData_set__userDefinedBlock(t_CdmData *self, PyObject *arg, void *data);
            static PyObject *t_CdmData_get__xYZCovarianceBlock(t_CdmData *self, void *data);
            static PyGetSetDef t_CdmData__fields_[] = {
              DECLARE_GET_FIELD(t_CdmData, additionalCovMetadataBlock),
              DECLARE_GETSET_FIELD(t_CdmData, additionalParametersBlock),
              DECLARE_GET_FIELD(t_CdmData, comments),
              DECLARE_SET_FIELD(t_CdmData, covarianceMatrixBlock),
              DECLARE_GETSET_FIELD(t_CdmData, oDParametersBlock),
              DECLARE_GET_FIELD(t_CdmData, rTNCovarianceBlock),
              DECLARE_GET_FIELD(t_CdmData, sig3EigVec3CovarianceBlock),
              DECLARE_GET_FIELD(t_CdmData, stateVectorBlock),
              DECLARE_GETSET_FIELD(t_CdmData, userDefinedBlock),
              DECLARE_GET_FIELD(t_CdmData, xYZCovarianceBlock),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CdmData__methods_[] = {
              DECLARE_METHOD(t_CdmData, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmData, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CdmData, getAdditionalCovMetadataBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getAdditionalParametersBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getComments, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getODParametersBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getRTNCovarianceBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getSig3EigVec3CovarianceBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getStateVectorBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getUserDefinedBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, getXYZCovarianceBlock, METH_NOARGS),
              DECLARE_METHOD(t_CdmData, setAdditionalParametersBlock, METH_O),
              DECLARE_METHOD(t_CdmData, setCovarianceMatrixBlock, METH_O),
              DECLARE_METHOD(t_CdmData, setODParametersBlock, METH_O),
              DECLARE_METHOD(t_CdmData, setUserDefinedBlock, METH_O),
              DECLARE_METHOD(t_CdmData, validate, METH_O),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CdmData)[] = {
              { Py_tp_methods, t_CdmData__methods_ },
              { Py_tp_init, (void *) t_CdmData_init_ },
              { Py_tp_getset, t_CdmData__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CdmData)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CdmData, t_CdmData, CdmData);

            void t_CdmData::install(PyObject *module)
            {
              installType(&PY_TYPE(CdmData), &PY_TYPE_DEF(CdmData), module, "CdmData", 0);
            }

            void t_CdmData::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmData), "class_", make_descriptor(CdmData::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmData), "wrapfn_", make_descriptor(t_CdmData::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CdmData), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CdmData_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CdmData::initializeClass, 1)))
                return NULL;
              return t_CdmData::wrap_Object(CdmData(((t_CdmData *) arg)->object.this$));
            }
            static PyObject *t_CdmData_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CdmData::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_CdmData_init_(t_CdmData *self, PyObject *args, PyObject *kwds)
            {
              switch (PyTuple_GET_SIZE(args)) {
               case 5:
                {
                  ::org::orekit::files::ccsds::section::CommentsContainer a0((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::ODParameters a1((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters a2((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::StateVector a3((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance a4((jobject) NULL);
                  CdmData object((jobject) NULL);

                  if (!parseArgs(args, "kkkkk", ::org::orekit::files::ccsds::section::CommentsContainer::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::StateVector::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, &a0, &a1, &a2, &a3, &a4))
                  {
                    INT_CALL(object = CdmData(a0, a1, a2, a3, a4));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 6:
                {
                  ::org::orekit::files::ccsds::section::CommentsContainer a0((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::ODParameters a1((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters a2((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::StateVector a3((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance a4((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata a5((jobject) NULL);
                  CdmData object((jobject) NULL);

                  if (!parseArgs(args, "kkkkkk", ::org::orekit::files::ccsds::section::CommentsContainer::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::StateVector::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
                  {
                    INT_CALL(object = CdmData(a0, a1, a2, a3, a4, a5));
                    self->object = object;
                    break;
                  }
                }
                goto err;
               case 7:
                {
                  ::org::orekit::files::ccsds::section::CommentsContainer a0((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::ODParameters a1((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters a2((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::StateVector a3((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance a4((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance a5((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata a6((jobject) NULL);
                  CdmData object((jobject) NULL);

                  if (!parseArgs(args, "kkkkkkk", ::org::orekit::files::ccsds::section::CommentsContainer::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::StateVector::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                  {
                    INT_CALL(object = CdmData(a0, a1, a2, a3, a4, a5, a6));
                    self->object = object;
                    break;
                  }
                }
                {
                  ::org::orekit::files::ccsds::section::CommentsContainer a0((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::ODParameters a1((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters a2((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::StateVector a3((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance a4((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance a5((jobject) NULL);
                  ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata a6((jobject) NULL);
                  CdmData object((jobject) NULL);

                  if (!parseArgs(args, "kkkkkkk", ::org::orekit::files::ccsds::section::CommentsContainer::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::StateVector::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance::initializeClass, ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6))
                  {
                    INT_CALL(object = CdmData(a0, a1, a2, a3, a4, a5, a6));
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

            static PyObject *t_CdmData_getAdditionalCovMetadataBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata result((jobject) NULL);
              OBJ_CALL(result = self->object.getAdditionalCovMetadataBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_AdditionalCovarianceMetadata::wrap_Object(result);
            }

            static PyObject *t_CdmData_getAdditionalParametersBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters result((jobject) NULL);
              OBJ_CALL(result = self->object.getAdditionalParametersBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_AdditionalParameters::wrap_Object(result);
            }

            static PyObject *t_CdmData_getComments(t_CdmData *self)
            {
              ::java::util::List result((jobject) NULL);
              OBJ_CALL(result = self->object.getComments());
              return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
            }

            static PyObject *t_CdmData_getODParametersBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ODParameters result((jobject) NULL);
              OBJ_CALL(result = self->object.getODParametersBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ODParameters::wrap_Object(result);
            }

            static PyObject *t_CdmData_getRTNCovarianceBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance result((jobject) NULL);
              OBJ_CALL(result = self->object.getRTNCovarianceBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_RTNCovariance::wrap_Object(result);
            }

            static PyObject *t_CdmData_getSig3EigVec3CovarianceBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance result((jobject) NULL);
              OBJ_CALL(result = self->object.getSig3EigVec3CovarianceBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_SigmaEigenvectorsCovariance::wrap_Object(result);
            }

            static PyObject *t_CdmData_getStateVectorBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::StateVector result((jobject) NULL);
              OBJ_CALL(result = self->object.getStateVectorBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_StateVector::wrap_Object(result);
            }

            static PyObject *t_CdmData_getUserDefinedBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::odm::UserDefined result((jobject) NULL);
              OBJ_CALL(result = self->object.getUserDefinedBlock());
              return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(result);
            }

            static PyObject *t_CdmData_getXYZCovarianceBlock(t_CdmData *self)
            {
              ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance result((jobject) NULL);
              OBJ_CALL(result = self->object.getXYZCovarianceBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_XYZCovariance::wrap_Object(result);
            }

            static PyObject *t_CdmData_setAdditionalParametersBlock(t_CdmData *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setAdditionalParametersBlock(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setAdditionalParametersBlock", arg);
              return NULL;
            }

            static PyObject *t_CdmData_setCovarianceMatrixBlock(t_CdmData *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setCovarianceMatrixBlock(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setCovarianceMatrixBlock", arg);
              return NULL;
            }

            static PyObject *t_CdmData_setODParametersBlock(t_CdmData *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ODParameters a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setODParametersBlock(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setODParametersBlock", arg);
              return NULL;
            }

            static PyObject *t_CdmData_setUserDefinedBlock(t_CdmData *self, PyObject *arg)
            {
              ::org::orekit::files::ccsds::ndm::odm::UserDefined a0((jobject) NULL);

              if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &a0))
              {
                OBJ_CALL(self->object.setUserDefinedBlock(a0));
                Py_RETURN_NONE;
              }

              PyErr_SetArgsError((PyObject *) self, "setUserDefinedBlock", arg);
              return NULL;
            }

            static PyObject *t_CdmData_validate(t_CdmData *self, PyObject *arg)
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

            static PyObject *t_CdmData_get__additionalCovMetadataBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalCovarianceMetadata value((jobject) NULL);
              OBJ_CALL(value = self->object.getAdditionalCovMetadataBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_AdditionalCovarianceMetadata::wrap_Object(value);
            }

            static PyObject *t_CdmData_get__additionalParametersBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters value((jobject) NULL);
              OBJ_CALL(value = self->object.getAdditionalParametersBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_AdditionalParameters::wrap_Object(value);
            }
            static int t_CdmData_set__additionalParametersBlock(t_CdmData *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::AdditionalParameters::initializeClass, &value))
                {
                  INT_CALL(self->object.setAdditionalParametersBlock(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "additionalParametersBlock", arg);
              return -1;
            }

            static PyObject *t_CdmData_get__comments(t_CdmData *self, void *data)
            {
              ::java::util::List value((jobject) NULL);
              OBJ_CALL(value = self->object.getComments());
              return ::java::util::t_List::wrap_Object(value);
            }

            static int t_CdmData_set__covarianceMatrixBlock(t_CdmData *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance::initializeClass, &value))
                {
                  INT_CALL(self->object.setCovarianceMatrixBlock(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "covarianceMatrixBlock", arg);
              return -1;
            }

            static PyObject *t_CdmData_get__oDParametersBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::ODParameters value((jobject) NULL);
              OBJ_CALL(value = self->object.getODParametersBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_ODParameters::wrap_Object(value);
            }
            static int t_CdmData_set__oDParametersBlock(t_CdmData *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::cdm::ODParameters value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::cdm::ODParameters::initializeClass, &value))
                {
                  INT_CALL(self->object.setODParametersBlock(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "oDParametersBlock", arg);
              return -1;
            }

            static PyObject *t_CdmData_get__rTNCovarianceBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::RTNCovariance value((jobject) NULL);
              OBJ_CALL(value = self->object.getRTNCovarianceBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_RTNCovariance::wrap_Object(value);
            }

            static PyObject *t_CdmData_get__sig3EigVec3CovarianceBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::SigmaEigenvectorsCovariance value((jobject) NULL);
              OBJ_CALL(value = self->object.getSig3EigVec3CovarianceBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_SigmaEigenvectorsCovariance::wrap_Object(value);
            }

            static PyObject *t_CdmData_get__stateVectorBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::StateVector value((jobject) NULL);
              OBJ_CALL(value = self->object.getStateVectorBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_StateVector::wrap_Object(value);
            }

            static PyObject *t_CdmData_get__userDefinedBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::odm::UserDefined value((jobject) NULL);
              OBJ_CALL(value = self->object.getUserDefinedBlock());
              return ::org::orekit::files::ccsds::ndm::odm::t_UserDefined::wrap_Object(value);
            }
            static int t_CdmData_set__userDefinedBlock(t_CdmData *self, PyObject *arg, void *data)
            {
              {
                ::org::orekit::files::ccsds::ndm::odm::UserDefined value((jobject) NULL);
                if (!parseArg(arg, "k", ::org::orekit::files::ccsds::ndm::odm::UserDefined::initializeClass, &value))
                {
                  INT_CALL(self->object.setUserDefinedBlock(value));
                  return 0;
                }
              }
              PyErr_SetArgsError((PyObject *) self, "userDefinedBlock", arg);
              return -1;
            }

            static PyObject *t_CdmData_get__xYZCovarianceBlock(t_CdmData *self, void *data)
            {
              ::org::orekit::files::ccsds::ndm::cdm::XYZCovariance value((jobject) NULL);
              OBJ_CALL(value = self->object.getXYZCovarianceBlock());
              return ::org::orekit::files::ccsds::ndm::cdm::t_XYZCovariance::wrap_Object(value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/SecondOrderODE.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *SecondOrderODE::class$ = NULL;
      jmethodID *SecondOrderODE::mids$ = NULL;
      bool SecondOrderODE::live$ = false;

      jclass SecondOrderODE::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/SecondOrderODE");

          mids$ = new jmethodID[max_mid];
          mids$[mid_computeSecondDerivatives_d93437b20bfdf32a] = env->getMethodID(cls, "computeSecondDerivatives", "(D[D[D)[D");
          mids$[mid_getDimension_f2f64475e4580546] = env->getMethodID(cls, "getDimension", "()I");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< jdouble > SecondOrderODE::computeSecondDerivatives(jdouble a0, const JArray< jdouble > & a1, const JArray< jdouble > & a2) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_computeSecondDerivatives_d93437b20bfdf32a], a0, a1.this$, a2.this$));
      }

      jint SecondOrderODE::getDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getDimension_f2f64475e4580546]);
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
      static PyObject *t_SecondOrderODE_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SecondOrderODE_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SecondOrderODE_computeSecondDerivatives(t_SecondOrderODE *self, PyObject *args);
      static PyObject *t_SecondOrderODE_getDimension(t_SecondOrderODE *self);
      static PyObject *t_SecondOrderODE_get__dimension(t_SecondOrderODE *self, void *data);
      static PyGetSetDef t_SecondOrderODE__fields_[] = {
        DECLARE_GET_FIELD(t_SecondOrderODE, dimension),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SecondOrderODE__methods_[] = {
        DECLARE_METHOD(t_SecondOrderODE, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SecondOrderODE, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SecondOrderODE, computeSecondDerivatives, METH_VARARGS),
        DECLARE_METHOD(t_SecondOrderODE, getDimension, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SecondOrderODE)[] = {
        { Py_tp_methods, t_SecondOrderODE__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_SecondOrderODE__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SecondOrderODE)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(SecondOrderODE, t_SecondOrderODE, SecondOrderODE);

      void t_SecondOrderODE::install(PyObject *module)
      {
        installType(&PY_TYPE(SecondOrderODE), &PY_TYPE_DEF(SecondOrderODE), module, "SecondOrderODE", 0);
      }

      void t_SecondOrderODE::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecondOrderODE), "class_", make_descriptor(SecondOrderODE::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecondOrderODE), "wrapfn_", make_descriptor(t_SecondOrderODE::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SecondOrderODE), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SecondOrderODE_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SecondOrderODE::initializeClass, 1)))
          return NULL;
        return t_SecondOrderODE::wrap_Object(SecondOrderODE(((t_SecondOrderODE *) arg)->object.this$));
      }
      static PyObject *t_SecondOrderODE_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SecondOrderODE::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SecondOrderODE_computeSecondDerivatives(t_SecondOrderODE *self, PyObject *args)
      {
        jdouble a0;
        JArray< jdouble > a1((jobject) NULL);
        JArray< jdouble > a2((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "D[D[D", &a0, &a1, &a2))
        {
          OBJ_CALL(result = self->object.computeSecondDerivatives(a0, a1, a2));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "computeSecondDerivatives", args);
        return NULL;
      }

      static PyObject *t_SecondOrderODE_getDimension(t_SecondOrderODE *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_SecondOrderODE_get__dimension(t_SecondOrderODE *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "java/util/AbstractSet.h"
#include "java/util/Collection.h"
#include "java/util/Set.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *AbstractSet::class$ = NULL;
    jmethodID *AbstractSet::mids$ = NULL;
    bool AbstractSet::live$ = false;

    jclass AbstractSet::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/AbstractSet");

        mids$ = new jmethodID[max_mid];
        mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
        mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
        mids$[mid_removeAll_d88dbdb69255b770] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    jboolean AbstractSet::equals(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
    }

    jint AbstractSet::hashCode() const
    {
      return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
    }

    jboolean AbstractSet::removeAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_d88dbdb69255b770], a0.this$);
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_AbstractSet_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractSet_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_AbstractSet_of_(t_AbstractSet *self, PyObject *args);
    static PyObject *t_AbstractSet_equals(t_AbstractSet *self, PyObject *args);
    static PyObject *t_AbstractSet_hashCode(t_AbstractSet *self, PyObject *args);
    static PyObject *t_AbstractSet_removeAll(t_AbstractSet *self, PyObject *args);
    static PyObject *t_AbstractSet_get__parameters_(t_AbstractSet *self, void *data);
    static PyGetSetDef t_AbstractSet__fields_[] = {
      DECLARE_GET_FIELD(t_AbstractSet, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_AbstractSet__methods_[] = {
      DECLARE_METHOD(t_AbstractSet, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractSet, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_AbstractSet, of_, METH_VARARGS),
      DECLARE_METHOD(t_AbstractSet, equals, METH_VARARGS),
      DECLARE_METHOD(t_AbstractSet, hashCode, METH_VARARGS),
      DECLARE_METHOD(t_AbstractSet, removeAll, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(AbstractSet)[] = {
      { Py_tp_methods, t_AbstractSet__methods_ },
      { Py_tp_init, (void *) abstract_init },
      { Py_tp_getset, t_AbstractSet__fields_ },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(AbstractSet)[] = {
      &PY_TYPE_DEF(::java::util::AbstractCollection),
      NULL
    };

    DEFINE_TYPE(AbstractSet, t_AbstractSet, AbstractSet);
    PyObject *t_AbstractSet::wrap_Object(const AbstractSet& object, PyTypeObject *p0)
    {
      PyObject *obj = t_AbstractSet::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractSet *self = (t_AbstractSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_AbstractSet::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_AbstractSet::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_AbstractSet *self = (t_AbstractSet *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_AbstractSet::install(PyObject *module)
    {
      installType(&PY_TYPE(AbstractSet), &PY_TYPE_DEF(AbstractSet), module, "AbstractSet", 0);
    }

    void t_AbstractSet::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSet), "class_", make_descriptor(AbstractSet::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSet), "wrapfn_", make_descriptor(t_AbstractSet::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractSet), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_AbstractSet_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, AbstractSet::initializeClass, 1)))
        return NULL;
      return t_AbstractSet::wrap_Object(AbstractSet(((t_AbstractSet *) arg)->object.this$));
    }
    static PyObject *t_AbstractSet_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, AbstractSet::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_AbstractSet_of_(t_AbstractSet *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static PyObject *t_AbstractSet_equals(t_AbstractSet *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.equals(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(AbstractSet), (PyObject *) self, "equals", args, 2);
    }

    static PyObject *t_AbstractSet_hashCode(t_AbstractSet *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.hashCode());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(AbstractSet), (PyObject *) self, "hashCode", args, 2);
    }

    static PyObject *t_AbstractSet_removeAll(t_AbstractSet *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.removeAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(AbstractSet), (PyObject *) self, "removeAll", args, 2);
    }
    static PyObject *t_AbstractSet_get__parameters_(t_AbstractSet *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/sampling/StepNormalizer.h"
#include "org/hipparchus/ode/sampling/ODEStepHandler.h"
#include "org/hipparchus/ode/sampling/StepNormalizerBounds.h"
#include "org/hipparchus/ode/sampling/ODEFixedStepHandler.h"
#include "org/hipparchus/ode/sampling/ODEStateInterpolator.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ODEStateAndDerivative.h"
#include "org/hipparchus/ode/sampling/StepNormalizerMode.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace sampling {

        ::java::lang::Class *StepNormalizer::class$ = NULL;
        jmethodID *StepNormalizer::mids$ = NULL;
        bool StepNormalizer::live$ = false;

        jclass StepNormalizer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/sampling/StepNormalizer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_2a217a73ea291aa1] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/ODEFixedStepHandler;)V");
            mids$[mid_init$_44e9d8f3a442f3e3] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/ODEFixedStepHandler;Lorg/hipparchus/ode/sampling/StepNormalizerBounds;)V");
            mids$[mid_init$_a615c344ecb36773] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/ODEFixedStepHandler;Lorg/hipparchus/ode/sampling/StepNormalizerMode;)V");
            mids$[mid_init$_2b9315d20d028eed] = env->getMethodID(cls, "<init>", "(DLorg/hipparchus/ode/sampling/ODEFixedStepHandler;Lorg/hipparchus/ode/sampling/StepNormalizerMode;Lorg/hipparchus/ode/sampling/StepNormalizerBounds;)V");
            mids$[mid_finish_100c57fd45963f6d] = env->getMethodID(cls, "finish", "(Lorg/hipparchus/ode/ODEStateAndDerivative;)V");
            mids$[mid_handleStep_7f7ea329b6669cd2] = env->getMethodID(cls, "handleStep", "(Lorg/hipparchus/ode/sampling/ODEStateInterpolator;)V");
            mids$[mid_init_85808f3d6374b436] = env->getMethodID(cls, "init", "(Lorg/hipparchus/ode/ODEStateAndDerivative;D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        StepNormalizer::StepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::ODEFixedStepHandler & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2a217a73ea291aa1, a0, a1.this$)) {}

        StepNormalizer::StepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::ODEFixedStepHandler & a1, const ::org::hipparchus::ode::sampling::StepNormalizerBounds & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_44e9d8f3a442f3e3, a0, a1.this$, a2.this$)) {}

        StepNormalizer::StepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::ODEFixedStepHandler & a1, const ::org::hipparchus::ode::sampling::StepNormalizerMode & a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a615c344ecb36773, a0, a1.this$, a2.this$)) {}

        StepNormalizer::StepNormalizer(jdouble a0, const ::org::hipparchus::ode::sampling::ODEFixedStepHandler & a1, const ::org::hipparchus::ode::sampling::StepNormalizerMode & a2, const ::org::hipparchus::ode::sampling::StepNormalizerBounds & a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_2b9315d20d028eed, a0, a1.this$, a2.this$, a3.this$)) {}

        void StepNormalizer::finish(const ::org::hipparchus::ode::ODEStateAndDerivative & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_finish_100c57fd45963f6d], a0.this$);
        }

        void StepNormalizer::handleStep(const ::org::hipparchus::ode::sampling::ODEStateInterpolator & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_handleStep_7f7ea329b6669cd2], a0.this$);
        }

        void StepNormalizer::init(const ::org::hipparchus::ode::ODEStateAndDerivative & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_init_85808f3d6374b436], a0.this$, a1);
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
      namespace sampling {
        static PyObject *t_StepNormalizer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StepNormalizer_instance_(PyTypeObject *type, PyObject *arg);
        static int t_StepNormalizer_init_(t_StepNormalizer *self, PyObject *args, PyObject *kwds);
        static PyObject *t_StepNormalizer_finish(t_StepNormalizer *self, PyObject *arg);
        static PyObject *t_StepNormalizer_handleStep(t_StepNormalizer *self, PyObject *arg);
        static PyObject *t_StepNormalizer_init(t_StepNormalizer *self, PyObject *args);

        static PyMethodDef t_StepNormalizer__methods_[] = {
          DECLARE_METHOD(t_StepNormalizer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StepNormalizer, finish, METH_O),
          DECLARE_METHOD(t_StepNormalizer, handleStep, METH_O),
          DECLARE_METHOD(t_StepNormalizer, init, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StepNormalizer)[] = {
          { Py_tp_methods, t_StepNormalizer__methods_ },
          { Py_tp_init, (void *) t_StepNormalizer_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StepNormalizer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(StepNormalizer, t_StepNormalizer, StepNormalizer);

        void t_StepNormalizer::install(PyObject *module)
        {
          installType(&PY_TYPE(StepNormalizer), &PY_TYPE_DEF(StepNormalizer), module, "StepNormalizer", 0);
        }

        void t_StepNormalizer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizer), "class_", make_descriptor(StepNormalizer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizer), "wrapfn_", make_descriptor(t_StepNormalizer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StepNormalizer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_StepNormalizer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StepNormalizer::initializeClass, 1)))
            return NULL;
          return t_StepNormalizer::wrap_Object(StepNormalizer(((t_StepNormalizer *) arg)->object.this$));
        }
        static PyObject *t_StepNormalizer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StepNormalizer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_StepNormalizer_init_(t_StepNormalizer *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::ODEFixedStepHandler a1((jobject) NULL);
              StepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "Dk", ::org::hipparchus::ode::sampling::ODEFixedStepHandler::initializeClass, &a0, &a1))
              {
                INT_CALL(object = StepNormalizer(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::ODEFixedStepHandler a1((jobject) NULL);
              ::org::hipparchus::ode::sampling::StepNormalizerBounds a2((jobject) NULL);
              PyTypeObject **p2;
              StepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DkK", ::org::hipparchus::ode::sampling::ODEFixedStepHandler::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerBounds::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::ode::sampling::t_StepNormalizerBounds::parameters_))
              {
                INT_CALL(object = StepNormalizer(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::ODEFixedStepHandler a1((jobject) NULL);
              ::org::hipparchus::ode::sampling::StepNormalizerMode a2((jobject) NULL);
              PyTypeObject **p2;
              StepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DkK", ::org::hipparchus::ode::sampling::ODEFixedStepHandler::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerMode::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::ode::sampling::t_StepNormalizerMode::parameters_))
              {
                INT_CALL(object = StepNormalizer(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              jdouble a0;
              ::org::hipparchus::ode::sampling::ODEFixedStepHandler a1((jobject) NULL);
              ::org::hipparchus::ode::sampling::StepNormalizerMode a2((jobject) NULL);
              PyTypeObject **p2;
              ::org::hipparchus::ode::sampling::StepNormalizerBounds a3((jobject) NULL);
              PyTypeObject **p3;
              StepNormalizer object((jobject) NULL);

              if (!parseArgs(args, "DkKK", ::org::hipparchus::ode::sampling::ODEFixedStepHandler::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerMode::initializeClass, ::org::hipparchus::ode::sampling::StepNormalizerBounds::initializeClass, &a0, &a1, &a2, &p2, ::org::hipparchus::ode::sampling::t_StepNormalizerMode::parameters_, &a3, &p3, ::org::hipparchus::ode::sampling::t_StepNormalizerBounds::parameters_))
              {
                INT_CALL(object = StepNormalizer(a0, a1, a2, a3));
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

        static PyObject *t_StepNormalizer_finish(t_StepNormalizer *self, PyObject *arg)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0))
          {
            OBJ_CALL(self->object.finish(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "finish", arg);
          return NULL;
        }

        static PyObject *t_StepNormalizer_handleStep(t_StepNormalizer *self, PyObject *arg)
        {
          ::org::hipparchus::ode::sampling::ODEStateInterpolator a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::ode::sampling::ODEStateInterpolator::initializeClass, &a0))
          {
            OBJ_CALL(self->object.handleStep(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "handleStep", arg);
          return NULL;
        }

        static PyObject *t_StepNormalizer_init(t_StepNormalizer *self, PyObject *args)
        {
          ::org::hipparchus::ode::ODEStateAndDerivative a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "kD", ::org::hipparchus::ode::ODEStateAndDerivative::initializeClass, &a0, &a1))
          {
            OBJ_CALL(self->object.init(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "init", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/metric/parser/PythonEncodedMessage.h"
#include "org/orekit/gnss/metric/parser/EncodedMessage.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace metric {
        namespace parser {

          ::java::lang::Class *PythonEncodedMessage::class$ = NULL;
          jmethodID *PythonEncodedMessage::mids$ = NULL;
          bool PythonEncodedMessage::live$ = false;

          jclass PythonEncodedMessage::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/metric/parser/PythonEncodedMessage");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_7ae3461a92a43152] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_extractBits_3f523e51b2989e1f] = env->getMethodID(cls, "extractBits", "(I)J");
              mids$[mid_finalize_7ae3461a92a43152] = env->getMethodID(cls, "finalize", "()V");
              mids$[mid_pythonDecRef_7ae3461a92a43152] = env->getMethodID(cls, "pythonDecRef", "()V");
              mids$[mid_pythonExtension_a27fc9afd27e559d] = env->getMethodID(cls, "pythonExtension", "()J");
              mids$[mid_pythonExtension_fefb08975c10f0a1] = env->getMethodID(cls, "pythonExtension", "(J)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          PythonEncodedMessage::PythonEncodedMessage() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_7ae3461a92a43152)) {}

          void PythonEncodedMessage::finalize() const
          {
            env->callVoidMethod(this$, mids$[mid_finalize_7ae3461a92a43152]);
          }

          jlong PythonEncodedMessage::pythonExtension() const
          {
            return env->callLongMethod(this$, mids$[mid_pythonExtension_a27fc9afd27e559d]);
          }

          void PythonEncodedMessage::pythonExtension(jlong a0) const
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
    namespace gnss {
      namespace metric {
        namespace parser {
          static PyObject *t_PythonEncodedMessage_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_PythonEncodedMessage_instance_(PyTypeObject *type, PyObject *arg);
          static int t_PythonEncodedMessage_init_(t_PythonEncodedMessage *self, PyObject *args, PyObject *kwds);
          static PyObject *t_PythonEncodedMessage_finalize(t_PythonEncodedMessage *self);
          static PyObject *t_PythonEncodedMessage_pythonExtension(t_PythonEncodedMessage *self, PyObject *args);
          static jlong JNICALL t_PythonEncodedMessage_extractBits0(JNIEnv *jenv, jobject jobj, jint a0);
          static void JNICALL t_PythonEncodedMessage_pythonDecRef1(JNIEnv *jenv, jobject jobj);
          static PyObject *t_PythonEncodedMessage_get__self(t_PythonEncodedMessage *self, void *data);
          static PyGetSetDef t_PythonEncodedMessage__fields_[] = {
            DECLARE_GET_FIELD(t_PythonEncodedMessage, self),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_PythonEncodedMessage__methods_[] = {
            DECLARE_METHOD(t_PythonEncodedMessage, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonEncodedMessage, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_PythonEncodedMessage, finalize, METH_NOARGS),
            DECLARE_METHOD(t_PythonEncodedMessage, pythonExtension, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(PythonEncodedMessage)[] = {
            { Py_tp_methods, t_PythonEncodedMessage__methods_ },
            { Py_tp_init, (void *) t_PythonEncodedMessage_init_ },
            { Py_tp_getset, t_PythonEncodedMessage__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(PythonEncodedMessage)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(PythonEncodedMessage, t_PythonEncodedMessage, PythonEncodedMessage);

          void t_PythonEncodedMessage::install(PyObject *module)
          {
            installType(&PY_TYPE(PythonEncodedMessage), &PY_TYPE_DEF(PythonEncodedMessage), module, "PythonEncodedMessage", 1);
          }

          void t_PythonEncodedMessage::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEncodedMessage), "class_", make_descriptor(PythonEncodedMessage::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEncodedMessage), "wrapfn_", make_descriptor(t_PythonEncodedMessage::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(PythonEncodedMessage), "boxfn_", make_descriptor(boxObject));
            jclass cls = env->getClass(PythonEncodedMessage::initializeClass);
            JNINativeMethod methods[] = {
              { "extractBits", "(I)J", (void *) t_PythonEncodedMessage_extractBits0 },
              { "pythonDecRef", "()V", (void *) t_PythonEncodedMessage_pythonDecRef1 },
            };
            env->registerNatives(cls, methods, 2);
          }

          static PyObject *t_PythonEncodedMessage_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, PythonEncodedMessage::initializeClass, 1)))
              return NULL;
            return t_PythonEncodedMessage::wrap_Object(PythonEncodedMessage(((t_PythonEncodedMessage *) arg)->object.this$));
          }
          static PyObject *t_PythonEncodedMessage_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, PythonEncodedMessage::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_PythonEncodedMessage_init_(t_PythonEncodedMessage *self, PyObject *args, PyObject *kwds)
          {
            PythonEncodedMessage object((jobject) NULL);

            INT_CALL(object = PythonEncodedMessage());
            self->object = object;

            Py_INCREF((PyObject *) self);
            self->object.pythonExtension((jlong) (Py_intptr_t) (void *) self);

            return 0;
          }

          static PyObject *t_PythonEncodedMessage_finalize(t_PythonEncodedMessage *self)
          {
            OBJ_CALL(self->object.finalize());
            Py_RETURN_NONE;
          }

          static PyObject *t_PythonEncodedMessage_pythonExtension(t_PythonEncodedMessage *self, PyObject *args)
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

          static jlong JNICALL t_PythonEncodedMessage_extractBits0(JNIEnv *jenv, jobject jobj, jint a0)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonEncodedMessage::mids$[PythonEncodedMessage::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;
            PythonGIL gil(jenv);
            jlong value;
            PyObject *result = PyObject_CallMethod(obj, "extractBits", "i", (int) a0);
            if (!result)
              throwPythonError();
            else if (parseArg(result, "J", &value))
            {
              throwTypeError("extractBits", result);
              Py_DECREF(result);
            }
            else
            {
              Py_DECREF(result);
              return value;
            }

            return (jlong) 0;
          }

          static void JNICALL t_PythonEncodedMessage_pythonDecRef1(JNIEnv *jenv, jobject jobj)
          {
            jlong ptr = jenv->CallLongMethod(jobj, PythonEncodedMessage::mids$[PythonEncodedMessage::mid_pythonExtension_a27fc9afd27e559d]);
            PyObject *obj = (PyObject *) (Py_intptr_t) ptr;

            if (obj != NULL)
            {
              jenv->CallVoidMethod(jobj, PythonEncodedMessage::mids$[PythonEncodedMessage::mid_pythonExtension_fefb08975c10f0a1], (jlong) 0);
              env->finalizeObject(jenv, obj);
            }
          }

          static PyObject *t_PythonEncodedMessage_get__self(t_PythonEncodedMessage *self, void *data)
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
#include "org/orekit/propagation/conversion/DormandPrince54FieldIntegratorBuilder.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/ode/AbstractFieldIntegrator.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *DormandPrince54FieldIntegratorBuilder::class$ = NULL;
        jmethodID *DormandPrince54FieldIntegratorBuilder::mids$ = NULL;
        bool DormandPrince54FieldIntegratorBuilder::live$ = false;

        jclass DormandPrince54FieldIntegratorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/DormandPrince54FieldIntegratorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d0d6094fbd7015c5] = env->getMethodID(cls, "<init>", "(DDD)V");
            mids$[mid_buildIntegrator_79616f78bb6df44f] = env->getMethodID(cls, "buildIntegrator", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/OrbitType;)Lorg/hipparchus/ode/AbstractFieldIntegrator;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        DormandPrince54FieldIntegratorBuilder::DormandPrince54FieldIntegratorBuilder(jdouble a0, jdouble a1, jdouble a2) : ::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder(env->newObject(initializeClass, &mids$, mid_init$_d0d6094fbd7015c5, a0, a1, a2)) {}

        ::org::hipparchus::ode::AbstractFieldIntegrator DormandPrince54FieldIntegratorBuilder::buildIntegrator(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1, const ::org::orekit::orbits::OrbitType & a2) const
        {
          return ::org::hipparchus::ode::AbstractFieldIntegrator(env->callObjectMethod(this$, mids$[mid_buildIntegrator_79616f78bb6df44f], a0.this$, a1.this$, a2.this$));
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
      namespace conversion {
        static PyObject *t_DormandPrince54FieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince54FieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_DormandPrince54FieldIntegratorBuilder_of_(t_DormandPrince54FieldIntegratorBuilder *self, PyObject *args);
        static int t_DormandPrince54FieldIntegratorBuilder_init_(t_DormandPrince54FieldIntegratorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_DormandPrince54FieldIntegratorBuilder_buildIntegrator(t_DormandPrince54FieldIntegratorBuilder *self, PyObject *args);
        static PyObject *t_DormandPrince54FieldIntegratorBuilder_get__parameters_(t_DormandPrince54FieldIntegratorBuilder *self, void *data);
        static PyGetSetDef t_DormandPrince54FieldIntegratorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_DormandPrince54FieldIntegratorBuilder, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_DormandPrince54FieldIntegratorBuilder__methods_[] = {
          DECLARE_METHOD(t_DormandPrince54FieldIntegratorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54FieldIntegratorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_DormandPrince54FieldIntegratorBuilder, of_, METH_VARARGS),
          DECLARE_METHOD(t_DormandPrince54FieldIntegratorBuilder, buildIntegrator, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(DormandPrince54FieldIntegratorBuilder)[] = {
          { Py_tp_methods, t_DormandPrince54FieldIntegratorBuilder__methods_ },
          { Py_tp_init, (void *) t_DormandPrince54FieldIntegratorBuilder_init_ },
          { Py_tp_getset, t_DormandPrince54FieldIntegratorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(DormandPrince54FieldIntegratorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractVariableStepFieldIntegratorBuilder),
          NULL
        };

        DEFINE_TYPE(DormandPrince54FieldIntegratorBuilder, t_DormandPrince54FieldIntegratorBuilder, DormandPrince54FieldIntegratorBuilder);
        PyObject *t_DormandPrince54FieldIntegratorBuilder::wrap_Object(const DormandPrince54FieldIntegratorBuilder& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DormandPrince54FieldIntegratorBuilder::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DormandPrince54FieldIntegratorBuilder *self = (t_DormandPrince54FieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_DormandPrince54FieldIntegratorBuilder::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_DormandPrince54FieldIntegratorBuilder::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_DormandPrince54FieldIntegratorBuilder *self = (t_DormandPrince54FieldIntegratorBuilder *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_DormandPrince54FieldIntegratorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(DormandPrince54FieldIntegratorBuilder), &PY_TYPE_DEF(DormandPrince54FieldIntegratorBuilder), module, "DormandPrince54FieldIntegratorBuilder", 0);
        }

        void t_DormandPrince54FieldIntegratorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54FieldIntegratorBuilder), "class_", make_descriptor(DormandPrince54FieldIntegratorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54FieldIntegratorBuilder), "wrapfn_", make_descriptor(t_DormandPrince54FieldIntegratorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(DormandPrince54FieldIntegratorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_DormandPrince54FieldIntegratorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, DormandPrince54FieldIntegratorBuilder::initializeClass, 1)))
            return NULL;
          return t_DormandPrince54FieldIntegratorBuilder::wrap_Object(DormandPrince54FieldIntegratorBuilder(((t_DormandPrince54FieldIntegratorBuilder *) arg)->object.this$));
        }
        static PyObject *t_DormandPrince54FieldIntegratorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, DormandPrince54FieldIntegratorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_DormandPrince54FieldIntegratorBuilder_of_(t_DormandPrince54FieldIntegratorBuilder *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_DormandPrince54FieldIntegratorBuilder_init_(t_DormandPrince54FieldIntegratorBuilder *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          jdouble a1;
          jdouble a2;
          DormandPrince54FieldIntegratorBuilder object((jobject) NULL);

          if (!parseArgs(args, "DDD", &a0, &a1, &a2))
          {
            INT_CALL(object = DormandPrince54FieldIntegratorBuilder(a0, a1, a2));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_DormandPrince54FieldIntegratorBuilder_buildIntegrator(t_DormandPrince54FieldIntegratorBuilder *self, PyObject *args)
        {
          ::org::hipparchus::Field a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::orekit::orbits::Orbit a1((jobject) NULL);
          ::org::orekit::orbits::OrbitType a2((jobject) NULL);
          PyTypeObject **p2;
          ::org::hipparchus::ode::AbstractFieldIntegrator result((jobject) NULL);

          if (!parseArgs(args, "KkK", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::OrbitType::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1, &a2, &p2, ::org::orekit::orbits::t_OrbitType::parameters_))
          {
            OBJ_CALL(result = self->object.buildIntegrator(a0, a1, a2));
            return ::org::hipparchus::ode::t_AbstractFieldIntegrator::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(DormandPrince54FieldIntegratorBuilder), (PyObject *) self, "buildIntegrator", args, 2);
        }
        static PyObject *t_DormandPrince54FieldIntegratorBuilder_get__parameters_(t_DormandPrince54FieldIntegratorBuilder *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/VariationalEquation.h"
#include "org/hipparchus/ode/ParameterConfiguration.h"
#include "org/hipparchus/ode/ODEJacobiansProvider.h"
#include "org/hipparchus/ode/VariationalEquation$MismatchedEquations.h"
#include "org/hipparchus/ode/ExpandableODE.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/ode/OrdinaryDifferentialEquation.h"
#include "org/hipparchus/ode/ODEState.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/ParametersController.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *VariationalEquation::class$ = NULL;
      jmethodID *VariationalEquation::mids$ = NULL;
      bool VariationalEquation::live$ = false;

      jclass VariationalEquation::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/VariationalEquation");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_9408efab732c5a84] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/ODEJacobiansProvider;)V");
          mids$[mid_init$_f6e1c0b025959694] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/ode/ExpandableODE;Lorg/hipparchus/ode/OrdinaryDifferentialEquation;[DLorg/hipparchus/ode/ParametersController;[Lorg/hipparchus/ode/ParameterConfiguration;)V");
          mids$[mid_extractMainSetJacobian_998477530e9d194b] = env->getMethodID(cls, "extractMainSetJacobian", "(Lorg/hipparchus/ode/ODEState;)[[D");
          mids$[mid_extractParameterJacobian_47ae48399146c41b] = env->getMethodID(cls, "extractParameterJacobian", "(Lorg/hipparchus/ode/ODEState;Ljava/lang/String;)[D");
          mids$[mid_setInitialMainStateJacobian_d660c7a97bf55272] = env->getMethodID(cls, "setInitialMainStateJacobian", "([[D)V");
          mids$[mid_setInitialParameterJacobian_f158fe1c5def0235] = env->getMethodID(cls, "setInitialParameterJacobian", "(Ljava/lang/String;[D)V");
          mids$[mid_setUpInitialState_e89faae1f95dc3f6] = env->getMethodID(cls, "setUpInitialState", "(Lorg/hipparchus/ode/ODEState;)Lorg/hipparchus/ode/ODEState;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      VariationalEquation::VariationalEquation(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::ODEJacobiansProvider & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_9408efab732c5a84, a0.this$, a1.this$)) {}

      VariationalEquation::VariationalEquation(const ::org::hipparchus::ode::ExpandableODE & a0, const ::org::hipparchus::ode::OrdinaryDifferentialEquation & a1, const JArray< jdouble > & a2, const ::org::hipparchus::ode::ParametersController & a3, const JArray< ::org::hipparchus::ode::ParameterConfiguration > & a4) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_f6e1c0b025959694, a0.this$, a1.this$, a2.this$, a3.this$, a4.this$)) {}

      JArray< JArray< jdouble > > VariationalEquation::extractMainSetJacobian(const ::org::hipparchus::ode::ODEState & a0) const
      {
        return JArray< JArray< jdouble > >(env->callObjectMethod(this$, mids$[mid_extractMainSetJacobian_998477530e9d194b], a0.this$));
      }

      JArray< jdouble > VariationalEquation::extractParameterJacobian(const ::org::hipparchus::ode::ODEState & a0, const ::java::lang::String & a1) const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_extractParameterJacobian_47ae48399146c41b], a0.this$, a1.this$));
      }

      void VariationalEquation::setInitialMainStateJacobian(const JArray< JArray< jdouble > > & a0) const
      {
        env->callVoidMethod(this$, mids$[mid_setInitialMainStateJacobian_d660c7a97bf55272], a0.this$);
      }

      void VariationalEquation::setInitialParameterJacobian(const ::java::lang::String & a0, const JArray< jdouble > & a1) const
      {
        env->callVoidMethod(this$, mids$[mid_setInitialParameterJacobian_f158fe1c5def0235], a0.this$, a1.this$);
      }

      ::org::hipparchus::ode::ODEState VariationalEquation::setUpInitialState(const ::org::hipparchus::ode::ODEState & a0) const
      {
        return ::org::hipparchus::ode::ODEState(env->callObjectMethod(this$, mids$[mid_setUpInitialState_e89faae1f95dc3f6], a0.this$));
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
      static PyObject *t_VariationalEquation_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_VariationalEquation_instance_(PyTypeObject *type, PyObject *arg);
      static int t_VariationalEquation_init_(t_VariationalEquation *self, PyObject *args, PyObject *kwds);
      static PyObject *t_VariationalEquation_extractMainSetJacobian(t_VariationalEquation *self, PyObject *arg);
      static PyObject *t_VariationalEquation_extractParameterJacobian(t_VariationalEquation *self, PyObject *args);
      static PyObject *t_VariationalEquation_setInitialMainStateJacobian(t_VariationalEquation *self, PyObject *arg);
      static PyObject *t_VariationalEquation_setInitialParameterJacobian(t_VariationalEquation *self, PyObject *args);
      static PyObject *t_VariationalEquation_setUpInitialState(t_VariationalEquation *self, PyObject *arg);
      static int t_VariationalEquation_set__initialMainStateJacobian(t_VariationalEquation *self, PyObject *arg, void *data);
      static int t_VariationalEquation_set__upInitialState(t_VariationalEquation *self, PyObject *arg, void *data);
      static PyGetSetDef t_VariationalEquation__fields_[] = {
        DECLARE_SET_FIELD(t_VariationalEquation, initialMainStateJacobian),
        DECLARE_SET_FIELD(t_VariationalEquation, upInitialState),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_VariationalEquation__methods_[] = {
        DECLARE_METHOD(t_VariationalEquation, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_VariationalEquation, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_VariationalEquation, extractMainSetJacobian, METH_O),
        DECLARE_METHOD(t_VariationalEquation, extractParameterJacobian, METH_VARARGS),
        DECLARE_METHOD(t_VariationalEquation, setInitialMainStateJacobian, METH_O),
        DECLARE_METHOD(t_VariationalEquation, setInitialParameterJacobian, METH_VARARGS),
        DECLARE_METHOD(t_VariationalEquation, setUpInitialState, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(VariationalEquation)[] = {
        { Py_tp_methods, t_VariationalEquation__methods_ },
        { Py_tp_init, (void *) t_VariationalEquation_init_ },
        { Py_tp_getset, t_VariationalEquation__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(VariationalEquation)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(VariationalEquation, t_VariationalEquation, VariationalEquation);

      void t_VariationalEquation::install(PyObject *module)
      {
        installType(&PY_TYPE(VariationalEquation), &PY_TYPE_DEF(VariationalEquation), module, "VariationalEquation", 0);
        PyObject_SetAttrString((PyObject *) PY_TYPE(VariationalEquation), "MismatchedEquations", make_descriptor(&PY_TYPE_DEF(VariationalEquation$MismatchedEquations)));
      }

      void t_VariationalEquation::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(VariationalEquation), "class_", make_descriptor(VariationalEquation::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VariationalEquation), "wrapfn_", make_descriptor(t_VariationalEquation::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(VariationalEquation), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_VariationalEquation_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, VariationalEquation::initializeClass, 1)))
          return NULL;
        return t_VariationalEquation::wrap_Object(VariationalEquation(((t_VariationalEquation *) arg)->object.this$));
      }
      static PyObject *t_VariationalEquation_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, VariationalEquation::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static int t_VariationalEquation_init_(t_VariationalEquation *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::ode::ExpandableODE a0((jobject) NULL);
            ::org::hipparchus::ode::ODEJacobiansProvider a1((jobject) NULL);
            VariationalEquation object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::ode::ExpandableODE::initializeClass, ::org::hipparchus::ode::ODEJacobiansProvider::initializeClass, &a0, &a1))
            {
              INT_CALL(object = VariationalEquation(a0, a1));
              self->object = object;
              break;
            }
          }
          goto err;
         case 5:
          {
            ::org::hipparchus::ode::ExpandableODE a0((jobject) NULL);
            ::org::hipparchus::ode::OrdinaryDifferentialEquation a1((jobject) NULL);
            JArray< jdouble > a2((jobject) NULL);
            ::org::hipparchus::ode::ParametersController a3((jobject) NULL);
            JArray< ::org::hipparchus::ode::ParameterConfiguration > a4((jobject) NULL);
            VariationalEquation object((jobject) NULL);

            if (!parseArgs(args, "kk[Dk[k", ::org::hipparchus::ode::ExpandableODE::initializeClass, ::org::hipparchus::ode::OrdinaryDifferentialEquation::initializeClass, ::org::hipparchus::ode::ParametersController::initializeClass, ::org::hipparchus::ode::ParameterConfiguration::initializeClass, &a0, &a1, &a2, &a3, &a4))
            {
              INT_CALL(object = VariationalEquation(a0, a1, a2, a3, a4));
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

      static PyObject *t_VariationalEquation_extractMainSetJacobian(t_VariationalEquation *self, PyObject *arg)
      {
        ::org::hipparchus::ode::ODEState a0((jobject) NULL);
        JArray< JArray< jdouble > > result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.extractMainSetJacobian(a0));
          return JArray<jobject>(result.this$).wrap(NULL);
        }

        PyErr_SetArgsError((PyObject *) self, "extractMainSetJacobian", arg);
        return NULL;
      }

      static PyObject *t_VariationalEquation_extractParameterJacobian(t_VariationalEquation *self, PyObject *args)
      {
        ::org::hipparchus::ode::ODEState a0((jobject) NULL);
        ::java::lang::String a1((jobject) NULL);
        JArray< jdouble > result((jobject) NULL);

        if (!parseArgs(args, "ks", ::org::hipparchus::ode::ODEState::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = self->object.extractParameterJacobian(a0, a1));
          return result.wrap();
        }

        PyErr_SetArgsError((PyObject *) self, "extractParameterJacobian", args);
        return NULL;
      }

      static PyObject *t_VariationalEquation_setInitialMainStateJacobian(t_VariationalEquation *self, PyObject *arg)
      {
        JArray< JArray< jdouble > > a0((jobject) NULL);

        if (!parseArg(arg, "[[D", &a0))
        {
          OBJ_CALL(self->object.setInitialMainStateJacobian(a0));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setInitialMainStateJacobian", arg);
        return NULL;
      }

      static PyObject *t_VariationalEquation_setInitialParameterJacobian(t_VariationalEquation *self, PyObject *args)
      {
        ::java::lang::String a0((jobject) NULL);
        JArray< jdouble > a1((jobject) NULL);

        if (!parseArgs(args, "s[D", &a0, &a1))
        {
          OBJ_CALL(self->object.setInitialParameterJacobian(a0, a1));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "setInitialParameterJacobian", args);
        return NULL;
      }

      static PyObject *t_VariationalEquation_setUpInitialState(t_VariationalEquation *self, PyObject *arg)
      {
        ::org::hipparchus::ode::ODEState a0((jobject) NULL);
        ::org::hipparchus::ode::ODEState result((jobject) NULL);

        if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEState::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.setUpInitialState(a0));
          return ::org::hipparchus::ode::t_ODEState::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "setUpInitialState", arg);
        return NULL;
      }

      static int t_VariationalEquation_set__initialMainStateJacobian(t_VariationalEquation *self, PyObject *arg, void *data)
      {
        {
          JArray< JArray< jdouble > > value((jobject) NULL);
          if (!parseArg(arg, "[[D", &value))
          {
            INT_CALL(self->object.setInitialMainStateJacobian(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "initialMainStateJacobian", arg);
        return -1;
      }

      static int t_VariationalEquation_set__upInitialState(t_VariationalEquation *self, PyObject *arg, void *data)
      {
        {
          ::org::hipparchus::ode::ODEState value((jobject) NULL);
          if (!parseArg(arg, "k", ::org::hipparchus::ode::ODEState::initializeClass, &value))
          {
            INT_CALL(self->object.setUpInitialState(value));
            return 0;
          }
        }
        PyErr_SetArgsError((PyObject *) self, "upInitialState", arg);
        return -1;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/conversion/NumericalPropagatorBuilder.h"
#include "java/util/List.h"
#include "org/orekit/propagation/numerical/NumericalPropagator.h"
#include "org/orekit/attitudes/AttitudeProvider.h"
#include "org/orekit/utils/ParameterDriversList.h"
#include "org/orekit/estimation/leastsquares/ModelObserver.h"
#include "org/orekit/propagation/conversion/NumericalPropagatorBuilder.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/conversion/PropagatorBuilder.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/estimation/measurements/ObservedMeasurement.h"
#include "java/lang/Object.h"
#include "org/orekit/propagation/conversion/ODEIntegratorBuilder.h"
#include "org/orekit/estimation/leastsquares/BatchLSModel.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace conversion {

        ::java::lang::Class *NumericalPropagatorBuilder::class$ = NULL;
        jmethodID *NumericalPropagatorBuilder::mids$ = NULL;
        bool NumericalPropagatorBuilder::live$ = false;

        jclass NumericalPropagatorBuilder::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/conversion/NumericalPropagatorBuilder");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_3147ac08187e555f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/conversion/ODEIntegratorBuilder;Lorg/orekit/orbits/PositionAngleType;D)V");
            mids$[mid_init$_7d26bc01a48dedcb] = env->getMethodID(cls, "<init>", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/propagation/conversion/ODEIntegratorBuilder;Lorg/orekit/orbits/PositionAngleType;DLorg/orekit/attitudes/AttitudeProvider;)V");
            mids$[mid_addForceModel_beaeb16a38eea9d3] = env->getMethodID(cls, "addForceModel", "(Lorg/orekit/forces/ForceModel;)V");
            mids$[mid_buildLeastSquaresModel_68d6ca4c6bdc7fbf] = env->getMethodID(cls, "buildLeastSquaresModel", "([Lorg/orekit/propagation/conversion/PropagatorBuilder;Ljava/util/List;Lorg/orekit/utils/ParameterDriversList;Lorg/orekit/estimation/leastsquares/ModelObserver;)Lorg/orekit/estimation/leastsquares/BatchLSModel;");
            mids$[mid_buildPropagator_45704d5aa045e6a2] = env->getMethodID(cls, "buildPropagator", "([D)Lorg/orekit/propagation/numerical/NumericalPropagator;");
            mids$[mid_copy_7cb146e8b35a9163] = env->getMethodID(cls, "copy", "()Lorg/orekit/propagation/conversion/NumericalPropagatorBuilder;");
            mids$[mid_getAllForceModels_a6156df500549a58] = env->getMethodID(cls, "getAllForceModels", "()Ljava/util/List;");
            mids$[mid_getIntegratorBuilder_0a8021b0a6e4c616] = env->getMethodID(cls, "getIntegratorBuilder", "()Lorg/orekit/propagation/conversion/ODEIntegratorBuilder;");
            mids$[mid_getMass_456d9a2f64d6b28d] = env->getMethodID(cls, "getMass", "()D");
            mids$[mid_setMass_77e0f9a1f260e2e5] = env->getMethodID(cls, "setMass", "(D)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        NumericalPropagatorBuilder::NumericalPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::conversion::ODEIntegratorBuilder & a1, const ::org::orekit::orbits::PositionAngleType & a2, jdouble a3) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_3147ac08187e555f, a0.this$, a1.this$, a2.this$, a3)) {}

        NumericalPropagatorBuilder::NumericalPropagatorBuilder(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::propagation::conversion::ODEIntegratorBuilder & a1, const ::org::orekit::orbits::PositionAngleType & a2, jdouble a3, const ::org::orekit::attitudes::AttitudeProvider & a4) : ::org::orekit::propagation::conversion::AbstractPropagatorBuilder(env->newObject(initializeClass, &mids$, mid_init$_7d26bc01a48dedcb, a0.this$, a1.this$, a2.this$, a3, a4.this$)) {}

        void NumericalPropagatorBuilder::addForceModel(const ::org::orekit::forces::ForceModel & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_addForceModel_beaeb16a38eea9d3], a0.this$);
        }

        ::org::orekit::estimation::leastsquares::BatchLSModel NumericalPropagatorBuilder::buildLeastSquaresModel(const JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > & a0, const ::java::util::List & a1, const ::org::orekit::utils::ParameterDriversList & a2, const ::org::orekit::estimation::leastsquares::ModelObserver & a3) const
        {
          return ::org::orekit::estimation::leastsquares::BatchLSModel(env->callObjectMethod(this$, mids$[mid_buildLeastSquaresModel_68d6ca4c6bdc7fbf], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        ::org::orekit::propagation::numerical::NumericalPropagator NumericalPropagatorBuilder::buildPropagator(const JArray< jdouble > & a0) const
        {
          return ::org::orekit::propagation::numerical::NumericalPropagator(env->callObjectMethod(this$, mids$[mid_buildPropagator_45704d5aa045e6a2], a0.this$));
        }

        NumericalPropagatorBuilder NumericalPropagatorBuilder::copy() const
        {
          return NumericalPropagatorBuilder(env->callObjectMethod(this$, mids$[mid_copy_7cb146e8b35a9163]));
        }

        ::java::util::List NumericalPropagatorBuilder::getAllForceModels() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getAllForceModels_a6156df500549a58]));
        }

        ::org::orekit::propagation::conversion::ODEIntegratorBuilder NumericalPropagatorBuilder::getIntegratorBuilder() const
        {
          return ::org::orekit::propagation::conversion::ODEIntegratorBuilder(env->callObjectMethod(this$, mids$[mid_getIntegratorBuilder_0a8021b0a6e4c616]));
        }

        jdouble NumericalPropagatorBuilder::getMass() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getMass_456d9a2f64d6b28d]);
        }

        void NumericalPropagatorBuilder::setMass(jdouble a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setMass_77e0f9a1f260e2e5], a0);
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
      namespace conversion {
        static PyObject *t_NumericalPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_NumericalPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg);
        static int t_NumericalPropagatorBuilder_init_(t_NumericalPropagatorBuilder *self, PyObject *args, PyObject *kwds);
        static PyObject *t_NumericalPropagatorBuilder_addForceModel(t_NumericalPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_NumericalPropagatorBuilder_buildLeastSquaresModel(t_NumericalPropagatorBuilder *self, PyObject *args);
        static PyObject *t_NumericalPropagatorBuilder_buildPropagator(t_NumericalPropagatorBuilder *self, PyObject *args);
        static PyObject *t_NumericalPropagatorBuilder_copy(t_NumericalPropagatorBuilder *self, PyObject *args);
        static PyObject *t_NumericalPropagatorBuilder_getAllForceModels(t_NumericalPropagatorBuilder *self);
        static PyObject *t_NumericalPropagatorBuilder_getIntegratorBuilder(t_NumericalPropagatorBuilder *self);
        static PyObject *t_NumericalPropagatorBuilder_getMass(t_NumericalPropagatorBuilder *self);
        static PyObject *t_NumericalPropagatorBuilder_setMass(t_NumericalPropagatorBuilder *self, PyObject *arg);
        static PyObject *t_NumericalPropagatorBuilder_get__allForceModels(t_NumericalPropagatorBuilder *self, void *data);
        static PyObject *t_NumericalPropagatorBuilder_get__integratorBuilder(t_NumericalPropagatorBuilder *self, void *data);
        static PyObject *t_NumericalPropagatorBuilder_get__mass(t_NumericalPropagatorBuilder *self, void *data);
        static int t_NumericalPropagatorBuilder_set__mass(t_NumericalPropagatorBuilder *self, PyObject *arg, void *data);
        static PyGetSetDef t_NumericalPropagatorBuilder__fields_[] = {
          DECLARE_GET_FIELD(t_NumericalPropagatorBuilder, allForceModels),
          DECLARE_GET_FIELD(t_NumericalPropagatorBuilder, integratorBuilder),
          DECLARE_GETSET_FIELD(t_NumericalPropagatorBuilder, mass),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_NumericalPropagatorBuilder__methods_[] = {
          DECLARE_METHOD(t_NumericalPropagatorBuilder, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, addForceModel, METH_O),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, buildLeastSquaresModel, METH_VARARGS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, buildPropagator, METH_VARARGS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, copy, METH_VARARGS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, getAllForceModels, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, getIntegratorBuilder, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, getMass, METH_NOARGS),
          DECLARE_METHOD(t_NumericalPropagatorBuilder, setMass, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(NumericalPropagatorBuilder)[] = {
          { Py_tp_methods, t_NumericalPropagatorBuilder__methods_ },
          { Py_tp_init, (void *) t_NumericalPropagatorBuilder_init_ },
          { Py_tp_getset, t_NumericalPropagatorBuilder__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(NumericalPropagatorBuilder)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::conversion::AbstractPropagatorBuilder),
          NULL
        };

        DEFINE_TYPE(NumericalPropagatorBuilder, t_NumericalPropagatorBuilder, NumericalPropagatorBuilder);

        void t_NumericalPropagatorBuilder::install(PyObject *module)
        {
          installType(&PY_TYPE(NumericalPropagatorBuilder), &PY_TYPE_DEF(NumericalPropagatorBuilder), module, "NumericalPropagatorBuilder", 0);
        }

        void t_NumericalPropagatorBuilder::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(NumericalPropagatorBuilder), "class_", make_descriptor(NumericalPropagatorBuilder::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NumericalPropagatorBuilder), "wrapfn_", make_descriptor(t_NumericalPropagatorBuilder::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(NumericalPropagatorBuilder), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_NumericalPropagatorBuilder_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, NumericalPropagatorBuilder::initializeClass, 1)))
            return NULL;
          return t_NumericalPropagatorBuilder::wrap_Object(NumericalPropagatorBuilder(((t_NumericalPropagatorBuilder *) arg)->object.this$));
        }
        static PyObject *t_NumericalPropagatorBuilder_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, NumericalPropagatorBuilder::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_NumericalPropagatorBuilder_init_(t_NumericalPropagatorBuilder *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 4:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::propagation::conversion::ODEIntegratorBuilder a1((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              NumericalPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkKD", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::conversion::ODEIntegratorBuilder::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3))
              {
                INT_CALL(object = NumericalPropagatorBuilder(a0, a1, a2, a3));
                self->object = object;
                break;
              }
            }
            goto err;
           case 5:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::propagation::conversion::ODEIntegratorBuilder a1((jobject) NULL);
              ::org::orekit::orbits::PositionAngleType a2((jobject) NULL);
              PyTypeObject **p2;
              jdouble a3;
              ::org::orekit::attitudes::AttitudeProvider a4((jobject) NULL);
              NumericalPropagatorBuilder object((jobject) NULL);

              if (!parseArgs(args, "kkKDk", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::propagation::conversion::ODEIntegratorBuilder::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, ::org::orekit::attitudes::AttitudeProvider::initializeClass, &a0, &a1, &a2, &p2, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a3, &a4))
              {
                INT_CALL(object = NumericalPropagatorBuilder(a0, a1, a2, a3, a4));
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

        static PyObject *t_NumericalPropagatorBuilder_addForceModel(t_NumericalPropagatorBuilder *self, PyObject *arg)
        {
          ::org::orekit::forces::ForceModel a0((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::forces::ForceModel::initializeClass, &a0))
          {
            OBJ_CALL(self->object.addForceModel(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addForceModel", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagatorBuilder_buildLeastSquaresModel(t_NumericalPropagatorBuilder *self, PyObject *args)
        {
          JArray< ::org::orekit::propagation::conversion::PropagatorBuilder > a0((jobject) NULL);
          ::java::util::List a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::orekit::utils::ParameterDriversList a2((jobject) NULL);
          ::org::orekit::estimation::leastsquares::ModelObserver a3((jobject) NULL);
          ::org::orekit::estimation::leastsquares::BatchLSModel result((jobject) NULL);

          if (!parseArgs(args, "[kKkk", ::org::orekit::propagation::conversion::PropagatorBuilder::initializeClass, ::java::util::List::initializeClass, ::org::orekit::utils::ParameterDriversList::initializeClass, ::org::orekit::estimation::leastsquares::ModelObserver::initializeClass, &a0, &a1, &p1, ::java::util::t_List::parameters_, &a2, &a3))
          {
            OBJ_CALL(result = self->object.buildLeastSquaresModel(a0, a1, a2, a3));
            return ::org::orekit::estimation::leastsquares::t_BatchLSModel::wrap_Object(result);
          }

          return callSuper(PY_TYPE(NumericalPropagatorBuilder), (PyObject *) self, "buildLeastSquaresModel", args, 2);
        }

        static PyObject *t_NumericalPropagatorBuilder_buildPropagator(t_NumericalPropagatorBuilder *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          ::org::orekit::propagation::numerical::NumericalPropagator result((jobject) NULL);

          if (!parseArgs(args, "[D", &a0))
          {
            OBJ_CALL(result = self->object.buildPropagator(a0));
            return ::org::orekit::propagation::numerical::t_NumericalPropagator::wrap_Object(result);
          }

          return callSuper(PY_TYPE(NumericalPropagatorBuilder), (PyObject *) self, "buildPropagator", args, 2);
        }

        static PyObject *t_NumericalPropagatorBuilder_copy(t_NumericalPropagatorBuilder *self, PyObject *args)
        {
          NumericalPropagatorBuilder result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.copy());
            return t_NumericalPropagatorBuilder::wrap_Object(result);
          }

          return callSuper(PY_TYPE(NumericalPropagatorBuilder), (PyObject *) self, "copy", args, 2);
        }

        static PyObject *t_NumericalPropagatorBuilder_getAllForceModels(t_NumericalPropagatorBuilder *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::forces::PY_TYPE(ForceModel));
        }

        static PyObject *t_NumericalPropagatorBuilder_getIntegratorBuilder(t_NumericalPropagatorBuilder *self)
        {
          ::org::orekit::propagation::conversion::ODEIntegratorBuilder result((jobject) NULL);
          OBJ_CALL(result = self->object.getIntegratorBuilder());
          return ::org::orekit::propagation::conversion::t_ODEIntegratorBuilder::wrap_Object(result);
        }

        static PyObject *t_NumericalPropagatorBuilder_getMass(t_NumericalPropagatorBuilder *self)
        {
          jdouble result;
          OBJ_CALL(result = self->object.getMass());
          return PyFloat_FromDouble((double) result);
        }

        static PyObject *t_NumericalPropagatorBuilder_setMass(t_NumericalPropagatorBuilder *self, PyObject *arg)
        {
          jdouble a0;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(self->object.setMass(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "setMass", arg);
          return NULL;
        }

        static PyObject *t_NumericalPropagatorBuilder_get__allForceModels(t_NumericalPropagatorBuilder *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getAllForceModels());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_NumericalPropagatorBuilder_get__integratorBuilder(t_NumericalPropagatorBuilder *self, void *data)
        {
          ::org::orekit::propagation::conversion::ODEIntegratorBuilder value((jobject) NULL);
          OBJ_CALL(value = self->object.getIntegratorBuilder());
          return ::org::orekit::propagation::conversion::t_ODEIntegratorBuilder::wrap_Object(value);
        }

        static PyObject *t_NumericalPropagatorBuilder_get__mass(t_NumericalPropagatorBuilder *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getMass());
          return PyFloat_FromDouble((double) value);
        }
        static int t_NumericalPropagatorBuilder_set__mass(t_NumericalPropagatorBuilder *self, PyObject *arg, void *data)
        {
          {
            jdouble value;
            if (!parseArg(arg, "D", &value))
            {
              INT_CALL(self->object.setMass(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "mass", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/regression/MillerUpdatingRegression.h"
#include "org/hipparchus/stat/regression/RegressionResults.h"
#include "org/hipparchus/stat/regression/UpdatingMultipleLinearRegression.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace regression {

        ::java::lang::Class *MillerUpdatingRegression::class$ = NULL;
        jmethodID *MillerUpdatingRegression::mids$ = NULL;
        bool MillerUpdatingRegression::live$ = false;

        jclass MillerUpdatingRegression::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/regression/MillerUpdatingRegression");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_bc79bc153a2b3c2e] = env->getMethodID(cls, "<init>", "(IZ)V");
            mids$[mid_init$_43205367e2308f0a] = env->getMethodID(cls, "<init>", "(IZD)V");
            mids$[mid_addObservation_caadaecfce5fba2f] = env->getMethodID(cls, "addObservation", "([DD)V");
            mids$[mid_addObservations_f51b12ef24067352] = env->getMethodID(cls, "addObservations", "([[D[D)V");
            mids$[mid_clear_7ae3461a92a43152] = env->getMethodID(cls, "clear", "()V");
            mids$[mid_getDiagonalOfHatMatrix_f05cb8c6dfd5e0b9] = env->getMethodID(cls, "getDiagonalOfHatMatrix", "([D)D");
            mids$[mid_getN_a27fc9afd27e559d] = env->getMethodID(cls, "getN", "()J");
            mids$[mid_getOrderOfRegressors_d8ead0d90ce828b0] = env->getMethodID(cls, "getOrderOfRegressors", "()[I");
            mids$[mid_getPartialCorrelations_eb9cceadce1b2217] = env->getMethodID(cls, "getPartialCorrelations", "(I)[D");
            mids$[mid_hasIntercept_e470b6d9e0d979db] = env->getMethodID(cls, "hasIntercept", "()Z");
            mids$[mid_regress_b84c99961a7276a9] = env->getMethodID(cls, "regress", "()Lorg/hipparchus/stat/regression/RegressionResults;");
            mids$[mid_regress_d722bd798e38d351] = env->getMethodID(cls, "regress", "([I)Lorg/hipparchus/stat/regression/RegressionResults;");
            mids$[mid_regress_6d016b31aa6309e4] = env->getMethodID(cls, "regress", "(I)Lorg/hipparchus/stat/regression/RegressionResults;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        MillerUpdatingRegression::MillerUpdatingRegression(jint a0, jboolean a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bc79bc153a2b3c2e, a0, a1)) {}

        MillerUpdatingRegression::MillerUpdatingRegression(jint a0, jboolean a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_43205367e2308f0a, a0, a1, a2)) {}

        void MillerUpdatingRegression::addObservation(const JArray< jdouble > & a0, jdouble a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addObservation_caadaecfce5fba2f], a0.this$, a1);
        }

        void MillerUpdatingRegression::addObservations(const JArray< JArray< jdouble > > & a0, const JArray< jdouble > & a1) const
        {
          env->callVoidMethod(this$, mids$[mid_addObservations_f51b12ef24067352], a0.this$, a1.this$);
        }

        void MillerUpdatingRegression::clear() const
        {
          env->callVoidMethod(this$, mids$[mid_clear_7ae3461a92a43152]);
        }

        jdouble MillerUpdatingRegression::getDiagonalOfHatMatrix(const JArray< jdouble > & a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_getDiagonalOfHatMatrix_f05cb8c6dfd5e0b9], a0.this$);
        }

        jlong MillerUpdatingRegression::getN() const
        {
          return env->callLongMethod(this$, mids$[mid_getN_a27fc9afd27e559d]);
        }

        JArray< jint > MillerUpdatingRegression::getOrderOfRegressors() const
        {
          return JArray< jint >(env->callObjectMethod(this$, mids$[mid_getOrderOfRegressors_d8ead0d90ce828b0]));
        }

        JArray< jdouble > MillerUpdatingRegression::getPartialCorrelations(jint a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getPartialCorrelations_eb9cceadce1b2217], a0));
        }

        jboolean MillerUpdatingRegression::hasIntercept() const
        {
          return env->callBooleanMethod(this$, mids$[mid_hasIntercept_e470b6d9e0d979db]);
        }

        ::org::hipparchus::stat::regression::RegressionResults MillerUpdatingRegression::regress() const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_b84c99961a7276a9]));
        }

        ::org::hipparchus::stat::regression::RegressionResults MillerUpdatingRegression::regress(const JArray< jint > & a0) const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_d722bd798e38d351], a0.this$));
        }

        ::org::hipparchus::stat::regression::RegressionResults MillerUpdatingRegression::regress(jint a0) const
        {
          return ::org::hipparchus::stat::regression::RegressionResults(env->callObjectMethod(this$, mids$[mid_regress_6d016b31aa6309e4], a0));
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
    namespace stat {
      namespace regression {
        static PyObject *t_MillerUpdatingRegression_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MillerUpdatingRegression_instance_(PyTypeObject *type, PyObject *arg);
        static int t_MillerUpdatingRegression_init_(t_MillerUpdatingRegression *self, PyObject *args, PyObject *kwds);
        static PyObject *t_MillerUpdatingRegression_addObservation(t_MillerUpdatingRegression *self, PyObject *args);
        static PyObject *t_MillerUpdatingRegression_addObservations(t_MillerUpdatingRegression *self, PyObject *args);
        static PyObject *t_MillerUpdatingRegression_clear(t_MillerUpdatingRegression *self);
        static PyObject *t_MillerUpdatingRegression_getDiagonalOfHatMatrix(t_MillerUpdatingRegression *self, PyObject *arg);
        static PyObject *t_MillerUpdatingRegression_getN(t_MillerUpdatingRegression *self);
        static PyObject *t_MillerUpdatingRegression_getOrderOfRegressors(t_MillerUpdatingRegression *self);
        static PyObject *t_MillerUpdatingRegression_getPartialCorrelations(t_MillerUpdatingRegression *self, PyObject *arg);
        static PyObject *t_MillerUpdatingRegression_hasIntercept(t_MillerUpdatingRegression *self);
        static PyObject *t_MillerUpdatingRegression_regress(t_MillerUpdatingRegression *self, PyObject *args);
        static PyObject *t_MillerUpdatingRegression_get__n(t_MillerUpdatingRegression *self, void *data);
        static PyObject *t_MillerUpdatingRegression_get__orderOfRegressors(t_MillerUpdatingRegression *self, void *data);
        static PyGetSetDef t_MillerUpdatingRegression__fields_[] = {
          DECLARE_GET_FIELD(t_MillerUpdatingRegression, n),
          DECLARE_GET_FIELD(t_MillerUpdatingRegression, orderOfRegressors),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_MillerUpdatingRegression__methods_[] = {
          DECLARE_METHOD(t_MillerUpdatingRegression, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MillerUpdatingRegression, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MillerUpdatingRegression, addObservation, METH_VARARGS),
          DECLARE_METHOD(t_MillerUpdatingRegression, addObservations, METH_VARARGS),
          DECLARE_METHOD(t_MillerUpdatingRegression, clear, METH_NOARGS),
          DECLARE_METHOD(t_MillerUpdatingRegression, getDiagonalOfHatMatrix, METH_O),
          DECLARE_METHOD(t_MillerUpdatingRegression, getN, METH_NOARGS),
          DECLARE_METHOD(t_MillerUpdatingRegression, getOrderOfRegressors, METH_NOARGS),
          DECLARE_METHOD(t_MillerUpdatingRegression, getPartialCorrelations, METH_O),
          DECLARE_METHOD(t_MillerUpdatingRegression, hasIntercept, METH_NOARGS),
          DECLARE_METHOD(t_MillerUpdatingRegression, regress, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MillerUpdatingRegression)[] = {
          { Py_tp_methods, t_MillerUpdatingRegression__methods_ },
          { Py_tp_init, (void *) t_MillerUpdatingRegression_init_ },
          { Py_tp_getset, t_MillerUpdatingRegression__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MillerUpdatingRegression)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(MillerUpdatingRegression, t_MillerUpdatingRegression, MillerUpdatingRegression);

        void t_MillerUpdatingRegression::install(PyObject *module)
        {
          installType(&PY_TYPE(MillerUpdatingRegression), &PY_TYPE_DEF(MillerUpdatingRegression), module, "MillerUpdatingRegression", 0);
        }

        void t_MillerUpdatingRegression::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MillerUpdatingRegression), "class_", make_descriptor(MillerUpdatingRegression::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MillerUpdatingRegression), "wrapfn_", make_descriptor(t_MillerUpdatingRegression::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MillerUpdatingRegression), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MillerUpdatingRegression_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MillerUpdatingRegression::initializeClass, 1)))
            return NULL;
          return t_MillerUpdatingRegression::wrap_Object(MillerUpdatingRegression(((t_MillerUpdatingRegression *) arg)->object.this$));
        }
        static PyObject *t_MillerUpdatingRegression_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MillerUpdatingRegression::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_MillerUpdatingRegression_init_(t_MillerUpdatingRegression *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              jint a0;
              jboolean a1;
              MillerUpdatingRegression object((jobject) NULL);

              if (!parseArgs(args, "IZ", &a0, &a1))
              {
                INT_CALL(object = MillerUpdatingRegression(a0, a1));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              jint a0;
              jboolean a1;
              jdouble a2;
              MillerUpdatingRegression object((jobject) NULL);

              if (!parseArgs(args, "IZD", &a0, &a1, &a2))
              {
                INT_CALL(object = MillerUpdatingRegression(a0, a1, a2));
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

        static PyObject *t_MillerUpdatingRegression_addObservation(t_MillerUpdatingRegression *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble a1;

          if (!parseArgs(args, "[DD", &a0, &a1))
          {
            OBJ_CALL(self->object.addObservation(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addObservation", args);
          return NULL;
        }

        static PyObject *t_MillerUpdatingRegression_addObservations(t_MillerUpdatingRegression *self, PyObject *args)
        {
          JArray< JArray< jdouble > > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);

          if (!parseArgs(args, "[[D[D", &a0, &a1))
          {
            OBJ_CALL(self->object.addObservations(a0, a1));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "addObservations", args);
          return NULL;
        }

        static PyObject *t_MillerUpdatingRegression_clear(t_MillerUpdatingRegression *self)
        {
          OBJ_CALL(self->object.clear());
          Py_RETURN_NONE;
        }

        static PyObject *t_MillerUpdatingRegression_getDiagonalOfHatMatrix(t_MillerUpdatingRegression *self, PyObject *arg)
        {
          JArray< jdouble > a0((jobject) NULL);
          jdouble result;

          if (!parseArg(arg, "[D", &a0))
          {
            OBJ_CALL(result = self->object.getDiagonalOfHatMatrix(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "getDiagonalOfHatMatrix", arg);
          return NULL;
        }

        static PyObject *t_MillerUpdatingRegression_getN(t_MillerUpdatingRegression *self)
        {
          jlong result;
          OBJ_CALL(result = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) result);
        }

        static PyObject *t_MillerUpdatingRegression_getOrderOfRegressors(t_MillerUpdatingRegression *self)
        {
          JArray< jint > result((jobject) NULL);
          OBJ_CALL(result = self->object.getOrderOfRegressors());
          return result.wrap();
        }

        static PyObject *t_MillerUpdatingRegression_getPartialCorrelations(t_MillerUpdatingRegression *self, PyObject *arg)
        {
          jint a0;
          JArray< jdouble > result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = self->object.getPartialCorrelations(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "getPartialCorrelations", arg);
          return NULL;
        }

        static PyObject *t_MillerUpdatingRegression_hasIntercept(t_MillerUpdatingRegression *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.hasIntercept());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_MillerUpdatingRegression_regress(t_MillerUpdatingRegression *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 0:
            {
              ::org::hipparchus::stat::regression::RegressionResults result((jobject) NULL);
              OBJ_CALL(result = self->object.regress());
              return ::org::hipparchus::stat::regression::t_RegressionResults::wrap_Object(result);
            }
            break;
           case 1:
            {
              JArray< jint > a0((jobject) NULL);
              ::org::hipparchus::stat::regression::RegressionResults result((jobject) NULL);

              if (!parseArgs(args, "[I", &a0))
              {
                OBJ_CALL(result = self->object.regress(a0));
                return ::org::hipparchus::stat::regression::t_RegressionResults::wrap_Object(result);
              }
            }
            {
              jint a0;
              ::org::hipparchus::stat::regression::RegressionResults result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.regress(a0));
                return ::org::hipparchus::stat::regression::t_RegressionResults::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "regress", args);
          return NULL;
        }

        static PyObject *t_MillerUpdatingRegression_get__n(t_MillerUpdatingRegression *self, void *data)
        {
          jlong value;
          OBJ_CALL(value = self->object.getN());
          return PyLong_FromLongLong((PY_LONG_LONG) value);
        }

        static PyObject *t_MillerUpdatingRegression_get__orderOfRegressors(t_MillerUpdatingRegression *self, void *data)
        {
          JArray< jint > value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrderOfRegressors());
          return value.wrap();
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
#include "java/lang/Class.h"
#include "org/orekit/utils/TimeStampedAngularCoordinates.h"
#include "java/lang/String.h"
#include "org/orekit/files/general/AttitudeEphemerisFile$SatelliteAttitudeEphemeris.h"
#include "org/orekit/time/AbsoluteDate.h"
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
                  mids$[mid_init$_6ea6ec8379c9f4a5] = env->getMethodID(cls, "<init>", "(Ljava/lang/String;Ljava/util/List;)V");
                  mids$[mid_getId_0090f7797e403f43] = env->getMethodID(cls, "getId", "()Ljava/lang/String;");
                  mids$[mid_getSegments_a6156df500549a58] = env->getMethodID(cls, "getSegments", "()Ljava/util/List;");
                  mids$[mid_getStart_aaa854c403487cf3] = env->getMethodID(cls, "getStart", "()Lorg/orekit/time/AbsoluteDate;");
                  mids$[mid_getStop_aaa854c403487cf3] = env->getMethodID(cls, "getStop", "()Lorg/orekit/time/AbsoluteDate;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              AcmSatelliteEphemeris::AcmSatelliteEphemeris(const ::java::lang::String & a0, const ::java::util::List & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_6ea6ec8379c9f4a5, a0.this$, a1.this$)) {}

              ::java::lang::String AcmSatelliteEphemeris::getId() const
              {
                return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getId_0090f7797e403f43]));
              }

              ::java::util::List AcmSatelliteEphemeris::getSegments() const
              {
                return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSegments_a6156df500549a58]));
              }

              ::org::orekit::time::AbsoluteDate AcmSatelliteEphemeris::getStart() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStart_aaa854c403487cf3]));
              }

              ::org::orekit::time::AbsoluteDate AcmSatelliteEphemeris::getStop() const
              {
                return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getStop_aaa854c403487cf3]));
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
#include "org/orekit/propagation/analytical/gnss/data/QZSSCivilianNavigationMessage.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {
        namespace gnss {
          namespace data {

            ::java::lang::Class *QZSSCivilianNavigationMessage::class$ = NULL;
            jmethodID *QZSSCivilianNavigationMessage::mids$ = NULL;
            bool QZSSCivilianNavigationMessage::live$ = false;

            jclass QZSSCivilianNavigationMessage::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/gnss/data/QZSSCivilianNavigationMessage");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_50a2e0b139e80a58] = env->getMethodID(cls, "<init>", "(Z)V");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            QZSSCivilianNavigationMessage::QZSSCivilianNavigationMessage(jboolean a0) : ::org::orekit::propagation::analytical::gnss::data::CivilianNavigationMessage(env->newObject(initializeClass, &mids$, mid_init$_50a2e0b139e80a58, a0)) {}
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
      namespace analytical {
        namespace gnss {
          namespace data {
            static PyObject *t_QZSSCivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_QZSSCivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg);
            static int t_QZSSCivilianNavigationMessage_init_(t_QZSSCivilianNavigationMessage *self, PyObject *args, PyObject *kwds);

            static PyMethodDef t_QZSSCivilianNavigationMessage__methods_[] = {
              DECLARE_METHOD(t_QZSSCivilianNavigationMessage, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_QZSSCivilianNavigationMessage, instance_, METH_O | METH_CLASS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(QZSSCivilianNavigationMessage)[] = {
              { Py_tp_methods, t_QZSSCivilianNavigationMessage__methods_ },
              { Py_tp_init, (void *) t_QZSSCivilianNavigationMessage_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(QZSSCivilianNavigationMessage)[] = {
              &PY_TYPE_DEF(::org::orekit::propagation::analytical::gnss::data::CivilianNavigationMessage),
              NULL
            };

            DEFINE_TYPE(QZSSCivilianNavigationMessage, t_QZSSCivilianNavigationMessage, QZSSCivilianNavigationMessage);

            void t_QZSSCivilianNavigationMessage::install(PyObject *module)
            {
              installType(&PY_TYPE(QZSSCivilianNavigationMessage), &PY_TYPE_DEF(QZSSCivilianNavigationMessage), module, "QZSSCivilianNavigationMessage", 0);
            }

            void t_QZSSCivilianNavigationMessage::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSCivilianNavigationMessage), "class_", make_descriptor(QZSSCivilianNavigationMessage::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSCivilianNavigationMessage), "wrapfn_", make_descriptor(t_QZSSCivilianNavigationMessage::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(QZSSCivilianNavigationMessage), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_QZSSCivilianNavigationMessage_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, QZSSCivilianNavigationMessage::initializeClass, 1)))
                return NULL;
              return t_QZSSCivilianNavigationMessage::wrap_Object(QZSSCivilianNavigationMessage(((t_QZSSCivilianNavigationMessage *) arg)->object.this$));
            }
            static PyObject *t_QZSSCivilianNavigationMessage_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, QZSSCivilianNavigationMessage::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_QZSSCivilianNavigationMessage_init_(t_QZSSCivilianNavigationMessage *self, PyObject *args, PyObject *kwds)
            {
              jboolean a0;
              QZSSCivilianNavigationMessage object((jobject) NULL);

              if (!parseArgs(args, "Z", &a0))
              {
                INT_CALL(object = QZSSCivilianNavigationMessage(a0));
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
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/maneuvers/SmallManeuverAnalyticalModel.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/propagation/analytical/AdapterPropagator$DifferentialEffect.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace maneuvers {

        ::java::lang::Class *SmallManeuverAnalyticalModel::class$ = NULL;
        jmethodID *SmallManeuverAnalyticalModel::mids$ = NULL;
        bool SmallManeuverAnalyticalModel::live$ = false;

        jclass SmallManeuverAnalyticalModel::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/maneuvers/SmallManeuverAnalyticalModel");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_a311bc6b3c1a3e96] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
            mids$[mid_init$_4efcb1680a960148] = env->getMethodID(cls, "<init>", "(Lorg/orekit/propagation/SpacecraftState;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;D)V");
            mids$[mid_apply_4500563ec80cd676] = env->getMethodID(cls, "apply", "(Lorg/orekit/orbits/Orbit;)Lorg/orekit/orbits/Orbit;");
            mids$[mid_apply_81fc6fb6078d2aa7] = env->getMethodID(cls, "apply", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/orekit/propagation/SpacecraftState;");
            mids$[mid_getDate_aaa854c403487cf3] = env->getMethodID(cls, "getDate", "()Lorg/orekit/time/AbsoluteDate;");
            mids$[mid_getInertialDV_17a952530a808943] = env->getMethodID(cls, "getInertialDV", "()Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_getInertialFrame_c8fe21bcdac65bf6] = env->getMethodID(cls, "getInertialFrame", "()Lorg/orekit/frames/Frame;");
            mids$[mid_getJacobian_4388c4770d004546] = env->getMethodID(cls, "getJacobian", "(Lorg/orekit/orbits/Orbit;Lorg/orekit/orbits/PositionAngleType;[[D)V");
            mids$[mid_updateMass_0ba5fed9597b693e] = env->getMethodID(cls, "updateMass", "(D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        SmallManeuverAnalyticalModel::SmallManeuverAnalyticalModel(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1, jdouble a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a311bc6b3c1a3e96, a0.this$, a1.this$, a2)) {}

        SmallManeuverAnalyticalModel::SmallManeuverAnalyticalModel(const ::org::orekit::propagation::SpacecraftState & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2, jdouble a3) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_4efcb1680a960148, a0.this$, a1.this$, a2.this$, a3)) {}

        ::org::orekit::orbits::Orbit SmallManeuverAnalyticalModel::apply(const ::org::orekit::orbits::Orbit & a0) const
        {
          return ::org::orekit::orbits::Orbit(env->callObjectMethod(this$, mids$[mid_apply_4500563ec80cd676], a0.this$));
        }

        ::org::orekit::propagation::SpacecraftState SmallManeuverAnalyticalModel::apply(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::orekit::propagation::SpacecraftState(env->callObjectMethod(this$, mids$[mid_apply_81fc6fb6078d2aa7], a0.this$));
        }

        ::org::orekit::time::AbsoluteDate SmallManeuverAnalyticalModel::getDate() const
        {
          return ::org::orekit::time::AbsoluteDate(env->callObjectMethod(this$, mids$[mid_getDate_aaa854c403487cf3]));
        }

        ::org::hipparchus::geometry::euclidean::threed::Vector3D SmallManeuverAnalyticalModel::getInertialDV() const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_getInertialDV_17a952530a808943]));
        }

        ::org::orekit::frames::Frame SmallManeuverAnalyticalModel::getInertialFrame() const
        {
          return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getInertialFrame_c8fe21bcdac65bf6]));
        }

        void SmallManeuverAnalyticalModel::getJacobian(const ::org::orekit::orbits::Orbit & a0, const ::org::orekit::orbits::PositionAngleType & a1, const JArray< JArray< jdouble > > & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_getJacobian_4388c4770d004546], a0.this$, a1.this$, a2.this$);
        }

        jdouble SmallManeuverAnalyticalModel::updateMass(jdouble a0) const
        {
          return env->callDoubleMethod(this$, mids$[mid_updateMass_0ba5fed9597b693e], a0);
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
        static PyObject *t_SmallManeuverAnalyticalModel_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_SmallManeuverAnalyticalModel_instance_(PyTypeObject *type, PyObject *arg);
        static int t_SmallManeuverAnalyticalModel_init_(t_SmallManeuverAnalyticalModel *self, PyObject *args, PyObject *kwds);
        static PyObject *t_SmallManeuverAnalyticalModel_apply(t_SmallManeuverAnalyticalModel *self, PyObject *args);
        static PyObject *t_SmallManeuverAnalyticalModel_getDate(t_SmallManeuverAnalyticalModel *self);
        static PyObject *t_SmallManeuverAnalyticalModel_getInertialDV(t_SmallManeuverAnalyticalModel *self);
        static PyObject *t_SmallManeuverAnalyticalModel_getInertialFrame(t_SmallManeuverAnalyticalModel *self);
        static PyObject *t_SmallManeuverAnalyticalModel_getJacobian(t_SmallManeuverAnalyticalModel *self, PyObject *args);
        static PyObject *t_SmallManeuverAnalyticalModel_updateMass(t_SmallManeuverAnalyticalModel *self, PyObject *arg);
        static PyObject *t_SmallManeuverAnalyticalModel_get__date(t_SmallManeuverAnalyticalModel *self, void *data);
        static PyObject *t_SmallManeuverAnalyticalModel_get__inertialDV(t_SmallManeuverAnalyticalModel *self, void *data);
        static PyObject *t_SmallManeuverAnalyticalModel_get__inertialFrame(t_SmallManeuverAnalyticalModel *self, void *data);
        static PyGetSetDef t_SmallManeuverAnalyticalModel__fields_[] = {
          DECLARE_GET_FIELD(t_SmallManeuverAnalyticalModel, date),
          DECLARE_GET_FIELD(t_SmallManeuverAnalyticalModel, inertialDV),
          DECLARE_GET_FIELD(t_SmallManeuverAnalyticalModel, inertialFrame),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_SmallManeuverAnalyticalModel__methods_[] = {
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, apply, METH_VARARGS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, getDate, METH_NOARGS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, getInertialDV, METH_NOARGS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, getInertialFrame, METH_NOARGS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, getJacobian, METH_VARARGS),
          DECLARE_METHOD(t_SmallManeuverAnalyticalModel, updateMass, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(SmallManeuverAnalyticalModel)[] = {
          { Py_tp_methods, t_SmallManeuverAnalyticalModel__methods_ },
          { Py_tp_init, (void *) t_SmallManeuverAnalyticalModel_init_ },
          { Py_tp_getset, t_SmallManeuverAnalyticalModel__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(SmallManeuverAnalyticalModel)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(SmallManeuverAnalyticalModel, t_SmallManeuverAnalyticalModel, SmallManeuverAnalyticalModel);

        void t_SmallManeuverAnalyticalModel::install(PyObject *module)
        {
          installType(&PY_TYPE(SmallManeuverAnalyticalModel), &PY_TYPE_DEF(SmallManeuverAnalyticalModel), module, "SmallManeuverAnalyticalModel", 0);
        }

        void t_SmallManeuverAnalyticalModel::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmallManeuverAnalyticalModel), "class_", make_descriptor(SmallManeuverAnalyticalModel::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmallManeuverAnalyticalModel), "wrapfn_", make_descriptor(t_SmallManeuverAnalyticalModel::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(SmallManeuverAnalyticalModel), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_SmallManeuverAnalyticalModel_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, SmallManeuverAnalyticalModel::initializeClass, 1)))
            return NULL;
          return t_SmallManeuverAnalyticalModel::wrap_Object(SmallManeuverAnalyticalModel(((t_SmallManeuverAnalyticalModel *) arg)->object.this$));
        }
        static PyObject *t_SmallManeuverAnalyticalModel_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, SmallManeuverAnalyticalModel::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_SmallManeuverAnalyticalModel_init_(t_SmallManeuverAnalyticalModel *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 3:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
              jdouble a2;
              SmallManeuverAnalyticalModel object((jobject) NULL);

              if (!parseArgs(args, "kkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
              {
                INT_CALL(object = SmallManeuverAnalyticalModel(a0, a1, a2));
                self->object = object;
                break;
              }
            }
            goto err;
           case 4:
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::frames::Frame a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
              jdouble a3;
              SmallManeuverAnalyticalModel object((jobject) NULL);

              if (!parseArgs(args, "kkkD", ::org::orekit::propagation::SpacecraftState::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2, &a3))
              {
                INT_CALL(object = SmallManeuverAnalyticalModel(a0, a1, a2, a3));
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

        static PyObject *t_SmallManeuverAnalyticalModel_apply(t_SmallManeuverAnalyticalModel *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::orekit::orbits::Orbit a0((jobject) NULL);
              ::org::orekit::orbits::Orbit result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::orbits::Orbit::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.apply(a0));
                return ::org::orekit::orbits::t_Orbit::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              ::org::orekit::propagation::SpacecraftState result((jobject) NULL);

              if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
              {
                OBJ_CALL(result = self->object.apply(a0));
                return ::org::orekit::propagation::t_SpacecraftState::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "apply", args);
          return NULL;
        }

        static PyObject *t_SmallManeuverAnalyticalModel_getDate(t_SmallManeuverAnalyticalModel *self)
        {
          ::org::orekit::time::AbsoluteDate result((jobject) NULL);
          OBJ_CALL(result = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(result);
        }

        static PyObject *t_SmallManeuverAnalyticalModel_getInertialDV(t_SmallManeuverAnalyticalModel *self)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);
          OBJ_CALL(result = self->object.getInertialDV());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
        }

        static PyObject *t_SmallManeuverAnalyticalModel_getInertialFrame(t_SmallManeuverAnalyticalModel *self)
        {
          ::org::orekit::frames::Frame result((jobject) NULL);
          OBJ_CALL(result = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(result);
        }

        static PyObject *t_SmallManeuverAnalyticalModel_getJacobian(t_SmallManeuverAnalyticalModel *self, PyObject *args)
        {
          ::org::orekit::orbits::Orbit a0((jobject) NULL);
          ::org::orekit::orbits::PositionAngleType a1((jobject) NULL);
          PyTypeObject **p1;
          JArray< JArray< jdouble > > a2((jobject) NULL);

          if (!parseArgs(args, "kK[[D", ::org::orekit::orbits::Orbit::initializeClass, ::org::orekit::orbits::PositionAngleType::initializeClass, &a0, &a1, &p1, ::org::orekit::orbits::t_PositionAngleType::parameters_, &a2))
          {
            OBJ_CALL(self->object.getJacobian(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "getJacobian", args);
          return NULL;
        }

        static PyObject *t_SmallManeuverAnalyticalModel_updateMass(t_SmallManeuverAnalyticalModel *self, PyObject *arg)
        {
          jdouble a0;
          jdouble result;

          if (!parseArg(arg, "D", &a0))
          {
            OBJ_CALL(result = self->object.updateMass(a0));
            return PyFloat_FromDouble((double) result);
          }

          PyErr_SetArgsError((PyObject *) self, "updateMass", arg);
          return NULL;
        }

        static PyObject *t_SmallManeuverAnalyticalModel_get__date(t_SmallManeuverAnalyticalModel *self, void *data)
        {
          ::org::orekit::time::AbsoluteDate value((jobject) NULL);
          OBJ_CALL(value = self->object.getDate());
          return ::org::orekit::time::t_AbsoluteDate::wrap_Object(value);
        }

        static PyObject *t_SmallManeuverAnalyticalModel_get__inertialDV(t_SmallManeuverAnalyticalModel *self, void *data)
        {
          ::org::hipparchus::geometry::euclidean::threed::Vector3D value((jobject) NULL);
          OBJ_CALL(value = self->object.getInertialDV());
          return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(value);
        }

        static PyObject *t_SmallManeuverAnalyticalModel_get__inertialFrame(t_SmallManeuverAnalyticalModel *self, void *data)
        {
          ::org::orekit::frames::Frame value((jobject) NULL);
          OBJ_CALL(value = self->object.getInertialFrame());
          return ::org::orekit::frames::t_Frame::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2Field.h"
#include "org/hipparchus/Field.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FieldUnivariateDerivative2::class$ = NULL;
        jmethodID *FieldUnivariateDerivative2::mids$ = NULL;
        bool FieldUnivariateDerivative2::live$ = false;

        jclass FieldUnivariateDerivative2::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FieldUnivariateDerivative2");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_d5582e6a53cddd0c] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;)V");
            mids$[mid_init$_5b191078c5a85105] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)V");
            mids$[mid_abs_93920066ce6cb101] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_acos_93920066ce6cb101] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_acosh_93920066ce6cb101] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_add_61645050a5bf1069] = env->getMethodID(cls, "add", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_add_a7c4fcfc68490ba0] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_add_032b87e28c3487a8] = env->getMethodID(cls, "add", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_asin_93920066ce6cb101] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_asinh_93920066ce6cb101] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_atan_93920066ce6cb101] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_atan2_61645050a5bf1069] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_atanh_93920066ce6cb101] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_cbrt_93920066ce6cb101] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_ceil_93920066ce6cb101] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_compose_7e7d3f7c520203ea] = env->getMethodID(cls, "compose", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_copySign_61645050a5bf1069] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_copySign_a7c4fcfc68490ba0] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_copySign_032b87e28c3487a8] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_cos_93920066ce6cb101] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_cosh_93920066ce6cb101] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_divide_61645050a5bf1069] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_divide_a7c4fcfc68490ba0] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_divide_032b87e28c3487a8] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_equals_229c87223f486349] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_exp_93920066ce6cb101] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_expm1_93920066ce6cb101] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_floor_93920066ce6cb101] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_getDerivative_d0960d09d84b1c1d] = env->getMethodID(cls, "getDerivative", "(I)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getExponent_f2f64475e4580546] = env->getMethodID(cls, "getExponent", "()I");
            mids$[mid_getField_f3cf80c7f2a55c83] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2Field;");
            mids$[mid_getFirstDerivative_e6d4d3215c30992a] = env->getMethodID(cls, "getFirstDerivative", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getOrder_f2f64475e4580546] = env->getMethodID(cls, "getOrder", "()I");
            mids$[mid_getPi_93920066ce6cb101] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_getReal_456d9a2f64d6b28d] = env->getMethodID(cls, "getReal", "()D");
            mids$[mid_getSecondDerivative_e6d4d3215c30992a] = env->getMethodID(cls, "getSecondDerivative", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getValue_e6d4d3215c30992a] = env->getMethodID(cls, "getValue", "()Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_getValueField_70b4bbd3fa378d6b] = env->getMethodID(cls, "getValueField", "()Lorg/hipparchus/Field;");
            mids$[mid_hashCode_f2f64475e4580546] = env->getMethodID(cls, "hashCode", "()I");
            mids$[mid_hypot_61645050a5bf1069] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_32ee2a05356a085c] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_6165779c10815d6f] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_f8d717ba7a1a39c4] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;[Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_3c3556b4cafe1806] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_9e3d685b4665907d] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_ed3e7195bbf094d1] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_4b9431d705d26f5b] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_4285511ac1c807a4] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_c1848064206e2afd] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_linearCombination_919398f757bbbdde] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_log_93920066ce6cb101] = env->getMethodID(cls, "log", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_log10_93920066ce6cb101] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_log1p_93920066ce6cb101] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_multiply_61645050a5bf1069] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_multiply_a7c4fcfc68490ba0] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_multiply_2c66592623e4e056] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_multiply_032b87e28c3487a8] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_negate_93920066ce6cb101] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_newInstance_a7c4fcfc68490ba0] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_pow_61645050a5bf1069] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_pow_a7c4fcfc68490ba0] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_pow_2c66592623e4e056] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_pow_aaab3831596c003a] = env->getStaticMethodID(cls, "pow", "(DLorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_reciprocal_93920066ce6cb101] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_remainder_61645050a5bf1069] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_remainder_a7c4fcfc68490ba0] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_remainder_032b87e28c3487a8] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_rint_93920066ce6cb101] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_rootN_2c66592623e4e056] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_scalb_2c66592623e4e056] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_sign_93920066ce6cb101] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_sin_93920066ce6cb101] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_sinCos_35f2499c71416a1a] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
            mids$[mid_sinh_93920066ce6cb101] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_sinhCosh_c388a3eefde9d597] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
            mids$[mid_sqrt_93920066ce6cb101] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_subtract_61645050a5bf1069] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_subtract_a7c4fcfc68490ba0] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_subtract_032b87e28c3487a8] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_tan_93920066ce6cb101] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_tanh_93920066ce6cb101] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_taylor_cc0a3d6abf820939] = env->getMethodID(cls, "taylor", "(D)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_taylor_d3398190482814dc] = env->getMethodID(cls, "taylor", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
            mids$[mid_toDegrees_93920066ce6cb101] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_toDerivativeStructure_7208bb4259086f92] = env->getMethodID(cls, "toDerivativeStructure", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_toRadians_93920066ce6cb101] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");
            mids$[mid_ulp_93920066ce6cb101] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/analysis/differentiation/FieldUnivariateDerivative2;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        FieldUnivariateDerivative2::FieldUnivariateDerivative2(const ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure & a0) : ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_d5582e6a53cddd0c, a0.this$)) {}

        FieldUnivariateDerivative2::FieldUnivariateDerivative2(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) : ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative(env->newObject(initializeClass, &mids$, mid_init$_5b191078c5a85105, a0.this$, a1.this$, a2.this$)) {}

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::abs() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_abs_93920066ce6cb101]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::acos() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_acos_93920066ce6cb101]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::acosh() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_acosh_93920066ce6cb101]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::add(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_add_61645050a5bf1069], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::add(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_add_a7c4fcfc68490ba0], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::add(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_add_032b87e28c3487a8], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::asin() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_asin_93920066ce6cb101]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::asinh() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_asinh_93920066ce6cb101]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::atan() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_atan_93920066ce6cb101]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::atan2(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_atan2_61645050a5bf1069], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::atanh() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_atanh_93920066ce6cb101]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::cbrt() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_cbrt_93920066ce6cb101]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::ceil() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_ceil_93920066ce6cb101]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::compose(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_compose_7e7d3f7c520203ea], a0.this$, a1.this$, a2.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::copySign(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_copySign_61645050a5bf1069], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::copySign(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_copySign_a7c4fcfc68490ba0], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::copySign(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_copySign_032b87e28c3487a8], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::cos() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_cos_93920066ce6cb101]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::cosh() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_cosh_93920066ce6cb101]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::divide(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_divide_61645050a5bf1069], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::divide(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_divide_a7c4fcfc68490ba0], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::divide(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_divide_032b87e28c3487a8], a0.this$));
        }

        jboolean FieldUnivariateDerivative2::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_229c87223f486349], a0.this$);
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::exp() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_exp_93920066ce6cb101]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::expm1() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_expm1_93920066ce6cb101]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::floor() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_floor_93920066ce6cb101]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative2::getDerivative(jint a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getDerivative_d0960d09d84b1c1d], a0));
        }

        jint FieldUnivariateDerivative2::getExponent() const
        {
          return env->callIntMethod(this$, mids$[mid_getExponent_f2f64475e4580546]);
        }

        ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2Field FieldUnivariateDerivative2::getField() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2Field(env->callObjectMethod(this$, mids$[mid_getField_f3cf80c7f2a55c83]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative2::getFirstDerivative() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getFirstDerivative_e6d4d3215c30992a]));
        }

        jint FieldUnivariateDerivative2::getOrder() const
        {
          return env->callIntMethod(this$, mids$[mid_getOrder_f2f64475e4580546]);
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::getPi() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_getPi_93920066ce6cb101]));
        }

        jdouble FieldUnivariateDerivative2::getReal() const
        {
          return env->callDoubleMethod(this$, mids$[mid_getReal_456d9a2f64d6b28d]);
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative2::getSecondDerivative() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getSecondDerivative_e6d4d3215c30992a]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative2::getValue() const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_getValue_e6d4d3215c30992a]));
        }

        ::org::hipparchus::Field FieldUnivariateDerivative2::getValueField() const
        {
          return ::org::hipparchus::Field(env->callObjectMethod(this$, mids$[mid_getValueField_70b4bbd3fa378d6b]));
        }

        jint FieldUnivariateDerivative2::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_f2f64475e4580546]);
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::hypot(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_hypot_61645050a5bf1069], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const JArray< jdouble > & a0, const JArray< FieldUnivariateDerivative2 > & a1) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_32ee2a05356a085c], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const JArray< ::org::hipparchus::CalculusFieldElement > & a0, const JArray< FieldUnivariateDerivative2 > & a1) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_6165779c10815d6f], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const JArray< FieldUnivariateDerivative2 > & a0, const JArray< FieldUnivariateDerivative2 > & a1) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_f8d717ba7a1a39c4], a0.this$, a1.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const FieldUnivariateDerivative2 & a0, const FieldUnivariateDerivative2 & a1, const FieldUnivariateDerivative2 & a2, const FieldUnivariateDerivative2 & a3) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_3c3556b4cafe1806], a0.this$, a1.this$, a2.this$, a3.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(jdouble a0, const FieldUnivariateDerivative2 & a1, jdouble a2, const FieldUnivariateDerivative2 & a3) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_9e3d685b4665907d], a0, a1.this$, a2, a3.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const FieldUnivariateDerivative2 & a0, const FieldUnivariateDerivative2 & a1, const FieldUnivariateDerivative2 & a2, const FieldUnivariateDerivative2 & a3, const FieldUnivariateDerivative2 & a4, const FieldUnivariateDerivative2 & a5) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_ed3e7195bbf094d1], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(jdouble a0, const FieldUnivariateDerivative2 & a1, jdouble a2, const FieldUnivariateDerivative2 & a3, jdouble a4, const FieldUnivariateDerivative2 & a5) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_4b9431d705d26f5b], a0, a1.this$, a2, a3.this$, a4, a5.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const ::org::hipparchus::CalculusFieldElement & a0, const FieldUnivariateDerivative2 & a1, const ::org::hipparchus::CalculusFieldElement & a2, const FieldUnivariateDerivative2 & a3, const ::org::hipparchus::CalculusFieldElement & a4, const FieldUnivariateDerivative2 & a5) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_4285511ac1c807a4], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(const FieldUnivariateDerivative2 & a0, const FieldUnivariateDerivative2 & a1, const FieldUnivariateDerivative2 & a2, const FieldUnivariateDerivative2 & a3, const FieldUnivariateDerivative2 & a4, const FieldUnivariateDerivative2 & a5, const FieldUnivariateDerivative2 & a6, const FieldUnivariateDerivative2 & a7) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_c1848064206e2afd], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::linearCombination(jdouble a0, const FieldUnivariateDerivative2 & a1, jdouble a2, const FieldUnivariateDerivative2 & a3, jdouble a4, const FieldUnivariateDerivative2 & a5, jdouble a6, const FieldUnivariateDerivative2 & a7) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_linearCombination_919398f757bbbdde], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::log() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_log_93920066ce6cb101]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::log10() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_log10_93920066ce6cb101]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::log1p() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_log1p_93920066ce6cb101]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::multiply(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_61645050a5bf1069], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::multiply(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_a7c4fcfc68490ba0], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::multiply(jint a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_2c66592623e4e056], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::multiply(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_multiply_032b87e28c3487a8], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::negate() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_negate_93920066ce6cb101]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::newInstance(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_newInstance_a7c4fcfc68490ba0], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::pow(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_pow_61645050a5bf1069], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::pow(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_pow_a7c4fcfc68490ba0], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::pow(jint a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_pow_2c66592623e4e056], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::pow(jdouble a0, const FieldUnivariateDerivative2 & a1)
        {
          jclass cls = env->getClass(initializeClass);
          return FieldUnivariateDerivative2(env->callStaticObjectMethod(cls, mids$[mid_pow_aaab3831596c003a], a0, a1.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::reciprocal() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_reciprocal_93920066ce6cb101]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::remainder(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_remainder_61645050a5bf1069], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::remainder(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_remainder_a7c4fcfc68490ba0], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::remainder(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_remainder_032b87e28c3487a8], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::rint() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_rint_93920066ce6cb101]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::rootN(jint a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_rootN_2c66592623e4e056], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::scalb(jint a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_scalb_2c66592623e4e056], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::sign() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sign_93920066ce6cb101]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::sin() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sin_93920066ce6cb101]));
        }

        ::org::hipparchus::util::FieldSinCos FieldUnivariateDerivative2::sinCos() const
        {
          return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_35f2499c71416a1a]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::sinh() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sinh_93920066ce6cb101]));
        }

        ::org::hipparchus::util::FieldSinhCosh FieldUnivariateDerivative2::sinhCosh() const
        {
          return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_c388a3eefde9d597]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::sqrt() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_sqrt_93920066ce6cb101]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::subtract(const FieldUnivariateDerivative2 & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_subtract_61645050a5bf1069], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::subtract(jdouble a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_subtract_a7c4fcfc68490ba0], a0));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::subtract(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_subtract_032b87e28c3487a8], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::tan() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_tan_93920066ce6cb101]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::tanh() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_tanh_93920066ce6cb101]));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative2::taylor(jdouble a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_cc0a3d6abf820939], a0));
        }

        ::org::hipparchus::CalculusFieldElement FieldUnivariateDerivative2::taylor(const ::org::hipparchus::CalculusFieldElement & a0) const
        {
          return ::org::hipparchus::CalculusFieldElement(env->callObjectMethod(this$, mids$[mid_taylor_d3398190482814dc], a0.this$));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::toDegrees() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_toDegrees_93920066ce6cb101]));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FieldUnivariateDerivative2::toDerivativeStructure() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_toDerivativeStructure_7208bb4259086f92]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::toRadians() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_toRadians_93920066ce6cb101]));
        }

        FieldUnivariateDerivative2 FieldUnivariateDerivative2::ulp() const
        {
          return FieldUnivariateDerivative2(env->callObjectMethod(this$, mids$[mid_ulp_93920066ce6cb101]));
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
        static PyObject *t_FieldUnivariateDerivative2_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative2_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FieldUnivariateDerivative2_of_(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static int t_FieldUnivariateDerivative2_init_(t_FieldUnivariateDerivative2 *self, PyObject *args, PyObject *kwds);
        static PyObject *t_FieldUnivariateDerivative2_abs(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_acos(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_acosh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_add(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_asin(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_asinh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_atan(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_atan2(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_atanh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_cbrt(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_ceil(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_compose(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_copySign(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_cos(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_cosh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_divide(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_equals(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_exp(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_expm1(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_floor(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getDerivative(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getExponent(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getField(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getFirstDerivative(t_FieldUnivariateDerivative2 *self);
        static PyObject *t_FieldUnivariateDerivative2_getOrder(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getPi(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getReal(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getSecondDerivative(t_FieldUnivariateDerivative2 *self);
        static PyObject *t_FieldUnivariateDerivative2_getValue(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_getValueField(t_FieldUnivariateDerivative2 *self);
        static PyObject *t_FieldUnivariateDerivative2_hashCode(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_hypot(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_linearCombination(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_log(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_log10(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_log1p(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_multiply(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_negate(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_newInstance(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_pow(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_pow_(PyTypeObject *type, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_reciprocal(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_remainder(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_rint(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_rootN(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_scalb(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_sign(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_sin(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_sinCos(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_sinh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_sinhCosh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_sqrt(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_subtract(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_tan(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_tanh(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_taylor(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_toDegrees(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_toDerivativeStructure(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_toRadians(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_ulp(t_FieldUnivariateDerivative2 *self, PyObject *args);
        static PyObject *t_FieldUnivariateDerivative2_get__exponent(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__field(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__firstDerivative(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__order(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__pi(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__real(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__secondDerivative(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__value(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__valueField(t_FieldUnivariateDerivative2 *self, void *data);
        static PyObject *t_FieldUnivariateDerivative2_get__parameters_(t_FieldUnivariateDerivative2 *self, void *data);
        static PyGetSetDef t_FieldUnivariateDerivative2__fields_[] = {
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, exponent),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, field),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, firstDerivative),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, order),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, pi),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, real),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, secondDerivative),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, value),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, valueField),
          DECLARE_GET_FIELD(t_FieldUnivariateDerivative2, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FieldUnivariateDerivative2__methods_[] = {
          DECLARE_METHOD(t_FieldUnivariateDerivative2, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, of_, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, abs, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, acos, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, acosh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, add, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, asin, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, asinh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, atan, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, atan2, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, atanh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, cbrt, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, ceil, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, compose, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, copySign, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, cos, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, cosh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, divide, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, equals, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, exp, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, expm1, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, floor, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getDerivative, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getExponent, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getField, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getFirstDerivative, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getOrder, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getPi, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getReal, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getSecondDerivative, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getValue, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, getValueField, METH_NOARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, hashCode, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, hypot, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, linearCombination, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, log, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, log10, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, log1p, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, multiply, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, negate, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, newInstance, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, pow, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, pow_, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, reciprocal, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, remainder, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, rint, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, rootN, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, scalb, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, sign, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, sin, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, sinCos, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, sinh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, sinhCosh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, sqrt, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, subtract, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, tan, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, tanh, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, taylor, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, toDegrees, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, toDerivativeStructure, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, toRadians, METH_VARARGS),
          DECLARE_METHOD(t_FieldUnivariateDerivative2, ulp, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FieldUnivariateDerivative2)[] = {
          { Py_tp_methods, t_FieldUnivariateDerivative2__methods_ },
          { Py_tp_init, (void *) t_FieldUnivariateDerivative2_init_ },
          { Py_tp_getset, t_FieldUnivariateDerivative2__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FieldUnivariateDerivative2)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative),
          NULL
        };

        DEFINE_TYPE(FieldUnivariateDerivative2, t_FieldUnivariateDerivative2, FieldUnivariateDerivative2);
        PyObject *t_FieldUnivariateDerivative2::wrap_Object(const FieldUnivariateDerivative2& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative2::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative2 *self = (t_FieldUnivariateDerivative2 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FieldUnivariateDerivative2::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FieldUnivariateDerivative2::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FieldUnivariateDerivative2 *self = (t_FieldUnivariateDerivative2 *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FieldUnivariateDerivative2::install(PyObject *module)
        {
          installType(&PY_TYPE(FieldUnivariateDerivative2), &PY_TYPE_DEF(FieldUnivariateDerivative2), module, "FieldUnivariateDerivative2", 0);
        }

        void t_FieldUnivariateDerivative2::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative2), "class_", make_descriptor(FieldUnivariateDerivative2::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative2), "wrapfn_", make_descriptor(t_FieldUnivariateDerivative2::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FieldUnivariateDerivative2), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FieldUnivariateDerivative2_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FieldUnivariateDerivative2::initializeClass, 1)))
            return NULL;
          return t_FieldUnivariateDerivative2::wrap_Object(FieldUnivariateDerivative2(((t_FieldUnivariateDerivative2 *) arg)->object.this$));
        }
        static PyObject *t_FieldUnivariateDerivative2_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FieldUnivariateDerivative2::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FieldUnivariateDerivative2_of_(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static int t_FieldUnivariateDerivative2_init_(t_FieldUnivariateDerivative2 *self, PyObject *args, PyObject *kwds)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 object((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure::initializeClass, &a0, &p0, ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::parameters_))
              {
                INT_CALL(object = FieldUnivariateDerivative2(a0));
                self->object = object;
                break;
              }
            }
            goto err;
           case 3:
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative2 object((jobject) NULL);

              if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                INT_CALL(object = FieldUnivariateDerivative2(a0, a1, a2));
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

        static PyObject *t_FieldUnivariateDerivative2_abs(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.abs());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "abs", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_acos(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acos());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "acos", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_acosh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.acosh());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "acosh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_add(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.add(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "add", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_asin(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asin());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "asin", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_asinh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.asinh());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "asinh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_atan(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atan());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "atan", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_atan2(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 a0((jobject) NULL);
          PyTypeObject **p0;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
          {
            OBJ_CALL(result = self->object.atan2(a0));
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "atan2", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_atanh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.atanh());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "atanh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_cbrt(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cbrt());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "cbrt", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_ceil(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ceil());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "ceil", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_compose(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
          PyTypeObject **p1;
          ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
          PyTypeObject **p2;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "KKK", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
          {
            OBJ_CALL(result = self->object.compose(a0, a1, a2));
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          PyErr_SetArgsError((PyObject *) self, "compose", args);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative2_copySign(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.copySign(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "copySign", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_cos(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cos());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "cos", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_cosh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.cosh());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "cosh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_divide(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.divide(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "divide", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_equals(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_exp(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.exp());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "exp", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_expm1(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.expm1());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "expm1", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_floor(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.floor());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "floor", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getDerivative(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jint a0;
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.getDerivative(a0));
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getDerivative", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getExponent(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getExponent());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getExponent", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getField(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2Field result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getField());
            return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative2Field::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getField", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getFirstDerivative(t_FieldUnivariateDerivative2 *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getFirstDerivative());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldUnivariateDerivative2_getOrder(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrder());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getOrder", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getPi(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getPi());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getPi", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getReal(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jdouble result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getReal());
            return PyFloat_FromDouble((double) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getReal", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getSecondDerivative(t_FieldUnivariateDerivative2 *self)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);
          OBJ_CALL(result = self->object.getSecondDerivative());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
        }

        static PyObject *t_FieldUnivariateDerivative2_getValue(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getValue());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "getValue", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_getValueField(t_FieldUnivariateDerivative2 *self)
        {
          ::org::hipparchus::Field result((jobject) NULL);
          OBJ_CALL(result = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FieldUnivariateDerivative2_hashCode(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "hashCode", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_hypot(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 a0((jobject) NULL);
          PyTypeObject **p0;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
          {
            OBJ_CALL(result = self->object.hypot(a0));
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "hypot", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_linearCombination(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              JArray< jdouble > a0((jobject) NULL);
              JArray< FieldUnivariateDerivative2 > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "[D[K", FieldUnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< ::org::hipparchus::CalculusFieldElement > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldUnivariateDerivative2 > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              JArray< FieldUnivariateDerivative2 > a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< FieldUnivariateDerivative2 > a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "[K[K", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_, &a1, &p1, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 4:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative2 a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "KKKK", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &p2, t_FieldUnivariateDerivative2::parameters_, &a3, &p3, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "DKDK", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &a3, &p3, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 6:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative2 a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative2 a4((jobject) NULL);
              PyTypeObject **p4;
              FieldUnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &p2, t_FieldUnivariateDerivative2::parameters_, &a3, &p3, t_FieldUnivariateDerivative2::parameters_, &a4, &p4, t_FieldUnivariateDerivative2::parameters_, &a5, &p5, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldUnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDK", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &a3, &p3, t_FieldUnivariateDerivative2::parameters_, &a4, &a5, &p5, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::CalculusFieldElement a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              ::org::hipparchus::CalculusFieldElement a4((jobject) NULL);
              PyTypeObject **p4;
              FieldUnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKK", ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative2::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative2::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a3, &p3, t_FieldUnivariateDerivative2::parameters_, &a4, &p4, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a5, &p5, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            break;
           case 8:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              FieldUnivariateDerivative2 a2((jobject) NULL);
              PyTypeObject **p2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              FieldUnivariateDerivative2 a4((jobject) NULL);
              PyTypeObject **p4;
              FieldUnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              FieldUnivariateDerivative2 a6((jobject) NULL);
              PyTypeObject **p6;
              FieldUnivariateDerivative2 a7((jobject) NULL);
              PyTypeObject **p7;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "KKKKKKKK", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &p2, t_FieldUnivariateDerivative2::parameters_, &a3, &p3, t_FieldUnivariateDerivative2::parameters_, &a4, &p4, t_FieldUnivariateDerivative2::parameters_, &a5, &p5, t_FieldUnivariateDerivative2::parameters_, &a6, &p6, t_FieldUnivariateDerivative2::parameters_, &a7, &p7, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 a1((jobject) NULL);
              PyTypeObject **p1;
              jdouble a2;
              FieldUnivariateDerivative2 a3((jobject) NULL);
              PyTypeObject **p3;
              jdouble a4;
              FieldUnivariateDerivative2 a5((jobject) NULL);
              PyTypeObject **p5;
              jdouble a6;
              FieldUnivariateDerivative2 a7((jobject) NULL);
              PyTypeObject **p7;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "DKDKDKDK", FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, FieldUnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative2::parameters_, &a2, &a3, &p3, t_FieldUnivariateDerivative2::parameters_, &a4, &a5, &p5, t_FieldUnivariateDerivative2::parameters_, &a6, &a7, &p7, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "linearCombination", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_log(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "log", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_log10(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log10());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "log10", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_log1p(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.log1p());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "log1p", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_multiply(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.multiply(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "multiply", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_negate(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.negate());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "negate", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_newInstance(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jdouble a0;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            OBJ_CALL(result = self->object.newInstance(a0));
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "newInstance", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_pow(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jint a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                OBJ_CALL(result = self->object.pow(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "pow", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_pow_(PyTypeObject *type, PyObject *args)
        {
          jdouble a0;
          FieldUnivariateDerivative2 a1((jobject) NULL);
          PyTypeObject **p1;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "DK", FieldUnivariateDerivative2::initializeClass, &a0, &a1, &p1, t_FieldUnivariateDerivative2::parameters_))
          {
            OBJ_CALL(result = ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2::pow(a0, a1));
            return t_FieldUnivariateDerivative2::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "pow_", args);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative2_reciprocal(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.reciprocal());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "reciprocal", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_remainder(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.remainder(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "remainder", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_rint(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.rint());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "rint", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_rootN(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jint a0;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.rootN(a0));
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "rootN", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_scalb(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          jint a0;
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            OBJ_CALL(result = self->object.scalb(a0));
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "scalb", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_sign(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sign());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "sign", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_sin(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sin());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "sin", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_sinCos(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinCos result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinCos());
            return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "sinCos", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_sinh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinh());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "sinh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_sinhCosh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sinhCosh());
            return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "sinhCosh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_sqrt(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.sqrt());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "sqrt", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_subtract(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              FieldUnivariateDerivative2 a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", FieldUnivariateDerivative2::initializeClass, &a0, &p0, t_FieldUnivariateDerivative2::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              jdouble a0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              FieldUnivariateDerivative2 result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.subtract(a0));
                return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
              }
            }
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "subtract", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_tan(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tan());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "tan", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_tanh(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.tanh());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "tanh", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_taylor(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              jdouble a0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "D", &a0))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
            {
              ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

              if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.taylor(a0));
                return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "taylor", args);
          return NULL;
        }

        static PyObject *t_FieldUnivariateDerivative2_toDegrees(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDegrees());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "toDegrees", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_toDerivativeStructure(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toDerivativeStructure());
            return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "toDerivativeStructure", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_toRadians(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.toRadians());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "toRadians", args, 2);
        }

        static PyObject *t_FieldUnivariateDerivative2_ulp(t_FieldUnivariateDerivative2 *self, PyObject *args)
        {
          FieldUnivariateDerivative2 result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.ulp());
            return t_FieldUnivariateDerivative2::wrap_Object(result, self->parameters[0]);
          }

          return callSuper(PY_TYPE(FieldUnivariateDerivative2), (PyObject *) self, "ulp", args, 2);
        }
        static PyObject *t_FieldUnivariateDerivative2_get__parameters_(t_FieldUnivariateDerivative2 *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FieldUnivariateDerivative2_get__exponent(t_FieldUnivariateDerivative2 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getExponent());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__field(t_FieldUnivariateDerivative2 *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldUnivariateDerivative2Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getField());
          return ::org::hipparchus::analysis::differentiation::t_FieldUnivariateDerivative2Field::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__firstDerivative(t_FieldUnivariateDerivative2 *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getFirstDerivative());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__order(t_FieldUnivariateDerivative2 *self, void *data)
        {
          jint value;
          OBJ_CALL(value = self->object.getOrder());
          return PyLong_FromLong((long) value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__pi(t_FieldUnivariateDerivative2 *self, void *data)
        {
          FieldUnivariateDerivative2 value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return t_FieldUnivariateDerivative2::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__real(t_FieldUnivariateDerivative2 *self, void *data)
        {
          jdouble value;
          OBJ_CALL(value = self->object.getReal());
          return PyFloat_FromDouble((double) value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__secondDerivative(t_FieldUnivariateDerivative2 *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getSecondDerivative());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__value(t_FieldUnivariateDerivative2 *self, void *data)
        {
          ::org::hipparchus::CalculusFieldElement value((jobject) NULL);
          OBJ_CALL(value = self->object.getValue());
          return ::org::hipparchus::t_CalculusFieldElement::wrap_Object(value);
        }

        static PyObject *t_FieldUnivariateDerivative2_get__valueField(t_FieldUnivariateDerivative2 *self, void *data)
        {
          ::org::hipparchus::Field value((jobject) NULL);
          OBJ_CALL(value = self->object.getValueField());
          return ::org::hipparchus::t_Field::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/nonstiff/AdamsNordsieckTransformer.h"
#include "org/hipparchus/linear/Array2DRowRealMatrix.h"
#include "java/lang/Class.h"
#include "org/hipparchus/ode/nonstiff/AdamsNordsieckTransformer.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {
      namespace nonstiff {

        ::java::lang::Class *AdamsNordsieckTransformer::class$ = NULL;
        jmethodID *AdamsNordsieckTransformer::mids$ = NULL;
        bool AdamsNordsieckTransformer::live$ = false;

        jclass AdamsNordsieckTransformer::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/ode/nonstiff/AdamsNordsieckTransformer");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getInstance_9059daa708ecf578] = env->getStaticMethodID(cls, "getInstance", "(I)Lorg/hipparchus/ode/nonstiff/AdamsNordsieckTransformer;");
            mids$[mid_initializeHighOrderDerivatives_3307b1e87a2ed966] = env->getMethodID(cls, "initializeHighOrderDerivatives", "(D[D[[D[[D)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
            mids$[mid_updateHighOrderDerivativesPhase1_6bf0ab2b7bd27bc5] = env->getMethodID(cls, "updateHighOrderDerivativesPhase1", "(Lorg/hipparchus/linear/Array2DRowRealMatrix;)Lorg/hipparchus/linear/Array2DRowRealMatrix;");
            mids$[mid_updateHighOrderDerivativesPhase2_37b11fdf1f335fdb] = env->getMethodID(cls, "updateHighOrderDerivativesPhase2", "([D[DLorg/hipparchus/linear/Array2DRowRealMatrix;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        AdamsNordsieckTransformer AdamsNordsieckTransformer::getInstance(jint a0)
        {
          jclass cls = env->getClass(initializeClass);
          return AdamsNordsieckTransformer(env->callStaticObjectMethod(cls, mids$[mid_getInstance_9059daa708ecf578], a0));
        }

        ::org::hipparchus::linear::Array2DRowRealMatrix AdamsNordsieckTransformer::initializeHighOrderDerivatives(jdouble a0, const JArray< jdouble > & a1, const JArray< JArray< jdouble > > & a2, const JArray< JArray< jdouble > > & a3) const
        {
          return ::org::hipparchus::linear::Array2DRowRealMatrix(env->callObjectMethod(this$, mids$[mid_initializeHighOrderDerivatives_3307b1e87a2ed966], a0, a1.this$, a2.this$, a3.this$));
        }

        ::org::hipparchus::linear::Array2DRowRealMatrix AdamsNordsieckTransformer::updateHighOrderDerivativesPhase1(const ::org::hipparchus::linear::Array2DRowRealMatrix & a0) const
        {
          return ::org::hipparchus::linear::Array2DRowRealMatrix(env->callObjectMethod(this$, mids$[mid_updateHighOrderDerivativesPhase1_6bf0ab2b7bd27bc5], a0.this$));
        }

        void AdamsNordsieckTransformer::updateHighOrderDerivativesPhase2(const JArray< jdouble > & a0, const JArray< jdouble > & a1, const ::org::hipparchus::linear::Array2DRowRealMatrix & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_updateHighOrderDerivativesPhase2_37b11fdf1f335fdb], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_AdamsNordsieckTransformer_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsNordsieckTransformer_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsNordsieckTransformer_getInstance(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AdamsNordsieckTransformer_initializeHighOrderDerivatives(t_AdamsNordsieckTransformer *self, PyObject *args);
        static PyObject *t_AdamsNordsieckTransformer_updateHighOrderDerivativesPhase1(t_AdamsNordsieckTransformer *self, PyObject *arg);
        static PyObject *t_AdamsNordsieckTransformer_updateHighOrderDerivativesPhase2(t_AdamsNordsieckTransformer *self, PyObject *args);

        static PyMethodDef t_AdamsNordsieckTransformer__methods_[] = {
          DECLARE_METHOD(t_AdamsNordsieckTransformer, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsNordsieckTransformer, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsNordsieckTransformer, getInstance, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AdamsNordsieckTransformer, initializeHighOrderDerivatives, METH_VARARGS),
          DECLARE_METHOD(t_AdamsNordsieckTransformer, updateHighOrderDerivativesPhase1, METH_O),
          DECLARE_METHOD(t_AdamsNordsieckTransformer, updateHighOrderDerivativesPhase2, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AdamsNordsieckTransformer)[] = {
          { Py_tp_methods, t_AdamsNordsieckTransformer__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AdamsNordsieckTransformer)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AdamsNordsieckTransformer, t_AdamsNordsieckTransformer, AdamsNordsieckTransformer);

        void t_AdamsNordsieckTransformer::install(PyObject *module)
        {
          installType(&PY_TYPE(AdamsNordsieckTransformer), &PY_TYPE_DEF(AdamsNordsieckTransformer), module, "AdamsNordsieckTransformer", 0);
        }

        void t_AdamsNordsieckTransformer::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsNordsieckTransformer), "class_", make_descriptor(AdamsNordsieckTransformer::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsNordsieckTransformer), "wrapfn_", make_descriptor(t_AdamsNordsieckTransformer::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AdamsNordsieckTransformer), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AdamsNordsieckTransformer_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AdamsNordsieckTransformer::initializeClass, 1)))
            return NULL;
          return t_AdamsNordsieckTransformer::wrap_Object(AdamsNordsieckTransformer(((t_AdamsNordsieckTransformer *) arg)->object.this$));
        }
        static PyObject *t_AdamsNordsieckTransformer_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AdamsNordsieckTransformer::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AdamsNordsieckTransformer_getInstance(PyTypeObject *type, PyObject *arg)
        {
          jint a0;
          AdamsNordsieckTransformer result((jobject) NULL);

          if (!parseArg(arg, "I", &a0))
          {
            OBJ_CALL(result = ::org::hipparchus::ode::nonstiff::AdamsNordsieckTransformer::getInstance(a0));
            return t_AdamsNordsieckTransformer::wrap_Object(result);
          }

          PyErr_SetArgsError(type, "getInstance", arg);
          return NULL;
        }

        static PyObject *t_AdamsNordsieckTransformer_initializeHighOrderDerivatives(t_AdamsNordsieckTransformer *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          JArray< JArray< jdouble > > a2((jobject) NULL);
          JArray< JArray< jdouble > > a3((jobject) NULL);
          ::org::hipparchus::linear::Array2DRowRealMatrix result((jobject) NULL);

          if (!parseArgs(args, "D[D[[D[[D", &a0, &a1, &a2, &a3))
          {
            OBJ_CALL(result = self->object.initializeHighOrderDerivatives(a0, a1, a2, a3));
            return ::org::hipparchus::linear::t_Array2DRowRealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "initializeHighOrderDerivatives", args);
          return NULL;
        }

        static PyObject *t_AdamsNordsieckTransformer_updateHighOrderDerivativesPhase1(t_AdamsNordsieckTransformer *self, PyObject *arg)
        {
          ::org::hipparchus::linear::Array2DRowRealMatrix a0((jobject) NULL);
          ::org::hipparchus::linear::Array2DRowRealMatrix result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::hipparchus::linear::Array2DRowRealMatrix::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.updateHighOrderDerivativesPhase1(a0));
            return ::org::hipparchus::linear::t_Array2DRowRealMatrix::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase1", arg);
          return NULL;
        }

        static PyObject *t_AdamsNordsieckTransformer_updateHighOrderDerivativesPhase2(t_AdamsNordsieckTransformer *self, PyObject *args)
        {
          JArray< jdouble > a0((jobject) NULL);
          JArray< jdouble > a1((jobject) NULL);
          ::org::hipparchus::linear::Array2DRowRealMatrix a2((jobject) NULL);

          if (!parseArgs(args, "[D[Dk", ::org::hipparchus::linear::Array2DRowRealMatrix::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.updateHighOrderDerivativesPhase2(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "updateHighOrderDerivativesPhase2", args);
          return NULL;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/analytical/AbstractAnalyticalMatricesHarvester.h"
#include "java/util/List.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/propagation/AdditionalStateProvider.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/analytical/AbstractAnalyticalGradientConverter.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "org/orekit/orbits/PositionAngleType.h"
#include "java/lang/String.h"
#include "org/orekit/orbits/OrbitType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace analytical {

        ::java::lang::Class *AbstractAnalyticalMatricesHarvester::class$ = NULL;
        jmethodID *AbstractAnalyticalMatricesHarvester::mids$ = NULL;
        bool AbstractAnalyticalMatricesHarvester::live$ = false;

        jclass AbstractAnalyticalMatricesHarvester::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/propagation/analytical/AbstractAnalyticalMatricesHarvester");

            mids$ = new jmethodID[max_mid];
            mids$[mid_freezeColumnsNames_7ae3461a92a43152] = env->getMethodID(cls, "freezeColumnsNames", "()V");
            mids$[mid_getAdditionalState_137d7db4f3f987f7] = env->getMethodID(cls, "getAdditionalState", "(Lorg/orekit/propagation/SpacecraftState;)[D");
            mids$[mid_getGradientConverter_5e2b3cffafaa419c] = env->getMethodID(cls, "getGradientConverter", "()Lorg/orekit/propagation/analytical/AbstractAnalyticalGradientConverter;");
            mids$[mid_getJacobiansColumnsNames_a6156df500549a58] = env->getMethodID(cls, "getJacobiansColumnsNames", "()Ljava/util/List;");
            mids$[mid_getName_0090f7797e403f43] = env->getMethodID(cls, "getName", "()Ljava/lang/String;");
            mids$[mid_getOrbitType_63ea5cd020bf7bf1] = env->getMethodID(cls, "getOrbitType", "()Lorg/orekit/orbits/OrbitType;");
            mids$[mid_getParametersJacobian_63aee3ce1e412e46] = env->getMethodID(cls, "getParametersJacobian", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_getPositionAngleType_2571e8fe1cede425] = env->getMethodID(cls, "getPositionAngleType", "()Lorg/orekit/orbits/PositionAngleType;");
            mids$[mid_getStateTransitionMatrix_63aee3ce1e412e46] = env->getMethodID(cls, "getStateTransitionMatrix", "(Lorg/orekit/propagation/SpacecraftState;)Lorg/hipparchus/linear/RealMatrix;");
            mids$[mid_setReferenceState_2b88003f931f70a7] = env->getMethodID(cls, "setReferenceState", "(Lorg/orekit/propagation/SpacecraftState;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AbstractAnalyticalMatricesHarvester::freezeColumnsNames() const
        {
          env->callVoidMethod(this$, mids$[mid_freezeColumnsNames_7ae3461a92a43152]);
        }

        JArray< jdouble > AbstractAnalyticalMatricesHarvester::getAdditionalState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_getAdditionalState_137d7db4f3f987f7], a0.this$));
        }

        ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter AbstractAnalyticalMatricesHarvester::getGradientConverter() const
        {
          return ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter(env->callObjectMethod(this$, mids$[mid_getGradientConverter_5e2b3cffafaa419c]));
        }

        ::java::util::List AbstractAnalyticalMatricesHarvester::getJacobiansColumnsNames() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getJacobiansColumnsNames_a6156df500549a58]));
        }

        ::java::lang::String AbstractAnalyticalMatricesHarvester::getName() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getName_0090f7797e403f43]));
        }

        ::org::orekit::orbits::OrbitType AbstractAnalyticalMatricesHarvester::getOrbitType() const
        {
          return ::org::orekit::orbits::OrbitType(env->callObjectMethod(this$, mids$[mid_getOrbitType_63ea5cd020bf7bf1]));
        }

        ::org::hipparchus::linear::RealMatrix AbstractAnalyticalMatricesHarvester::getParametersJacobian(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getParametersJacobian_63aee3ce1e412e46], a0.this$));
        }

        ::org::orekit::orbits::PositionAngleType AbstractAnalyticalMatricesHarvester::getPositionAngleType() const
        {
          return ::org::orekit::orbits::PositionAngleType(env->callObjectMethod(this$, mids$[mid_getPositionAngleType_2571e8fe1cede425]));
        }

        ::org::hipparchus::linear::RealMatrix AbstractAnalyticalMatricesHarvester::getStateTransitionMatrix(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          return ::org::hipparchus::linear::RealMatrix(env->callObjectMethod(this$, mids$[mid_getStateTransitionMatrix_63aee3ce1e412e46], a0.this$));
        }

        void AbstractAnalyticalMatricesHarvester::setReferenceState(const ::org::orekit::propagation::SpacecraftState & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_setReferenceState_2b88003f931f70a7], a0.this$);
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
      namespace analytical {
        static PyObject *t_AbstractAnalyticalMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_freezeColumnsNames(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_getAdditionalState(t_AbstractAnalyticalMatricesHarvester *self, PyObject *arg);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_getGradientConverter(t_AbstractAnalyticalMatricesHarvester *self);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_getJacobiansColumnsNames(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_getName(t_AbstractAnalyticalMatricesHarvester *self);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_getOrbitType(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_getParametersJacobian(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_getPositionAngleType(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_getStateTransitionMatrix(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_setReferenceState(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__gradientConverter(t_AbstractAnalyticalMatricesHarvester *self, void *data);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__jacobiansColumnsNames(t_AbstractAnalyticalMatricesHarvester *self, void *data);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__name(t_AbstractAnalyticalMatricesHarvester *self, void *data);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__orbitType(t_AbstractAnalyticalMatricesHarvester *self, void *data);
        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__positionAngleType(t_AbstractAnalyticalMatricesHarvester *self, void *data);
        static int t_AbstractAnalyticalMatricesHarvester_set__referenceState(t_AbstractAnalyticalMatricesHarvester *self, PyObject *arg, void *data);
        static PyGetSetDef t_AbstractAnalyticalMatricesHarvester__fields_[] = {
          DECLARE_GET_FIELD(t_AbstractAnalyticalMatricesHarvester, gradientConverter),
          DECLARE_GET_FIELD(t_AbstractAnalyticalMatricesHarvester, jacobiansColumnsNames),
          DECLARE_GET_FIELD(t_AbstractAnalyticalMatricesHarvester, name),
          DECLARE_GET_FIELD(t_AbstractAnalyticalMatricesHarvester, orbitType),
          DECLARE_GET_FIELD(t_AbstractAnalyticalMatricesHarvester, positionAngleType),
          DECLARE_SET_FIELD(t_AbstractAnalyticalMatricesHarvester, referenceState),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AbstractAnalyticalMatricesHarvester__methods_[] = {
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, freezeColumnsNames, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, getAdditionalState, METH_O),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, getGradientConverter, METH_NOARGS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, getJacobiansColumnsNames, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, getName, METH_NOARGS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, getOrbitType, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, getParametersJacobian, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, getPositionAngleType, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, getStateTransitionMatrix, METH_VARARGS),
          DECLARE_METHOD(t_AbstractAnalyticalMatricesHarvester, setReferenceState, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AbstractAnalyticalMatricesHarvester)[] = {
          { Py_tp_methods, t_AbstractAnalyticalMatricesHarvester__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AbstractAnalyticalMatricesHarvester__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AbstractAnalyticalMatricesHarvester)[] = {
          &PY_TYPE_DEF(::org::orekit::propagation::AbstractMatricesHarvester),
          NULL
        };

        DEFINE_TYPE(AbstractAnalyticalMatricesHarvester, t_AbstractAnalyticalMatricesHarvester, AbstractAnalyticalMatricesHarvester);

        void t_AbstractAnalyticalMatricesHarvester::install(PyObject *module)
        {
          installType(&PY_TYPE(AbstractAnalyticalMatricesHarvester), &PY_TYPE_DEF(AbstractAnalyticalMatricesHarvester), module, "AbstractAnalyticalMatricesHarvester", 0);
        }

        void t_AbstractAnalyticalMatricesHarvester::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalMatricesHarvester), "class_", make_descriptor(AbstractAnalyticalMatricesHarvester::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalMatricesHarvester), "wrapfn_", make_descriptor(t_AbstractAnalyticalMatricesHarvester::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractAnalyticalMatricesHarvester), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AbstractAnalyticalMatricesHarvester::initializeClass, 1)))
            return NULL;
          return t_AbstractAnalyticalMatricesHarvester::wrap_Object(AbstractAnalyticalMatricesHarvester(((t_AbstractAnalyticalMatricesHarvester *) arg)->object.this$));
        }
        static PyObject *t_AbstractAnalyticalMatricesHarvester_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AbstractAnalyticalMatricesHarvester::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_freezeColumnsNames(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args)
        {

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(self->object.freezeColumnsNames());
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AbstractAnalyticalMatricesHarvester), (PyObject *) self, "freezeColumnsNames", args, 2);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_getAdditionalState(t_AbstractAnalyticalMatricesHarvester *self, PyObject *arg)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getAdditionalState(a0));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "getAdditionalState", arg);
          return NULL;
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_getGradientConverter(t_AbstractAnalyticalMatricesHarvester *self)
        {
          ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter result((jobject) NULL);
          OBJ_CALL(result = self->object.getGradientConverter());
          return ::org::orekit::propagation::analytical::t_AbstractAnalyticalGradientConverter::wrap_Object(result);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_getJacobiansColumnsNames(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args)
        {
          ::java::util::List result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getJacobiansColumnsNames());
            return ::java::util::t_List::wrap_Object(result, ::java::lang::PY_TYPE(String));
          }

          return callSuper(PY_TYPE(AbstractAnalyticalMatricesHarvester), (PyObject *) self, "getJacobiansColumnsNames", args, 2);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_getName(t_AbstractAnalyticalMatricesHarvester *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getName());
          return j2p(result);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_getOrbitType(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args)
        {
          ::org::orekit::orbits::OrbitType result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getOrbitType());
            return ::org::orekit::orbits::t_OrbitType::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AbstractAnalyticalMatricesHarvester), (PyObject *) self, "getOrbitType", args, 2);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_getParametersJacobian(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getParametersJacobian(a0));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AbstractAnalyticalMatricesHarvester), (PyObject *) self, "getParametersJacobian", args, 2);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_getPositionAngleType(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args)
        {
          ::org::orekit::orbits::PositionAngleType result((jobject) NULL);

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.getPositionAngleType());
            return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AbstractAnalyticalMatricesHarvester), (PyObject *) self, "getPositionAngleType", args, 2);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_getStateTransitionMatrix(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
          ::org::hipparchus::linear::RealMatrix result((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.getStateTransitionMatrix(a0));
            return ::org::hipparchus::linear::t_RealMatrix::wrap_Object(result);
          }

          return callSuper(PY_TYPE(AbstractAnalyticalMatricesHarvester), (PyObject *) self, "getStateTransitionMatrix", args, 2);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_setReferenceState(t_AbstractAnalyticalMatricesHarvester *self, PyObject *args)
        {
          ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);

          if (!parseArgs(args, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0))
          {
            OBJ_CALL(self->object.setReferenceState(a0));
            Py_RETURN_NONE;
          }

          return callSuper(PY_TYPE(AbstractAnalyticalMatricesHarvester), (PyObject *) self, "setReferenceState", args, 2);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__gradientConverter(t_AbstractAnalyticalMatricesHarvester *self, void *data)
        {
          ::org::orekit::propagation::analytical::AbstractAnalyticalGradientConverter value((jobject) NULL);
          OBJ_CALL(value = self->object.getGradientConverter());
          return ::org::orekit::propagation::analytical::t_AbstractAnalyticalGradientConverter::wrap_Object(value);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__jacobiansColumnsNames(t_AbstractAnalyticalMatricesHarvester *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getJacobiansColumnsNames());
          return ::java::util::t_List::wrap_Object(value);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__name(t_AbstractAnalyticalMatricesHarvester *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getName());
          return j2p(value);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__orbitType(t_AbstractAnalyticalMatricesHarvester *self, void *data)
        {
          ::org::orekit::orbits::OrbitType value((jobject) NULL);
          OBJ_CALL(value = self->object.getOrbitType());
          return ::org::orekit::orbits::t_OrbitType::wrap_Object(value);
        }

        static PyObject *t_AbstractAnalyticalMatricesHarvester_get__positionAngleType(t_AbstractAnalyticalMatricesHarvester *self, void *data)
        {
          ::org::orekit::orbits::PositionAngleType value((jobject) NULL);
          OBJ_CALL(value = self->object.getPositionAngleType());
          return ::org::orekit::orbits::t_PositionAngleType::wrap_Object(value);
        }

        static int t_AbstractAnalyticalMatricesHarvester_set__referenceState(t_AbstractAnalyticalMatricesHarvester *self, PyObject *arg, void *data)
        {
          {
            ::org::orekit::propagation::SpacecraftState value((jobject) NULL);
            if (!parseArg(arg, "k", ::org::orekit::propagation::SpacecraftState::initializeClass, &value))
            {
              INT_CALL(self->object.setReferenceState(value));
              return 0;
            }
          }
          PyErr_SetArgsError((PyObject *) self, "referenceState", arg);
          return -1;
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/semianalytical/dsst/utilities/GammaMnsFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {

            ::java::lang::Class *GammaMnsFunction::class$ = NULL;
            jmethodID *GammaMnsFunction::mids$ = NULL;
            bool GammaMnsFunction::live$ = false;

            jclass GammaMnsFunction::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/orekit/propagation/semianalytical/dsst/utilities/GammaMnsFunction");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_245a372f955cf5c9] = env->getMethodID(cls, "<init>", "(IDI)V");
                mids$[mid_getDerivative_17d75a1004cd0f67] = env->getMethodID(cls, "getDerivative", "(III)D");
                mids$[mid_getValue_17d75a1004cd0f67] = env->getMethodID(cls, "getValue", "(III)D");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            GammaMnsFunction::GammaMnsFunction(jint a0, jdouble a1, jint a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_245a372f955cf5c9, a0, a1, a2)) {}

            jdouble GammaMnsFunction::getDerivative(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getDerivative_17d75a1004cd0f67], a0, a1, a2);
            }

            jdouble GammaMnsFunction::getValue(jint a0, jint a1, jint a2) const
            {
              return env->callDoubleMethod(this$, mids$[mid_getValue_17d75a1004cd0f67], a0, a1, a2);
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
    namespace propagation {
      namespace semianalytical {
        namespace dsst {
          namespace utilities {
            static PyObject *t_GammaMnsFunction_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_GammaMnsFunction_instance_(PyTypeObject *type, PyObject *arg);
            static int t_GammaMnsFunction_init_(t_GammaMnsFunction *self, PyObject *args, PyObject *kwds);
            static PyObject *t_GammaMnsFunction_getDerivative(t_GammaMnsFunction *self, PyObject *args);
            static PyObject *t_GammaMnsFunction_getValue(t_GammaMnsFunction *self, PyObject *args);

            static PyMethodDef t_GammaMnsFunction__methods_[] = {
              DECLARE_METHOD(t_GammaMnsFunction, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GammaMnsFunction, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_GammaMnsFunction, getDerivative, METH_VARARGS),
              DECLARE_METHOD(t_GammaMnsFunction, getValue, METH_VARARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(GammaMnsFunction)[] = {
              { Py_tp_methods, t_GammaMnsFunction__methods_ },
              { Py_tp_init, (void *) t_GammaMnsFunction_init_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(GammaMnsFunction)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(GammaMnsFunction, t_GammaMnsFunction, GammaMnsFunction);

            void t_GammaMnsFunction::install(PyObject *module)
            {
              installType(&PY_TYPE(GammaMnsFunction), &PY_TYPE_DEF(GammaMnsFunction), module, "GammaMnsFunction", 0);
            }

            void t_GammaMnsFunction::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(GammaMnsFunction), "class_", make_descriptor(GammaMnsFunction::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GammaMnsFunction), "wrapfn_", make_descriptor(t_GammaMnsFunction::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(GammaMnsFunction), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_GammaMnsFunction_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, GammaMnsFunction::initializeClass, 1)))
                return NULL;
              return t_GammaMnsFunction::wrap_Object(GammaMnsFunction(((t_GammaMnsFunction *) arg)->object.this$));
            }
            static PyObject *t_GammaMnsFunction_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, GammaMnsFunction::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static int t_GammaMnsFunction_init_(t_GammaMnsFunction *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              jdouble a1;
              jint a2;
              GammaMnsFunction object((jobject) NULL);

              if (!parseArgs(args, "IDI", &a0, &a1, &a2))
              {
                INT_CALL(object = GammaMnsFunction(a0, a1, a2));
                self->object = object;
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_GammaMnsFunction_getDerivative(t_GammaMnsFunction *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getDerivative(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getDerivative", args);
              return NULL;
            }

            static PyObject *t_GammaMnsFunction_getValue(t_GammaMnsFunction *self, PyObject *args)
            {
              jint a0;
              jint a1;
              jint a2;
              jdouble result;

              if (!parseArgs(args, "III", &a0, &a1, &a2))
              {
                OBJ_CALL(result = self->object.getValue(a0, a1, a2));
                return PyFloat_FromDouble((double) result);
              }

              PyErr_SetArgsError((PyObject *) self, "getValue", args);
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
#include "org/orekit/estimation/measurements/modifiers/OnBoardAntennaInterSatellitesPhaseModifier.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "java/util/List.h"
#include "org/orekit/estimation/measurements/gnss/InterSatellitesPhase.h"
#include "org/orekit/estimation/measurements/EstimatedMeasurementBase.h"
#include "java/lang/Class.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/estimation/measurements/EstimationModifier.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace modifiers {

          ::java::lang::Class *OnBoardAntennaInterSatellitesPhaseModifier::class$ = NULL;
          jmethodID *OnBoardAntennaInterSatellitesPhaseModifier::mids$ = NULL;
          bool OnBoardAntennaInterSatellitesPhaseModifier::live$ = false;

          jclass OnBoardAntennaInterSatellitesPhaseModifier::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/modifiers/OnBoardAntennaInterSatellitesPhaseModifier");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_bedd188d9f399c34] = env->getMethodID(cls, "<init>", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_getParametersDrivers_a6156df500549a58] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");
              mids$[mid_modifyWithoutDerivatives_811f96960c94c1de] = env->getMethodID(cls, "modifyWithoutDerivatives", "(Lorg/orekit/estimation/measurements/EstimatedMeasurementBase;)V");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          OnBoardAntennaInterSatellitesPhaseModifier::OnBoardAntennaInterSatellitesPhaseModifier(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_bedd188d9f399c34, a0.this$, a1.this$)) {}

          ::java::util::List OnBoardAntennaInterSatellitesPhaseModifier::getParametersDrivers() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_a6156df500549a58]));
          }

          void OnBoardAntennaInterSatellitesPhaseModifier::modifyWithoutDerivatives(const ::org::orekit::estimation::measurements::EstimatedMeasurementBase & a0) const
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
          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_instance_(PyTypeObject *type, PyObject *arg);
          static int t_OnBoardAntennaInterSatellitesPhaseModifier_init_(t_OnBoardAntennaInterSatellitesPhaseModifier *self, PyObject *args, PyObject *kwds);
          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_getParametersDrivers(t_OnBoardAntennaInterSatellitesPhaseModifier *self);
          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_modifyWithoutDerivatives(t_OnBoardAntennaInterSatellitesPhaseModifier *self, PyObject *arg);
          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_get__parametersDrivers(t_OnBoardAntennaInterSatellitesPhaseModifier *self, void *data);
          static PyGetSetDef t_OnBoardAntennaInterSatellitesPhaseModifier__fields_[] = {
            DECLARE_GET_FIELD(t_OnBoardAntennaInterSatellitesPhaseModifier, parametersDrivers),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_OnBoardAntennaInterSatellitesPhaseModifier__methods_[] = {
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesPhaseModifier, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesPhaseModifier, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesPhaseModifier, getParametersDrivers, METH_NOARGS),
            DECLARE_METHOD(t_OnBoardAntennaInterSatellitesPhaseModifier, modifyWithoutDerivatives, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(OnBoardAntennaInterSatellitesPhaseModifier)[] = {
            { Py_tp_methods, t_OnBoardAntennaInterSatellitesPhaseModifier__methods_ },
            { Py_tp_init, (void *) t_OnBoardAntennaInterSatellitesPhaseModifier_init_ },
            { Py_tp_getset, t_OnBoardAntennaInterSatellitesPhaseModifier__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(OnBoardAntennaInterSatellitesPhaseModifier)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(OnBoardAntennaInterSatellitesPhaseModifier, t_OnBoardAntennaInterSatellitesPhaseModifier, OnBoardAntennaInterSatellitesPhaseModifier);

          void t_OnBoardAntennaInterSatellitesPhaseModifier::install(PyObject *module)
          {
            installType(&PY_TYPE(OnBoardAntennaInterSatellitesPhaseModifier), &PY_TYPE_DEF(OnBoardAntennaInterSatellitesPhaseModifier), module, "OnBoardAntennaInterSatellitesPhaseModifier", 0);
          }

          void t_OnBoardAntennaInterSatellitesPhaseModifier::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaInterSatellitesPhaseModifier), "class_", make_descriptor(OnBoardAntennaInterSatellitesPhaseModifier::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaInterSatellitesPhaseModifier), "wrapfn_", make_descriptor(t_OnBoardAntennaInterSatellitesPhaseModifier::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(OnBoardAntennaInterSatellitesPhaseModifier), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, OnBoardAntennaInterSatellitesPhaseModifier::initializeClass, 1)))
              return NULL;
            return t_OnBoardAntennaInterSatellitesPhaseModifier::wrap_Object(OnBoardAntennaInterSatellitesPhaseModifier(((t_OnBoardAntennaInterSatellitesPhaseModifier *) arg)->object.this$));
          }
          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, OnBoardAntennaInterSatellitesPhaseModifier::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_OnBoardAntennaInterSatellitesPhaseModifier_init_(t_OnBoardAntennaInterSatellitesPhaseModifier *self, PyObject *args, PyObject *kwds)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            OnBoardAntennaInterSatellitesPhaseModifier object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              INT_CALL(object = OnBoardAntennaInterSatellitesPhaseModifier(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_getParametersDrivers(t_OnBoardAntennaInterSatellitesPhaseModifier *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getParametersDrivers());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
          }

          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_modifyWithoutDerivatives(t_OnBoardAntennaInterSatellitesPhaseModifier *self, PyObject *arg)
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

          static PyObject *t_OnBoardAntennaInterSatellitesPhaseModifier_get__parametersDrivers(t_OnBoardAntennaInterSatellitesPhaseModifier *self, void *data)
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

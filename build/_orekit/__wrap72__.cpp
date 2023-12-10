#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/function/HarmonicOscillator$Parametric.h"
#include "org/hipparchus/analysis/ParametricUnivariateFunction.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace function {

        ::java::lang::Class *HarmonicOscillator$Parametric::class$ = NULL;
        jmethodID *HarmonicOscillator$Parametric::mids$ = NULL;
        bool HarmonicOscillator$Parametric::live$ = false;

        jclass HarmonicOscillator$Parametric::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/function/HarmonicOscillator$Parametric");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
            mids$[mid_gradient_125ce48de7dbfde5] = env->getMethodID(cls, "gradient", "(D[D)[D");
            mids$[mid_value_19285de97bbc7eea] = env->getMethodID(cls, "value", "(D[D)D");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        HarmonicOscillator$Parametric::HarmonicOscillator$Parametric() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

        JArray< jdouble > HarmonicOscillator$Parametric::gradient(jdouble a0, const JArray< jdouble > & a1) const
        {
          return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_gradient_125ce48de7dbfde5], a0, a1.this$));
        }

        jdouble HarmonicOscillator$Parametric::value(jdouble a0, const JArray< jdouble > & a1) const
        {
          return env->callDoubleMethod(this$, mids$[mid_value_19285de97bbc7eea], a0, a1.this$);
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
        static PyObject *t_HarmonicOscillator$Parametric_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_HarmonicOscillator$Parametric_instance_(PyTypeObject *type, PyObject *arg);
        static int t_HarmonicOscillator$Parametric_init_(t_HarmonicOscillator$Parametric *self, PyObject *args, PyObject *kwds);
        static PyObject *t_HarmonicOscillator$Parametric_gradient(t_HarmonicOscillator$Parametric *self, PyObject *args);
        static PyObject *t_HarmonicOscillator$Parametric_value(t_HarmonicOscillator$Parametric *self, PyObject *args);

        static PyMethodDef t_HarmonicOscillator$Parametric__methods_[] = {
          DECLARE_METHOD(t_HarmonicOscillator$Parametric, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HarmonicOscillator$Parametric, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_HarmonicOscillator$Parametric, gradient, METH_VARARGS),
          DECLARE_METHOD(t_HarmonicOscillator$Parametric, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(HarmonicOscillator$Parametric)[] = {
          { Py_tp_methods, t_HarmonicOscillator$Parametric__methods_ },
          { Py_tp_init, (void *) t_HarmonicOscillator$Parametric_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(HarmonicOscillator$Parametric)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(HarmonicOscillator$Parametric, t_HarmonicOscillator$Parametric, HarmonicOscillator$Parametric);

        void t_HarmonicOscillator$Parametric::install(PyObject *module)
        {
          installType(&PY_TYPE(HarmonicOscillator$Parametric), &PY_TYPE_DEF(HarmonicOscillator$Parametric), module, "HarmonicOscillator$Parametric", 0);
        }

        void t_HarmonicOscillator$Parametric::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator$Parametric), "class_", make_descriptor(HarmonicOscillator$Parametric::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator$Parametric), "wrapfn_", make_descriptor(t_HarmonicOscillator$Parametric::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(HarmonicOscillator$Parametric), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_HarmonicOscillator$Parametric_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, HarmonicOscillator$Parametric::initializeClass, 1)))
            return NULL;
          return t_HarmonicOscillator$Parametric::wrap_Object(HarmonicOscillator$Parametric(((t_HarmonicOscillator$Parametric *) arg)->object.this$));
        }
        static PyObject *t_HarmonicOscillator$Parametric_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, HarmonicOscillator$Parametric::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_HarmonicOscillator$Parametric_init_(t_HarmonicOscillator$Parametric *self, PyObject *args, PyObject *kwds)
        {
          HarmonicOscillator$Parametric object((jobject) NULL);

          INT_CALL(object = HarmonicOscillator$Parametric());
          self->object = object;

          return 0;
        }

        static PyObject *t_HarmonicOscillator$Parametric_gradient(t_HarmonicOscillator$Parametric *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          JArray< jdouble > result((jobject) NULL);

          if (!parseArgs(args, "D[D", &a0, &a1))
          {
            OBJ_CALL(result = self->object.gradient(a0, a1));
            return result.wrap();
          }

          PyErr_SetArgsError((PyObject *) self, "gradient", args);
          return NULL;
        }

        static PyObject *t_HarmonicOscillator$Parametric_value(t_HarmonicOscillator$Parametric *self, PyObject *args)
        {
          jdouble a0;
          JArray< jdouble > a1((jobject) NULL);
          jdouble result;

          if (!parseArgs(args, "D[D", &a0, &a1))
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
#include "java/util/ArrayDeque.h"
#include "java/util/Iterator.h"
#include "java/lang/Cloneable.h"
#include "java/io/Serializable.h"
#include "java/util/Collection.h"
#include "java/util/Spliterator.h"
#include "java/lang/Class.h"
#include "java/lang/Object.h"
#include "java/util/Deque.h"
#include "java/util/ArrayDeque.h"
#include "JArray.h"

namespace java {
  namespace util {

    ::java::lang::Class *ArrayDeque::class$ = NULL;
    jmethodID *ArrayDeque::mids$ = NULL;
    bool ArrayDeque::live$ = false;

    jclass ArrayDeque::initializeClass(bool getOnly)
    {
      if (getOnly)
        return (jclass) (live$ ? class$->this$ : NULL);
      if (class$ == NULL)
      {
        jclass cls = (jclass) env->findClass("java/util/ArrayDeque");

        mids$ = new jmethodID[max_mid];
        mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
        mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
        mids$[mid_init$_f72f53318f80c525] = env->getMethodID(cls, "<init>", "(Ljava/util/Collection;)V");
        mids$[mid_add_65c7d273e80d497a] = env->getMethodID(cls, "add", "(Ljava/lang/Object;)Z");
        mids$[mid_addAll_17e918edc999b3c7] = env->getMethodID(cls, "addAll", "(Ljava/util/Collection;)Z");
        mids$[mid_addFirst_2990946c992aafed] = env->getMethodID(cls, "addFirst", "(Ljava/lang/Object;)V");
        mids$[mid_addLast_2990946c992aafed] = env->getMethodID(cls, "addLast", "(Ljava/lang/Object;)V");
        mids$[mid_clear_0fa09c18fee449d5] = env->getMethodID(cls, "clear", "()V");
        mids$[mid_clone_edceba1316e88dd0] = env->getMethodID(cls, "clone", "()Ljava/util/ArrayDeque;");
        mids$[mid_contains_65c7d273e80d497a] = env->getMethodID(cls, "contains", "(Ljava/lang/Object;)Z");
        mids$[mid_descendingIterator_4d23511a9f0db098] = env->getMethodID(cls, "descendingIterator", "()Ljava/util/Iterator;");
        mids$[mid_element_4d26fd885228c716] = env->getMethodID(cls, "element", "()Ljava/lang/Object;");
        mids$[mid_getFirst_4d26fd885228c716] = env->getMethodID(cls, "getFirst", "()Ljava/lang/Object;");
        mids$[mid_getLast_4d26fd885228c716] = env->getMethodID(cls, "getLast", "()Ljava/lang/Object;");
        mids$[mid_isEmpty_b108b35ef48e27bd] = env->getMethodID(cls, "isEmpty", "()Z");
        mids$[mid_iterator_4d23511a9f0db098] = env->getMethodID(cls, "iterator", "()Ljava/util/Iterator;");
        mids$[mid_offer_65c7d273e80d497a] = env->getMethodID(cls, "offer", "(Ljava/lang/Object;)Z");
        mids$[mid_offerFirst_65c7d273e80d497a] = env->getMethodID(cls, "offerFirst", "(Ljava/lang/Object;)Z");
        mids$[mid_offerLast_65c7d273e80d497a] = env->getMethodID(cls, "offerLast", "(Ljava/lang/Object;)Z");
        mids$[mid_peek_4d26fd885228c716] = env->getMethodID(cls, "peek", "()Ljava/lang/Object;");
        mids$[mid_peekFirst_4d26fd885228c716] = env->getMethodID(cls, "peekFirst", "()Ljava/lang/Object;");
        mids$[mid_peekLast_4d26fd885228c716] = env->getMethodID(cls, "peekLast", "()Ljava/lang/Object;");
        mids$[mid_poll_4d26fd885228c716] = env->getMethodID(cls, "poll", "()Ljava/lang/Object;");
        mids$[mid_pollFirst_4d26fd885228c716] = env->getMethodID(cls, "pollFirst", "()Ljava/lang/Object;");
        mids$[mid_pollLast_4d26fd885228c716] = env->getMethodID(cls, "pollLast", "()Ljava/lang/Object;");
        mids$[mid_pop_4d26fd885228c716] = env->getMethodID(cls, "pop", "()Ljava/lang/Object;");
        mids$[mid_push_2990946c992aafed] = env->getMethodID(cls, "push", "(Ljava/lang/Object;)V");
        mids$[mid_remove_4d26fd885228c716] = env->getMethodID(cls, "remove", "()Ljava/lang/Object;");
        mids$[mid_remove_65c7d273e80d497a] = env->getMethodID(cls, "remove", "(Ljava/lang/Object;)Z");
        mids$[mid_removeAll_17e918edc999b3c7] = env->getMethodID(cls, "removeAll", "(Ljava/util/Collection;)Z");
        mids$[mid_removeFirst_4d26fd885228c716] = env->getMethodID(cls, "removeFirst", "()Ljava/lang/Object;");
        mids$[mid_removeFirstOccurrence_65c7d273e80d497a] = env->getMethodID(cls, "removeFirstOccurrence", "(Ljava/lang/Object;)Z");
        mids$[mid_removeLast_4d26fd885228c716] = env->getMethodID(cls, "removeLast", "()Ljava/lang/Object;");
        mids$[mid_removeLastOccurrence_65c7d273e80d497a] = env->getMethodID(cls, "removeLastOccurrence", "(Ljava/lang/Object;)Z");
        mids$[mid_retainAll_17e918edc999b3c7] = env->getMethodID(cls, "retainAll", "(Ljava/util/Collection;)Z");
        mids$[mid_size_570ce0828f81a2c1] = env->getMethodID(cls, "size", "()I");
        mids$[mid_spliterator_ef1070394b413a84] = env->getMethodID(cls, "spliterator", "()Ljava/util/Spliterator;");
        mids$[mid_toArray_b93c730013ce64c6] = env->getMethodID(cls, "toArray", "()[Ljava/lang/Object;");
        mids$[mid_toArray_72bb572e6638b43f] = env->getMethodID(cls, "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;");

        class$ = new ::java::lang::Class(cls);
        live$ = true;
      }
      return (jclass) class$->this$;
    }

    ArrayDeque::ArrayDeque() : ::java::util::AbstractCollection(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

    ArrayDeque::ArrayDeque(jint a0) : ::java::util::AbstractCollection(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

    ArrayDeque::ArrayDeque(const ::java::util::Collection & a0) : ::java::util::AbstractCollection(env->newObject(initializeClass, &mids$, mid_init$_f72f53318f80c525, a0.this$)) {}

    jboolean ArrayDeque::add(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_add_65c7d273e80d497a], a0.this$);
    }

    jboolean ArrayDeque::addAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_addAll_17e918edc999b3c7], a0.this$);
    }

    void ArrayDeque::addFirst(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_addFirst_2990946c992aafed], a0.this$);
    }

    void ArrayDeque::addLast(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_addLast_2990946c992aafed], a0.this$);
    }

    void ArrayDeque::clear() const
    {
      env->callVoidMethod(this$, mids$[mid_clear_0fa09c18fee449d5]);
    }

    ArrayDeque ArrayDeque::clone() const
    {
      return ArrayDeque(env->callObjectMethod(this$, mids$[mid_clone_edceba1316e88dd0]));
    }

    jboolean ArrayDeque::contains(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_contains_65c7d273e80d497a], a0.this$);
    }

    ::java::util::Iterator ArrayDeque::descendingIterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_descendingIterator_4d23511a9f0db098]));
    }

    ::java::lang::Object ArrayDeque::element() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_element_4d26fd885228c716]));
    }

    ::java::lang::Object ArrayDeque::getFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getFirst_4d26fd885228c716]));
    }

    ::java::lang::Object ArrayDeque::getLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_getLast_4d26fd885228c716]));
    }

    jboolean ArrayDeque::isEmpty() const
    {
      return env->callBooleanMethod(this$, mids$[mid_isEmpty_b108b35ef48e27bd]);
    }

    ::java::util::Iterator ArrayDeque::iterator() const
    {
      return ::java::util::Iterator(env->callObjectMethod(this$, mids$[mid_iterator_4d23511a9f0db098]));
    }

    jboolean ArrayDeque::offer(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offer_65c7d273e80d497a], a0.this$);
    }

    jboolean ArrayDeque::offerFirst(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offerFirst_65c7d273e80d497a], a0.this$);
    }

    jboolean ArrayDeque::offerLast(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_offerLast_65c7d273e80d497a], a0.this$);
    }

    ::java::lang::Object ArrayDeque::peek() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peek_4d26fd885228c716]));
    }

    ::java::lang::Object ArrayDeque::peekFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peekFirst_4d26fd885228c716]));
    }

    ::java::lang::Object ArrayDeque::peekLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_peekLast_4d26fd885228c716]));
    }

    ::java::lang::Object ArrayDeque::poll() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_poll_4d26fd885228c716]));
    }

    ::java::lang::Object ArrayDeque::pollFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollFirst_4d26fd885228c716]));
    }

    ::java::lang::Object ArrayDeque::pollLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pollLast_4d26fd885228c716]));
    }

    ::java::lang::Object ArrayDeque::pop() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_pop_4d26fd885228c716]));
    }

    void ArrayDeque::push(const ::java::lang::Object & a0) const
    {
      env->callVoidMethod(this$, mids$[mid_push_2990946c992aafed], a0.this$);
    }

    ::java::lang::Object ArrayDeque::remove() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_remove_4d26fd885228c716]));
    }

    jboolean ArrayDeque::remove(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_remove_65c7d273e80d497a], a0.this$);
    }

    jboolean ArrayDeque::removeAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeAll_17e918edc999b3c7], a0.this$);
    }

    ::java::lang::Object ArrayDeque::removeFirst() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_removeFirst_4d26fd885228c716]));
    }

    jboolean ArrayDeque::removeFirstOccurrence(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeFirstOccurrence_65c7d273e80d497a], a0.this$);
    }

    ::java::lang::Object ArrayDeque::removeLast() const
    {
      return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_removeLast_4d26fd885228c716]));
    }

    jboolean ArrayDeque::removeLastOccurrence(const ::java::lang::Object & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_removeLastOccurrence_65c7d273e80d497a], a0.this$);
    }

    jboolean ArrayDeque::retainAll(const ::java::util::Collection & a0) const
    {
      return env->callBooleanMethod(this$, mids$[mid_retainAll_17e918edc999b3c7], a0.this$);
    }

    jint ArrayDeque::size() const
    {
      return env->callIntMethod(this$, mids$[mid_size_570ce0828f81a2c1]);
    }

    ::java::util::Spliterator ArrayDeque::spliterator() const
    {
      return ::java::util::Spliterator(env->callObjectMethod(this$, mids$[mid_spliterator_ef1070394b413a84]));
    }

    JArray< ::java::lang::Object > ArrayDeque::toArray() const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_b93c730013ce64c6]));
    }

    JArray< ::java::lang::Object > ArrayDeque::toArray(const JArray< ::java::lang::Object > & a0) const
    {
      return JArray< ::java::lang::Object >(env->callObjectMethod(this$, mids$[mid_toArray_72bb572e6638b43f], a0.this$));
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace java {
  namespace util {
    static PyObject *t_ArrayDeque_cast_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ArrayDeque_instance_(PyTypeObject *type, PyObject *arg);
    static PyObject *t_ArrayDeque_of_(t_ArrayDeque *self, PyObject *args);
    static int t_ArrayDeque_init_(t_ArrayDeque *self, PyObject *args, PyObject *kwds);
    static PyObject *t_ArrayDeque_add(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_addAll(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_addFirst(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_addLast(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_clear(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_clone(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_contains(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_descendingIterator(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_element(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_getFirst(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_getLast(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_isEmpty(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_iterator(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_offer(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_offerFirst(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_offerLast(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_peek(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_peekFirst(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_peekLast(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_poll(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_pollFirst(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_pollLast(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_pop(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_push(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_remove(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_removeAll(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_removeFirst(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_removeFirstOccurrence(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_removeLast(t_ArrayDeque *self);
    static PyObject *t_ArrayDeque_removeLastOccurrence(t_ArrayDeque *self, PyObject *arg);
    static PyObject *t_ArrayDeque_retainAll(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_size(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_spliterator(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_toArray(t_ArrayDeque *self, PyObject *args);
    static PyObject *t_ArrayDeque_get__empty(t_ArrayDeque *self, void *data);
    static PyObject *t_ArrayDeque_get__first(t_ArrayDeque *self, void *data);
    static PyObject *t_ArrayDeque_get__last(t_ArrayDeque *self, void *data);
    static PyObject *t_ArrayDeque_get__parameters_(t_ArrayDeque *self, void *data);
    static PyGetSetDef t_ArrayDeque__fields_[] = {
      DECLARE_GET_FIELD(t_ArrayDeque, empty),
      DECLARE_GET_FIELD(t_ArrayDeque, first),
      DECLARE_GET_FIELD(t_ArrayDeque, last),
      DECLARE_GET_FIELD(t_ArrayDeque, parameters_),
      { NULL, NULL, NULL, NULL, NULL }
    };

    static PyMethodDef t_ArrayDeque__methods_[] = {
      DECLARE_METHOD(t_ArrayDeque, cast_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ArrayDeque, instance_, METH_O | METH_CLASS),
      DECLARE_METHOD(t_ArrayDeque, of_, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, add, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, addAll, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, addFirst, METH_O),
      DECLARE_METHOD(t_ArrayDeque, addLast, METH_O),
      DECLARE_METHOD(t_ArrayDeque, clear, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, clone, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, contains, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, descendingIterator, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, element, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, getFirst, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, getLast, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, isEmpty, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, iterator, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, offer, METH_O),
      DECLARE_METHOD(t_ArrayDeque, offerFirst, METH_O),
      DECLARE_METHOD(t_ArrayDeque, offerLast, METH_O),
      DECLARE_METHOD(t_ArrayDeque, peek, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, peekFirst, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, peekLast, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, poll, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, pollFirst, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, pollLast, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, pop, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, push, METH_O),
      DECLARE_METHOD(t_ArrayDeque, remove, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, removeAll, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, removeFirst, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, removeFirstOccurrence, METH_O),
      DECLARE_METHOD(t_ArrayDeque, removeLast, METH_NOARGS),
      DECLARE_METHOD(t_ArrayDeque, removeLastOccurrence, METH_O),
      DECLARE_METHOD(t_ArrayDeque, retainAll, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, size, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, spliterator, METH_VARARGS),
      DECLARE_METHOD(t_ArrayDeque, toArray, METH_VARARGS),
      { NULL, NULL, 0, NULL }
    };

    static PyType_Slot PY_TYPE_SLOTS(ArrayDeque)[] = {
      { Py_tp_methods, t_ArrayDeque__methods_ },
      { Py_tp_init, (void *) t_ArrayDeque_init_ },
      { Py_tp_getset, t_ArrayDeque__fields_ },
      { Py_tp_iter, (void *) ((PyObject *(*)(t_ArrayDeque *)) get_generic_iterator< t_ArrayDeque >) },
      { Py_tp_iternext, (void *) 0 },
      { 0, NULL }
    };

    static PyType_Def *PY_TYPE_BASES(ArrayDeque)[] = {
      &PY_TYPE_DEF(::java::util::AbstractCollection),
      NULL
    };

    DEFINE_TYPE(ArrayDeque, t_ArrayDeque, ArrayDeque);
    PyObject *t_ArrayDeque::wrap_Object(const ArrayDeque& object, PyTypeObject *p0)
    {
      PyObject *obj = t_ArrayDeque::wrap_Object(object);
      if (obj != NULL && obj != Py_None)
      {
        t_ArrayDeque *self = (t_ArrayDeque *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    PyObject *t_ArrayDeque::wrap_jobject(const jobject& object, PyTypeObject *p0)
    {
      PyObject *obj = t_ArrayDeque::wrap_jobject(object);
      if (obj != NULL && obj != Py_None)
      {
        t_ArrayDeque *self = (t_ArrayDeque *) obj;
        self->parameters[0] = p0;
      }
      return obj;
    }

    void t_ArrayDeque::install(PyObject *module)
    {
      installType(&PY_TYPE(ArrayDeque), &PY_TYPE_DEF(ArrayDeque), module, "ArrayDeque", 0);
    }

    void t_ArrayDeque::initialize(PyObject *module)
    {
      PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayDeque), "class_", make_descriptor(ArrayDeque::initializeClass, 1));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayDeque), "wrapfn_", make_descriptor(t_ArrayDeque::wrap_jobject));
      PyObject_SetAttrString((PyObject *) PY_TYPE(ArrayDeque), "boxfn_", make_descriptor(boxObject));
    }

    static PyObject *t_ArrayDeque_cast_(PyTypeObject *type, PyObject *arg)
    {
      if (!(arg = castCheck(arg, ArrayDeque::initializeClass, 1)))
        return NULL;
      return t_ArrayDeque::wrap_Object(ArrayDeque(((t_ArrayDeque *) arg)->object.this$));
    }
    static PyObject *t_ArrayDeque_instance_(PyTypeObject *type, PyObject *arg)
    {
      if (!castCheck(arg, ArrayDeque::initializeClass, 0))
        Py_RETURN_FALSE;
      Py_RETURN_TRUE;
    }

    static PyObject *t_ArrayDeque_of_(t_ArrayDeque *self, PyObject *args)
    {
      if (!parseArg(args, "T", 1, &(self->parameters)))
        Py_RETURN_SELF;
      return PyErr_SetArgsError((PyObject *) self, "of_", args);
    }

    static int t_ArrayDeque_init_(t_ArrayDeque *self, PyObject *args, PyObject *kwds)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ArrayDeque object((jobject) NULL);

          INT_CALL(object = ArrayDeque());
          self->object = object;
          break;
        }
       case 1:
        {
          jint a0;
          ArrayDeque object((jobject) NULL);

          if (!parseArgs(args, "I", &a0))
          {
            INT_CALL(object = ArrayDeque(a0));
            self->object = object;
            break;
          }
        }
        {
          ::java::util::Collection a0((jobject) NULL);
          PyTypeObject **p0;
          ArrayDeque object((jobject) NULL);

          if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
          {
            INT_CALL(object = ArrayDeque(a0));
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

    static PyObject *t_ArrayDeque_add(t_ArrayDeque *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.add(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "add", args, 2);
    }

    static PyObject *t_ArrayDeque_addAll(t_ArrayDeque *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.addAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "addAll", args, 2);
    }

    static PyObject *t_ArrayDeque_addFirst(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(self->object.addFirst(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "addFirst", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_addLast(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(self->object.addLast(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "addLast", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_clear(t_ArrayDeque *self, PyObject *args)
    {

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(self->object.clear());
        Py_RETURN_NONE;
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "clear", args, 2);
    }

    static PyObject *t_ArrayDeque_clone(t_ArrayDeque *self)
    {
      ArrayDeque result((jobject) NULL);
      OBJ_CALL(result = self->object.clone());
      return t_ArrayDeque::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_ArrayDeque_contains(t_ArrayDeque *self, PyObject *args)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArgs(args, "o", &a0))
      {
        OBJ_CALL(result = self->object.contains(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "contains", args, 2);
    }

    static PyObject *t_ArrayDeque_descendingIterator(t_ArrayDeque *self)
    {
      ::java::util::Iterator result((jobject) NULL);
      OBJ_CALL(result = self->object.descendingIterator());
      return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
    }

    static PyObject *t_ArrayDeque_element(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.element());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_getFirst(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.getFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_getLast(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.getLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_isEmpty(t_ArrayDeque *self, PyObject *args)
    {
      jboolean result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.isEmpty());
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "isEmpty", args, 2);
    }

    static PyObject *t_ArrayDeque_iterator(t_ArrayDeque *self, PyObject *args)
    {
      ::java::util::Iterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.iterator());
        return ::java::util::t_Iterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "iterator", args, 2);
    }

    static PyObject *t_ArrayDeque_offer(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.offer(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "offer", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_offerFirst(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.offerFirst(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "offerFirst", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_offerLast(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(result = self->object.offerLast(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "offerLast", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_peek(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.peek());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_peekFirst(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.peekFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_peekLast(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.peekLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_poll(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.poll());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_pollFirst(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pollFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_pollLast(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pollLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_pop(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.pop());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_push(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);

      if (!parseArg(arg, "O", self->parameters[0], &a0))
      {
        OBJ_CALL(self->object.push(a0));
        Py_RETURN_NONE;
      }

      PyErr_SetArgsError((PyObject *) self, "push", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_remove(t_ArrayDeque *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          ::java::lang::Object result((jobject) NULL);
          OBJ_CALL(result = self->object.remove());
          return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
        }
        break;
       case 1:
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.remove(a0));
            Py_RETURN_BOOL(result);
          }
        }
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "remove", args, 2);
    }

    static PyObject *t_ArrayDeque_removeAll(t_ArrayDeque *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.removeAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "removeAll", args, 2);
    }

    static PyObject *t_ArrayDeque_removeFirst(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.removeFirst());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_removeFirstOccurrence(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.removeFirstOccurrence(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "removeFirstOccurrence", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_removeLast(t_ArrayDeque *self)
    {
      ::java::lang::Object result((jobject) NULL);
      OBJ_CALL(result = self->object.removeLast());
      return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
    }

    static PyObject *t_ArrayDeque_removeLastOccurrence(t_ArrayDeque *self, PyObject *arg)
    {
      ::java::lang::Object a0((jobject) NULL);
      jboolean result;

      if (!parseArg(arg, "o", &a0))
      {
        OBJ_CALL(result = self->object.removeLastOccurrence(a0));
        Py_RETURN_BOOL(result);
      }

      PyErr_SetArgsError((PyObject *) self, "removeLastOccurrence", arg);
      return NULL;
    }

    static PyObject *t_ArrayDeque_retainAll(t_ArrayDeque *self, PyObject *args)
    {
      ::java::util::Collection a0((jobject) NULL);
      PyTypeObject **p0;
      jboolean result;

      if (!parseArgs(args, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
      {
        OBJ_CALL(result = self->object.retainAll(a0));
        Py_RETURN_BOOL(result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "retainAll", args, 2);
    }

    static PyObject *t_ArrayDeque_size(t_ArrayDeque *self, PyObject *args)
    {
      jint result;

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.size());
        return PyLong_FromLong((long) result);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "size", args, 2);
    }

    static PyObject *t_ArrayDeque_spliterator(t_ArrayDeque *self, PyObject *args)
    {
      ::java::util::Spliterator result((jobject) NULL);

      if (!parseArgs(args, ""))
      {
        OBJ_CALL(result = self->object.spliterator());
        return ::java::util::t_Spliterator::wrap_Object(result, self->parameters[0]);
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "spliterator", args, 2);
    }

    static PyObject *t_ArrayDeque_toArray(t_ArrayDeque *self, PyObject *args)
    {
      switch (PyTuple_GET_SIZE(args)) {
       case 0:
        {
          JArray< ::java::lang::Object > result((jobject) NULL);
          OBJ_CALL(result = self->object.toArray());
          return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
        }
        break;
       case 1:
        {
          JArray< ::java::lang::Object > a0((jobject) NULL);
          JArray< ::java::lang::Object > result((jobject) NULL);

          if (!parseArgs(args, "[o", &a0))
          {
            OBJ_CALL(result = self->object.toArray(a0));
            return JArray<jobject>(result.this$).wrap(::java::lang::t_Object::wrap_jobject);
          }
        }
      }

      return callSuper(PY_TYPE(ArrayDeque), (PyObject *) self, "toArray", args, 2);
    }
    static PyObject *t_ArrayDeque_get__parameters_(t_ArrayDeque *self, void *data)
    {
      return typeParameters(self->parameters, sizeof(self->parameters));
    }

    static PyObject *t_ArrayDeque_get__empty(t_ArrayDeque *self, void *data)
    {
      jboolean value;
      OBJ_CALL(value = self->object.isEmpty());
      Py_RETURN_BOOL(value);
    }

    static PyObject *t_ArrayDeque_get__first(t_ArrayDeque *self, void *data)
    {
      ::java::lang::Object value((jobject) NULL);
      OBJ_CALL(value = self->object.getFirst());
      return ::java::lang::t_Object::wrap_Object(value);
    }

    static PyObject *t_ArrayDeque_get__last(t_ArrayDeque *self, void *data)
    {
      ::java::lang::Object value((jobject) NULL);
      OBJ_CALL(value = self->object.getLast());
      return ::java::lang::t_Object::wrap_Object(value);
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/tessellation/AlongTrackAiming.h"
#include "org/orekit/models/earth/tessellation/TileAiming.h"
#include "java/util/List.h"
#include "org/orekit/bodies/OneAxisEllipsoid.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/orekit/bodies/GeodeticPoint.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace tessellation {

          ::java::lang::Class *AlongTrackAiming::class$ = NULL;
          jmethodID *AlongTrackAiming::mids$ = NULL;
          bool AlongTrackAiming::live$ = false;

          jclass AlongTrackAiming::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/tessellation/AlongTrackAiming");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_a852fbc62bf75041] = env->getMethodID(cls, "<init>", "(Lorg/orekit/bodies/OneAxisEllipsoid;Lorg/orekit/orbits/Orbit;Z)V");
              mids$[mid_alongTileDirection_cb13d5b31f03b28f] = env->getMethodID(cls, "alongTileDirection", "(Lorg/hipparchus/geometry/euclidean/threed/Vector3D;Lorg/orekit/bodies/GeodeticPoint;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
              mids$[mid_getSingularPoints_2afa36052df4765d] = env->getMethodID(cls, "getSingularPoints", "()Ljava/util/List;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          AlongTrackAiming::AlongTrackAiming(const ::org::orekit::bodies::OneAxisEllipsoid & a0, const ::org::orekit::orbits::Orbit & a1, jboolean a2) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_a852fbc62bf75041, a0.this$, a1.this$, a2)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D AlongTrackAiming::alongTileDirection(const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a0, const ::org::orekit::bodies::GeodeticPoint & a1) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_alongTileDirection_cb13d5b31f03b28f], a0.this$, a1.this$));
          }

          ::java::util::List AlongTrackAiming::getSingularPoints() const
          {
            return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getSingularPoints_2afa36052df4765d]));
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
        namespace tessellation {
          static PyObject *t_AlongTrackAiming_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_AlongTrackAiming_instance_(PyTypeObject *type, PyObject *arg);
          static int t_AlongTrackAiming_init_(t_AlongTrackAiming *self, PyObject *args, PyObject *kwds);
          static PyObject *t_AlongTrackAiming_alongTileDirection(t_AlongTrackAiming *self, PyObject *args);
          static PyObject *t_AlongTrackAiming_getSingularPoints(t_AlongTrackAiming *self);
          static PyObject *t_AlongTrackAiming_get__singularPoints(t_AlongTrackAiming *self, void *data);
          static PyGetSetDef t_AlongTrackAiming__fields_[] = {
            DECLARE_GET_FIELD(t_AlongTrackAiming, singularPoints),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_AlongTrackAiming__methods_[] = {
            DECLARE_METHOD(t_AlongTrackAiming, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AlongTrackAiming, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_AlongTrackAiming, alongTileDirection, METH_VARARGS),
            DECLARE_METHOD(t_AlongTrackAiming, getSingularPoints, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(AlongTrackAiming)[] = {
            { Py_tp_methods, t_AlongTrackAiming__methods_ },
            { Py_tp_init, (void *) t_AlongTrackAiming_init_ },
            { Py_tp_getset, t_AlongTrackAiming__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(AlongTrackAiming)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(AlongTrackAiming, t_AlongTrackAiming, AlongTrackAiming);

          void t_AlongTrackAiming::install(PyObject *module)
          {
            installType(&PY_TYPE(AlongTrackAiming), &PY_TYPE_DEF(AlongTrackAiming), module, "AlongTrackAiming", 0);
          }

          void t_AlongTrackAiming::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(AlongTrackAiming), "class_", make_descriptor(AlongTrackAiming::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AlongTrackAiming), "wrapfn_", make_descriptor(t_AlongTrackAiming::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(AlongTrackAiming), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_AlongTrackAiming_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, AlongTrackAiming::initializeClass, 1)))
              return NULL;
            return t_AlongTrackAiming::wrap_Object(AlongTrackAiming(((t_AlongTrackAiming *) arg)->object.this$));
          }
          static PyObject *t_AlongTrackAiming_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, AlongTrackAiming::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_AlongTrackAiming_init_(t_AlongTrackAiming *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::bodies::OneAxisEllipsoid a0((jobject) NULL);
            ::org::orekit::orbits::Orbit a1((jobject) NULL);
            jboolean a2;
            AlongTrackAiming object((jobject) NULL);

            if (!parseArgs(args, "kkZ", ::org::orekit::bodies::OneAxisEllipsoid::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &a1, &a2))
            {
              INT_CALL(object = AlongTrackAiming(a0, a1, a2));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_AlongTrackAiming_alongTileDirection(t_AlongTrackAiming *self, PyObject *args)
          {
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a0((jobject) NULL);
            ::org::orekit::bodies::GeodeticPoint a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, ::org::orekit::bodies::GeodeticPoint::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.alongTileDirection(a0, a1));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "alongTileDirection", args);
            return NULL;
          }

          static PyObject *t_AlongTrackAiming_getSingularPoints(t_AlongTrackAiming *self)
          {
            ::java::util::List result((jobject) NULL);
            OBJ_CALL(result = self->object.getSingularPoints());
            return ::java::util::t_List::wrap_Object(result, ::org::orekit::bodies::PY_TYPE(GeodeticPoint));
          }

          static PyObject *t_AlongTrackAiming_get__singularPoints(t_AlongTrackAiming *self, void *data)
          {
            ::java::util::List value((jobject) NULL);
            OBJ_CALL(value = self->object.getSingularPoints());
            return ::java::util::t_List::wrap_Object(value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/interpolation/UnivariateInterpolator.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "org/hipparchus/analysis/UnivariateFunction.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace interpolation {

        ::java::lang::Class *UnivariateInterpolator::class$ = NULL;
        jmethodID *UnivariateInterpolator::mids$ = NULL;
        bool UnivariateInterpolator::live$ = false;

        jclass UnivariateInterpolator::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/interpolation/UnivariateInterpolator");

            mids$ = new jmethodID[max_mid];
            mids$[mid_interpolate_26024a819137b7d3] = env->getMethodID(cls, "interpolate", "([D[D)Lorg/hipparchus/analysis/UnivariateFunction;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::org::hipparchus::analysis::UnivariateFunction UnivariateInterpolator::interpolate(const JArray< jdouble > & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::analysis::UnivariateFunction(env->callObjectMethod(this$, mids$[mid_interpolate_26024a819137b7d3], a0.this$, a1.this$));
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
        static PyObject *t_UnivariateInterpolator_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateInterpolator_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_UnivariateInterpolator_interpolate(t_UnivariateInterpolator *self, PyObject *args);

        static PyMethodDef t_UnivariateInterpolator__methods_[] = {
          DECLARE_METHOD(t_UnivariateInterpolator, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateInterpolator, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_UnivariateInterpolator, interpolate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(UnivariateInterpolator)[] = {
          { Py_tp_methods, t_UnivariateInterpolator__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(UnivariateInterpolator)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(UnivariateInterpolator, t_UnivariateInterpolator, UnivariateInterpolator);

        void t_UnivariateInterpolator::install(PyObject *module)
        {
          installType(&PY_TYPE(UnivariateInterpolator), &PY_TYPE_DEF(UnivariateInterpolator), module, "UnivariateInterpolator", 0);
        }

        void t_UnivariateInterpolator::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateInterpolator), "class_", make_descriptor(UnivariateInterpolator::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateInterpolator), "wrapfn_", make_descriptor(t_UnivariateInterpolator::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(UnivariateInterpolator), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_UnivariateInterpolator_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, UnivariateInterpolator::initializeClass, 1)))
            return NULL;
          return t_UnivariateInterpolator::wrap_Object(UnivariateInterpolator(((t_UnivariateInterpolator *) arg)->object.this$));
        }
        static PyObject *t_UnivariateInterpolator_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, UnivariateInterpolator::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_UnivariateInterpolator_interpolate(t_UnivariateInterpolator *self, PyObject *args)
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
#include "org/hipparchus/linear/FieldDecompositionSolver.h"
#include "java/lang/Class.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "org/hipparchus/linear/FieldVector.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace linear {

      ::java::lang::Class *FieldDecompositionSolver::class$ = NULL;
      jmethodID *FieldDecompositionSolver::mids$ = NULL;
      bool FieldDecompositionSolver::live$ = false;

      jclass FieldDecompositionSolver::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/linear/FieldDecompositionSolver");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getColumnDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getColumnDimension", "()I");
          mids$[mid_getInverse_c992983685c753c5] = env->getMethodID(cls, "getInverse", "()Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_getRowDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getRowDimension", "()I");
          mids$[mid_isNonSingular_b108b35ef48e27bd] = env->getMethodID(cls, "isNonSingular", "()Z");
          mids$[mid_solve_1409f31dc074a11f] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/FieldMatrix;)Lorg/hipparchus/linear/FieldMatrix;");
          mids$[mid_solve_a657ce460dba8c79] = env->getMethodID(cls, "solve", "(Lorg/hipparchus/linear/FieldVector;)Lorg/hipparchus/linear/FieldVector;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jint FieldDecompositionSolver::getColumnDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getColumnDimension_570ce0828f81a2c1]);
      }

      ::org::hipparchus::linear::FieldMatrix FieldDecompositionSolver::getInverse() const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_getInverse_c992983685c753c5]));
      }

      jint FieldDecompositionSolver::getRowDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getRowDimension_570ce0828f81a2c1]);
      }

      jboolean FieldDecompositionSolver::isNonSingular() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNonSingular_b108b35ef48e27bd]);
      }

      ::org::hipparchus::linear::FieldMatrix FieldDecompositionSolver::solve(const ::org::hipparchus::linear::FieldMatrix & a0) const
      {
        return ::org::hipparchus::linear::FieldMatrix(env->callObjectMethod(this$, mids$[mid_solve_1409f31dc074a11f], a0.this$));
      }

      ::org::hipparchus::linear::FieldVector FieldDecompositionSolver::solve(const ::org::hipparchus::linear::FieldVector & a0) const
      {
        return ::org::hipparchus::linear::FieldVector(env->callObjectMethod(this$, mids$[mid_solve_a657ce460dba8c79], a0.this$));
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
      static PyObject *t_FieldDecompositionSolver_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldDecompositionSolver_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldDecompositionSolver_of_(t_FieldDecompositionSolver *self, PyObject *args);
      static PyObject *t_FieldDecompositionSolver_getColumnDimension(t_FieldDecompositionSolver *self);
      static PyObject *t_FieldDecompositionSolver_getInverse(t_FieldDecompositionSolver *self);
      static PyObject *t_FieldDecompositionSolver_getRowDimension(t_FieldDecompositionSolver *self);
      static PyObject *t_FieldDecompositionSolver_isNonSingular(t_FieldDecompositionSolver *self);
      static PyObject *t_FieldDecompositionSolver_solve(t_FieldDecompositionSolver *self, PyObject *args);
      static PyObject *t_FieldDecompositionSolver_get__columnDimension(t_FieldDecompositionSolver *self, void *data);
      static PyObject *t_FieldDecompositionSolver_get__inverse(t_FieldDecompositionSolver *self, void *data);
      static PyObject *t_FieldDecompositionSolver_get__nonSingular(t_FieldDecompositionSolver *self, void *data);
      static PyObject *t_FieldDecompositionSolver_get__rowDimension(t_FieldDecompositionSolver *self, void *data);
      static PyObject *t_FieldDecompositionSolver_get__parameters_(t_FieldDecompositionSolver *self, void *data);
      static PyGetSetDef t_FieldDecompositionSolver__fields_[] = {
        DECLARE_GET_FIELD(t_FieldDecompositionSolver, columnDimension),
        DECLARE_GET_FIELD(t_FieldDecompositionSolver, inverse),
        DECLARE_GET_FIELD(t_FieldDecompositionSolver, nonSingular),
        DECLARE_GET_FIELD(t_FieldDecompositionSolver, rowDimension),
        DECLARE_GET_FIELD(t_FieldDecompositionSolver, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldDecompositionSolver__methods_[] = {
        DECLARE_METHOD(t_FieldDecompositionSolver, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldDecompositionSolver, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldDecompositionSolver, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldDecompositionSolver, getColumnDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldDecompositionSolver, getInverse, METH_NOARGS),
        DECLARE_METHOD(t_FieldDecompositionSolver, getRowDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldDecompositionSolver, isNonSingular, METH_NOARGS),
        DECLARE_METHOD(t_FieldDecompositionSolver, solve, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldDecompositionSolver)[] = {
        { Py_tp_methods, t_FieldDecompositionSolver__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldDecompositionSolver__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldDecompositionSolver)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldDecompositionSolver, t_FieldDecompositionSolver, FieldDecompositionSolver);
      PyObject *t_FieldDecompositionSolver::wrap_Object(const FieldDecompositionSolver& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldDecompositionSolver::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldDecompositionSolver *self = (t_FieldDecompositionSolver *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldDecompositionSolver::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldDecompositionSolver::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldDecompositionSolver *self = (t_FieldDecompositionSolver *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldDecompositionSolver::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldDecompositionSolver), &PY_TYPE_DEF(FieldDecompositionSolver), module, "FieldDecompositionSolver", 0);
      }

      void t_FieldDecompositionSolver::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDecompositionSolver), "class_", make_descriptor(FieldDecompositionSolver::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDecompositionSolver), "wrapfn_", make_descriptor(t_FieldDecompositionSolver::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldDecompositionSolver), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldDecompositionSolver_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldDecompositionSolver::initializeClass, 1)))
          return NULL;
        return t_FieldDecompositionSolver::wrap_Object(FieldDecompositionSolver(((t_FieldDecompositionSolver *) arg)->object.this$));
      }
      static PyObject *t_FieldDecompositionSolver_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldDecompositionSolver::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldDecompositionSolver_of_(t_FieldDecompositionSolver *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldDecompositionSolver_getColumnDimension(t_FieldDecompositionSolver *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getColumnDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldDecompositionSolver_getInverse(t_FieldDecompositionSolver *self)
      {
        ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);
        OBJ_CALL(result = self->object.getInverse());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_FieldDecompositionSolver_getRowDimension(t_FieldDecompositionSolver *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRowDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldDecompositionSolver_isNonSingular(t_FieldDecompositionSolver *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNonSingular());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_FieldDecompositionSolver_solve(t_FieldDecompositionSolver *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            ::org::hipparchus::linear::FieldMatrix a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldMatrix::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldMatrix::parameters_))
            {
              OBJ_CALL(result = self->object.solve(a0));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result, self->parameters[0]);
            }
          }
          {
            ::org::hipparchus::linear::FieldVector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::FieldVector result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::linear::FieldVector::initializeClass, &a0, &p0, ::org::hipparchus::linear::t_FieldVector::parameters_))
            {
              OBJ_CALL(result = self->object.solve(a0));
              return ::org::hipparchus::linear::t_FieldVector::wrap_Object(result, self->parameters[0]);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "solve", args);
        return NULL;
      }
      static PyObject *t_FieldDecompositionSolver_get__parameters_(t_FieldDecompositionSolver *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldDecompositionSolver_get__columnDimension(t_FieldDecompositionSolver *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getColumnDimension());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldDecompositionSolver_get__inverse(t_FieldDecompositionSolver *self, void *data)
      {
        ::org::hipparchus::linear::FieldMatrix value((jobject) NULL);
        OBJ_CALL(value = self->object.getInverse());
        return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(value);
      }

      static PyObject *t_FieldDecompositionSolver_get__nonSingular(t_FieldDecompositionSolver *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNonSingular());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_FieldDecompositionSolver_get__rowDimension(t_FieldDecompositionSolver *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRowDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/FDSFactory$DerivativeField.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/hipparchus/analysis/differentiation/FieldDerivativeStructure.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *FDSFactory$DerivativeField::class$ = NULL;
        jmethodID *FDSFactory$DerivativeField::mids$ = NULL;
        bool FDSFactory$DerivativeField::live$ = false;

        jclass FDSFactory$DerivativeField::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/FDSFactory$DerivativeField");

            mids$ = new jmethodID[max_mid];
            mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
            mids$[mid_getOne_aa5c3ca19ecbe240] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_getPi_aa5c3ca19ecbe240] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_getRuntimeClass_7c16c5008b34b3db] = env->getMethodID(cls, "getRuntimeClass", "()Ljava/lang/Class;");
            mids$[mid_getZero_aa5c3ca19ecbe240] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/analysis/differentiation/FieldDerivativeStructure;");
            mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        jboolean FDSFactory$DerivativeField::equals(const ::java::lang::Object & a0) const
        {
          return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory$DerivativeField::getOne() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_getOne_aa5c3ca19ecbe240]));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory$DerivativeField::getPi() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_getPi_aa5c3ca19ecbe240]));
        }

        ::java::lang::Class FDSFactory$DerivativeField::getRuntimeClass() const
        {
          return ::java::lang::Class(env->callObjectMethod(this$, mids$[mid_getRuntimeClass_7c16c5008b34b3db]));
        }

        ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure FDSFactory$DerivativeField::getZero() const
        {
          return ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure(env->callObjectMethod(this$, mids$[mid_getZero_aa5c3ca19ecbe240]));
        }

        jint FDSFactory$DerivativeField::hashCode() const
        {
          return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
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
        static PyObject *t_FDSFactory$DerivativeField_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDSFactory$DerivativeField_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_FDSFactory$DerivativeField_of_(t_FDSFactory$DerivativeField *self, PyObject *args);
        static PyObject *t_FDSFactory$DerivativeField_equals(t_FDSFactory$DerivativeField *self, PyObject *args);
        static PyObject *t_FDSFactory$DerivativeField_getOne(t_FDSFactory$DerivativeField *self);
        static PyObject *t_FDSFactory$DerivativeField_getPi(t_FDSFactory$DerivativeField *self);
        static PyObject *t_FDSFactory$DerivativeField_getRuntimeClass(t_FDSFactory$DerivativeField *self);
        static PyObject *t_FDSFactory$DerivativeField_getZero(t_FDSFactory$DerivativeField *self);
        static PyObject *t_FDSFactory$DerivativeField_hashCode(t_FDSFactory$DerivativeField *self, PyObject *args);
        static PyObject *t_FDSFactory$DerivativeField_get__one(t_FDSFactory$DerivativeField *self, void *data);
        static PyObject *t_FDSFactory$DerivativeField_get__pi(t_FDSFactory$DerivativeField *self, void *data);
        static PyObject *t_FDSFactory$DerivativeField_get__runtimeClass(t_FDSFactory$DerivativeField *self, void *data);
        static PyObject *t_FDSFactory$DerivativeField_get__zero(t_FDSFactory$DerivativeField *self, void *data);
        static PyObject *t_FDSFactory$DerivativeField_get__parameters_(t_FDSFactory$DerivativeField *self, void *data);
        static PyGetSetDef t_FDSFactory$DerivativeField__fields_[] = {
          DECLARE_GET_FIELD(t_FDSFactory$DerivativeField, one),
          DECLARE_GET_FIELD(t_FDSFactory$DerivativeField, pi),
          DECLARE_GET_FIELD(t_FDSFactory$DerivativeField, runtimeClass),
          DECLARE_GET_FIELD(t_FDSFactory$DerivativeField, zero),
          DECLARE_GET_FIELD(t_FDSFactory$DerivativeField, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_FDSFactory$DerivativeField__methods_[] = {
          DECLARE_METHOD(t_FDSFactory$DerivativeField, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, of_, METH_VARARGS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, equals, METH_VARARGS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, getOne, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, getPi, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, getRuntimeClass, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, getZero, METH_NOARGS),
          DECLARE_METHOD(t_FDSFactory$DerivativeField, hashCode, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(FDSFactory$DerivativeField)[] = {
          { Py_tp_methods, t_FDSFactory$DerivativeField__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_FDSFactory$DerivativeField__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(FDSFactory$DerivativeField)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(FDSFactory$DerivativeField, t_FDSFactory$DerivativeField, FDSFactory$DerivativeField);
        PyObject *t_FDSFactory$DerivativeField::wrap_Object(const FDSFactory$DerivativeField& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FDSFactory$DerivativeField::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FDSFactory$DerivativeField *self = (t_FDSFactory$DerivativeField *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_FDSFactory$DerivativeField::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_FDSFactory$DerivativeField::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_FDSFactory$DerivativeField *self = (t_FDSFactory$DerivativeField *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_FDSFactory$DerivativeField::install(PyObject *module)
        {
          installType(&PY_TYPE(FDSFactory$DerivativeField), &PY_TYPE_DEF(FDSFactory$DerivativeField), module, "FDSFactory$DerivativeField", 0);
        }

        void t_FDSFactory$DerivativeField::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory$DerivativeField), "class_", make_descriptor(FDSFactory$DerivativeField::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory$DerivativeField), "wrapfn_", make_descriptor(t_FDSFactory$DerivativeField::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(FDSFactory$DerivativeField), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_FDSFactory$DerivativeField_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, FDSFactory$DerivativeField::initializeClass, 1)))
            return NULL;
          return t_FDSFactory$DerivativeField::wrap_Object(FDSFactory$DerivativeField(((t_FDSFactory$DerivativeField *) arg)->object.this$));
        }
        static PyObject *t_FDSFactory$DerivativeField_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, FDSFactory$DerivativeField::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_FDSFactory$DerivativeField_of_(t_FDSFactory$DerivativeField *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_FDSFactory$DerivativeField_equals(t_FDSFactory$DerivativeField *self, PyObject *args)
        {
          ::java::lang::Object a0((jobject) NULL);
          jboolean result;

          if (!parseArgs(args, "o", &a0))
          {
            OBJ_CALL(result = self->object.equals(a0));
            Py_RETURN_BOOL(result);
          }

          return callSuper(PY_TYPE(FDSFactory$DerivativeField), (PyObject *) self, "equals", args, 2);
        }

        static PyObject *t_FDSFactory$DerivativeField_getOne(t_FDSFactory$DerivativeField *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FDSFactory$DerivativeField_getPi(t_FDSFactory$DerivativeField *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getPi());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FDSFactory$DerivativeField_getRuntimeClass(t_FDSFactory$DerivativeField *self)
        {
          ::java::lang::Class result((jobject) NULL);
          OBJ_CALL(result = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(result);
        }

        static PyObject *t_FDSFactory$DerivativeField_getZero(t_FDSFactory$DerivativeField *self)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure result((jobject) NULL);
          OBJ_CALL(result = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(result, self->parameters[0]);
        }

        static PyObject *t_FDSFactory$DerivativeField_hashCode(t_FDSFactory$DerivativeField *self, PyObject *args)
        {
          jint result;

          if (!parseArgs(args, ""))
          {
            OBJ_CALL(result = self->object.hashCode());
            return PyLong_FromLong((long) result);
          }

          return callSuper(PY_TYPE(FDSFactory$DerivativeField), (PyObject *) self, "hashCode", args, 2);
        }
        static PyObject *t_FDSFactory$DerivativeField_get__parameters_(t_FDSFactory$DerivativeField *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_FDSFactory$DerivativeField_get__one(t_FDSFactory$DerivativeField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getOne());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(value);
        }

        static PyObject *t_FDSFactory$DerivativeField_get__pi(t_FDSFactory$DerivativeField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getPi());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(value);
        }

        static PyObject *t_FDSFactory$DerivativeField_get__runtimeClass(t_FDSFactory$DerivativeField *self, void *data)
        {
          ::java::lang::Class value((jobject) NULL);
          OBJ_CALL(value = self->object.getRuntimeClass());
          return ::java::lang::t_Class::wrap_Object(value);
        }

        static PyObject *t_FDSFactory$DerivativeField_get__zero(t_FDSFactory$DerivativeField *self, void *data)
        {
          ::org::hipparchus::analysis::differentiation::FieldDerivativeStructure value((jobject) NULL);
          OBJ_CALL(value = self->object.getZero());
          return ::org::hipparchus::analysis::differentiation::t_FieldDerivativeStructure::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/attitudes/FieldAttitudeInterpolator.h"
#include "org/orekit/time/FieldTimeInterpolator.h"
#include "org/orekit/utils/TimeStampedFieldAngularCoordinates.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace attitudes {

      ::java::lang::Class *FieldAttitudeInterpolator::class$ = NULL;
      jmethodID *FieldAttitudeInterpolator::mids$ = NULL;
      bool FieldAttitudeInterpolator::live$ = false;

      jclass FieldAttitudeInterpolator::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/attitudes/FieldAttitudeInterpolator");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_003021992dac8ec0] = env->getMethodID(cls, "<init>", "(Lorg/orekit/frames/Frame;Lorg/orekit/time/FieldTimeInterpolator;)V");
          mids$[mid_getAngularInterpolator_7ace41e1c3856194] = env->getMethodID(cls, "getAngularInterpolator", "()Lorg/orekit/time/FieldTimeInterpolator;");
          mids$[mid_getReferenceFrame_b86f9f61d97a7244] = env->getMethodID(cls, "getReferenceFrame", "()Lorg/orekit/frames/Frame;");
          mids$[mid_interpolate_c7d66c3e73e8f446] = env->getMethodID(cls, "interpolate", "(Lorg/orekit/time/AbstractFieldTimeInterpolator$InterpolationData;)Lorg/orekit/attitudes/FieldAttitude;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      FieldAttitudeInterpolator::FieldAttitudeInterpolator(const ::org::orekit::frames::Frame & a0, const ::org::orekit::time::FieldTimeInterpolator & a1) : ::org::orekit::time::AbstractFieldTimeInterpolator(env->newObject(initializeClass, &mids$, mid_init$_003021992dac8ec0, a0.this$, a1.this$)) {}

      ::org::orekit::time::FieldTimeInterpolator FieldAttitudeInterpolator::getAngularInterpolator() const
      {
        return ::org::orekit::time::FieldTimeInterpolator(env->callObjectMethod(this$, mids$[mid_getAngularInterpolator_7ace41e1c3856194]));
      }

      ::org::orekit::frames::Frame FieldAttitudeInterpolator::getReferenceFrame() const
      {
        return ::org::orekit::frames::Frame(env->callObjectMethod(this$, mids$[mid_getReferenceFrame_b86f9f61d97a7244]));
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
      static PyObject *t_FieldAttitudeInterpolator_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAttitudeInterpolator_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldAttitudeInterpolator_of_(t_FieldAttitudeInterpolator *self, PyObject *args);
      static int t_FieldAttitudeInterpolator_init_(t_FieldAttitudeInterpolator *self, PyObject *args, PyObject *kwds);
      static PyObject *t_FieldAttitudeInterpolator_getAngularInterpolator(t_FieldAttitudeInterpolator *self);
      static PyObject *t_FieldAttitudeInterpolator_getReferenceFrame(t_FieldAttitudeInterpolator *self);
      static PyObject *t_FieldAttitudeInterpolator_get__angularInterpolator(t_FieldAttitudeInterpolator *self, void *data);
      static PyObject *t_FieldAttitudeInterpolator_get__referenceFrame(t_FieldAttitudeInterpolator *self, void *data);
      static PyObject *t_FieldAttitudeInterpolator_get__parameters_(t_FieldAttitudeInterpolator *self, void *data);
      static PyGetSetDef t_FieldAttitudeInterpolator__fields_[] = {
        DECLARE_GET_FIELD(t_FieldAttitudeInterpolator, angularInterpolator),
        DECLARE_GET_FIELD(t_FieldAttitudeInterpolator, referenceFrame),
        DECLARE_GET_FIELD(t_FieldAttitudeInterpolator, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldAttitudeInterpolator__methods_[] = {
        DECLARE_METHOD(t_FieldAttitudeInterpolator, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAttitudeInterpolator, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldAttitudeInterpolator, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldAttitudeInterpolator, getAngularInterpolator, METH_NOARGS),
        DECLARE_METHOD(t_FieldAttitudeInterpolator, getReferenceFrame, METH_NOARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldAttitudeInterpolator)[] = {
        { Py_tp_methods, t_FieldAttitudeInterpolator__methods_ },
        { Py_tp_init, (void *) t_FieldAttitudeInterpolator_init_ },
        { Py_tp_getset, t_FieldAttitudeInterpolator__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldAttitudeInterpolator)[] = {
        &PY_TYPE_DEF(::org::orekit::time::AbstractFieldTimeInterpolator),
        NULL
      };

      DEFINE_TYPE(FieldAttitudeInterpolator, t_FieldAttitudeInterpolator, FieldAttitudeInterpolator);
      PyObject *t_FieldAttitudeInterpolator::wrap_Object(const FieldAttitudeInterpolator& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAttitudeInterpolator::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAttitudeInterpolator *self = (t_FieldAttitudeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldAttitudeInterpolator::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldAttitudeInterpolator::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldAttitudeInterpolator *self = (t_FieldAttitudeInterpolator *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldAttitudeInterpolator::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldAttitudeInterpolator), &PY_TYPE_DEF(FieldAttitudeInterpolator), module, "FieldAttitudeInterpolator", 0);
      }

      void t_FieldAttitudeInterpolator::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAttitudeInterpolator), "class_", make_descriptor(FieldAttitudeInterpolator::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAttitudeInterpolator), "wrapfn_", make_descriptor(t_FieldAttitudeInterpolator::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldAttitudeInterpolator), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldAttitudeInterpolator_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldAttitudeInterpolator::initializeClass, 1)))
          return NULL;
        return t_FieldAttitudeInterpolator::wrap_Object(FieldAttitudeInterpolator(((t_FieldAttitudeInterpolator *) arg)->object.this$));
      }
      static PyObject *t_FieldAttitudeInterpolator_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldAttitudeInterpolator::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldAttitudeInterpolator_of_(t_FieldAttitudeInterpolator *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_FieldAttitudeInterpolator_init_(t_FieldAttitudeInterpolator *self, PyObject *args, PyObject *kwds)
      {
        ::org::orekit::frames::Frame a0((jobject) NULL);
        ::org::orekit::time::FieldTimeInterpolator a1((jobject) NULL);
        PyTypeObject **p1;
        FieldAttitudeInterpolator object((jobject) NULL);

        if (!parseArgs(args, "kK", ::org::orekit::frames::Frame::initializeClass, ::org::orekit::time::FieldTimeInterpolator::initializeClass, &a0, &a1, &p1, ::org::orekit::time::t_FieldTimeInterpolator::parameters_))
        {
          INT_CALL(object = FieldAttitudeInterpolator(a0, a1));
          self->object = object;
        }
        else
        {
          PyErr_SetArgsError((PyObject *) self, "__init__", args);
          return -1;
        }

        return 0;
      }

      static PyObject *t_FieldAttitudeInterpolator_getAngularInterpolator(t_FieldAttitudeInterpolator *self)
      {
        ::org::orekit::time::FieldTimeInterpolator result((jobject) NULL);
        OBJ_CALL(result = self->object.getAngularInterpolator());
        return ::org::orekit::time::t_FieldTimeInterpolator::wrap_Object(result);
      }

      static PyObject *t_FieldAttitudeInterpolator_getReferenceFrame(t_FieldAttitudeInterpolator *self)
      {
        ::org::orekit::frames::Frame result((jobject) NULL);
        OBJ_CALL(result = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(result);
      }
      static PyObject *t_FieldAttitudeInterpolator_get__parameters_(t_FieldAttitudeInterpolator *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldAttitudeInterpolator_get__angularInterpolator(t_FieldAttitudeInterpolator *self, void *data)
      {
        ::org::orekit::time::FieldTimeInterpolator value((jobject) NULL);
        OBJ_CALL(value = self->object.getAngularInterpolator());
        return ::org::orekit::time::t_FieldTimeInterpolator::wrap_Object(value);
      }

      static PyObject *t_FieldAttitudeInterpolator_get__referenceFrame(t_FieldAttitudeInterpolator *self, void *data)
      {
        ::org::orekit::frames::Frame value((jobject) NULL);
        OBJ_CALL(value = self->object.getReferenceFrame());
        return ::org::orekit::frames::t_Frame::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/WideLaneCombination.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *WideLaneCombination::class$ = NULL;
          jmethodID *WideLaneCombination::mids$ = NULL;
          bool WideLaneCombination::live$ = false;

          jclass WideLaneCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/WideLaneCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCombinedValue_e0f2baaf2a2ab093] = env->getMethodID(cls, "getCombinedValue", "(DLorg/orekit/gnss/Frequency;DLorg/orekit/gnss/Frequency;)D");
              mids$[mid_getCombinedFrequency_6baf140b93832af8] = env->getMethodID(cls, "getCombinedFrequency", "(Lorg/orekit/gnss/Frequency;Lorg/orekit/gnss/Frequency;)D");

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
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_WideLaneCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_WideLaneCombination_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_WideLaneCombination__methods_[] = {
            DECLARE_METHOD(t_WideLaneCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_WideLaneCombination, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(WideLaneCombination)[] = {
            { Py_tp_methods, t_WideLaneCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(WideLaneCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractDualFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(WideLaneCombination, t_WideLaneCombination, WideLaneCombination);

          void t_WideLaneCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(WideLaneCombination), &PY_TYPE_DEF(WideLaneCombination), module, "WideLaneCombination", 0);
          }

          void t_WideLaneCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(WideLaneCombination), "class_", make_descriptor(WideLaneCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WideLaneCombination), "wrapfn_", make_descriptor(t_WideLaneCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(WideLaneCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_WideLaneCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, WideLaneCombination::initializeClass, 1)))
              return NULL;
            return t_WideLaneCombination::wrap_Object(WideLaneCombination(((t_WideLaneCombination *) arg)->object.this$));
          }
          static PyObject *t_WideLaneCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, WideLaneCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/ode/FieldEquationsMapper.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/io/Serializable.h"
#include "org/hipparchus/ode/FieldODEStateAndDerivative.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace ode {

      ::java::lang::Class *FieldEquationsMapper::class$ = NULL;
      jmethodID *FieldEquationsMapper::mids$ = NULL;
      bool FieldEquationsMapper::live$ = false;

      jclass FieldEquationsMapper::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/ode/FieldEquationsMapper");

          mids$ = new jmethodID[max_mid];
          mids$[mid_extractEquationData_34dfc92b396ffe6f] = env->getMethodID(cls, "extractEquationData", "(I[Lorg/hipparchus/CalculusFieldElement;)[Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_getNumberOfEquations_570ce0828f81a2c1] = env->getMethodID(cls, "getNumberOfEquations", "()I");
          mids$[mid_getTotalDimension_570ce0828f81a2c1] = env->getMethodID(cls, "getTotalDimension", "()I");
          mids$[mid_insertEquationData_96b09c1b6812b26f] = env->getMethodID(cls, "insertEquationData", "(I[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)V");
          mids$[mid_mapStateAndDerivative_51e49ea6635206d7] = env->getMethodID(cls, "mapStateAndDerivative", "(Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/ode/FieldODEStateAndDerivative;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      JArray< ::org::hipparchus::CalculusFieldElement > FieldEquationsMapper::extractEquationData(jint a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
      {
        return JArray< ::org::hipparchus::CalculusFieldElement >(env->callObjectMethod(this$, mids$[mid_extractEquationData_34dfc92b396ffe6f], a0, a1.this$));
      }

      jint FieldEquationsMapper::getNumberOfEquations() const
      {
        return env->callIntMethod(this$, mids$[mid_getNumberOfEquations_570ce0828f81a2c1]);
      }

      jint FieldEquationsMapper::getTotalDimension() const
      {
        return env->callIntMethod(this$, mids$[mid_getTotalDimension_570ce0828f81a2c1]);
      }

      void FieldEquationsMapper::insertEquationData(jint a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        env->callVoidMethod(this$, mids$[mid_insertEquationData_96b09c1b6812b26f], a0, a1.this$, a2.this$);
      }

      ::org::hipparchus::ode::FieldODEStateAndDerivative FieldEquationsMapper::mapStateAndDerivative(const ::org::hipparchus::CalculusFieldElement & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1, const JArray< ::org::hipparchus::CalculusFieldElement > & a2) const
      {
        return ::org::hipparchus::ode::FieldODEStateAndDerivative(env->callObjectMethod(this$, mids$[mid_mapStateAndDerivative_51e49ea6635206d7], a0.this$, a1.this$, a2.this$));
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
      static PyObject *t_FieldEquationsMapper_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEquationsMapper_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_FieldEquationsMapper_of_(t_FieldEquationsMapper *self, PyObject *args);
      static PyObject *t_FieldEquationsMapper_extractEquationData(t_FieldEquationsMapper *self, PyObject *args);
      static PyObject *t_FieldEquationsMapper_getNumberOfEquations(t_FieldEquationsMapper *self);
      static PyObject *t_FieldEquationsMapper_getTotalDimension(t_FieldEquationsMapper *self);
      static PyObject *t_FieldEquationsMapper_insertEquationData(t_FieldEquationsMapper *self, PyObject *args);
      static PyObject *t_FieldEquationsMapper_mapStateAndDerivative(t_FieldEquationsMapper *self, PyObject *args);
      static PyObject *t_FieldEquationsMapper_get__numberOfEquations(t_FieldEquationsMapper *self, void *data);
      static PyObject *t_FieldEquationsMapper_get__totalDimension(t_FieldEquationsMapper *self, void *data);
      static PyObject *t_FieldEquationsMapper_get__parameters_(t_FieldEquationsMapper *self, void *data);
      static PyGetSetDef t_FieldEquationsMapper__fields_[] = {
        DECLARE_GET_FIELD(t_FieldEquationsMapper, numberOfEquations),
        DECLARE_GET_FIELD(t_FieldEquationsMapper, totalDimension),
        DECLARE_GET_FIELD(t_FieldEquationsMapper, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_FieldEquationsMapper__methods_[] = {
        DECLARE_METHOD(t_FieldEquationsMapper, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEquationsMapper, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_FieldEquationsMapper, of_, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquationsMapper, extractEquationData, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquationsMapper, getNumberOfEquations, METH_NOARGS),
        DECLARE_METHOD(t_FieldEquationsMapper, getTotalDimension, METH_NOARGS),
        DECLARE_METHOD(t_FieldEquationsMapper, insertEquationData, METH_VARARGS),
        DECLARE_METHOD(t_FieldEquationsMapper, mapStateAndDerivative, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(FieldEquationsMapper)[] = {
        { Py_tp_methods, t_FieldEquationsMapper__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_FieldEquationsMapper__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(FieldEquationsMapper)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(FieldEquationsMapper, t_FieldEquationsMapper, FieldEquationsMapper);
      PyObject *t_FieldEquationsMapper::wrap_Object(const FieldEquationsMapper& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEquationsMapper::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEquationsMapper *self = (t_FieldEquationsMapper *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_FieldEquationsMapper::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_FieldEquationsMapper::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_FieldEquationsMapper *self = (t_FieldEquationsMapper *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_FieldEquationsMapper::install(PyObject *module)
      {
        installType(&PY_TYPE(FieldEquationsMapper), &PY_TYPE_DEF(FieldEquationsMapper), module, "FieldEquationsMapper", 0);
      }

      void t_FieldEquationsMapper::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEquationsMapper), "class_", make_descriptor(FieldEquationsMapper::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEquationsMapper), "wrapfn_", make_descriptor(t_FieldEquationsMapper::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEquationsMapper), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_FieldEquationsMapper_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, FieldEquationsMapper::initializeClass, 1)))
          return NULL;
        return t_FieldEquationsMapper::wrap_Object(FieldEquationsMapper(((t_FieldEquationsMapper *) arg)->object.this$));
      }
      static PyObject *t_FieldEquationsMapper_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, FieldEquationsMapper::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_FieldEquationsMapper_of_(t_FieldEquationsMapper *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_FieldEquationsMapper_extractEquationData(t_FieldEquationsMapper *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > result((jobject) NULL);

        if (!parseArgs(args, "I[K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.extractEquationData(a0, a1));
          return JArray<jobject>(result.this$).wrap(::org::hipparchus::t_CalculusFieldElement::wrap_jobject);
        }

        PyErr_SetArgsError((PyObject *) self, "extractEquationData", args);
        return NULL;
      }

      static PyObject *t_FieldEquationsMapper_getNumberOfEquations(t_FieldEquationsMapper *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getNumberOfEquations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldEquationsMapper_getTotalDimension(t_FieldEquationsMapper *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getTotalDimension());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_FieldEquationsMapper_insertEquationData(t_FieldEquationsMapper *self, PyObject *args)
      {
        jint a0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;

        if (!parseArgs(args, "I[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(self->object.insertEquationData(a0, a1, a2));
          Py_RETURN_NONE;
        }

        PyErr_SetArgsError((PyObject *) self, "insertEquationData", args);
        return NULL;
      }

      static PyObject *t_FieldEquationsMapper_mapStateAndDerivative(t_FieldEquationsMapper *self, PyObject *args)
      {
        ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
        PyTypeObject **p0;
        JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
        PyTypeObject **p1;
        JArray< ::org::hipparchus::CalculusFieldElement > a2((jobject) NULL);
        PyTypeObject **p2;
        ::org::hipparchus::ode::FieldODEStateAndDerivative result((jobject) NULL);

        if (!parseArgs(args, "K[K[K", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &p2, ::org::hipparchus::t_CalculusFieldElement::parameters_))
        {
          OBJ_CALL(result = self->object.mapStateAndDerivative(a0, a1, a2));
          return ::org::hipparchus::ode::t_FieldODEStateAndDerivative::wrap_Object(result, self->parameters[0]);
        }

        PyErr_SetArgsError((PyObject *) self, "mapStateAndDerivative", args);
        return NULL;
      }
      static PyObject *t_FieldEquationsMapper_get__parameters_(t_FieldEquationsMapper *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_FieldEquationsMapper_get__numberOfEquations(t_FieldEquationsMapper *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getNumberOfEquations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_FieldEquationsMapper_get__totalDimension(t_FieldEquationsMapper *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getTotalDimension());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/forces/gravity/Relativity.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "java/util/List.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/hipparchus/geometry/euclidean/threed/FieldVector3D.h"
#include "org/orekit/forces/ForceModel.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "org/orekit/utils/ParameterDriver.h"
#include "org/orekit/propagation/SpacecraftState.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace forces {
      namespace gravity {

        ::java::lang::Class *Relativity::class$ = NULL;
        jmethodID *Relativity::mids$ = NULL;
        bool Relativity::live$ = false;

        jclass Relativity::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/forces/gravity/Relativity");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_17db3a65980d3441] = env->getMethodID(cls, "<init>", "(D)V");
            mids$[mid_acceleration_8954761face5e1a7] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/SpacecraftState;[D)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");
            mids$[mid_acceleration_b42ac4b5bfb80fab] = env->getMethodID(cls, "acceleration", "(Lorg/orekit/propagation/FieldSpacecraftState;[Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/geometry/euclidean/threed/FieldVector3D;");
            mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd] = env->getMethodID(cls, "dependsOnPositionOnly", "()Z");
            mids$[mid_getParametersDrivers_2afa36052df4765d] = env->getMethodID(cls, "getParametersDrivers", "()Ljava/util/List;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        Relativity::Relativity(jdouble a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_17db3a65980d3441, a0)) {}

        ::org::hipparchus::geometry::euclidean::threed::Vector3D Relativity::acceleration(const ::org::orekit::propagation::SpacecraftState & a0, const JArray< jdouble > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_acceleration_8954761face5e1a7], a0.this$, a1.this$));
        }

        ::org::hipparchus::geometry::euclidean::threed::FieldVector3D Relativity::acceleration(const ::org::orekit::propagation::FieldSpacecraftState & a0, const JArray< ::org::hipparchus::CalculusFieldElement > & a1) const
        {
          return ::org::hipparchus::geometry::euclidean::threed::FieldVector3D(env->callObjectMethod(this$, mids$[mid_acceleration_b42ac4b5bfb80fab], a0.this$, a1.this$));
        }

        jboolean Relativity::dependsOnPositionOnly() const
        {
          return env->callBooleanMethod(this$, mids$[mid_dependsOnPositionOnly_b108b35ef48e27bd]);
        }

        ::java::util::List Relativity::getParametersDrivers() const
        {
          return ::java::util::List(env->callObjectMethod(this$, mids$[mid_getParametersDrivers_2afa36052df4765d]));
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
        static PyObject *t_Relativity_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_Relativity_instance_(PyTypeObject *type, PyObject *arg);
        static int t_Relativity_init_(t_Relativity *self, PyObject *args, PyObject *kwds);
        static PyObject *t_Relativity_acceleration(t_Relativity *self, PyObject *args);
        static PyObject *t_Relativity_dependsOnPositionOnly(t_Relativity *self);
        static PyObject *t_Relativity_getParametersDrivers(t_Relativity *self);
        static PyObject *t_Relativity_get__parametersDrivers(t_Relativity *self, void *data);
        static PyGetSetDef t_Relativity__fields_[] = {
          DECLARE_GET_FIELD(t_Relativity, parametersDrivers),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_Relativity__methods_[] = {
          DECLARE_METHOD(t_Relativity, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Relativity, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_Relativity, acceleration, METH_VARARGS),
          DECLARE_METHOD(t_Relativity, dependsOnPositionOnly, METH_NOARGS),
          DECLARE_METHOD(t_Relativity, getParametersDrivers, METH_NOARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(Relativity)[] = {
          { Py_tp_methods, t_Relativity__methods_ },
          { Py_tp_init, (void *) t_Relativity_init_ },
          { Py_tp_getset, t_Relativity__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(Relativity)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(Relativity, t_Relativity, Relativity);

        void t_Relativity::install(PyObject *module)
        {
          installType(&PY_TYPE(Relativity), &PY_TYPE_DEF(Relativity), module, "Relativity", 0);
        }

        void t_Relativity::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relativity), "class_", make_descriptor(Relativity::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relativity), "wrapfn_", make_descriptor(t_Relativity::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(Relativity), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_Relativity_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, Relativity::initializeClass, 1)))
            return NULL;
          return t_Relativity::wrap_Object(Relativity(((t_Relativity *) arg)->object.this$));
        }
        static PyObject *t_Relativity_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, Relativity::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_Relativity_init_(t_Relativity *self, PyObject *args, PyObject *kwds)
        {
          jdouble a0;
          Relativity object((jobject) NULL);

          if (!parseArgs(args, "D", &a0))
          {
            INT_CALL(object = Relativity(a0));
            self->object = object;
          }
          else
          {
            PyErr_SetArgsError((PyObject *) self, "__init__", args);
            return -1;
          }

          return 0;
        }

        static PyObject *t_Relativity_acceleration(t_Relativity *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 2:
            {
              ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
              PyTypeObject **p0;
              JArray< ::org::hipparchus::CalculusFieldElement > a1((jobject) NULL);
              PyTypeObject **p1;
              ::org::hipparchus::geometry::euclidean::threed::FieldVector3D result((jobject) NULL);

              if (!parseArgs(args, "K[K", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_FieldVector3D::wrap_Object(result);
              }
            }
            {
              ::org::orekit::propagation::SpacecraftState a0((jobject) NULL);
              JArray< jdouble > a1((jobject) NULL);
              ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

              if (!parseArgs(args, "k[D", ::org::orekit::propagation::SpacecraftState::initializeClass, &a0, &a1))
              {
                OBJ_CALL(result = self->object.acceleration(a0, a1));
                return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "acceleration", args);
          return NULL;
        }

        static PyObject *t_Relativity_dependsOnPositionOnly(t_Relativity *self)
        {
          jboolean result;
          OBJ_CALL(result = self->object.dependsOnPositionOnly());
          Py_RETURN_BOOL(result);
        }

        static PyObject *t_Relativity_getParametersDrivers(t_Relativity *self)
        {
          ::java::util::List result((jobject) NULL);
          OBJ_CALL(result = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(result, ::org::orekit::utils::PY_TYPE(ParameterDriver));
        }

        static PyObject *t_Relativity_get__parametersDrivers(t_Relativity *self, void *data)
        {
          ::java::util::List value((jobject) NULL);
          OBJ_CALL(value = self->object.getParametersDrivers());
          return ::java::util::t_List::wrap_Object(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/models/earth/displacement/TectonicsDisplacement.h"
#include "org/orekit/models/earth/displacement/StationDisplacement.h"
#include "org/orekit/frames/Frame.h"
#include "org/orekit/data/BodiesElements.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/threed/Vector3D.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace models {
      namespace earth {
        namespace displacement {

          ::java::lang::Class *TectonicsDisplacement::class$ = NULL;
          jmethodID *TectonicsDisplacement::mids$ = NULL;
          bool TectonicsDisplacement::live$ = false;

          jclass TectonicsDisplacement::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/models/earth/displacement/TectonicsDisplacement");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_3d7cc17d4ec11a9f] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)V");
              mids$[mid_displacement_dc5338a5a1255d1d] = env->getMethodID(cls, "displacement", "(Lorg/orekit/data/BodiesElements;Lorg/orekit/frames/Frame;Lorg/hipparchus/geometry/euclidean/threed/Vector3D;)Lorg/hipparchus/geometry/euclidean/threed/Vector3D;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          TectonicsDisplacement::TectonicsDisplacement(const ::org::orekit::time::AbsoluteDate & a0, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a1) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_3d7cc17d4ec11a9f, a0.this$, a1.this$)) {}

          ::org::hipparchus::geometry::euclidean::threed::Vector3D TectonicsDisplacement::displacement(const ::org::orekit::data::BodiesElements & a0, const ::org::orekit::frames::Frame & a1, const ::org::hipparchus::geometry::euclidean::threed::Vector3D & a2) const
          {
            return ::org::hipparchus::geometry::euclidean::threed::Vector3D(env->callObjectMethod(this$, mids$[mid_displacement_dc5338a5a1255d1d], a0.this$, a1.this$, a2.this$));
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
        namespace displacement {
          static PyObject *t_TectonicsDisplacement_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_TectonicsDisplacement_instance_(PyTypeObject *type, PyObject *arg);
          static int t_TectonicsDisplacement_init_(t_TectonicsDisplacement *self, PyObject *args, PyObject *kwds);
          static PyObject *t_TectonicsDisplacement_displacement(t_TectonicsDisplacement *self, PyObject *args);

          static PyMethodDef t_TectonicsDisplacement__methods_[] = {
            DECLARE_METHOD(t_TectonicsDisplacement, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TectonicsDisplacement, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_TectonicsDisplacement, displacement, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(TectonicsDisplacement)[] = {
            { Py_tp_methods, t_TectonicsDisplacement__methods_ },
            { Py_tp_init, (void *) t_TectonicsDisplacement_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(TectonicsDisplacement)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(TectonicsDisplacement, t_TectonicsDisplacement, TectonicsDisplacement);

          void t_TectonicsDisplacement::install(PyObject *module)
          {
            installType(&PY_TYPE(TectonicsDisplacement), &PY_TYPE_DEF(TectonicsDisplacement), module, "TectonicsDisplacement", 0);
          }

          void t_TectonicsDisplacement::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(TectonicsDisplacement), "class_", make_descriptor(TectonicsDisplacement::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TectonicsDisplacement), "wrapfn_", make_descriptor(t_TectonicsDisplacement::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(TectonicsDisplacement), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_TectonicsDisplacement_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, TectonicsDisplacement::initializeClass, 1)))
              return NULL;
            return t_TectonicsDisplacement::wrap_Object(TectonicsDisplacement(((t_TectonicsDisplacement *) arg)->object.this$));
          }
          static PyObject *t_TectonicsDisplacement_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, TectonicsDisplacement::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_TectonicsDisplacement_init_(t_TectonicsDisplacement *self, PyObject *args, PyObject *kwds)
          {
            ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a1((jobject) NULL);
            TectonicsDisplacement object((jobject) NULL);

            if (!parseArgs(args, "kk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1))
            {
              INT_CALL(object = TectonicsDisplacement(a0, a1));
              self->object = object;
            }
            else
            {
              PyErr_SetArgsError((PyObject *) self, "__init__", args);
              return -1;
            }

            return 0;
          }

          static PyObject *t_TectonicsDisplacement_displacement(t_TectonicsDisplacement *self, PyObject *args)
          {
            ::org::orekit::data::BodiesElements a0((jobject) NULL);
            ::org::orekit::frames::Frame a1((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D a2((jobject) NULL);
            ::org::hipparchus::geometry::euclidean::threed::Vector3D result((jobject) NULL);

            if (!parseArgs(args, "kkk", ::org::orekit::data::BodiesElements::initializeClass, ::org::orekit::frames::Frame::initializeClass, ::org::hipparchus::geometry::euclidean::threed::Vector3D::initializeClass, &a0, &a1, &a2))
            {
              OBJ_CALL(result = self->object.displacement(a0, a1, a2));
              return ::org::hipparchus::geometry::euclidean::threed::t_Vector3D::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "displacement", args);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/Alfano2005.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType.h"
#include "java/lang/Class.h"
#include "org/orekit/ssa/metrics/FieldProbabilityOfCollision.h"
#include "org/orekit/ssa/metrics/ProbabilityOfCollision.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace ssa {
      namespace collision {
        namespace shorttermencounter {
          namespace probability {
            namespace twod {

              ::java::lang::Class *Alfano2005::class$ = NULL;
              jmethodID *Alfano2005::mids$ = NULL;
              bool Alfano2005::live$ = false;

              jclass Alfano2005::initializeClass(bool getOnly)
              {
                if (getOnly)
                  return (jclass) (live$ ? class$->this$ : NULL);
                if (class$ == NULL)
                {
                  jclass cls = (jclass) env->findClass("org/orekit/ssa/collision/shorttermencounter/probability/twod/Alfano2005");

                  mids$ = new jmethodID[max_mid];
                  mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
                  mids$[mid_compute_184c2f4ec5889c74] = env->getMethodID(cls, "compute", "(DDDDD)Lorg/orekit/ssa/metrics/ProbabilityOfCollision;");
                  mids$[mid_compute_0ed38e7bbee7fafc] = env->getMethodID(cls, "compute", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/orekit/ssa/metrics/FieldProbabilityOfCollision;");
                  mids$[mid_getType_5d7ecb27bb5e3bc3] = env->getMethodID(cls, "getType", "()Lorg/orekit/ssa/collision/shorttermencounter/probability/twod/ShortTermEncounter2DPOCMethodType;");

                  class$ = new ::java::lang::Class(cls);
                  live$ = true;
                }
                return (jclass) class$->this$;
              }

              Alfano2005::Alfano2005() : ::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

              ::org::orekit::ssa::metrics::ProbabilityOfCollision Alfano2005::compute(jdouble a0, jdouble a1, jdouble a2, jdouble a3, jdouble a4) const
              {
                return ::org::orekit::ssa::metrics::ProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_184c2f4ec5889c74], a0, a1, a2, a3, a4));
              }

              ::org::orekit::ssa::metrics::FieldProbabilityOfCollision Alfano2005::compute(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, const ::org::hipparchus::CalculusFieldElement & a2, const ::org::hipparchus::CalculusFieldElement & a3, const ::org::hipparchus::CalculusFieldElement & a4) const
              {
                return ::org::orekit::ssa::metrics::FieldProbabilityOfCollision(env->callObjectMethod(this$, mids$[mid_compute_0ed38e7bbee7fafc], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$));
              }

              ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType Alfano2005::getType() const
              {
                return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType(env->callObjectMethod(this$, mids$[mid_getType_5d7ecb27bb5e3bc3]));
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
              static PyObject *t_Alfano2005_cast_(PyTypeObject *type, PyObject *arg);
              static PyObject *t_Alfano2005_instance_(PyTypeObject *type, PyObject *arg);
              static int t_Alfano2005_init_(t_Alfano2005 *self, PyObject *args, PyObject *kwds);
              static PyObject *t_Alfano2005_compute(t_Alfano2005 *self, PyObject *args);
              static PyObject *t_Alfano2005_getType(t_Alfano2005 *self, PyObject *args);
              static PyObject *t_Alfano2005_get__type(t_Alfano2005 *self, void *data);
              static PyGetSetDef t_Alfano2005__fields_[] = {
                DECLARE_GET_FIELD(t_Alfano2005, type),
                { NULL, NULL, NULL, NULL, NULL }
              };

              static PyMethodDef t_Alfano2005__methods_[] = {
                DECLARE_METHOD(t_Alfano2005, cast_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Alfano2005, instance_, METH_O | METH_CLASS),
                DECLARE_METHOD(t_Alfano2005, compute, METH_VARARGS),
                DECLARE_METHOD(t_Alfano2005, getType, METH_VARARGS),
                { NULL, NULL, 0, NULL }
              };

              static PyType_Slot PY_TYPE_SLOTS(Alfano2005)[] = {
                { Py_tp_methods, t_Alfano2005__methods_ },
                { Py_tp_init, (void *) t_Alfano2005_init_ },
                { Py_tp_getset, t_Alfano2005__fields_ },
                { 0, NULL }
              };

              static PyType_Def *PY_TYPE_BASES(Alfano2005)[] = {
                &PY_TYPE_DEF(::org::orekit::ssa::collision::shorttermencounter::probability::twod::AbstractShortTermEncounter2DPOCMethod),
                NULL
              };

              DEFINE_TYPE(Alfano2005, t_Alfano2005, Alfano2005);

              void t_Alfano2005::install(PyObject *module)
              {
                installType(&PY_TYPE(Alfano2005), &PY_TYPE_DEF(Alfano2005), module, "Alfano2005", 0);
              }

              void t_Alfano2005::initialize(PyObject *module)
              {
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfano2005), "class_", make_descriptor(Alfano2005::initializeClass, 1));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfano2005), "wrapfn_", make_descriptor(t_Alfano2005::wrap_jobject));
                PyObject_SetAttrString((PyObject *) PY_TYPE(Alfano2005), "boxfn_", make_descriptor(boxObject));
              }

              static PyObject *t_Alfano2005_cast_(PyTypeObject *type, PyObject *arg)
              {
                if (!(arg = castCheck(arg, Alfano2005::initializeClass, 1)))
                  return NULL;
                return t_Alfano2005::wrap_Object(Alfano2005(((t_Alfano2005 *) arg)->object.this$));
              }
              static PyObject *t_Alfano2005_instance_(PyTypeObject *type, PyObject *arg)
              {
                if (!castCheck(arg, Alfano2005::initializeClass, 0))
                  Py_RETURN_FALSE;
                Py_RETURN_TRUE;
              }

              static int t_Alfano2005_init_(t_Alfano2005 *self, PyObject *args, PyObject *kwds)
              {
                Alfano2005 object((jobject) NULL);

                INT_CALL(object = Alfano2005());
                self->object = object;

                return 0;
              }

              static PyObject *t_Alfano2005_compute(t_Alfano2005 *self, PyObject *args)
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

                return callSuper(PY_TYPE(Alfano2005), (PyObject *) self, "compute", args, 2);
              }

              static PyObject *t_Alfano2005_getType(t_Alfano2005 *self, PyObject *args)
              {
                ::org::orekit::ssa::collision::shorttermencounter::probability::twod::ShortTermEncounter2DPOCMethodType result((jobject) NULL);

                if (!parseArgs(args, ""))
                {
                  OBJ_CALL(result = self->object.getType());
                  return ::org::orekit::ssa::collision::shorttermencounter::probability::twod::t_ShortTermEncounter2DPOCMethodType::wrap_Object(result);
                }

                return callSuper(PY_TYPE(Alfano2005), (PyObject *) self, "getType", args, 2);
              }

              static PyObject *t_Alfano2005_get__type(t_Alfano2005 *self, void *data)
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
#include "org/orekit/files/rinex/navigation/IonosphericCorrectionType.h"
#include "java/lang/String.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/navigation/IonosphericCorrectionType.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *IonosphericCorrectionType::class$ = NULL;
          jmethodID *IonosphericCorrectionType::mids$ = NULL;
          bool IonosphericCorrectionType::live$ = false;
          IonosphericCorrectionType *IonosphericCorrectionType::BDS = NULL;
          IonosphericCorrectionType *IonosphericCorrectionType::GAL = NULL;
          IonosphericCorrectionType *IonosphericCorrectionType::GPS = NULL;
          IonosphericCorrectionType *IonosphericCorrectionType::IRN = NULL;
          IonosphericCorrectionType *IonosphericCorrectionType::QZS = NULL;

          jclass IonosphericCorrectionType::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/IonosphericCorrectionType");

              mids$ = new jmethodID[max_mid];
              mids$[mid_valueOf_b953920c7e90dee8] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;");
              mids$[mid_values_cb9e6b318906b0d9] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;");

              class$ = new ::java::lang::Class(cls);
              cls = (jclass) class$->this$;

              BDS = new IonosphericCorrectionType(env->getStaticObjectField(cls, "BDS", "Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;"));
              GAL = new IonosphericCorrectionType(env->getStaticObjectField(cls, "GAL", "Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;"));
              GPS = new IonosphericCorrectionType(env->getStaticObjectField(cls, "GPS", "Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;"));
              IRN = new IonosphericCorrectionType(env->getStaticObjectField(cls, "IRN", "Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;"));
              QZS = new IonosphericCorrectionType(env->getStaticObjectField(cls, "QZS", "Lorg/orekit/files/rinex/navigation/IonosphericCorrectionType;"));
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          IonosphericCorrectionType IonosphericCorrectionType::valueOf(const ::java::lang::String & a0)
          {
            jclass cls = env->getClass(initializeClass);
            return IonosphericCorrectionType(env->callStaticObjectMethod(cls, mids$[mid_valueOf_b953920c7e90dee8], a0.this$));
          }

          JArray< IonosphericCorrectionType > IonosphericCorrectionType::values()
          {
            jclass cls = env->getClass(initializeClass);
            return JArray< IonosphericCorrectionType >(env->callStaticObjectMethod(cls, mids$[mid_values_cb9e6b318906b0d9]));
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
          static PyObject *t_IonosphericCorrectionType_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphericCorrectionType_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_IonosphericCorrectionType_of_(t_IonosphericCorrectionType *self, PyObject *args);
          static PyObject *t_IonosphericCorrectionType_valueOf(PyTypeObject *type, PyObject *args);
          static PyObject *t_IonosphericCorrectionType_values(PyTypeObject *type);
          static PyObject *t_IonosphericCorrectionType_get__parameters_(t_IonosphericCorrectionType *self, void *data);
          static PyGetSetDef t_IonosphericCorrectionType__fields_[] = {
            DECLARE_GET_FIELD(t_IonosphericCorrectionType, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_IonosphericCorrectionType__methods_[] = {
            DECLARE_METHOD(t_IonosphericCorrectionType, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphericCorrectionType, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_IonosphericCorrectionType, of_, METH_VARARGS),
            DECLARE_METHOD(t_IonosphericCorrectionType, valueOf, METH_VARARGS | METH_CLASS),
            DECLARE_METHOD(t_IonosphericCorrectionType, values, METH_NOARGS | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(IonosphericCorrectionType)[] = {
            { Py_tp_methods, t_IonosphericCorrectionType__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_IonosphericCorrectionType__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(IonosphericCorrectionType)[] = {
            &PY_TYPE_DEF(::java::lang::Enum),
            NULL
          };

          DEFINE_TYPE(IonosphericCorrectionType, t_IonosphericCorrectionType, IonosphericCorrectionType);
          PyObject *t_IonosphericCorrectionType::wrap_Object(const IonosphericCorrectionType& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IonosphericCorrectionType::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IonosphericCorrectionType *self = (t_IonosphericCorrectionType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_IonosphericCorrectionType::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_IonosphericCorrectionType::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_IonosphericCorrectionType *self = (t_IonosphericCorrectionType *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_IonosphericCorrectionType::install(PyObject *module)
          {
            installType(&PY_TYPE(IonosphericCorrectionType), &PY_TYPE_DEF(IonosphericCorrectionType), module, "IonosphericCorrectionType", 0);
          }

          void t_IonosphericCorrectionType::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "class_", make_descriptor(IonosphericCorrectionType::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "wrapfn_", make_descriptor(t_IonosphericCorrectionType::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "boxfn_", make_descriptor(boxObject));
            env->getClass(IonosphericCorrectionType::initializeClass);
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "BDS", make_descriptor(t_IonosphericCorrectionType::wrap_Object(*IonosphericCorrectionType::BDS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "GAL", make_descriptor(t_IonosphericCorrectionType::wrap_Object(*IonosphericCorrectionType::GAL)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "GPS", make_descriptor(t_IonosphericCorrectionType::wrap_Object(*IonosphericCorrectionType::GPS)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "IRN", make_descriptor(t_IonosphericCorrectionType::wrap_Object(*IonosphericCorrectionType::IRN)));
            PyObject_SetAttrString((PyObject *) PY_TYPE(IonosphericCorrectionType), "QZS", make_descriptor(t_IonosphericCorrectionType::wrap_Object(*IonosphericCorrectionType::QZS)));
          }

          static PyObject *t_IonosphericCorrectionType_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, IonosphericCorrectionType::initializeClass, 1)))
              return NULL;
            return t_IonosphericCorrectionType::wrap_Object(IonosphericCorrectionType(((t_IonosphericCorrectionType *) arg)->object.this$));
          }
          static PyObject *t_IonosphericCorrectionType_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, IonosphericCorrectionType::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_IonosphericCorrectionType_of_(t_IonosphericCorrectionType *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_IonosphericCorrectionType_valueOf(PyTypeObject *type, PyObject *args)
          {
            ::java::lang::String a0((jobject) NULL);
            IonosphericCorrectionType result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = ::org::orekit::files::rinex::navigation::IonosphericCorrectionType::valueOf(a0));
              return t_IonosphericCorrectionType::wrap_Object(result);
            }

            return callSuper(type, "valueOf", args, 2);
          }

          static PyObject *t_IonosphericCorrectionType_values(PyTypeObject *type)
          {
            JArray< IonosphericCorrectionType > result((jobject) NULL);
            OBJ_CALL(result = ::org::orekit::files::rinex::navigation::IonosphericCorrectionType::values());
            return JArray<jobject>(result.this$).wrap(t_IonosphericCorrectionType::wrap_jobject);
          }
          static PyObject *t_IonosphericCorrectionType_get__parameters_(t_IonosphericCorrectionType *self, void *data)
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
#include "org/orekit/gnss/rflink/gps/SubFrameAlmanac.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace rflink {
        namespace gps {

          ::java::lang::Class *SubFrameAlmanac::class$ = NULL;
          jmethodID *SubFrameAlmanac::mids$ = NULL;
          bool SubFrameAlmanac::live$ = false;

          jclass SubFrameAlmanac::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/gnss/rflink/gps/SubFrameAlmanac");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getAF0_dff5885c2c873297] = env->getMethodID(cls, "getAF0", "()D");
              mids$[mid_getAF1_dff5885c2c873297] = env->getMethodID(cls, "getAF1", "()D");
              mids$[mid_getDeltai_dff5885c2c873297] = env->getMethodID(cls, "getDeltai", "()D");
              mids$[mid_getE_dff5885c2c873297] = env->getMethodID(cls, "getE", "()D");
              mids$[mid_getLowercaseOmega_dff5885c2c873297] = env->getMethodID(cls, "getLowercaseOmega", "()D");
              mids$[mid_getM0_dff5885c2c873297] = env->getMethodID(cls, "getM0", "()D");
              mids$[mid_getOmegaDot_dff5885c2c873297] = env->getMethodID(cls, "getOmegaDot", "()D");
              mids$[mid_getPRN_570ce0828f81a2c1] = env->getMethodID(cls, "getPRN", "()I");
              mids$[mid_getSqrtA_dff5885c2c873297] = env->getMethodID(cls, "getSqrtA", "()D");
              mids$[mid_getSvHealth_570ce0828f81a2c1] = env->getMethodID(cls, "getSvHealth", "()I");
              mids$[mid_getToaA_570ce0828f81a2c1] = env->getMethodID(cls, "getToaA", "()I");
              mids$[mid_getUppercaseOmega0_dff5885c2c873297] = env->getMethodID(cls, "getUppercaseOmega0", "()D");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          jdouble SubFrameAlmanac::getAF0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAF0_dff5885c2c873297]);
          }

          jdouble SubFrameAlmanac::getAF1() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getAF1_dff5885c2c873297]);
          }

          jdouble SubFrameAlmanac::getDeltai() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getDeltai_dff5885c2c873297]);
          }

          jdouble SubFrameAlmanac::getE() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getE_dff5885c2c873297]);
          }

          jdouble SubFrameAlmanac::getLowercaseOmega() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getLowercaseOmega_dff5885c2c873297]);
          }

          jdouble SubFrameAlmanac::getM0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getM0_dff5885c2c873297]);
          }

          jdouble SubFrameAlmanac::getOmegaDot() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getOmegaDot_dff5885c2c873297]);
          }

          jint SubFrameAlmanac::getPRN() const
          {
            return env->callIntMethod(this$, mids$[mid_getPRN_570ce0828f81a2c1]);
          }

          jdouble SubFrameAlmanac::getSqrtA() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getSqrtA_dff5885c2c873297]);
          }

          jint SubFrameAlmanac::getSvHealth() const
          {
            return env->callIntMethod(this$, mids$[mid_getSvHealth_570ce0828f81a2c1]);
          }

          jint SubFrameAlmanac::getToaA() const
          {
            return env->callIntMethod(this$, mids$[mid_getToaA_570ce0828f81a2c1]);
          }

          jdouble SubFrameAlmanac::getUppercaseOmega0() const
          {
            return env->callDoubleMethod(this$, mids$[mid_getUppercaseOmega0_dff5885c2c873297]);
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
      namespace rflink {
        namespace gps {
          static PyObject *t_SubFrameAlmanac_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrameAlmanac_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_SubFrameAlmanac_getAF0(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getAF1(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getDeltai(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getE(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getLowercaseOmega(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getM0(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getOmegaDot(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getPRN(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getSqrtA(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getSvHealth(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getToaA(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_getUppercaseOmega0(t_SubFrameAlmanac *self);
          static PyObject *t_SubFrameAlmanac_get__aF0(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__aF1(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__deltai(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__e(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__lowercaseOmega(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__m0(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__omegaDot(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__pRN(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__sqrtA(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__svHealth(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__toaA(t_SubFrameAlmanac *self, void *data);
          static PyObject *t_SubFrameAlmanac_get__uppercaseOmega0(t_SubFrameAlmanac *self, void *data);
          static PyGetSetDef t_SubFrameAlmanac__fields_[] = {
            DECLARE_GET_FIELD(t_SubFrameAlmanac, aF0),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, aF1),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, deltai),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, e),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, lowercaseOmega),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, m0),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, omegaDot),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, pRN),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, sqrtA),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, svHealth),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, toaA),
            DECLARE_GET_FIELD(t_SubFrameAlmanac, uppercaseOmega0),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_SubFrameAlmanac__methods_[] = {
            DECLARE_METHOD(t_SubFrameAlmanac, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrameAlmanac, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_SubFrameAlmanac, getAF0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getAF1, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getDeltai, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getE, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getLowercaseOmega, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getM0, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getOmegaDot, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getPRN, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getSqrtA, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getSvHealth, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getToaA, METH_NOARGS),
            DECLARE_METHOD(t_SubFrameAlmanac, getUppercaseOmega0, METH_NOARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(SubFrameAlmanac)[] = {
            { Py_tp_methods, t_SubFrameAlmanac__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_SubFrameAlmanac__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(SubFrameAlmanac)[] = {
            &PY_TYPE_DEF(::org::orekit::gnss::rflink::gps::SubFrame45),
            NULL
          };

          DEFINE_TYPE(SubFrameAlmanac, t_SubFrameAlmanac, SubFrameAlmanac);

          void t_SubFrameAlmanac::install(PyObject *module)
          {
            installType(&PY_TYPE(SubFrameAlmanac), &PY_TYPE_DEF(SubFrameAlmanac), module, "SubFrameAlmanac", 0);
          }

          void t_SubFrameAlmanac::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrameAlmanac), "class_", make_descriptor(SubFrameAlmanac::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrameAlmanac), "wrapfn_", make_descriptor(t_SubFrameAlmanac::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(SubFrameAlmanac), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_SubFrameAlmanac_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, SubFrameAlmanac::initializeClass, 1)))
              return NULL;
            return t_SubFrameAlmanac::wrap_Object(SubFrameAlmanac(((t_SubFrameAlmanac *) arg)->object.this$));
          }
          static PyObject *t_SubFrameAlmanac_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, SubFrameAlmanac::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_SubFrameAlmanac_getAF0(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAF0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getAF1(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getAF1());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getDeltai(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getDeltai());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getE(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getE());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getLowercaseOmega(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getLowercaseOmega());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getM0(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getM0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getOmegaDot(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getOmegaDot());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getPRN(t_SubFrameAlmanac *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getPRN());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrameAlmanac_getSqrtA(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getSqrtA());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_getSvHealth(t_SubFrameAlmanac *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getSvHealth());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrameAlmanac_getToaA(t_SubFrameAlmanac *self)
          {
            jint result;
            OBJ_CALL(result = self->object.getToaA());
            return PyLong_FromLong((long) result);
          }

          static PyObject *t_SubFrameAlmanac_getUppercaseOmega0(t_SubFrameAlmanac *self)
          {
            jdouble result;
            OBJ_CALL(result = self->object.getUppercaseOmega0());
            return PyFloat_FromDouble((double) result);
          }

          static PyObject *t_SubFrameAlmanac_get__aF0(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAF0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__aF1(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getAF1());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__deltai(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getDeltai());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__e(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getE());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__lowercaseOmega(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getLowercaseOmega());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__m0(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getM0());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__omegaDot(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getOmegaDot());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__pRN(t_SubFrameAlmanac *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getPRN());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrameAlmanac_get__sqrtA(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getSqrtA());
            return PyFloat_FromDouble((double) value);
          }

          static PyObject *t_SubFrameAlmanac_get__svHealth(t_SubFrameAlmanac *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getSvHealth());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrameAlmanac_get__toaA(t_SubFrameAlmanac *self, void *data)
          {
            jint value;
            OBJ_CALL(value = self->object.getToaA());
            return PyLong_FromLong((long) value);
          }

          static PyObject *t_SubFrameAlmanac_get__uppercaseOmega0(t_SubFrameAlmanac *self, void *data)
          {
            jdouble value;
            OBJ_CALL(value = self->object.getUppercaseOmega0());
            return PyFloat_FromDouble((double) value);
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/stat/descriptive/AggregatableStatistic.h"
#include "org/hipparchus/exception/NullArgumentException.h"
#include "java/lang/Iterable.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace stat {
      namespace descriptive {

        ::java::lang::Class *AggregatableStatistic::class$ = NULL;
        jmethodID *AggregatableStatistic::mids$ = NULL;
        bool AggregatableStatistic::live$ = false;

        jclass AggregatableStatistic::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/stat/descriptive/AggregatableStatistic");

            mids$ = new jmethodID[max_mid];
            mids$[mid_aggregate_c87c65058a9c47e3] = env->getMethodID(cls, "aggregate", "([Ljava/lang/Object;)V");
            mids$[mid_aggregate_616dc59fbc71e214] = env->getMethodID(cls, "aggregate", "(Ljava/lang/Iterable;)V");
            mids$[mid_aggregate_2990946c992aafed] = env->getMethodID(cls, "aggregate", "(Ljava/lang/Object;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void AggregatableStatistic::aggregate(const JArray< ::java::lang::Object > & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_aggregate_c87c65058a9c47e3], a0.this$);
        }

        void AggregatableStatistic::aggregate(const ::java::lang::Iterable & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_aggregate_616dc59fbc71e214], a0.this$);
        }

        void AggregatableStatistic::aggregate(const ::java::lang::Object & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_aggregate_2990946c992aafed], a0.this$);
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
      namespace descriptive {
        static PyObject *t_AggregatableStatistic_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AggregatableStatistic_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_AggregatableStatistic_of_(t_AggregatableStatistic *self, PyObject *args);
        static PyObject *t_AggregatableStatistic_aggregate(t_AggregatableStatistic *self, PyObject *args);
        static PyObject *t_AggregatableStatistic_get__parameters_(t_AggregatableStatistic *self, void *data);
        static PyGetSetDef t_AggregatableStatistic__fields_[] = {
          DECLARE_GET_FIELD(t_AggregatableStatistic, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_AggregatableStatistic__methods_[] = {
          DECLARE_METHOD(t_AggregatableStatistic, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AggregatableStatistic, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_AggregatableStatistic, of_, METH_VARARGS),
          DECLARE_METHOD(t_AggregatableStatistic, aggregate, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(AggregatableStatistic)[] = {
          { Py_tp_methods, t_AggregatableStatistic__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_AggregatableStatistic__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(AggregatableStatistic)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(AggregatableStatistic, t_AggregatableStatistic, AggregatableStatistic);
        PyObject *t_AggregatableStatistic::wrap_Object(const AggregatableStatistic& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AggregatableStatistic::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AggregatableStatistic *self = (t_AggregatableStatistic *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_AggregatableStatistic::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_AggregatableStatistic::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_AggregatableStatistic *self = (t_AggregatableStatistic *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_AggregatableStatistic::install(PyObject *module)
        {
          installType(&PY_TYPE(AggregatableStatistic), &PY_TYPE_DEF(AggregatableStatistic), module, "AggregatableStatistic", 0);
        }

        void t_AggregatableStatistic::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatableStatistic), "class_", make_descriptor(AggregatableStatistic::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatableStatistic), "wrapfn_", make_descriptor(t_AggregatableStatistic::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(AggregatableStatistic), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_AggregatableStatistic_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, AggregatableStatistic::initializeClass, 1)))
            return NULL;
          return t_AggregatableStatistic::wrap_Object(AggregatableStatistic(((t_AggregatableStatistic *) arg)->object.this$));
        }
        static PyObject *t_AggregatableStatistic_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, AggregatableStatistic::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_AggregatableStatistic_of_(t_AggregatableStatistic *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_AggregatableStatistic_aggregate(t_AggregatableStatistic *self, PyObject *args)
        {
          switch (PyTuple_GET_SIZE(args)) {
           case 1:
            {
              JArray< ::java::lang::Object > a0((jobject) NULL);

              if (!parseArgs(args, "[o", &a0))
              {
                OBJ_CALL(self->object.aggregate(a0));
                Py_RETURN_NONE;
              }
            }
            {
              ::java::lang::Iterable a0((jobject) NULL);
              PyTypeObject **p0;

              if (!parseArgs(args, "K", ::java::lang::Iterable::initializeClass, &a0, &p0, ::java::lang::t_Iterable::parameters_))
              {
                OBJ_CALL(self->object.aggregate(a0));
                Py_RETURN_NONE;
              }
            }
            {
              ::java::lang::Object a0((jobject) NULL);

              if (!parseArgs(args, "O", self->parameters[0], &a0))
              {
                OBJ_CALL(self->object.aggregate(a0));
                Py_RETURN_NONE;
              }
            }
          }

          PyErr_SetArgsError((PyObject *) self, "aggregate", args);
          return NULL;
        }
        static PyObject *t_AggregatableStatistic_get__parameters_(t_AggregatableStatistic *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/dfp/Dfp.h"
#include "org/hipparchus/util/FieldSinCos.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/util/FieldSinhCosh.h"
#include "org/hipparchus/dfp/Dfp.h"
#include "org/hipparchus/dfp/DfpField$RoundingMode.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "org/hipparchus/dfp/DfpField.h"
#include "java/lang/String.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace dfp {

      ::java::lang::Class *Dfp::class$ = NULL;
      jmethodID *Dfp::mids$ = NULL;
      bool Dfp::live$ = false;
      jint Dfp::ERR_SCALE = (jint) 0;
      jbyte Dfp::FINITE = (jbyte) 0;
      jbyte Dfp::INFINITE$ = (jbyte) 0;
      jint Dfp::MAX_EXP = (jint) 0;
      jint Dfp::MIN_EXP = (jint) 0;
      jbyte Dfp::QNAN = (jbyte) 0;
      jint Dfp::RADIX = (jint) 0;
      jbyte Dfp::SNAN$ = (jbyte) 0;

      jclass Dfp::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/dfp/Dfp");

          mids$ = new jmethodID[max_mid];
          mids$[mid_abs_7fd146fa3f090bf3] = env->getMethodID(cls, "abs", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_acos_7fd146fa3f090bf3] = env->getMethodID(cls, "acos", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_acosh_7fd146fa3f090bf3] = env->getMethodID(cls, "acosh", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_add_63aa6f5f01162583] = env->getMethodID(cls, "add", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_add_81c4d69757062546] = env->getMethodID(cls, "add", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_asin_7fd146fa3f090bf3] = env->getMethodID(cls, "asin", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_asinh_7fd146fa3f090bf3] = env->getMethodID(cls, "asinh", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_atan_7fd146fa3f090bf3] = env->getMethodID(cls, "atan", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_atan2_63aa6f5f01162583] = env->getMethodID(cls, "atan2", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_atanh_7fd146fa3f090bf3] = env->getMethodID(cls, "atanh", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_cbrt_7fd146fa3f090bf3] = env->getMethodID(cls, "cbrt", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_ceil_7fd146fa3f090bf3] = env->getMethodID(cls, "ceil", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_classify_570ce0828f81a2c1] = env->getMethodID(cls, "classify", "()I");
          mids$[mid_copySign_63aa6f5f01162583] = env->getMethodID(cls, "copySign", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_copySign_81c4d69757062546] = env->getMethodID(cls, "copySign", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_copysign_e130e149d282e384] = env->getStaticMethodID(cls, "copysign", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_cos_7fd146fa3f090bf3] = env->getMethodID(cls, "cos", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_cosh_7fd146fa3f090bf3] = env->getMethodID(cls, "cosh", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_divide_63aa6f5f01162583] = env->getMethodID(cls, "divide", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_divide_81c4d69757062546] = env->getMethodID(cls, "divide", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_divide_0fe5880f95528b86] = env->getMethodID(cls, "divide", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_dotrap_969b6f66aa492678] = env->getMethodID(cls, "dotrap", "(ILjava/lang/String;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_equals_65c7d273e80d497a] = env->getMethodID(cls, "equals", "(Ljava/lang/Object;)Z");
          mids$[mid_exp_7fd146fa3f090bf3] = env->getMethodID(cls, "exp", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_expm1_7fd146fa3f090bf3] = env->getMethodID(cls, "expm1", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_floor_7fd146fa3f090bf3] = env->getMethodID(cls, "floor", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getExponent_570ce0828f81a2c1] = env->getMethodID(cls, "getExponent", "()I");
          mids$[mid_getField_94e96f6ecee99c5a] = env->getMethodID(cls, "getField", "()Lorg/hipparchus/dfp/DfpField;");
          mids$[mid_getOne_7fd146fa3f090bf3] = env->getMethodID(cls, "getOne", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getPi_7fd146fa3f090bf3] = env->getMethodID(cls, "getPi", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getRadixDigits_570ce0828f81a2c1] = env->getMethodID(cls, "getRadixDigits", "()I");
          mids$[mid_getReal_dff5885c2c873297] = env->getMethodID(cls, "getReal", "()D");
          mids$[mid_getTwo_7fd146fa3f090bf3] = env->getMethodID(cls, "getTwo", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_getZero_7fd146fa3f090bf3] = env->getMethodID(cls, "getZero", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_greaterThan_96527d9496d16a4e] = env->getMethodID(cls, "greaterThan", "(Lorg/hipparchus/dfp/Dfp;)Z");
          mids$[mid_hashCode_570ce0828f81a2c1] = env->getMethodID(cls, "hashCode", "()I");
          mids$[mid_hypot_63aa6f5f01162583] = env->getMethodID(cls, "hypot", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_intLog10_570ce0828f81a2c1] = env->getMethodID(cls, "intLog10", "()I");
          mids$[mid_intValue_570ce0828f81a2c1] = env->getMethodID(cls, "intValue", "()I");
          mids$[mid_isInfinite_b108b35ef48e27bd] = env->getMethodID(cls, "isInfinite", "()Z");
          mids$[mid_isNaN_b108b35ef48e27bd] = env->getMethodID(cls, "isNaN", "()Z");
          mids$[mid_isZero_b108b35ef48e27bd] = env->getMethodID(cls, "isZero", "()Z");
          mids$[mid_lessThan_96527d9496d16a4e] = env->getMethodID(cls, "lessThan", "(Lorg/hipparchus/dfp/Dfp;)Z");
          mids$[mid_linearCombination_088bf6a33898365e] = env->getMethodID(cls, "linearCombination", "([D[Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_66bef23964cfd1f0] = env->getMethodID(cls, "linearCombination", "([Lorg/hipparchus/dfp/Dfp;[Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_8b4a3cbc8e76d6ac] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_ed7bc1532c661c92] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/dfp/Dfp;DLorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_2a8439ba1ba1c6e6] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_6008eb98192036df] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/dfp/Dfp;DLorg/hipparchus/dfp/Dfp;DLorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_602e82307bb82ebe] = env->getMethodID(cls, "linearCombination", "(Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_linearCombination_80f49b40e22a5968] = env->getMethodID(cls, "linearCombination", "(DLorg/hipparchus/dfp/Dfp;DLorg/hipparchus/dfp/Dfp;DLorg/hipparchus/dfp/Dfp;DLorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_log_7fd146fa3f090bf3] = env->getMethodID(cls, "log", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_log10_7fd146fa3f090bf3] = env->getMethodID(cls, "log10", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_log10K_570ce0828f81a2c1] = env->getMethodID(cls, "log10K", "()I");
          mids$[mid_log1p_7fd146fa3f090bf3] = env->getMethodID(cls, "log1p", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_multiply_63aa6f5f01162583] = env->getMethodID(cls, "multiply", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_multiply_81c4d69757062546] = env->getMethodID(cls, "multiply", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_multiply_0fe5880f95528b86] = env->getMethodID(cls, "multiply", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_negate_7fd146fa3f090bf3] = env->getMethodID(cls, "negate", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_negativeOrNull_b108b35ef48e27bd] = env->getMethodID(cls, "negativeOrNull", "()Z");
          mids$[mid_newInstance_7fd146fa3f090bf3] = env->getMethodID(cls, "newInstance", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_71d71a82cc65a754] = env->getMethodID(cls, "newInstance", "(Ljava/lang/String;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_63aa6f5f01162583] = env->getMethodID(cls, "newInstance", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_57809bf392b66806] = env->getMethodID(cls, "newInstance", "(B)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_81c4d69757062546] = env->getMethodID(cls, "newInstance", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_0fe5880f95528b86] = env->getMethodID(cls, "newInstance", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_0b19f2e563b71fc5] = env->getMethodID(cls, "newInstance", "(J)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_2239a7d4dd08eb2e] = env->getMethodID(cls, "newInstance", "(Lorg/hipparchus/dfp/DfpField;Lorg/hipparchus/dfp/DfpField$RoundingMode;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_newInstance_84679f0649faeef6] = env->getMethodID(cls, "newInstance", "(BB)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_nextAfter_63aa6f5f01162583] = env->getMethodID(cls, "nextAfter", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_positiveOrNull_b108b35ef48e27bd] = env->getMethodID(cls, "positiveOrNull", "()Z");
          mids$[mid_pow_63aa6f5f01162583] = env->getMethodID(cls, "pow", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_pow_81c4d69757062546] = env->getMethodID(cls, "pow", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_pow_0fe5880f95528b86] = env->getMethodID(cls, "pow", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_power10_0fe5880f95528b86] = env->getMethodID(cls, "power10", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_power10K_0fe5880f95528b86] = env->getMethodID(cls, "power10K", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_reciprocal_7fd146fa3f090bf3] = env->getMethodID(cls, "reciprocal", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_remainder_63aa6f5f01162583] = env->getMethodID(cls, "remainder", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_remainder_81c4d69757062546] = env->getMethodID(cls, "remainder", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_rint_7fd146fa3f090bf3] = env->getMethodID(cls, "rint", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_rootN_0fe5880f95528b86] = env->getMethodID(cls, "rootN", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_scalb_0fe5880f95528b86] = env->getMethodID(cls, "scalb", "(I)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_sign_7fd146fa3f090bf3] = env->getMethodID(cls, "sign", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_sin_7fd146fa3f090bf3] = env->getMethodID(cls, "sin", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_sinCos_a447b7ca640e6b68] = env->getMethodID(cls, "sinCos", "()Lorg/hipparchus/util/FieldSinCos;");
          mids$[mid_sinh_7fd146fa3f090bf3] = env->getMethodID(cls, "sinh", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_sinhCosh_eef733c8a50b276f] = env->getMethodID(cls, "sinhCosh", "()Lorg/hipparchus/util/FieldSinhCosh;");
          mids$[mid_sqrt_7fd146fa3f090bf3] = env->getMethodID(cls, "sqrt", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_strictlyNegative_b108b35ef48e27bd] = env->getMethodID(cls, "strictlyNegative", "()Z");
          mids$[mid_strictlyPositive_b108b35ef48e27bd] = env->getMethodID(cls, "strictlyPositive", "()Z");
          mids$[mid_subtract_63aa6f5f01162583] = env->getMethodID(cls, "subtract", "(Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_subtract_81c4d69757062546] = env->getMethodID(cls, "subtract", "(D)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_tan_7fd146fa3f090bf3] = env->getMethodID(cls, "tan", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_tanh_7fd146fa3f090bf3] = env->getMethodID(cls, "tanh", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_toDegrees_7fd146fa3f090bf3] = env->getMethodID(cls, "toDegrees", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_toDouble_dff5885c2c873297] = env->getMethodID(cls, "toDouble", "()D");
          mids$[mid_toRadians_7fd146fa3f090bf3] = env->getMethodID(cls, "toRadians", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_toSplitDouble_60c7040667a7dc5c] = env->getMethodID(cls, "toSplitDouble", "()[D");
          mids$[mid_toString_11b109bd155ca898] = env->getMethodID(cls, "toString", "()Ljava/lang/String;");
          mids$[mid_ulp_7fd146fa3f090bf3] = env->getMethodID(cls, "ulp", "()Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_unequal_96527d9496d16a4e] = env->getMethodID(cls, "unequal", "(Lorg/hipparchus/dfp/Dfp;)Z");
          mids$[mid_shiftRight_0fa09c18fee449d5] = env->getMethodID(cls, "shiftRight", "()V");
          mids$[mid_align_2235cd056f5a882b] = env->getMethodID(cls, "align", "(I)I");
          mids$[mid_trunc_3e44fca7c65270d0] = env->getMethodID(cls, "trunc", "(Lorg/hipparchus/dfp/DfpField$RoundingMode;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_complement_2235cd056f5a882b] = env->getMethodID(cls, "complement", "(I)I");
          mids$[mid_dfp2sci_11b109bd155ca898] = env->getMethodID(cls, "dfp2sci", "()Ljava/lang/String;");
          mids$[mid_dfp2string_11b109bd155ca898] = env->getMethodID(cls, "dfp2string", "()Ljava/lang/String;");
          mids$[mid_trap_4b21fe36ab487b2e] = env->getMethodID(cls, "trap", "(ILjava/lang/String;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;Lorg/hipparchus/dfp/Dfp;)Lorg/hipparchus/dfp/Dfp;");
          mids$[mid_shiftLeft_0fa09c18fee449d5] = env->getMethodID(cls, "shiftLeft", "()V");
          mids$[mid_round_2235cd056f5a882b] = env->getMethodID(cls, "round", "(I)I");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          ERR_SCALE = env->getStaticIntField(cls, "ERR_SCALE");
          FINITE = env->getStaticByteField(cls, "FINITE");
          INFINITE$ = env->getStaticByteField(cls, "INFINITE");
          MAX_EXP = env->getStaticIntField(cls, "MAX_EXP");
          MIN_EXP = env->getStaticIntField(cls, "MIN_EXP");
          QNAN = env->getStaticByteField(cls, "QNAN");
          RADIX = env->getStaticIntField(cls, "RADIX");
          SNAN$ = env->getStaticByteField(cls, "SNAN");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      Dfp Dfp::abs() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_abs_7fd146fa3f090bf3]));
      }

      Dfp Dfp::acos() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_acos_7fd146fa3f090bf3]));
      }

      Dfp Dfp::acosh() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_acosh_7fd146fa3f090bf3]));
      }

      Dfp Dfp::add(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_add_63aa6f5f01162583], a0.this$));
      }

      Dfp Dfp::add(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_add_81c4d69757062546], a0));
      }

      Dfp Dfp::asin() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_asin_7fd146fa3f090bf3]));
      }

      Dfp Dfp::asinh() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_asinh_7fd146fa3f090bf3]));
      }

      Dfp Dfp::atan() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_atan_7fd146fa3f090bf3]));
      }

      Dfp Dfp::atan2(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_atan2_63aa6f5f01162583], a0.this$));
      }

      Dfp Dfp::atanh() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_atanh_7fd146fa3f090bf3]));
      }

      Dfp Dfp::cbrt() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_cbrt_7fd146fa3f090bf3]));
      }

      Dfp Dfp::ceil() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_ceil_7fd146fa3f090bf3]));
      }

      jint Dfp::classify() const
      {
        return env->callIntMethod(this$, mids$[mid_classify_570ce0828f81a2c1]);
      }

      Dfp Dfp::copySign(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_copySign_63aa6f5f01162583], a0.this$));
      }

      Dfp Dfp::copySign(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_copySign_81c4d69757062546], a0));
      }

      Dfp Dfp::copysign(const Dfp & a0, const Dfp & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return Dfp(env->callStaticObjectMethod(cls, mids$[mid_copysign_e130e149d282e384], a0.this$, a1.this$));
      }

      Dfp Dfp::cos() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_cos_7fd146fa3f090bf3]));
      }

      Dfp Dfp::cosh() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_cosh_7fd146fa3f090bf3]));
      }

      Dfp Dfp::divide(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_divide_63aa6f5f01162583], a0.this$));
      }

      Dfp Dfp::divide(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_divide_81c4d69757062546], a0));
      }

      Dfp Dfp::divide(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_divide_0fe5880f95528b86], a0));
      }

      Dfp Dfp::dotrap(jint a0, const ::java::lang::String & a1, const Dfp & a2, const Dfp & a3) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_dotrap_969b6f66aa492678], a0, a1.this$, a2.this$, a3.this$));
      }

      jboolean Dfp::equals(const ::java::lang::Object & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_equals_65c7d273e80d497a], a0.this$);
      }

      Dfp Dfp::exp() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_exp_7fd146fa3f090bf3]));
      }

      Dfp Dfp::expm1() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_expm1_7fd146fa3f090bf3]));
      }

      Dfp Dfp::floor() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_floor_7fd146fa3f090bf3]));
      }

      jint Dfp::getExponent() const
      {
        return env->callIntMethod(this$, mids$[mid_getExponent_570ce0828f81a2c1]);
      }

      ::org::hipparchus::dfp::DfpField Dfp::getField() const
      {
        return ::org::hipparchus::dfp::DfpField(env->callObjectMethod(this$, mids$[mid_getField_94e96f6ecee99c5a]));
      }

      Dfp Dfp::getOne() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_getOne_7fd146fa3f090bf3]));
      }

      Dfp Dfp::getPi() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_getPi_7fd146fa3f090bf3]));
      }

      jint Dfp::getRadixDigits() const
      {
        return env->callIntMethod(this$, mids$[mid_getRadixDigits_570ce0828f81a2c1]);
      }

      jdouble Dfp::getReal() const
      {
        return env->callDoubleMethod(this$, mids$[mid_getReal_dff5885c2c873297]);
      }

      Dfp Dfp::getTwo() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_getTwo_7fd146fa3f090bf3]));
      }

      Dfp Dfp::getZero() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_getZero_7fd146fa3f090bf3]));
      }

      jboolean Dfp::greaterThan(const Dfp & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_greaterThan_96527d9496d16a4e], a0.this$);
      }

      jint Dfp::hashCode() const
      {
        return env->callIntMethod(this$, mids$[mid_hashCode_570ce0828f81a2c1]);
      }

      Dfp Dfp::hypot(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_hypot_63aa6f5f01162583], a0.this$));
      }

      jint Dfp::intLog10() const
      {
        return env->callIntMethod(this$, mids$[mid_intLog10_570ce0828f81a2c1]);
      }

      jint Dfp::intValue() const
      {
        return env->callIntMethod(this$, mids$[mid_intValue_570ce0828f81a2c1]);
      }

      jboolean Dfp::isInfinite() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isInfinite_b108b35ef48e27bd]);
      }

      jboolean Dfp::isNaN() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isNaN_b108b35ef48e27bd]);
      }

      jboolean Dfp::isZero() const
      {
        return env->callBooleanMethod(this$, mids$[mid_isZero_b108b35ef48e27bd]);
      }

      jboolean Dfp::lessThan(const Dfp & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_lessThan_96527d9496d16a4e], a0.this$);
      }

      Dfp Dfp::linearCombination(const JArray< jdouble > & a0, const JArray< Dfp > & a1) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_088bf6a33898365e], a0.this$, a1.this$));
      }

      Dfp Dfp::linearCombination(const JArray< Dfp > & a0, const JArray< Dfp > & a1) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_66bef23964cfd1f0], a0.this$, a1.this$));
      }

      Dfp Dfp::linearCombination(const Dfp & a0, const Dfp & a1, const Dfp & a2, const Dfp & a3) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_8b4a3cbc8e76d6ac], a0.this$, a1.this$, a2.this$, a3.this$));
      }

      Dfp Dfp::linearCombination(jdouble a0, const Dfp & a1, jdouble a2, const Dfp & a3) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_ed7bc1532c661c92], a0, a1.this$, a2, a3.this$));
      }

      Dfp Dfp::linearCombination(const Dfp & a0, const Dfp & a1, const Dfp & a2, const Dfp & a3, const Dfp & a4, const Dfp & a5) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_2a8439ba1ba1c6e6], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$));
      }

      Dfp Dfp::linearCombination(jdouble a0, const Dfp & a1, jdouble a2, const Dfp & a3, jdouble a4, const Dfp & a5) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_6008eb98192036df], a0, a1.this$, a2, a3.this$, a4, a5.this$));
      }

      Dfp Dfp::linearCombination(const Dfp & a0, const Dfp & a1, const Dfp & a2, const Dfp & a3, const Dfp & a4, const Dfp & a5, const Dfp & a6, const Dfp & a7) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_602e82307bb82ebe], a0.this$, a1.this$, a2.this$, a3.this$, a4.this$, a5.this$, a6.this$, a7.this$));
      }

      Dfp Dfp::linearCombination(jdouble a0, const Dfp & a1, jdouble a2, const Dfp & a3, jdouble a4, const Dfp & a5, jdouble a6, const Dfp & a7) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_linearCombination_80f49b40e22a5968], a0, a1.this$, a2, a3.this$, a4, a5.this$, a6, a7.this$));
      }

      Dfp Dfp::log() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_log_7fd146fa3f090bf3]));
      }

      Dfp Dfp::log10() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_log10_7fd146fa3f090bf3]));
      }

      jint Dfp::log10K() const
      {
        return env->callIntMethod(this$, mids$[mid_log10K_570ce0828f81a2c1]);
      }

      Dfp Dfp::log1p() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_log1p_7fd146fa3f090bf3]));
      }

      Dfp Dfp::multiply(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_multiply_63aa6f5f01162583], a0.this$));
      }

      Dfp Dfp::multiply(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_multiply_81c4d69757062546], a0));
      }

      Dfp Dfp::multiply(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_multiply_0fe5880f95528b86], a0));
      }

      Dfp Dfp::negate() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_negate_7fd146fa3f090bf3]));
      }

      jboolean Dfp::negativeOrNull() const
      {
        return env->callBooleanMethod(this$, mids$[mid_negativeOrNull_b108b35ef48e27bd]);
      }

      Dfp Dfp::newInstance() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_7fd146fa3f090bf3]));
      }

      Dfp Dfp::newInstance(const ::java::lang::String & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_71d71a82cc65a754], a0.this$));
      }

      Dfp Dfp::newInstance(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_63aa6f5f01162583], a0.this$));
      }

      Dfp Dfp::newInstance(jbyte a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_57809bf392b66806], a0));
      }

      Dfp Dfp::newInstance(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_81c4d69757062546], a0));
      }

      Dfp Dfp::newInstance(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_0fe5880f95528b86], a0));
      }

      Dfp Dfp::newInstance(jlong a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_0b19f2e563b71fc5], a0));
      }

      Dfp Dfp::newInstance(const ::org::hipparchus::dfp::DfpField & a0, const ::org::hipparchus::dfp::DfpField$RoundingMode & a1) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_2239a7d4dd08eb2e], a0.this$, a1.this$));
      }

      Dfp Dfp::newInstance(jbyte a0, jbyte a1) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_newInstance_84679f0649faeef6], a0, a1));
      }

      Dfp Dfp::nextAfter(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_nextAfter_63aa6f5f01162583], a0.this$));
      }

      jboolean Dfp::positiveOrNull() const
      {
        return env->callBooleanMethod(this$, mids$[mid_positiveOrNull_b108b35ef48e27bd]);
      }

      Dfp Dfp::pow(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_pow_63aa6f5f01162583], a0.this$));
      }

      Dfp Dfp::pow(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_pow_81c4d69757062546], a0));
      }

      Dfp Dfp::pow(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_pow_0fe5880f95528b86], a0));
      }

      Dfp Dfp::power10(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_power10_0fe5880f95528b86], a0));
      }

      Dfp Dfp::power10K(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_power10K_0fe5880f95528b86], a0));
      }

      Dfp Dfp::reciprocal() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_reciprocal_7fd146fa3f090bf3]));
      }

      Dfp Dfp::remainder(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_remainder_63aa6f5f01162583], a0.this$));
      }

      Dfp Dfp::remainder(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_remainder_81c4d69757062546], a0));
      }

      Dfp Dfp::rint() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_rint_7fd146fa3f090bf3]));
      }

      Dfp Dfp::rootN(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_rootN_0fe5880f95528b86], a0));
      }

      Dfp Dfp::scalb(jint a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_scalb_0fe5880f95528b86], a0));
      }

      Dfp Dfp::sign() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_sign_7fd146fa3f090bf3]));
      }

      Dfp Dfp::sin() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_sin_7fd146fa3f090bf3]));
      }

      ::org::hipparchus::util::FieldSinCos Dfp::sinCos() const
      {
        return ::org::hipparchus::util::FieldSinCos(env->callObjectMethod(this$, mids$[mid_sinCos_a447b7ca640e6b68]));
      }

      Dfp Dfp::sinh() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_sinh_7fd146fa3f090bf3]));
      }

      ::org::hipparchus::util::FieldSinhCosh Dfp::sinhCosh() const
      {
        return ::org::hipparchus::util::FieldSinhCosh(env->callObjectMethod(this$, mids$[mid_sinhCosh_eef733c8a50b276f]));
      }

      Dfp Dfp::sqrt() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_sqrt_7fd146fa3f090bf3]));
      }

      jboolean Dfp::strictlyNegative() const
      {
        return env->callBooleanMethod(this$, mids$[mid_strictlyNegative_b108b35ef48e27bd]);
      }

      jboolean Dfp::strictlyPositive() const
      {
        return env->callBooleanMethod(this$, mids$[mid_strictlyPositive_b108b35ef48e27bd]);
      }

      Dfp Dfp::subtract(const Dfp & a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_subtract_63aa6f5f01162583], a0.this$));
      }

      Dfp Dfp::subtract(jdouble a0) const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_subtract_81c4d69757062546], a0));
      }

      Dfp Dfp::tan() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_tan_7fd146fa3f090bf3]));
      }

      Dfp Dfp::tanh() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_tanh_7fd146fa3f090bf3]));
      }

      Dfp Dfp::toDegrees() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_toDegrees_7fd146fa3f090bf3]));
      }

      jdouble Dfp::toDouble() const
      {
        return env->callDoubleMethod(this$, mids$[mid_toDouble_dff5885c2c873297]);
      }

      Dfp Dfp::toRadians() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_toRadians_7fd146fa3f090bf3]));
      }

      JArray< jdouble > Dfp::toSplitDouble() const
      {
        return JArray< jdouble >(env->callObjectMethod(this$, mids$[mid_toSplitDouble_60c7040667a7dc5c]));
      }

      ::java::lang::String Dfp::toString() const
      {
        return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_toString_11b109bd155ca898]));
      }

      Dfp Dfp::ulp() const
      {
        return Dfp(env->callObjectMethod(this$, mids$[mid_ulp_7fd146fa3f090bf3]));
      }

      jboolean Dfp::unequal(const Dfp & a0) const
      {
        return env->callBooleanMethod(this$, mids$[mid_unequal_96527d9496d16a4e], a0.this$);
      }
    }
  }
}

#include "structmember.h"
#include "functions.h"
#include "macros.h"

namespace org {
  namespace hipparchus {
    namespace dfp {
      static PyObject *t_Dfp_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Dfp_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Dfp_abs(t_Dfp *self);
      static PyObject *t_Dfp_acos(t_Dfp *self);
      static PyObject *t_Dfp_acosh(t_Dfp *self);
      static PyObject *t_Dfp_add(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_asin(t_Dfp *self);
      static PyObject *t_Dfp_asinh(t_Dfp *self);
      static PyObject *t_Dfp_atan(t_Dfp *self);
      static PyObject *t_Dfp_atan2(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_atanh(t_Dfp *self);
      static PyObject *t_Dfp_cbrt(t_Dfp *self);
      static PyObject *t_Dfp_ceil(t_Dfp *self);
      static PyObject *t_Dfp_classify(t_Dfp *self);
      static PyObject *t_Dfp_copySign(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_copysign(PyTypeObject *type, PyObject *args);
      static PyObject *t_Dfp_cos(t_Dfp *self);
      static PyObject *t_Dfp_cosh(t_Dfp *self);
      static PyObject *t_Dfp_divide(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_dotrap(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_equals(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_exp(t_Dfp *self);
      static PyObject *t_Dfp_expm1(t_Dfp *self);
      static PyObject *t_Dfp_floor(t_Dfp *self);
      static PyObject *t_Dfp_getExponent(t_Dfp *self);
      static PyObject *t_Dfp_getField(t_Dfp *self);
      static PyObject *t_Dfp_getOne(t_Dfp *self);
      static PyObject *t_Dfp_getPi(t_Dfp *self);
      static PyObject *t_Dfp_getRadixDigits(t_Dfp *self);
      static PyObject *t_Dfp_getReal(t_Dfp *self);
      static PyObject *t_Dfp_getTwo(t_Dfp *self);
      static PyObject *t_Dfp_getZero(t_Dfp *self);
      static PyObject *t_Dfp_greaterThan(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_hashCode(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_hypot(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_intLog10(t_Dfp *self);
      static PyObject *t_Dfp_intValue(t_Dfp *self);
      static PyObject *t_Dfp_isInfinite(t_Dfp *self);
      static PyObject *t_Dfp_isNaN(t_Dfp *self);
      static PyObject *t_Dfp_isZero(t_Dfp *self);
      static PyObject *t_Dfp_lessThan(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_linearCombination(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_log(t_Dfp *self);
      static PyObject *t_Dfp_log10(t_Dfp *self);
      static PyObject *t_Dfp_log10K(t_Dfp *self);
      static PyObject *t_Dfp_log1p(t_Dfp *self);
      static PyObject *t_Dfp_multiply(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_negate(t_Dfp *self);
      static PyObject *t_Dfp_negativeOrNull(t_Dfp *self);
      static PyObject *t_Dfp_newInstance(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_nextAfter(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_positiveOrNull(t_Dfp *self);
      static PyObject *t_Dfp_pow(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_power10(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_power10K(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_reciprocal(t_Dfp *self);
      static PyObject *t_Dfp_remainder(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_rint(t_Dfp *self);
      static PyObject *t_Dfp_rootN(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_scalb(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_sign(t_Dfp *self);
      static PyObject *t_Dfp_sin(t_Dfp *self);
      static PyObject *t_Dfp_sinCos(t_Dfp *self);
      static PyObject *t_Dfp_sinh(t_Dfp *self);
      static PyObject *t_Dfp_sinhCosh(t_Dfp *self);
      static PyObject *t_Dfp_sqrt(t_Dfp *self);
      static PyObject *t_Dfp_strictlyNegative(t_Dfp *self);
      static PyObject *t_Dfp_strictlyPositive(t_Dfp *self);
      static PyObject *t_Dfp_subtract(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_tan(t_Dfp *self);
      static PyObject *t_Dfp_tanh(t_Dfp *self);
      static PyObject *t_Dfp_toDegrees(t_Dfp *self);
      static PyObject *t_Dfp_toDouble(t_Dfp *self);
      static PyObject *t_Dfp_toRadians(t_Dfp *self);
      static PyObject *t_Dfp_toSplitDouble(t_Dfp *self);
      static PyObject *t_Dfp_toString(t_Dfp *self, PyObject *args);
      static PyObject *t_Dfp_ulp(t_Dfp *self);
      static PyObject *t_Dfp_unequal(t_Dfp *self, PyObject *arg);
      static PyObject *t_Dfp_get__exponent(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__field(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__infinite(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__naN(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__one(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__pi(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__radixDigits(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__real(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__two(t_Dfp *self, void *data);
      static PyObject *t_Dfp_get__zero(t_Dfp *self, void *data);
      static PyGetSetDef t_Dfp__fields_[] = {
        DECLARE_GET_FIELD(t_Dfp, exponent),
        DECLARE_GET_FIELD(t_Dfp, field),
        DECLARE_GET_FIELD(t_Dfp, infinite),
        DECLARE_GET_FIELD(t_Dfp, naN),
        DECLARE_GET_FIELD(t_Dfp, one),
        DECLARE_GET_FIELD(t_Dfp, pi),
        DECLARE_GET_FIELD(t_Dfp, radixDigits),
        DECLARE_GET_FIELD(t_Dfp, real),
        DECLARE_GET_FIELD(t_Dfp, two),
        DECLARE_GET_FIELD(t_Dfp, zero),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_Dfp__methods_[] = {
        DECLARE_METHOD(t_Dfp, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Dfp, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Dfp, abs, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, acos, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, acosh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, add, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, asin, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, asinh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, atan, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, atan2, METH_O),
        DECLARE_METHOD(t_Dfp, atanh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, cbrt, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, ceil, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, classify, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, copySign, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, copysign, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Dfp, cos, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, cosh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, divide, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, dotrap, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, equals, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, exp, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, expm1, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, floor, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getExponent, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getField, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getOne, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getPi, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getRadixDigits, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getReal, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getTwo, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, getZero, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, greaterThan, METH_O),
        DECLARE_METHOD(t_Dfp, hashCode, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, hypot, METH_O),
        DECLARE_METHOD(t_Dfp, intLog10, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, intValue, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, isInfinite, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, isNaN, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, isZero, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, lessThan, METH_O),
        DECLARE_METHOD(t_Dfp, linearCombination, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, log, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, log10, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, log10K, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, log1p, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, multiply, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, negate, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, negativeOrNull, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, newInstance, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, nextAfter, METH_O),
        DECLARE_METHOD(t_Dfp, positiveOrNull, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, pow, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, power10, METH_O),
        DECLARE_METHOD(t_Dfp, power10K, METH_O),
        DECLARE_METHOD(t_Dfp, reciprocal, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, remainder, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, rint, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, rootN, METH_O),
        DECLARE_METHOD(t_Dfp, scalb, METH_O),
        DECLARE_METHOD(t_Dfp, sign, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, sin, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, sinCos, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, sinh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, sinhCosh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, sqrt, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, strictlyNegative, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, strictlyPositive, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, subtract, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, tan, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, tanh, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, toDegrees, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, toDouble, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, toRadians, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, toSplitDouble, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, toString, METH_VARARGS),
        DECLARE_METHOD(t_Dfp, ulp, METH_NOARGS),
        DECLARE_METHOD(t_Dfp, unequal, METH_O),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Dfp)[] = {
        { Py_tp_methods, t_Dfp__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_Dfp__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Dfp)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Dfp, t_Dfp, Dfp);

      void t_Dfp::install(PyObject *module)
      {
        installType(&PY_TYPE(Dfp), &PY_TYPE_DEF(Dfp), module, "Dfp", 0);
      }

      void t_Dfp::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "class_", make_descriptor(Dfp::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "wrapfn_", make_descriptor(t_Dfp::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "boxfn_", make_descriptor(boxObject));
        env->getClass(Dfp::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "ERR_SCALE", make_descriptor(Dfp::ERR_SCALE));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "FINITE", make_descriptor(Dfp::FINITE));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "INFINITE", make_descriptor(Dfp::INFINITE$));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "MAX_EXP", make_descriptor(Dfp::MAX_EXP));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "MIN_EXP", make_descriptor(Dfp::MIN_EXP));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "QNAN", make_descriptor(Dfp::QNAN));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "RADIX", make_descriptor(Dfp::RADIX));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Dfp), "SNAN", make_descriptor(Dfp::SNAN$));
      }

      static PyObject *t_Dfp_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Dfp::initializeClass, 1)))
          return NULL;
        return t_Dfp::wrap_Object(Dfp(((t_Dfp *) arg)->object.this$));
      }
      static PyObject *t_Dfp_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Dfp::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Dfp_abs(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.abs());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_acos(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.acos());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_acosh(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.acosh());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_add(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.add(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "add", args);
        return NULL;
      }

      static PyObject *t_Dfp_asin(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.asin());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_asinh(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.asinh());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_atan(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.atan());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_atan2(t_Dfp *self, PyObject *arg)
      {
        Dfp a0((jobject) NULL);
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.atan2(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "atan2", arg);
        return NULL;
      }

      static PyObject *t_Dfp_atanh(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.atanh());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_cbrt(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.cbrt());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_ceil(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.ceil());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_classify(t_Dfp *self)
      {
        jint result;
        OBJ_CALL(result = self->object.classify());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Dfp_copySign(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.copySign(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "copySign", args);
        return NULL;
      }

      static PyObject *t_Dfp_copysign(PyTypeObject *type, PyObject *args)
      {
        Dfp a0((jobject) NULL);
        Dfp a1((jobject) NULL);
        Dfp result((jobject) NULL);

        if (!parseArgs(args, "kk", Dfp::initializeClass, Dfp::initializeClass, &a0, &a1))
        {
          OBJ_CALL(result = ::org::hipparchus::dfp::Dfp::copysign(a0, a1));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError(type, "copysign", args);
        return NULL;
      }

      static PyObject *t_Dfp_cos(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.cos());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_cosh(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.cosh());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_divide(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jint a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.divide(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "divide", args);
        return NULL;
      }

      static PyObject *t_Dfp_dotrap(t_Dfp *self, PyObject *args)
      {
        jint a0;
        ::java::lang::String a1((jobject) NULL);
        Dfp a2((jobject) NULL);
        Dfp a3((jobject) NULL);
        Dfp result((jobject) NULL);

        if (!parseArgs(args, "Iskk", Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3))
        {
          OBJ_CALL(result = self->object.dotrap(a0, a1, a2, a3));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "dotrap", args);
        return NULL;
      }

      static PyObject *t_Dfp_equals(t_Dfp *self, PyObject *args)
      {
        ::java::lang::Object a0((jobject) NULL);
        jboolean result;

        if (!parseArgs(args, "o", &a0))
        {
          OBJ_CALL(result = self->object.equals(a0));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(Dfp), (PyObject *) self, "equals", args, 2);
      }

      static PyObject *t_Dfp_exp(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.exp());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_expm1(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.expm1());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_floor(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.floor());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_getExponent(t_Dfp *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getExponent());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Dfp_getField(t_Dfp *self)
      {
        ::org::hipparchus::dfp::DfpField result((jobject) NULL);
        OBJ_CALL(result = self->object.getField());
        return ::org::hipparchus::dfp::t_DfpField::wrap_Object(result);
      }

      static PyObject *t_Dfp_getOne(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getOne());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_getPi(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getPi());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_getRadixDigits(t_Dfp *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getRadixDigits());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Dfp_getReal(t_Dfp *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.getReal());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Dfp_getTwo(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getTwo());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_getZero(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.getZero());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_greaterThan(t_Dfp *self, PyObject *arg)
      {
        Dfp a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.greaterThan(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "greaterThan", arg);
        return NULL;
      }

      static PyObject *t_Dfp_hashCode(t_Dfp *self, PyObject *args)
      {
        jint result;

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.hashCode());
          return PyLong_FromLong((long) result);
        }

        return callSuper(PY_TYPE(Dfp), (PyObject *) self, "hashCode", args, 2);
      }

      static PyObject *t_Dfp_hypot(t_Dfp *self, PyObject *arg)
      {
        Dfp a0((jobject) NULL);
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.hypot(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "hypot", arg);
        return NULL;
      }

      static PyObject *t_Dfp_intLog10(t_Dfp *self)
      {
        jint result;
        OBJ_CALL(result = self->object.intLog10());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Dfp_intValue(t_Dfp *self)
      {
        jint result;
        OBJ_CALL(result = self->object.intValue());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Dfp_isInfinite(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isInfinite());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_isNaN(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isNaN());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_isZero(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.isZero());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_lessThan(t_Dfp *self, PyObject *arg)
      {
        Dfp a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.lessThan(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "lessThan", arg);
        return NULL;
      }

      static PyObject *t_Dfp_linearCombination(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            JArray< jdouble > a0((jobject) NULL);
            JArray< Dfp > a1((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "[D[k", Dfp::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            JArray< Dfp > a0((jobject) NULL);
            JArray< Dfp > a1((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "[k[k", Dfp::initializeClass, Dfp::initializeClass, &a0, &a1))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1));
              return t_Dfp::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            Dfp a0((jobject) NULL);
            Dfp a1((jobject) NULL);
            Dfp a2((jobject) NULL);
            Dfp a3((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "kkkk", Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp a1((jobject) NULL);
            jdouble a2;
            Dfp a3((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "DkDk", Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3));
              return t_Dfp::wrap_Object(result);
            }
          }
          break;
         case 6:
          {
            Dfp a0((jobject) NULL);
            Dfp a1((jobject) NULL);
            Dfp a2((jobject) NULL);
            Dfp a3((jobject) NULL);
            Dfp a4((jobject) NULL);
            Dfp a5((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "kkkkkk", Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp a1((jobject) NULL);
            jdouble a2;
            Dfp a3((jobject) NULL);
            jdouble a4;
            Dfp a5((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "DkDkDk", Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5));
              return t_Dfp::wrap_Object(result);
            }
          }
          break;
         case 8:
          {
            Dfp a0((jobject) NULL);
            Dfp a1((jobject) NULL);
            Dfp a2((jobject) NULL);
            Dfp a3((jobject) NULL);
            Dfp a4((jobject) NULL);
            Dfp a5((jobject) NULL);
            Dfp a6((jobject) NULL);
            Dfp a7((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "kkkkkkkk", Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp a1((jobject) NULL);
            jdouble a2;
            Dfp a3((jobject) NULL);
            jdouble a4;
            Dfp a5((jobject) NULL);
            jdouble a6;
            Dfp a7((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "DkDkDkDk", Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, Dfp::initializeClass, &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7))
            {
              OBJ_CALL(result = self->object.linearCombination(a0, a1, a2, a3, a4, a5, a6, a7));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "linearCombination", args);
        return NULL;
      }

      static PyObject *t_Dfp_log(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.log());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_log10(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.log10());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_log10K(t_Dfp *self)
      {
        jint result;
        OBJ_CALL(result = self->object.log10K());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_Dfp_log1p(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.log1p());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_multiply(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jint a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.multiply(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "multiply", args);
        return NULL;
      }

      static PyObject *t_Dfp_negate(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.negate());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_negativeOrNull(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.negativeOrNull());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_newInstance(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            Dfp result((jobject) NULL);
            OBJ_CALL(result = self->object.newInstance());
            return t_Dfp::wrap_Object(result);
          }
          break;
         case 1:
          {
            ::java::lang::String a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "s", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jbyte a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "B", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jint a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jlong a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "J", &a0))
            {
              OBJ_CALL(result = self->object.newInstance(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          break;
         case 2:
          {
            ::org::hipparchus::dfp::DfpField a0((jobject) NULL);
            ::org::hipparchus::dfp::DfpField$RoundingMode a1((jobject) NULL);
            PyTypeObject **p1;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "kK", ::org::hipparchus::dfp::DfpField::initializeClass, ::org::hipparchus::dfp::DfpField$RoundingMode::initializeClass, &a0, &a1, &p1, ::org::hipparchus::dfp::t_DfpField$RoundingMode::parameters_))
            {
              OBJ_CALL(result = self->object.newInstance(a0, a1));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jbyte a0;
            jbyte a1;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "BB", &a0, &a1))
            {
              OBJ_CALL(result = self->object.newInstance(a0, a1));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "newInstance", args);
        return NULL;
      }

      static PyObject *t_Dfp_nextAfter(t_Dfp *self, PyObject *arg)
      {
        Dfp a0((jobject) NULL);
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "k", Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.nextAfter(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "nextAfter", arg);
        return NULL;
      }

      static PyObject *t_Dfp_positiveOrNull(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.positiveOrNull());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_pow(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jint a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "I", &a0))
            {
              OBJ_CALL(result = self->object.pow(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "pow", args);
        return NULL;
      }

      static PyObject *t_Dfp_power10(t_Dfp *self, PyObject *arg)
      {
        jint a0;
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.power10(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "power10", arg);
        return NULL;
      }

      static PyObject *t_Dfp_power10K(t_Dfp *self, PyObject *arg)
      {
        jint a0;
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.power10K(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "power10K", arg);
        return NULL;
      }

      static PyObject *t_Dfp_reciprocal(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.reciprocal());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_remainder(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.remainder(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "remainder", args);
        return NULL;
      }

      static PyObject *t_Dfp_rint(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.rint());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_rootN(t_Dfp *self, PyObject *arg)
      {
        jint a0;
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.rootN(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "rootN", arg);
        return NULL;
      }

      static PyObject *t_Dfp_scalb(t_Dfp *self, PyObject *arg)
      {
        jint a0;
        Dfp result((jobject) NULL);

        if (!parseArg(arg, "I", &a0))
        {
          OBJ_CALL(result = self->object.scalb(a0));
          return t_Dfp::wrap_Object(result);
        }

        PyErr_SetArgsError((PyObject *) self, "scalb", arg);
        return NULL;
      }

      static PyObject *t_Dfp_sign(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.sign());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_sin(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.sin());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_sinCos(t_Dfp *self)
      {
        ::org::hipparchus::util::FieldSinCos result((jobject) NULL);
        OBJ_CALL(result = self->object.sinCos());
        return ::org::hipparchus::util::t_FieldSinCos::wrap_Object(result, ::org::hipparchus::dfp::PY_TYPE(Dfp));
      }

      static PyObject *t_Dfp_sinh(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.sinh());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_sinhCosh(t_Dfp *self)
      {
        ::org::hipparchus::util::FieldSinhCosh result((jobject) NULL);
        OBJ_CALL(result = self->object.sinhCosh());
        return ::org::hipparchus::util::t_FieldSinhCosh::wrap_Object(result, ::org::hipparchus::dfp::PY_TYPE(Dfp));
      }

      static PyObject *t_Dfp_sqrt(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.sqrt());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_strictlyNegative(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.strictlyNegative());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_strictlyPositive(t_Dfp *self)
      {
        jboolean result;
        OBJ_CALL(result = self->object.strictlyPositive());
        Py_RETURN_BOOL(result);
      }

      static PyObject *t_Dfp_subtract(t_Dfp *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            Dfp a0((jobject) NULL);
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "k", Dfp::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
          {
            jdouble a0;
            Dfp result((jobject) NULL);

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = self->object.subtract(a0));
              return t_Dfp::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "subtract", args);
        return NULL;
      }

      static PyObject *t_Dfp_tan(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.tan());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_tanh(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.tanh());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_toDegrees(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.toDegrees());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_toDouble(t_Dfp *self)
      {
        jdouble result;
        OBJ_CALL(result = self->object.toDouble());
        return PyFloat_FromDouble((double) result);
      }

      static PyObject *t_Dfp_toRadians(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.toRadians());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_toSplitDouble(t_Dfp *self)
      {
        JArray< jdouble > result((jobject) NULL);
        OBJ_CALL(result = self->object.toSplitDouble());
        return result.wrap();
      }

      static PyObject *t_Dfp_toString(t_Dfp *self, PyObject *args)
      {
        ::java::lang::String result((jobject) NULL);

        if (!parseArgs(args, ""))
        {
          OBJ_CALL(result = self->object.toString());
          return j2p(result);
        }

        return callSuper(PY_TYPE(Dfp), (PyObject *) self, "toString", args, 2);
      }

      static PyObject *t_Dfp_ulp(t_Dfp *self)
      {
        Dfp result((jobject) NULL);
        OBJ_CALL(result = self->object.ulp());
        return t_Dfp::wrap_Object(result);
      }

      static PyObject *t_Dfp_unequal(t_Dfp *self, PyObject *arg)
      {
        Dfp a0((jobject) NULL);
        jboolean result;

        if (!parseArg(arg, "k", Dfp::initializeClass, &a0))
        {
          OBJ_CALL(result = self->object.unequal(a0));
          Py_RETURN_BOOL(result);
        }

        PyErr_SetArgsError((PyObject *) self, "unequal", arg);
        return NULL;
      }

      static PyObject *t_Dfp_get__exponent(t_Dfp *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getExponent());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Dfp_get__field(t_Dfp *self, void *data)
      {
        ::org::hipparchus::dfp::DfpField value((jobject) NULL);
        OBJ_CALL(value = self->object.getField());
        return ::org::hipparchus::dfp::t_DfpField::wrap_Object(value);
      }

      static PyObject *t_Dfp_get__infinite(t_Dfp *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isInfinite());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Dfp_get__naN(t_Dfp *self, void *data)
      {
        jboolean value;
        OBJ_CALL(value = self->object.isNaN());
        Py_RETURN_BOOL(value);
      }

      static PyObject *t_Dfp_get__one(t_Dfp *self, void *data)
      {
        Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getOne());
        return t_Dfp::wrap_Object(value);
      }

      static PyObject *t_Dfp_get__pi(t_Dfp *self, void *data)
      {
        Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getPi());
        return t_Dfp::wrap_Object(value);
      }

      static PyObject *t_Dfp_get__radixDigits(t_Dfp *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getRadixDigits());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_Dfp_get__real(t_Dfp *self, void *data)
      {
        jdouble value;
        OBJ_CALL(value = self->object.getReal());
        return PyFloat_FromDouble((double) value);
      }

      static PyObject *t_Dfp_get__two(t_Dfp *self, void *data)
      {
        Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getTwo());
        return t_Dfp::wrap_Object(value);
      }

      static PyObject *t_Dfp_get__zero(t_Dfp *self, void *data)
      {
        Dfp value((jobject) NULL);
        OBJ_CALL(value = self->object.getZero());
        return t_Dfp::wrap_Object(value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/gnss/attitude/BeidouIGSO.h"
#include "org/orekit/utils/ExtendedPVCoordinatesProvider.h"
#include "org/orekit/time/AbsoluteDate.h"
#include "org/orekit/frames/Frame.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace gnss {
      namespace attitude {

        ::java::lang::Class *BeidouIGSO::class$ = NULL;
        jmethodID *BeidouIGSO::mids$ = NULL;
        bool BeidouIGSO::live$ = false;

        jclass BeidouIGSO::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/gnss/attitude/BeidouIGSO");

            mids$ = new jmethodID[max_mid];
            mids$[mid_init$_be6476273154a2ce] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/AbsoluteDate;Lorg/orekit/time/AbsoluteDate;Lorg/orekit/utils/ExtendedPVCoordinatesProvider;Lorg/orekit/frames/Frame;)V");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        BeidouIGSO::BeidouIGSO(const ::org::orekit::time::AbsoluteDate & a0, const ::org::orekit::time::AbsoluteDate & a1, const ::org::orekit::utils::ExtendedPVCoordinatesProvider & a2, const ::org::orekit::frames::Frame & a3) : ::org::orekit::gnss::attitude::BeidouMeo(env->newObject(initializeClass, &mids$, mid_init$_be6476273154a2ce, a0.this$, a1.this$, a2.this$, a3.this$)) {}
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
        static PyObject *t_BeidouIGSO_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BeidouIGSO_instance_(PyTypeObject *type, PyObject *arg);
        static int t_BeidouIGSO_init_(t_BeidouIGSO *self, PyObject *args, PyObject *kwds);

        static PyMethodDef t_BeidouIGSO__methods_[] = {
          DECLARE_METHOD(t_BeidouIGSO, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BeidouIGSO, instance_, METH_O | METH_CLASS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BeidouIGSO)[] = {
          { Py_tp_methods, t_BeidouIGSO__methods_ },
          { Py_tp_init, (void *) t_BeidouIGSO_init_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BeidouIGSO)[] = {
          &PY_TYPE_DEF(::org::orekit::gnss::attitude::BeidouMeo),
          NULL
        };

        DEFINE_TYPE(BeidouIGSO, t_BeidouIGSO, BeidouIGSO);

        void t_BeidouIGSO::install(PyObject *module)
        {
          installType(&PY_TYPE(BeidouIGSO), &PY_TYPE_DEF(BeidouIGSO), module, "BeidouIGSO", 0);
        }

        void t_BeidouIGSO::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouIGSO), "class_", make_descriptor(BeidouIGSO::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouIGSO), "wrapfn_", make_descriptor(t_BeidouIGSO::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BeidouIGSO), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BeidouIGSO_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BeidouIGSO::initializeClass, 1)))
            return NULL;
          return t_BeidouIGSO::wrap_Object(BeidouIGSO(((t_BeidouIGSO *) arg)->object.this$));
        }
        static PyObject *t_BeidouIGSO_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BeidouIGSO::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static int t_BeidouIGSO_init_(t_BeidouIGSO *self, PyObject *args, PyObject *kwds)
        {
          ::org::orekit::time::AbsoluteDate a0((jobject) NULL);
          ::org::orekit::time::AbsoluteDate a1((jobject) NULL);
          ::org::orekit::utils::ExtendedPVCoordinatesProvider a2((jobject) NULL);
          ::org::orekit::frames::Frame a3((jobject) NULL);
          BeidouIGSO object((jobject) NULL);

          if (!parseArgs(args, "kkkk", ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::time::AbsoluteDate::initializeClass, ::org::orekit::utils::ExtendedPVCoordinatesProvider::initializeClass, ::org::orekit::frames::Frame::initializeClass, &a0, &a1, &a2, &a3))
          {
            INT_CALL(object = BeidouIGSO(a0, a1, a2, a3));
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
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/BaseOptimizer.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "org/hipparchus/optim/ConvergenceChecker.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *BaseOptimizer::class$ = NULL;
      jmethodID *BaseOptimizer::mids$ = NULL;
      bool BaseOptimizer::live$ = false;

      jclass BaseOptimizer::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/BaseOptimizer");

          mids$ = new jmethodID[max_mid];
          mids$[mid_getConvergenceChecker_c0e8b85b3220641b] = env->getMethodID(cls, "getConvergenceChecker", "()Lorg/hipparchus/optim/ConvergenceChecker;");
          mids$[mid_getEvaluations_570ce0828f81a2c1] = env->getMethodID(cls, "getEvaluations", "()I");
          mids$[mid_getIterations_570ce0828f81a2c1] = env->getMethodID(cls, "getIterations", "()I");
          mids$[mid_getMaxEvaluations_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxEvaluations", "()I");
          mids$[mid_getMaxIterations_570ce0828f81a2c1] = env->getMethodID(cls, "getMaxIterations", "()I");
          mids$[mid_optimize_4d26fd885228c716] = env->getMethodID(cls, "optimize", "()Ljava/lang/Object;");
          mids$[mid_optimize_19319236ce3fd082] = env->getMethodID(cls, "optimize", "([Lorg/hipparchus/optim/OptimizationData;)Ljava/lang/Object;");
          mids$[mid_parseOptimizationData_3d26e9f3a1d7e833] = env->getMethodID(cls, "parseOptimizationData", "([Lorg/hipparchus/optim/OptimizationData;)V");
          mids$[mid_doOptimize_4d26fd885228c716] = env->getMethodID(cls, "doOptimize", "()Ljava/lang/Object;");
          mids$[mid_incrementEvaluationCount_0fa09c18fee449d5] = env->getMethodID(cls, "incrementEvaluationCount", "()V");
          mids$[mid_incrementIterationCount_0fa09c18fee449d5] = env->getMethodID(cls, "incrementIterationCount", "()V");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::hipparchus::optim::ConvergenceChecker BaseOptimizer::getConvergenceChecker() const
      {
        return ::org::hipparchus::optim::ConvergenceChecker(env->callObjectMethod(this$, mids$[mid_getConvergenceChecker_c0e8b85b3220641b]));
      }

      jint BaseOptimizer::getEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getEvaluations_570ce0828f81a2c1]);
      }

      jint BaseOptimizer::getIterations() const
      {
        return env->callIntMethod(this$, mids$[mid_getIterations_570ce0828f81a2c1]);
      }

      jint BaseOptimizer::getMaxEvaluations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxEvaluations_570ce0828f81a2c1]);
      }

      jint BaseOptimizer::getMaxIterations() const
      {
        return env->callIntMethod(this$, mids$[mid_getMaxIterations_570ce0828f81a2c1]);
      }

      ::java::lang::Object BaseOptimizer::optimize() const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_optimize_4d26fd885228c716]));
      }

      ::java::lang::Object BaseOptimizer::optimize(const JArray< ::org::hipparchus::optim::OptimizationData > & a0) const
      {
        return ::java::lang::Object(env->callObjectMethod(this$, mids$[mid_optimize_19319236ce3fd082], a0.this$));
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
      static PyObject *t_BaseOptimizer_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BaseOptimizer_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_BaseOptimizer_of_(t_BaseOptimizer *self, PyObject *args);
      static PyObject *t_BaseOptimizer_getConvergenceChecker(t_BaseOptimizer *self);
      static PyObject *t_BaseOptimizer_getEvaluations(t_BaseOptimizer *self);
      static PyObject *t_BaseOptimizer_getIterations(t_BaseOptimizer *self);
      static PyObject *t_BaseOptimizer_getMaxEvaluations(t_BaseOptimizer *self);
      static PyObject *t_BaseOptimizer_getMaxIterations(t_BaseOptimizer *self);
      static PyObject *t_BaseOptimizer_optimize(t_BaseOptimizer *self, PyObject *args);
      static PyObject *t_BaseOptimizer_get__convergenceChecker(t_BaseOptimizer *self, void *data);
      static PyObject *t_BaseOptimizer_get__evaluations(t_BaseOptimizer *self, void *data);
      static PyObject *t_BaseOptimizer_get__iterations(t_BaseOptimizer *self, void *data);
      static PyObject *t_BaseOptimizer_get__maxEvaluations(t_BaseOptimizer *self, void *data);
      static PyObject *t_BaseOptimizer_get__maxIterations(t_BaseOptimizer *self, void *data);
      static PyObject *t_BaseOptimizer_get__parameters_(t_BaseOptimizer *self, void *data);
      static PyGetSetDef t_BaseOptimizer__fields_[] = {
        DECLARE_GET_FIELD(t_BaseOptimizer, convergenceChecker),
        DECLARE_GET_FIELD(t_BaseOptimizer, evaluations),
        DECLARE_GET_FIELD(t_BaseOptimizer, iterations),
        DECLARE_GET_FIELD(t_BaseOptimizer, maxEvaluations),
        DECLARE_GET_FIELD(t_BaseOptimizer, maxIterations),
        DECLARE_GET_FIELD(t_BaseOptimizer, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_BaseOptimizer__methods_[] = {
        DECLARE_METHOD(t_BaseOptimizer, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BaseOptimizer, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_BaseOptimizer, of_, METH_VARARGS),
        DECLARE_METHOD(t_BaseOptimizer, getConvergenceChecker, METH_NOARGS),
        DECLARE_METHOD(t_BaseOptimizer, getEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_BaseOptimizer, getIterations, METH_NOARGS),
        DECLARE_METHOD(t_BaseOptimizer, getMaxEvaluations, METH_NOARGS),
        DECLARE_METHOD(t_BaseOptimizer, getMaxIterations, METH_NOARGS),
        DECLARE_METHOD(t_BaseOptimizer, optimize, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(BaseOptimizer)[] = {
        { Py_tp_methods, t_BaseOptimizer__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { Py_tp_getset, t_BaseOptimizer__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(BaseOptimizer)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(BaseOptimizer, t_BaseOptimizer, BaseOptimizer);
      PyObject *t_BaseOptimizer::wrap_Object(const BaseOptimizer& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BaseOptimizer::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BaseOptimizer *self = (t_BaseOptimizer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_BaseOptimizer::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_BaseOptimizer::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_BaseOptimizer *self = (t_BaseOptimizer *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_BaseOptimizer::install(PyObject *module)
      {
        installType(&PY_TYPE(BaseOptimizer), &PY_TYPE_DEF(BaseOptimizer), module, "BaseOptimizer", 0);
      }

      void t_BaseOptimizer::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseOptimizer), "class_", make_descriptor(BaseOptimizer::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseOptimizer), "wrapfn_", make_descriptor(t_BaseOptimizer::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(BaseOptimizer), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_BaseOptimizer_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, BaseOptimizer::initializeClass, 1)))
          return NULL;
        return t_BaseOptimizer::wrap_Object(BaseOptimizer(((t_BaseOptimizer *) arg)->object.this$));
      }
      static PyObject *t_BaseOptimizer_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, BaseOptimizer::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_BaseOptimizer_of_(t_BaseOptimizer *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static PyObject *t_BaseOptimizer_getConvergenceChecker(t_BaseOptimizer *self)
      {
        ::org::hipparchus::optim::ConvergenceChecker result((jobject) NULL);
        OBJ_CALL(result = self->object.getConvergenceChecker());
        return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(result, self->parameters[0]);
      }

      static PyObject *t_BaseOptimizer_getEvaluations(t_BaseOptimizer *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BaseOptimizer_getIterations(t_BaseOptimizer *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getIterations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BaseOptimizer_getMaxEvaluations(t_BaseOptimizer *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BaseOptimizer_getMaxIterations(t_BaseOptimizer *self)
      {
        jint result;
        OBJ_CALL(result = self->object.getMaxIterations());
        return PyLong_FromLong((long) result);
      }

      static PyObject *t_BaseOptimizer_optimize(t_BaseOptimizer *self, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 0:
          {
            ::java::lang::Object result((jobject) NULL);
            OBJ_CALL(result = self->object.optimize());
            return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
          }
          break;
         case 1:
          {
            JArray< ::org::hipparchus::optim::OptimizationData > a0((jobject) NULL);
            ::java::lang::Object result((jobject) NULL);

            if (!parseArgs(args, "[k", ::org::hipparchus::optim::OptimizationData::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.optimize(a0));
              return self->parameters[0] != NULL ? wrapType(self->parameters[0], result.this$) : ::java::lang::t_Object::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError((PyObject *) self, "optimize", args);
        return NULL;
      }
      static PyObject *t_BaseOptimizer_get__parameters_(t_BaseOptimizer *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }

      static PyObject *t_BaseOptimizer_get__convergenceChecker(t_BaseOptimizer *self, void *data)
      {
        ::org::hipparchus::optim::ConvergenceChecker value((jobject) NULL);
        OBJ_CALL(value = self->object.getConvergenceChecker());
        return ::org::hipparchus::optim::t_ConvergenceChecker::wrap_Object(value);
      }

      static PyObject *t_BaseOptimizer_get__evaluations(t_BaseOptimizer *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getEvaluations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BaseOptimizer_get__iterations(t_BaseOptimizer *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getIterations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BaseOptimizer_get__maxEvaluations(t_BaseOptimizer *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxEvaluations());
        return PyLong_FromLong((long) value);
      }

      static PyObject *t_BaseOptimizer_get__maxIterations(t_BaseOptimizer *self, void *data)
      {
        jint value;
        OBJ_CALL(value = self->object.getMaxIterations());
        return PyLong_FromLong((long) value);
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter.h"
#include "java/io/IOException.h"
#include "java/lang/Appendable.h"
#include "java/lang/Class.h"
#include "org/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter.h"
#include "org/orekit/files/ilrs/CPFHeader.h"
#include "java/lang/String.h"
#include "org/orekit/time/TimeScale.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace ilrs {

        ::java::lang::Class *StreamingCpfWriter$HeaderLineWriter::class$ = NULL;
        jmethodID *StreamingCpfWriter$HeaderLineWriter::mids$ = NULL;
        bool StreamingCpfWriter$HeaderLineWriter::live$ = false;
        StreamingCpfWriter$HeaderLineWriter *StreamingCpfWriter$HeaderLineWriter::H1 = NULL;
        StreamingCpfWriter$HeaderLineWriter *StreamingCpfWriter$HeaderLineWriter::H2 = NULL;

        jclass StreamingCpfWriter$HeaderLineWriter::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter");

            mids$ = new jmethodID[max_mid];
            mids$[mid_getIdentifier_11b109bd155ca898] = env->getMethodID(cls, "getIdentifier", "()Ljava/lang/String;");
            mids$[mid_valueOf_c1c1c1cefb07ad13] = env->getStaticMethodID(cls, "valueOf", "(Ljava/lang/String;)Lorg/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter;");
            mids$[mid_values_86ce42271e03c949] = env->getStaticMethodID(cls, "values", "()[Lorg/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter;");
            mids$[mid_write_5ea53a4031a3df60] = env->getMethodID(cls, "write", "(Lorg/orekit/files/ilrs/CPFHeader;Ljava/lang/Appendable;Lorg/orekit/time/TimeScale;)V");

            class$ = new ::java::lang::Class(cls);
            cls = (jclass) class$->this$;

            H1 = new StreamingCpfWriter$HeaderLineWriter(env->getStaticObjectField(cls, "H1", "Lorg/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter;"));
            H2 = new StreamingCpfWriter$HeaderLineWriter(env->getStaticObjectField(cls, "H2", "Lorg/orekit/files/ilrs/StreamingCpfWriter$HeaderLineWriter;"));
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        ::java::lang::String StreamingCpfWriter$HeaderLineWriter::getIdentifier() const
        {
          return ::java::lang::String(env->callObjectMethod(this$, mids$[mid_getIdentifier_11b109bd155ca898]));
        }

        StreamingCpfWriter$HeaderLineWriter StreamingCpfWriter$HeaderLineWriter::valueOf(const ::java::lang::String & a0)
        {
          jclass cls = env->getClass(initializeClass);
          return StreamingCpfWriter$HeaderLineWriter(env->callStaticObjectMethod(cls, mids$[mid_valueOf_c1c1c1cefb07ad13], a0.this$));
        }

        JArray< StreamingCpfWriter$HeaderLineWriter > StreamingCpfWriter$HeaderLineWriter::values()
        {
          jclass cls = env->getClass(initializeClass);
          return JArray< StreamingCpfWriter$HeaderLineWriter >(env->callStaticObjectMethod(cls, mids$[mid_values_86ce42271e03c949]));
        }

        void StreamingCpfWriter$HeaderLineWriter::write(const ::org::orekit::files::ilrs::CPFHeader & a0, const ::java::lang::Appendable & a1, const ::org::orekit::time::TimeScale & a2) const
        {
          env->callVoidMethod(this$, mids$[mid_write_5ea53a4031a3df60], a0.this$, a1.this$, a2.this$);
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
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_of_(t_StreamingCpfWriter$HeaderLineWriter *self, PyObject *args);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_getIdentifier(t_StreamingCpfWriter$HeaderLineWriter *self);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_valueOf(PyTypeObject *type, PyObject *args);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_values(PyTypeObject *type);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_write(t_StreamingCpfWriter$HeaderLineWriter *self, PyObject *args);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_get__identifier(t_StreamingCpfWriter$HeaderLineWriter *self, void *data);
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_get__parameters_(t_StreamingCpfWriter$HeaderLineWriter *self, void *data);
        static PyGetSetDef t_StreamingCpfWriter$HeaderLineWriter__fields_[] = {
          DECLARE_GET_FIELD(t_StreamingCpfWriter$HeaderLineWriter, identifier),
          DECLARE_GET_FIELD(t_StreamingCpfWriter$HeaderLineWriter, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_StreamingCpfWriter$HeaderLineWriter__methods_[] = {
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, of_, METH_VARARGS),
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, getIdentifier, METH_NOARGS),
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, valueOf, METH_VARARGS | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, values, METH_NOARGS | METH_CLASS),
          DECLARE_METHOD(t_StreamingCpfWriter$HeaderLineWriter, write, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(StreamingCpfWriter$HeaderLineWriter)[] = {
          { Py_tp_methods, t_StreamingCpfWriter$HeaderLineWriter__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_StreamingCpfWriter$HeaderLineWriter__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(StreamingCpfWriter$HeaderLineWriter)[] = {
          &PY_TYPE_DEF(::java::lang::Enum),
          NULL
        };

        DEFINE_TYPE(StreamingCpfWriter$HeaderLineWriter, t_StreamingCpfWriter$HeaderLineWriter, StreamingCpfWriter$HeaderLineWriter);
        PyObject *t_StreamingCpfWriter$HeaderLineWriter::wrap_Object(const StreamingCpfWriter$HeaderLineWriter& object, PyTypeObject *p0)
        {
          PyObject *obj = t_StreamingCpfWriter$HeaderLineWriter::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_StreamingCpfWriter$HeaderLineWriter *self = (t_StreamingCpfWriter$HeaderLineWriter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_StreamingCpfWriter$HeaderLineWriter::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_StreamingCpfWriter$HeaderLineWriter::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_StreamingCpfWriter$HeaderLineWriter *self = (t_StreamingCpfWriter$HeaderLineWriter *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_StreamingCpfWriter$HeaderLineWriter::install(PyObject *module)
        {
          installType(&PY_TYPE(StreamingCpfWriter$HeaderLineWriter), &PY_TYPE_DEF(StreamingCpfWriter$HeaderLineWriter), module, "StreamingCpfWriter$HeaderLineWriter", 0);
        }

        void t_StreamingCpfWriter$HeaderLineWriter::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$HeaderLineWriter), "class_", make_descriptor(StreamingCpfWriter$HeaderLineWriter::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$HeaderLineWriter), "wrapfn_", make_descriptor(t_StreamingCpfWriter$HeaderLineWriter::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$HeaderLineWriter), "boxfn_", make_descriptor(boxObject));
          env->getClass(StreamingCpfWriter$HeaderLineWriter::initializeClass);
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$HeaderLineWriter), "H1", make_descriptor(t_StreamingCpfWriter$HeaderLineWriter::wrap_Object(*StreamingCpfWriter$HeaderLineWriter::H1)));
          PyObject_SetAttrString((PyObject *) PY_TYPE(StreamingCpfWriter$HeaderLineWriter), "H2", make_descriptor(t_StreamingCpfWriter$HeaderLineWriter::wrap_Object(*StreamingCpfWriter$HeaderLineWriter::H2)));
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, StreamingCpfWriter$HeaderLineWriter::initializeClass, 1)))
            return NULL;
          return t_StreamingCpfWriter$HeaderLineWriter::wrap_Object(StreamingCpfWriter$HeaderLineWriter(((t_StreamingCpfWriter$HeaderLineWriter *) arg)->object.this$));
        }
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, StreamingCpfWriter$HeaderLineWriter::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_of_(t_StreamingCpfWriter$HeaderLineWriter *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_getIdentifier(t_StreamingCpfWriter$HeaderLineWriter *self)
        {
          ::java::lang::String result((jobject) NULL);
          OBJ_CALL(result = self->object.getIdentifier());
          return j2p(result);
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_valueOf(PyTypeObject *type, PyObject *args)
        {
          ::java::lang::String a0((jobject) NULL);
          StreamingCpfWriter$HeaderLineWriter result((jobject) NULL);

          if (!parseArgs(args, "s", &a0))
          {
            OBJ_CALL(result = ::org::orekit::files::ilrs::StreamingCpfWriter$HeaderLineWriter::valueOf(a0));
            return t_StreamingCpfWriter$HeaderLineWriter::wrap_Object(result);
          }

          return callSuper(type, "valueOf", args, 2);
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_values(PyTypeObject *type)
        {
          JArray< StreamingCpfWriter$HeaderLineWriter > result((jobject) NULL);
          OBJ_CALL(result = ::org::orekit::files::ilrs::StreamingCpfWriter$HeaderLineWriter::values());
          return JArray<jobject>(result.this$).wrap(t_StreamingCpfWriter$HeaderLineWriter::wrap_jobject);
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_write(t_StreamingCpfWriter$HeaderLineWriter *self, PyObject *args)
        {
          ::org::orekit::files::ilrs::CPFHeader a0((jobject) NULL);
          ::java::lang::Appendable a1((jobject) NULL);
          ::org::orekit::time::TimeScale a2((jobject) NULL);

          if (!parseArgs(args, "kkk", ::org::orekit::files::ilrs::CPFHeader::initializeClass, ::java::lang::Appendable::initializeClass, ::org::orekit::time::TimeScale::initializeClass, &a0, &a1, &a2))
          {
            OBJ_CALL(self->object.write(a0, a1, a2));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "write", args);
          return NULL;
        }
        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_get__parameters_(t_StreamingCpfWriter$HeaderLineWriter *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }

        static PyObject *t_StreamingCpfWriter$HeaderLineWriter_get__identifier(t_StreamingCpfWriter$HeaderLineWriter *self, void *data)
        {
          ::java::lang::String value((jobject) NULL);
          OBJ_CALL(value = self->object.getIdentifier());
          return j2p(value);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/analysis/differentiation/MultivariateDifferentiableVectorFunction.h"
#include "org/hipparchus/analysis/differentiation/DerivativeStructure.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace analysis {
      namespace differentiation {

        ::java::lang::Class *MultivariateDifferentiableVectorFunction::class$ = NULL;
        jmethodID *MultivariateDifferentiableVectorFunction::mids$ = NULL;
        bool MultivariateDifferentiableVectorFunction::live$ = false;

        jclass MultivariateDifferentiableVectorFunction::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/analysis/differentiation/MultivariateDifferentiableVectorFunction");

            mids$ = new jmethodID[max_mid];
            mids$[mid_value_e00d2ee1b93800b0] = env->getMethodID(cls, "value", "([Lorg/hipparchus/analysis/differentiation/DerivativeStructure;)[Lorg/hipparchus/analysis/differentiation/DerivativeStructure;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > MultivariateDifferentiableVectorFunction::value(const JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > & a0) const
        {
          return JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure >(env->callObjectMethod(this$, mids$[mid_value_e00d2ee1b93800b0], a0.this$));
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
        static PyObject *t_MultivariateDifferentiableVectorFunction_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateDifferentiableVectorFunction_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_MultivariateDifferentiableVectorFunction_value(t_MultivariateDifferentiableVectorFunction *self, PyObject *args);

        static PyMethodDef t_MultivariateDifferentiableVectorFunction__methods_[] = {
          DECLARE_METHOD(t_MultivariateDifferentiableVectorFunction, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateDifferentiableVectorFunction, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_MultivariateDifferentiableVectorFunction, value, METH_VARARGS),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(MultivariateDifferentiableVectorFunction)[] = {
          { Py_tp_methods, t_MultivariateDifferentiableVectorFunction__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(MultivariateDifferentiableVectorFunction)[] = {
          &PY_TYPE_DEF(::org::hipparchus::analysis::MultivariateVectorFunction),
          NULL
        };

        DEFINE_TYPE(MultivariateDifferentiableVectorFunction, t_MultivariateDifferentiableVectorFunction, MultivariateDifferentiableVectorFunction);

        void t_MultivariateDifferentiableVectorFunction::install(PyObject *module)
        {
          installType(&PY_TYPE(MultivariateDifferentiableVectorFunction), &PY_TYPE_DEF(MultivariateDifferentiableVectorFunction), module, "MultivariateDifferentiableVectorFunction", 0);
        }

        void t_MultivariateDifferentiableVectorFunction::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateDifferentiableVectorFunction), "class_", make_descriptor(MultivariateDifferentiableVectorFunction::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateDifferentiableVectorFunction), "wrapfn_", make_descriptor(t_MultivariateDifferentiableVectorFunction::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(MultivariateDifferentiableVectorFunction), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_MultivariateDifferentiableVectorFunction_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, MultivariateDifferentiableVectorFunction::initializeClass, 1)))
            return NULL;
          return t_MultivariateDifferentiableVectorFunction::wrap_Object(MultivariateDifferentiableVectorFunction(((t_MultivariateDifferentiableVectorFunction *) arg)->object.this$));
        }
        static PyObject *t_MultivariateDifferentiableVectorFunction_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, MultivariateDifferentiableVectorFunction::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_MultivariateDifferentiableVectorFunction_value(t_MultivariateDifferentiableVectorFunction *self, PyObject *args)
        {
          JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > a0((jobject) NULL);
          JArray< ::org::hipparchus::analysis::differentiation::DerivativeStructure > result((jobject) NULL);

          if (!parseArgs(args, "[k", ::org::hipparchus::analysis::differentiation::DerivativeStructure::initializeClass, &a0))
          {
            OBJ_CALL(result = self->object.value(a0));
            return JArray<jobject>(result.this$).wrap(::org::hipparchus::analysis::differentiation::t_DerivativeStructure::wrap_jobject);
          }

          return callSuper(PY_TYPE(MultivariateDifferentiableVectorFunction), (PyObject *) self, "value", args, 2);
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/special/Gamma.h"
#include "org/hipparchus/CalculusFieldElement.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace special {

      ::java::lang::Class *Gamma::class$ = NULL;
      jmethodID *Gamma::mids$ = NULL;
      bool Gamma::live$ = false;
      jdouble Gamma::GAMMA = (jdouble) 0;
      jdouble Gamma::LANCZOS_G = (jdouble) 0;

      jclass Gamma::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/special/Gamma");

          mids$ = new jmethodID[max_mid];
          mids$[mid_digamma_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "digamma", "(D)D");
          mids$[mid_digamma_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "digamma", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_gamma_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "gamma", "(D)D");
          mids$[mid_gamma_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "gamma", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_invGamma1pm1_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "invGamma1pm1", "(D)D");
          mids$[mid_invGamma1pm1_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "invGamma1pm1", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_lanczos_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "lanczos", "(D)D");
          mids$[mid_lanczos_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "lanczos", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_logGamma_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "logGamma", "(D)D");
          mids$[mid_logGamma_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "logGamma", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_logGamma1p_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "logGamma1p", "(D)D");
          mids$[mid_logGamma1p_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "logGamma1p", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_regularizedGammaP_86ffecc08a63eff0] = env->getStaticMethodID(cls, "regularizedGammaP", "(DD)D");
          mids$[mid_regularizedGammaP_6746cc1cd9210d54] = env->getStaticMethodID(cls, "regularizedGammaP", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_regularizedGammaP_1a4183e52d14c27e] = env->getStaticMethodID(cls, "regularizedGammaP", "(DDDI)D");
          mids$[mid_regularizedGammaP_c9fbd14d4617b15d] = env->getStaticMethodID(cls, "regularizedGammaP", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;DI)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_regularizedGammaQ_86ffecc08a63eff0] = env->getStaticMethodID(cls, "regularizedGammaQ", "(DD)D");
          mids$[mid_regularizedGammaQ_6746cc1cd9210d54] = env->getStaticMethodID(cls, "regularizedGammaQ", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_regularizedGammaQ_1a4183e52d14c27e] = env->getStaticMethodID(cls, "regularizedGammaQ", "(DDDI)D");
          mids$[mid_regularizedGammaQ_c9fbd14d4617b15d] = env->getStaticMethodID(cls, "regularizedGammaQ", "(Lorg/hipparchus/CalculusFieldElement;Lorg/hipparchus/CalculusFieldElement;DI)Lorg/hipparchus/CalculusFieldElement;");
          mids$[mid_trigamma_dcbc7ce2902fa136] = env->getStaticMethodID(cls, "trigamma", "(D)D");
          mids$[mid_trigamma_a4b1871f4d29e58b] = env->getStaticMethodID(cls, "trigamma", "(Lorg/hipparchus/CalculusFieldElement;)Lorg/hipparchus/CalculusFieldElement;");

          class$ = new ::java::lang::Class(cls);
          cls = (jclass) class$->this$;

          GAMMA = env->getStaticDoubleField(cls, "GAMMA");
          LANCZOS_G = env->getStaticDoubleField(cls, "LANCZOS_G");
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      jdouble Gamma::digamma(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_digamma_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::digamma(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_digamma_a4b1871f4d29e58b], a0.this$));
      }

      jdouble Gamma::gamma(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_gamma_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::gamma(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_gamma_a4b1871f4d29e58b], a0.this$));
      }

      jdouble Gamma::invGamma1pm1(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_invGamma1pm1_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::invGamma1pm1(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_invGamma1pm1_a4b1871f4d29e58b], a0.this$));
      }

      jdouble Gamma::lanczos(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_lanczos_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::lanczos(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_lanczos_a4b1871f4d29e58b], a0.this$));
      }

      jdouble Gamma::logGamma(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_logGamma_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::logGamma(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_logGamma_a4b1871f4d29e58b], a0.this$));
      }

      jdouble Gamma::logGamma1p(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_logGamma1p_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::logGamma1p(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_logGamma1p_a4b1871f4d29e58b], a0.this$));
      }

      jdouble Gamma::regularizedGammaP(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedGammaP_86ffecc08a63eff0], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::regularizedGammaP(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_regularizedGammaP_6746cc1cd9210d54], a0.this$, a1.this$));
      }

      jdouble Gamma::regularizedGammaP(jdouble a0, jdouble a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedGammaP_1a4183e52d14c27e], a0, a1, a2, a3);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::regularizedGammaP(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_regularizedGammaP_c9fbd14d4617b15d], a0.this$, a1.this$, a2, a3));
      }

      jdouble Gamma::regularizedGammaQ(jdouble a0, jdouble a1)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedGammaQ_86ffecc08a63eff0], a0, a1);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::regularizedGammaQ(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_regularizedGammaQ_6746cc1cd9210d54], a0.this$, a1.this$));
      }

      jdouble Gamma::regularizedGammaQ(jdouble a0, jdouble a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_regularizedGammaQ_1a4183e52d14c27e], a0, a1, a2, a3);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::regularizedGammaQ(const ::org::hipparchus::CalculusFieldElement & a0, const ::org::hipparchus::CalculusFieldElement & a1, jdouble a2, jint a3)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_regularizedGammaQ_c9fbd14d4617b15d], a0.this$, a1.this$, a2, a3));
      }

      jdouble Gamma::trigamma(jdouble a0)
      {
        jclass cls = env->getClass(initializeClass);
        return env->callStaticDoubleMethod(cls, mids$[mid_trigamma_dcbc7ce2902fa136], a0);
      }

      ::org::hipparchus::CalculusFieldElement Gamma::trigamma(const ::org::hipparchus::CalculusFieldElement & a0)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::CalculusFieldElement(env->callStaticObjectMethod(cls, mids$[mid_trigamma_a4b1871f4d29e58b], a0.this$));
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
      static PyObject *t_Gamma_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Gamma_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Gamma_digamma(PyTypeObject *type, PyObject *args);
      static PyObject *t_Gamma_gamma(PyTypeObject *type, PyObject *args);
      static PyObject *t_Gamma_invGamma1pm1(PyTypeObject *type, PyObject *args);
      static PyObject *t_Gamma_lanczos(PyTypeObject *type, PyObject *args);
      static PyObject *t_Gamma_logGamma(PyTypeObject *type, PyObject *args);
      static PyObject *t_Gamma_logGamma1p(PyTypeObject *type, PyObject *args);
      static PyObject *t_Gamma_regularizedGammaP(PyTypeObject *type, PyObject *args);
      static PyObject *t_Gamma_regularizedGammaQ(PyTypeObject *type, PyObject *args);
      static PyObject *t_Gamma_trigamma(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_Gamma__methods_[] = {
        DECLARE_METHOD(t_Gamma, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Gamma, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Gamma, digamma, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Gamma, gamma, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Gamma, invGamma1pm1, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Gamma, lanczos, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Gamma, logGamma, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Gamma, logGamma1p, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Gamma, regularizedGammaP, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Gamma, regularizedGammaQ, METH_VARARGS | METH_CLASS),
        DECLARE_METHOD(t_Gamma, trigamma, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Gamma)[] = {
        { Py_tp_methods, t_Gamma__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Gamma)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Gamma, t_Gamma, Gamma);

      void t_Gamma::install(PyObject *module)
      {
        installType(&PY_TYPE(Gamma), &PY_TYPE_DEF(Gamma), module, "Gamma", 0);
      }

      void t_Gamma::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Gamma), "class_", make_descriptor(Gamma::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Gamma), "wrapfn_", make_descriptor(t_Gamma::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Gamma), "boxfn_", make_descriptor(boxObject));
        env->getClass(Gamma::initializeClass);
        PyObject_SetAttrString((PyObject *) PY_TYPE(Gamma), "GAMMA", make_descriptor(Gamma::GAMMA));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Gamma), "LANCZOS_G", make_descriptor(Gamma::LANCZOS_G));
      }

      static PyObject *t_Gamma_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Gamma::initializeClass, 1)))
          return NULL;
        return t_Gamma::wrap_Object(Gamma(((t_Gamma *) arg)->object.this$));
      }
      static PyObject *t_Gamma_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Gamma::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Gamma_digamma(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::digamma(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::digamma(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "digamma", args);
        return NULL;
      }

      static PyObject *t_Gamma_gamma(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::gamma(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::gamma(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "gamma", args);
        return NULL;
      }

      static PyObject *t_Gamma_invGamma1pm1(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::invGamma1pm1(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::invGamma1pm1(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "invGamma1pm1", args);
        return NULL;
      }

      static PyObject *t_Gamma_lanczos(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::lanczos(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::lanczos(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "lanczos", args);
        return NULL;
      }

      static PyObject *t_Gamma_logGamma(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::logGamma(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::logGamma(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "logGamma", args);
        return NULL;
      }

      static PyObject *t_Gamma_logGamma1p(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::logGamma1p(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::logGamma1p(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "logGamma1p", args);
        return NULL;
      }

      static PyObject *t_Gamma_regularizedGammaP(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::regularizedGammaP(a0, a1));
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
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::regularizedGammaP(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jint a3;
            jdouble result;

            if (!parseArgs(args, "DDDI", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::regularizedGammaP(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            jint a3;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KKDI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::regularizedGammaP(a0, a1, a2, a3));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "regularizedGammaP", args);
        return NULL;
      }

      static PyObject *t_Gamma_regularizedGammaQ(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            jdouble result;

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::regularizedGammaQ(a0, a1));
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
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::regularizedGammaQ(a0, a1));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
          break;
         case 4:
          {
            jdouble a0;
            jdouble a1;
            jdouble a2;
            jint a3;
            jdouble result;

            if (!parseArgs(args, "DDDI", &a0, &a1, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::regularizedGammaQ(a0, a1, a2, a3));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement a1((jobject) NULL);
            PyTypeObject **p1;
            jdouble a2;
            jint a3;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "KKDI", ::org::hipparchus::CalculusFieldElement::initializeClass, ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a1, &p1, ::org::hipparchus::t_CalculusFieldElement::parameters_, &a2, &a3))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::regularizedGammaQ(a0, a1, a2, a3));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "regularizedGammaQ", args);
        return NULL;
      }

      static PyObject *t_Gamma_trigamma(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 1:
          {
            jdouble a0;
            jdouble result;

            if (!parseArgs(args, "D", &a0))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::trigamma(a0));
              return PyFloat_FromDouble((double) result);
            }
          }
          {
            ::org::hipparchus::CalculusFieldElement a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::CalculusFieldElement result((jobject) NULL);

            if (!parseArgs(args, "K", ::org::hipparchus::CalculusFieldElement::initializeClass, &a0, &p0, ::org::hipparchus::t_CalculusFieldElement::parameters_))
            {
              OBJ_CALL(result = ::org::hipparchus::special::Gamma::trigamma(a0));
              return p0 != NULL && p0[0] != NULL ? wrapType(p0[0], result.this$) : ::org::hipparchus::t_CalculusFieldElement::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "trigamma", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/estimation/measurements/gnss/GRAPHICCombination.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace estimation {
      namespace measurements {
        namespace gnss {

          ::java::lang::Class *GRAPHICCombination::class$ = NULL;
          jmethodID *GRAPHICCombination::mids$ = NULL;
          bool GRAPHICCombination::live$ = false;

          jclass GRAPHICCombination::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/estimation/measurements/gnss/GRAPHICCombination");

              mids$ = new jmethodID[max_mid];
              mids$[mid_getCombinedValue_86ffecc08a63eff0] = env->getMethodID(cls, "getCombinedValue", "(DD)D");

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
    namespace estimation {
      namespace measurements {
        namespace gnss {
          static PyObject *t_GRAPHICCombination_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_GRAPHICCombination_instance_(PyTypeObject *type, PyObject *arg);

          static PyMethodDef t_GRAPHICCombination__methods_[] = {
            DECLARE_METHOD(t_GRAPHICCombination, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_GRAPHICCombination, instance_, METH_O | METH_CLASS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(GRAPHICCombination)[] = {
            { Py_tp_methods, t_GRAPHICCombination__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(GRAPHICCombination)[] = {
            &PY_TYPE_DEF(::org::orekit::estimation::measurements::gnss::AbstractSingleFrequencyCombination),
            NULL
          };

          DEFINE_TYPE(GRAPHICCombination, t_GRAPHICCombination, GRAPHICCombination);

          void t_GRAPHICCombination::install(PyObject *module)
          {
            installType(&PY_TYPE(GRAPHICCombination), &PY_TYPE_DEF(GRAPHICCombination), module, "GRAPHICCombination", 0);
          }

          void t_GRAPHICCombination::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(GRAPHICCombination), "class_", make_descriptor(GRAPHICCombination::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GRAPHICCombination), "wrapfn_", make_descriptor(t_GRAPHICCombination::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(GRAPHICCombination), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_GRAPHICCombination_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, GRAPHICCombination::initializeClass, 1)))
              return NULL;
            return t_GRAPHICCombination::wrap_Object(GRAPHICCombination(((t_GRAPHICCombination *) arg)->object.this$));
          }
          static PyObject *t_GRAPHICCombination_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, GRAPHICCombination::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/AbstractConvexHullGenerator2D.h"
#include "org/hipparchus/exception/MathIllegalStateException.h"
#include "java/util/Collection.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/ConvexHullGenerator2D.h"
#include "org/hipparchus/geometry/euclidean/twod/hull/ConvexHull2D.h"
#include "org/hipparchus/geometry/euclidean/twod/Vector2D.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {

            ::java::lang::Class *AbstractConvexHullGenerator2D::class$ = NULL;
            jmethodID *AbstractConvexHullGenerator2D::mids$ = NULL;
            bool AbstractConvexHullGenerator2D::live$ = false;

            jclass AbstractConvexHullGenerator2D::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/geometry/euclidean/twod/hull/AbstractConvexHullGenerator2D");

                mids$ = new jmethodID[max_mid];
                mids$[mid_generate_031b48e42873ea77] = env->getMethodID(cls, "generate", "(Ljava/util/Collection;)Lorg/hipparchus/geometry/euclidean/twod/hull/ConvexHull2D;");
                mids$[mid_getTolerance_dff5885c2c873297] = env->getMethodID(cls, "getTolerance", "()D");
                mids$[mid_isIncludeCollinearPoints_b108b35ef48e27bd] = env->getMethodID(cls, "isIncludeCollinearPoints", "()Z");
                mids$[mid_findHullVertices_e6702ab1f73fd997] = env->getMethodID(cls, "findHullVertices", "(Ljava/util/Collection;)Ljava/util/Collection;");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            ::org::hipparchus::geometry::euclidean::twod::hull::ConvexHull2D AbstractConvexHullGenerator2D::generate(const ::java::util::Collection & a0) const
            {
              return ::org::hipparchus::geometry::euclidean::twod::hull::ConvexHull2D(env->callObjectMethod(this$, mids$[mid_generate_031b48e42873ea77], a0.this$));
            }

            jdouble AbstractConvexHullGenerator2D::getTolerance() const
            {
              return env->callDoubleMethod(this$, mids$[mid_getTolerance_dff5885c2c873297]);
            }

            jboolean AbstractConvexHullGenerator2D::isIncludeCollinearPoints() const
            {
              return env->callBooleanMethod(this$, mids$[mid_isIncludeCollinearPoints_b108b35ef48e27bd]);
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
  namespace hipparchus {
    namespace geometry {
      namespace euclidean {
        namespace twod {
          namespace hull {
            static PyObject *t_AbstractConvexHullGenerator2D_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractConvexHullGenerator2D_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_AbstractConvexHullGenerator2D_generate(t_AbstractConvexHullGenerator2D *self, PyObject *arg);
            static PyObject *t_AbstractConvexHullGenerator2D_getTolerance(t_AbstractConvexHullGenerator2D *self);
            static PyObject *t_AbstractConvexHullGenerator2D_isIncludeCollinearPoints(t_AbstractConvexHullGenerator2D *self);
            static PyObject *t_AbstractConvexHullGenerator2D_get__includeCollinearPoints(t_AbstractConvexHullGenerator2D *self, void *data);
            static PyObject *t_AbstractConvexHullGenerator2D_get__tolerance(t_AbstractConvexHullGenerator2D *self, void *data);
            static PyGetSetDef t_AbstractConvexHullGenerator2D__fields_[] = {
              DECLARE_GET_FIELD(t_AbstractConvexHullGenerator2D, includeCollinearPoints),
              DECLARE_GET_FIELD(t_AbstractConvexHullGenerator2D, tolerance),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_AbstractConvexHullGenerator2D__methods_[] = {
              DECLARE_METHOD(t_AbstractConvexHullGenerator2D, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractConvexHullGenerator2D, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_AbstractConvexHullGenerator2D, generate, METH_O),
              DECLARE_METHOD(t_AbstractConvexHullGenerator2D, getTolerance, METH_NOARGS),
              DECLARE_METHOD(t_AbstractConvexHullGenerator2D, isIncludeCollinearPoints, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(AbstractConvexHullGenerator2D)[] = {
              { Py_tp_methods, t_AbstractConvexHullGenerator2D__methods_ },
              { Py_tp_init, (void *) abstract_init },
              { Py_tp_getset, t_AbstractConvexHullGenerator2D__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(AbstractConvexHullGenerator2D)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(AbstractConvexHullGenerator2D, t_AbstractConvexHullGenerator2D, AbstractConvexHullGenerator2D);

            void t_AbstractConvexHullGenerator2D::install(PyObject *module)
            {
              installType(&PY_TYPE(AbstractConvexHullGenerator2D), &PY_TYPE_DEF(AbstractConvexHullGenerator2D), module, "AbstractConvexHullGenerator2D", 0);
            }

            void t_AbstractConvexHullGenerator2D::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConvexHullGenerator2D), "class_", make_descriptor(AbstractConvexHullGenerator2D::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConvexHullGenerator2D), "wrapfn_", make_descriptor(t_AbstractConvexHullGenerator2D::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(AbstractConvexHullGenerator2D), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_AbstractConvexHullGenerator2D_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, AbstractConvexHullGenerator2D::initializeClass, 1)))
                return NULL;
              return t_AbstractConvexHullGenerator2D::wrap_Object(AbstractConvexHullGenerator2D(((t_AbstractConvexHullGenerator2D *) arg)->object.this$));
            }
            static PyObject *t_AbstractConvexHullGenerator2D_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, AbstractConvexHullGenerator2D::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_AbstractConvexHullGenerator2D_generate(t_AbstractConvexHullGenerator2D *self, PyObject *arg)
            {
              ::java::util::Collection a0((jobject) NULL);
              PyTypeObject **p0;
              ::org::hipparchus::geometry::euclidean::twod::hull::ConvexHull2D result((jobject) NULL);

              if (!parseArg(arg, "K", ::java::util::Collection::initializeClass, &a0, &p0, ::java::util::t_Collection::parameters_))
              {
                OBJ_CALL(result = self->object.generate(a0));
                return ::org::hipparchus::geometry::euclidean::twod::hull::t_ConvexHull2D::wrap_Object(result);
              }

              PyErr_SetArgsError((PyObject *) self, "generate", arg);
              return NULL;
            }

            static PyObject *t_AbstractConvexHullGenerator2D_getTolerance(t_AbstractConvexHullGenerator2D *self)
            {
              jdouble result;
              OBJ_CALL(result = self->object.getTolerance());
              return PyFloat_FromDouble((double) result);
            }

            static PyObject *t_AbstractConvexHullGenerator2D_isIncludeCollinearPoints(t_AbstractConvexHullGenerator2D *self)
            {
              jboolean result;
              OBJ_CALL(result = self->object.isIncludeCollinearPoints());
              Py_RETURN_BOOL(result);
            }

            static PyObject *t_AbstractConvexHullGenerator2D_get__includeCollinearPoints(t_AbstractConvexHullGenerator2D *self, void *data)
            {
              jboolean value;
              OBJ_CALL(value = self->object.isIncludeCollinearPoints());
              Py_RETURN_BOOL(value);
            }

            static PyObject *t_AbstractConvexHullGenerator2D_get__tolerance(t_AbstractConvexHullGenerator2D *self, void *data)
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
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/utils/Fieldifier.h"
#include "org/orekit/propagation/StateCovariance.h"
#include "org/orekit/propagation/FieldStateCovariance.h"
#include "org/hipparchus/Field.h"
#include "java/lang/Class.h"
#include "org/orekit/orbits/Orbit.h"
#include "org/hipparchus/linear/RealMatrix.h"
#include "org/orekit/orbits/FieldOrbit.h"
#include "org/hipparchus/linear/FieldMatrix.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace utils {

      ::java::lang::Class *Fieldifier::class$ = NULL;
      jmethodID *Fieldifier::mids$ = NULL;
      bool Fieldifier::live$ = false;

      jclass Fieldifier::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/orekit/utils/Fieldifier");

          mids$ = new jmethodID[max_mid];
          mids$[mid_fieldify_864f8e04b56fc910] = env->getStaticMethodID(cls, "fieldify", "(Lorg/hipparchus/Field;Lorg/orekit/orbits/Orbit;)Lorg/orekit/orbits/FieldOrbit;");
          mids$[mid_fieldify_82a75cc2abf4301d] = env->getStaticMethodID(cls, "fieldify", "(Lorg/hipparchus/Field;Lorg/orekit/propagation/StateCovariance;)Lorg/orekit/propagation/FieldStateCovariance;");
          mids$[mid_fieldify_0632d9af46316121] = env->getStaticMethodID(cls, "fieldify", "(Lorg/hipparchus/Field;Lorg/hipparchus/linear/RealMatrix;)Lorg/hipparchus/linear/FieldMatrix;");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      ::org::orekit::orbits::FieldOrbit Fieldifier::fieldify(const ::org::hipparchus::Field & a0, const ::org::orekit::orbits::Orbit & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::orbits::FieldOrbit(env->callStaticObjectMethod(cls, mids$[mid_fieldify_864f8e04b56fc910], a0.this$, a1.this$));
      }

      ::org::orekit::propagation::FieldStateCovariance Fieldifier::fieldify(const ::org::hipparchus::Field & a0, const ::org::orekit::propagation::StateCovariance & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::orekit::propagation::FieldStateCovariance(env->callStaticObjectMethod(cls, mids$[mid_fieldify_82a75cc2abf4301d], a0.this$, a1.this$));
      }

      ::org::hipparchus::linear::FieldMatrix Fieldifier::fieldify(const ::org::hipparchus::Field & a0, const ::org::hipparchus::linear::RealMatrix & a1)
      {
        jclass cls = env->getClass(initializeClass);
        return ::org::hipparchus::linear::FieldMatrix(env->callStaticObjectMethod(cls, mids$[mid_fieldify_0632d9af46316121], a0.this$, a1.this$));
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
      static PyObject *t_Fieldifier_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Fieldifier_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_Fieldifier_fieldify(PyTypeObject *type, PyObject *args);

      static PyMethodDef t_Fieldifier__methods_[] = {
        DECLARE_METHOD(t_Fieldifier, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Fieldifier, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_Fieldifier, fieldify, METH_VARARGS | METH_CLASS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(Fieldifier)[] = {
        { Py_tp_methods, t_Fieldifier__methods_ },
        { Py_tp_init, (void *) abstract_init },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(Fieldifier)[] = {
        &PY_TYPE_DEF(::java::lang::Object),
        NULL
      };

      DEFINE_TYPE(Fieldifier, t_Fieldifier, Fieldifier);

      void t_Fieldifier::install(PyObject *module)
      {
        installType(&PY_TYPE(Fieldifier), &PY_TYPE_DEF(Fieldifier), module, "Fieldifier", 0);
      }

      void t_Fieldifier::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fieldifier), "class_", make_descriptor(Fieldifier::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fieldifier), "wrapfn_", make_descriptor(t_Fieldifier::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(Fieldifier), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_Fieldifier_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, Fieldifier::initializeClass, 1)))
          return NULL;
        return t_Fieldifier::wrap_Object(Fieldifier(((t_Fieldifier *) arg)->object.this$));
      }
      static PyObject *t_Fieldifier_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, Fieldifier::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_Fieldifier_fieldify(PyTypeObject *type, PyObject *args)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::orbits::Orbit a1((jobject) NULL);
            ::org::orekit::orbits::FieldOrbit result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::orbits::Orbit::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::utils::Fieldifier::fieldify(a0, a1));
              return ::org::orekit::orbits::t_FieldOrbit::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::StateCovariance a1((jobject) NULL);
            ::org::orekit::propagation::FieldStateCovariance result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::orekit::propagation::StateCovariance::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::utils::Fieldifier::fieldify(a0, a1));
              return ::org::orekit::propagation::t_FieldStateCovariance::wrap_Object(result);
            }
          }
          {
            ::org::hipparchus::Field a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::hipparchus::linear::RealMatrix a1((jobject) NULL);
            ::org::hipparchus::linear::FieldMatrix result((jobject) NULL);

            if (!parseArgs(args, "Kk", ::org::hipparchus::Field::initializeClass, ::org::hipparchus::linear::RealMatrix::initializeClass, &a0, &p0, ::org::hipparchus::t_Field::parameters_, &a1))
            {
              OBJ_CALL(result = ::org::orekit::utils::Fieldifier::fieldify(a0, a1));
              return ::org::hipparchus::linear::t_FieldMatrix::wrap_Object(result);
            }
          }
        }

        PyErr_SetArgsError(type, "fieldify", args);
        return NULL;
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/geometry/partitioning/BSPTreeVisitor.h"
#include "org/hipparchus/geometry/partitioning/BSPTreeVisitor$Order.h"
#include "java/lang/Class.h"
#include "org/hipparchus/geometry/partitioning/BSPTree.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace geometry {
      namespace partitioning {

        ::java::lang::Class *BSPTreeVisitor::class$ = NULL;
        jmethodID *BSPTreeVisitor::mids$ = NULL;
        bool BSPTreeVisitor::live$ = false;

        jclass BSPTreeVisitor::initializeClass(bool getOnly)
        {
          if (getOnly)
            return (jclass) (live$ ? class$->this$ : NULL);
          if (class$ == NULL)
          {
            jclass cls = (jclass) env->findClass("org/hipparchus/geometry/partitioning/BSPTreeVisitor");

            mids$ = new jmethodID[max_mid];
            mids$[mid_visitInternalNode_083ba3410c8af631] = env->getMethodID(cls, "visitInternalNode", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)V");
            mids$[mid_visitLeafNode_083ba3410c8af631] = env->getMethodID(cls, "visitLeafNode", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)V");
            mids$[mid_visitOrder_c5e9b148bf3d895c] = env->getMethodID(cls, "visitOrder", "(Lorg/hipparchus/geometry/partitioning/BSPTree;)Lorg/hipparchus/geometry/partitioning/BSPTreeVisitor$Order;");

            class$ = new ::java::lang::Class(cls);
            live$ = true;
          }
          return (jclass) class$->this$;
        }

        void BSPTreeVisitor::visitInternalNode(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_visitInternalNode_083ba3410c8af631], a0.this$);
        }

        void BSPTreeVisitor::visitLeafNode(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          env->callVoidMethod(this$, mids$[mid_visitLeafNode_083ba3410c8af631], a0.this$);
        }

        ::org::hipparchus::geometry::partitioning::BSPTreeVisitor$Order BSPTreeVisitor::visitOrder(const ::org::hipparchus::geometry::partitioning::BSPTree & a0) const
        {
          return ::org::hipparchus::geometry::partitioning::BSPTreeVisitor$Order(env->callObjectMethod(this$, mids$[mid_visitOrder_c5e9b148bf3d895c], a0.this$));
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
        static PyObject *t_BSPTreeVisitor_cast_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTreeVisitor_instance_(PyTypeObject *type, PyObject *arg);
        static PyObject *t_BSPTreeVisitor_of_(t_BSPTreeVisitor *self, PyObject *args);
        static PyObject *t_BSPTreeVisitor_visitInternalNode(t_BSPTreeVisitor *self, PyObject *arg);
        static PyObject *t_BSPTreeVisitor_visitLeafNode(t_BSPTreeVisitor *self, PyObject *arg);
        static PyObject *t_BSPTreeVisitor_visitOrder(t_BSPTreeVisitor *self, PyObject *arg);
        static PyObject *t_BSPTreeVisitor_get__parameters_(t_BSPTreeVisitor *self, void *data);
        static PyGetSetDef t_BSPTreeVisitor__fields_[] = {
          DECLARE_GET_FIELD(t_BSPTreeVisitor, parameters_),
          { NULL, NULL, NULL, NULL, NULL }
        };

        static PyMethodDef t_BSPTreeVisitor__methods_[] = {
          DECLARE_METHOD(t_BSPTreeVisitor, cast_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTreeVisitor, instance_, METH_O | METH_CLASS),
          DECLARE_METHOD(t_BSPTreeVisitor, of_, METH_VARARGS),
          DECLARE_METHOD(t_BSPTreeVisitor, visitInternalNode, METH_O),
          DECLARE_METHOD(t_BSPTreeVisitor, visitLeafNode, METH_O),
          DECLARE_METHOD(t_BSPTreeVisitor, visitOrder, METH_O),
          { NULL, NULL, 0, NULL }
        };

        static PyType_Slot PY_TYPE_SLOTS(BSPTreeVisitor)[] = {
          { Py_tp_methods, t_BSPTreeVisitor__methods_ },
          { Py_tp_init, (void *) abstract_init },
          { Py_tp_getset, t_BSPTreeVisitor__fields_ },
          { 0, NULL }
        };

        static PyType_Def *PY_TYPE_BASES(BSPTreeVisitor)[] = {
          &PY_TYPE_DEF(::java::lang::Object),
          NULL
        };

        DEFINE_TYPE(BSPTreeVisitor, t_BSPTreeVisitor, BSPTreeVisitor);
        PyObject *t_BSPTreeVisitor::wrap_Object(const BSPTreeVisitor& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTreeVisitor::wrap_Object(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTreeVisitor *self = (t_BSPTreeVisitor *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        PyObject *t_BSPTreeVisitor::wrap_jobject(const jobject& object, PyTypeObject *p0)
        {
          PyObject *obj = t_BSPTreeVisitor::wrap_jobject(object);
          if (obj != NULL && obj != Py_None)
          {
            t_BSPTreeVisitor *self = (t_BSPTreeVisitor *) obj;
            self->parameters[0] = p0;
          }
          return obj;
        }

        void t_BSPTreeVisitor::install(PyObject *module)
        {
          installType(&PY_TYPE(BSPTreeVisitor), &PY_TYPE_DEF(BSPTreeVisitor), module, "BSPTreeVisitor", 0);
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor), "Order", make_descriptor(&PY_TYPE_DEF(BSPTreeVisitor$Order)));
        }

        void t_BSPTreeVisitor::initialize(PyObject *module)
        {
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor), "class_", make_descriptor(BSPTreeVisitor::initializeClass, 1));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor), "wrapfn_", make_descriptor(t_BSPTreeVisitor::wrap_jobject));
          PyObject_SetAttrString((PyObject *) PY_TYPE(BSPTreeVisitor), "boxfn_", make_descriptor(boxObject));
        }

        static PyObject *t_BSPTreeVisitor_cast_(PyTypeObject *type, PyObject *arg)
        {
          if (!(arg = castCheck(arg, BSPTreeVisitor::initializeClass, 1)))
            return NULL;
          return t_BSPTreeVisitor::wrap_Object(BSPTreeVisitor(((t_BSPTreeVisitor *) arg)->object.this$));
        }
        static PyObject *t_BSPTreeVisitor_instance_(PyTypeObject *type, PyObject *arg)
        {
          if (!castCheck(arg, BSPTreeVisitor::initializeClass, 0))
            Py_RETURN_FALSE;
          Py_RETURN_TRUE;
        }

        static PyObject *t_BSPTreeVisitor_of_(t_BSPTreeVisitor *self, PyObject *args)
        {
          if (!parseArg(args, "T", 1, &(self->parameters)))
            Py_RETURN_SELF;
          return PyErr_SetArgsError((PyObject *) self, "of_", args);
        }

        static PyObject *t_BSPTreeVisitor_visitInternalNode(t_BSPTreeVisitor *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
          {
            OBJ_CALL(self->object.visitInternalNode(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "visitInternalNode", arg);
          return NULL;
        }

        static PyObject *t_BSPTreeVisitor_visitLeafNode(t_BSPTreeVisitor *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
          {
            OBJ_CALL(self->object.visitLeafNode(a0));
            Py_RETURN_NONE;
          }

          PyErr_SetArgsError((PyObject *) self, "visitLeafNode", arg);
          return NULL;
        }

        static PyObject *t_BSPTreeVisitor_visitOrder(t_BSPTreeVisitor *self, PyObject *arg)
        {
          ::org::hipparchus::geometry::partitioning::BSPTree a0((jobject) NULL);
          PyTypeObject **p0;
          ::org::hipparchus::geometry::partitioning::BSPTreeVisitor$Order result((jobject) NULL);

          if (!parseArg(arg, "K", ::org::hipparchus::geometry::partitioning::BSPTree::initializeClass, &a0, &p0, ::org::hipparchus::geometry::partitioning::t_BSPTree::parameters_))
          {
            OBJ_CALL(result = self->object.visitOrder(a0));
            return ::org::hipparchus::geometry::partitioning::t_BSPTreeVisitor$Order::wrap_Object(result);
          }

          PyErr_SetArgsError((PyObject *) self, "visitOrder", arg);
          return NULL;
        }
        static PyObject *t_BSPTreeVisitor_get__parameters_(t_BSPTreeVisitor *self, void *data)
        {
          return typeParameters(self->parameters, sizeof(self->parameters));
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/files/rinex/navigation/RinexNavigationParser.h"
#include "java/io/IOException.h"
#include "org/orekit/data/DataSource.h"
#include "org/orekit/time/TimeScales.h"
#include "java/lang/Class.h"
#include "org/orekit/files/rinex/navigation/RinexNavigation.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace files {
      namespace rinex {
        namespace navigation {

          ::java::lang::Class *RinexNavigationParser::class$ = NULL;
          jmethodID *RinexNavigationParser::mids$ = NULL;
          bool RinexNavigationParser::live$ = false;

          jclass RinexNavigationParser::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/files/rinex/navigation/RinexNavigationParser");

              mids$ = new jmethodID[max_mid];
              mids$[mid_init$_0fa09c18fee449d5] = env->getMethodID(cls, "<init>", "()V");
              mids$[mid_init$_8736fe4ec3234d8c] = env->getMethodID(cls, "<init>", "(Lorg/orekit/time/TimeScales;)V");
              mids$[mid_parse_803758770eba64f3] = env->getMethodID(cls, "parse", "(Lorg/orekit/data/DataSource;)Lorg/orekit/files/rinex/navigation/RinexNavigation;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          RinexNavigationParser::RinexNavigationParser() : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_0fa09c18fee449d5)) {}

          RinexNavigationParser::RinexNavigationParser(const ::org::orekit::time::TimeScales & a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_8736fe4ec3234d8c, a0.this$)) {}

          ::org::orekit::files::rinex::navigation::RinexNavigation RinexNavigationParser::parse(const ::org::orekit::data::DataSource & a0) const
          {
            return ::org::orekit::files::rinex::navigation::RinexNavigation(env->callObjectMethod(this$, mids$[mid_parse_803758770eba64f3], a0.this$));
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
          static PyObject *t_RinexNavigationParser_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_RinexNavigationParser_instance_(PyTypeObject *type, PyObject *arg);
          static int t_RinexNavigationParser_init_(t_RinexNavigationParser *self, PyObject *args, PyObject *kwds);
          static PyObject *t_RinexNavigationParser_parse(t_RinexNavigationParser *self, PyObject *arg);

          static PyMethodDef t_RinexNavigationParser__methods_[] = {
            DECLARE_METHOD(t_RinexNavigationParser, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexNavigationParser, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_RinexNavigationParser, parse, METH_O),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(RinexNavigationParser)[] = {
            { Py_tp_methods, t_RinexNavigationParser__methods_ },
            { Py_tp_init, (void *) t_RinexNavigationParser_init_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(RinexNavigationParser)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(RinexNavigationParser, t_RinexNavigationParser, RinexNavigationParser);

          void t_RinexNavigationParser::install(PyObject *module)
          {
            installType(&PY_TYPE(RinexNavigationParser), &PY_TYPE_DEF(RinexNavigationParser), module, "RinexNavigationParser", 0);
          }

          void t_RinexNavigationParser::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigationParser), "class_", make_descriptor(RinexNavigationParser::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigationParser), "wrapfn_", make_descriptor(t_RinexNavigationParser::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(RinexNavigationParser), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_RinexNavigationParser_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, RinexNavigationParser::initializeClass, 1)))
              return NULL;
            return t_RinexNavigationParser::wrap_Object(RinexNavigationParser(((t_RinexNavigationParser *) arg)->object.this$));
          }
          static PyObject *t_RinexNavigationParser_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, RinexNavigationParser::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static int t_RinexNavigationParser_init_(t_RinexNavigationParser *self, PyObject *args, PyObject *kwds)
          {
            switch (PyTuple_GET_SIZE(args)) {
             case 0:
              {
                RinexNavigationParser object((jobject) NULL);

                INT_CALL(object = RinexNavigationParser());
                self->object = object;
                break;
              }
             case 1:
              {
                ::org::orekit::time::TimeScales a0((jobject) NULL);
                RinexNavigationParser object((jobject) NULL);

                if (!parseArgs(args, "k", ::org::orekit::time::TimeScales::initializeClass, &a0))
                {
                  INT_CALL(object = RinexNavigationParser(a0));
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

          static PyObject *t_RinexNavigationParser_parse(t_RinexNavigationParser *self, PyObject *arg)
          {
            ::org::orekit::data::DataSource a0((jobject) NULL);
            ::org::orekit::files::rinex::navigation::RinexNavigation result((jobject) NULL);

            if (!parseArg(arg, "k", ::org::orekit::data::DataSource::initializeClass, &a0))
            {
              OBJ_CALL(result = self->object.parse(a0));
              return ::org::orekit::files::rinex::navigation::t_RinexNavigation::wrap_Object(result);
            }

            PyErr_SetArgsError((PyObject *) self, "parse", arg);
            return NULL;
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer$PopulationSize.h"
#include "org/hipparchus/optim/PointValuePair.h"
#include "org/hipparchus/optim/OptimizationData.h"
#include "org/hipparchus/exception/MathIllegalArgumentException.h"
#include "java/lang/Class.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {

            ::java::lang::Class *CMAESOptimizer$PopulationSize::class$ = NULL;
            jmethodID *CMAESOptimizer$PopulationSize::mids$ = NULL;
            bool CMAESOptimizer$PopulationSize::live$ = false;

            jclass CMAESOptimizer$PopulationSize::initializeClass(bool getOnly)
            {
              if (getOnly)
                return (jclass) (live$ ? class$->this$ : NULL);
              if (class$ == NULL)
              {
                jclass cls = (jclass) env->findClass("org/hipparchus/optim/nonlinear/scalar/noderiv/CMAESOptimizer$PopulationSize");

                mids$ = new jmethodID[max_mid];
                mids$[mid_init$_99803b0791f320ff] = env->getMethodID(cls, "<init>", "(I)V");
                mids$[mid_getPopulationSize_570ce0828f81a2c1] = env->getMethodID(cls, "getPopulationSize", "()I");

                class$ = new ::java::lang::Class(cls);
                live$ = true;
              }
              return (jclass) class$->this$;
            }

            CMAESOptimizer$PopulationSize::CMAESOptimizer$PopulationSize(jint a0) : ::java::lang::Object(env->newObject(initializeClass, &mids$, mid_init$_99803b0791f320ff, a0)) {}

            jint CMAESOptimizer$PopulationSize::getPopulationSize() const
            {
              return env->callIntMethod(this$, mids$[mid_getPopulationSize_570ce0828f81a2c1]);
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
  namespace hipparchus {
    namespace optim {
      namespace nonlinear {
        namespace scalar {
          namespace noderiv {
            static PyObject *t_CMAESOptimizer$PopulationSize_cast_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CMAESOptimizer$PopulationSize_instance_(PyTypeObject *type, PyObject *arg);
            static PyObject *t_CMAESOptimizer$PopulationSize_of_(t_CMAESOptimizer$PopulationSize *self, PyObject *args);
            static int t_CMAESOptimizer$PopulationSize_init_(t_CMAESOptimizer$PopulationSize *self, PyObject *args, PyObject *kwds);
            static PyObject *t_CMAESOptimizer$PopulationSize_getPopulationSize(t_CMAESOptimizer$PopulationSize *self);
            static PyObject *t_CMAESOptimizer$PopulationSize_get__populationSize(t_CMAESOptimizer$PopulationSize *self, void *data);
            static PyObject *t_CMAESOptimizer$PopulationSize_get__parameters_(t_CMAESOptimizer$PopulationSize *self, void *data);
            static PyGetSetDef t_CMAESOptimizer$PopulationSize__fields_[] = {
              DECLARE_GET_FIELD(t_CMAESOptimizer$PopulationSize, populationSize),
              DECLARE_GET_FIELD(t_CMAESOptimizer$PopulationSize, parameters_),
              { NULL, NULL, NULL, NULL, NULL }
            };

            static PyMethodDef t_CMAESOptimizer$PopulationSize__methods_[] = {
              DECLARE_METHOD(t_CMAESOptimizer$PopulationSize, cast_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CMAESOptimizer$PopulationSize, instance_, METH_O | METH_CLASS),
              DECLARE_METHOD(t_CMAESOptimizer$PopulationSize, of_, METH_VARARGS),
              DECLARE_METHOD(t_CMAESOptimizer$PopulationSize, getPopulationSize, METH_NOARGS),
              { NULL, NULL, 0, NULL }
            };

            static PyType_Slot PY_TYPE_SLOTS(CMAESOptimizer$PopulationSize)[] = {
              { Py_tp_methods, t_CMAESOptimizer$PopulationSize__methods_ },
              { Py_tp_init, (void *) t_CMAESOptimizer$PopulationSize_init_ },
              { Py_tp_getset, t_CMAESOptimizer$PopulationSize__fields_ },
              { 0, NULL }
            };

            static PyType_Def *PY_TYPE_BASES(CMAESOptimizer$PopulationSize)[] = {
              &PY_TYPE_DEF(::java::lang::Object),
              NULL
            };

            DEFINE_TYPE(CMAESOptimizer$PopulationSize, t_CMAESOptimizer$PopulationSize, CMAESOptimizer$PopulationSize);
            PyObject *t_CMAESOptimizer$PopulationSize::wrap_Object(const CMAESOptimizer$PopulationSize& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CMAESOptimizer$PopulationSize::wrap_Object(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CMAESOptimizer$PopulationSize *self = (t_CMAESOptimizer$PopulationSize *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            PyObject *t_CMAESOptimizer$PopulationSize::wrap_jobject(const jobject& object, PyTypeObject *p0)
            {
              PyObject *obj = t_CMAESOptimizer$PopulationSize::wrap_jobject(object);
              if (obj != NULL && obj != Py_None)
              {
                t_CMAESOptimizer$PopulationSize *self = (t_CMAESOptimizer$PopulationSize *) obj;
                self->parameters[0] = p0;
              }
              return obj;
            }

            void t_CMAESOptimizer$PopulationSize::install(PyObject *module)
            {
              installType(&PY_TYPE(CMAESOptimizer$PopulationSize), &PY_TYPE_DEF(CMAESOptimizer$PopulationSize), module, "CMAESOptimizer$PopulationSize", 0);
            }

            void t_CMAESOptimizer$PopulationSize::initialize(PyObject *module)
            {
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer$PopulationSize), "class_", make_descriptor(CMAESOptimizer$PopulationSize::initializeClass, 1));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer$PopulationSize), "wrapfn_", make_descriptor(t_CMAESOptimizer$PopulationSize::wrap_jobject));
              PyObject_SetAttrString((PyObject *) PY_TYPE(CMAESOptimizer$PopulationSize), "boxfn_", make_descriptor(boxObject));
            }

            static PyObject *t_CMAESOptimizer$PopulationSize_cast_(PyTypeObject *type, PyObject *arg)
            {
              if (!(arg = castCheck(arg, CMAESOptimizer$PopulationSize::initializeClass, 1)))
                return NULL;
              return t_CMAESOptimizer$PopulationSize::wrap_Object(CMAESOptimizer$PopulationSize(((t_CMAESOptimizer$PopulationSize *) arg)->object.this$));
            }
            static PyObject *t_CMAESOptimizer$PopulationSize_instance_(PyTypeObject *type, PyObject *arg)
            {
              if (!castCheck(arg, CMAESOptimizer$PopulationSize::initializeClass, 0))
                Py_RETURN_FALSE;
              Py_RETURN_TRUE;
            }

            static PyObject *t_CMAESOptimizer$PopulationSize_of_(t_CMAESOptimizer$PopulationSize *self, PyObject *args)
            {
              if (!parseArg(args, "T", 1, &(self->parameters)))
                Py_RETURN_SELF;
              return PyErr_SetArgsError((PyObject *) self, "of_", args);
            }

            static int t_CMAESOptimizer$PopulationSize_init_(t_CMAESOptimizer$PopulationSize *self, PyObject *args, PyObject *kwds)
            {
              jint a0;
              CMAESOptimizer$PopulationSize object((jobject) NULL);

              if (!parseArgs(args, "I", &a0))
              {
                INT_CALL(object = CMAESOptimizer$PopulationSize(a0));
                self->object = object;
                self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointValuePair);
              }
              else
              {
                PyErr_SetArgsError((PyObject *) self, "__init__", args);
                return -1;
              }

              return 0;
            }

            static PyObject *t_CMAESOptimizer$PopulationSize_getPopulationSize(t_CMAESOptimizer$PopulationSize *self)
            {
              jint result;
              OBJ_CALL(result = self->object.getPopulationSize());
              return PyLong_FromLong((long) result);
            }
            static PyObject *t_CMAESOptimizer$PopulationSize_get__parameters_(t_CMAESOptimizer$PopulationSize *self, void *data)
            {
              return typeParameters(self->parameters, sizeof(self->parameters));
            }

            static PyObject *t_CMAESOptimizer$PopulationSize_get__populationSize(t_CMAESOptimizer$PopulationSize *self, void *data)
            {
              jint value;
              OBJ_CALL(value = self->object.getPopulationSize());
              return PyLong_FromLong((long) value);
            }
          }
        }
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/hipparchus/optim/SimpleVectorValueChecker.h"
#include "java/lang/Class.h"
#include "org/hipparchus/optim/PointVectorValuePair.h"
#include "JArray.h"

namespace org {
  namespace hipparchus {
    namespace optim {

      ::java::lang::Class *SimpleVectorValueChecker::class$ = NULL;
      jmethodID *SimpleVectorValueChecker::mids$ = NULL;
      bool SimpleVectorValueChecker::live$ = false;

      jclass SimpleVectorValueChecker::initializeClass(bool getOnly)
      {
        if (getOnly)
          return (jclass) (live$ ? class$->this$ : NULL);
        if (class$ == NULL)
        {
          jclass cls = (jclass) env->findClass("org/hipparchus/optim/SimpleVectorValueChecker");

          mids$ = new jmethodID[max_mid];
          mids$[mid_init$_8f2e782d5278b131] = env->getMethodID(cls, "<init>", "(DD)V");
          mids$[mid_init$_01fb2c777e5def32] = env->getMethodID(cls, "<init>", "(DDI)V");
          mids$[mid_converged_caf08c7242b15bc0] = env->getMethodID(cls, "converged", "(ILorg/hipparchus/optim/PointVectorValuePair;Lorg/hipparchus/optim/PointVectorValuePair;)Z");

          class$ = new ::java::lang::Class(cls);
          live$ = true;
        }
        return (jclass) class$->this$;
      }

      SimpleVectorValueChecker::SimpleVectorValueChecker(jdouble a0, jdouble a1) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_8f2e782d5278b131, a0, a1)) {}

      SimpleVectorValueChecker::SimpleVectorValueChecker(jdouble a0, jdouble a1, jint a2) : ::org::hipparchus::optim::AbstractConvergenceChecker(env->newObject(initializeClass, &mids$, mid_init$_01fb2c777e5def32, a0, a1, a2)) {}

      jboolean SimpleVectorValueChecker::converged(jint a0, const ::org::hipparchus::optim::PointVectorValuePair & a1, const ::org::hipparchus::optim::PointVectorValuePair & a2) const
      {
        return env->callBooleanMethod(this$, mids$[mid_converged_caf08c7242b15bc0], a0, a1.this$, a2.this$);
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
      static PyObject *t_SimpleVectorValueChecker_cast_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleVectorValueChecker_instance_(PyTypeObject *type, PyObject *arg);
      static PyObject *t_SimpleVectorValueChecker_of_(t_SimpleVectorValueChecker *self, PyObject *args);
      static int t_SimpleVectorValueChecker_init_(t_SimpleVectorValueChecker *self, PyObject *args, PyObject *kwds);
      static PyObject *t_SimpleVectorValueChecker_converged(t_SimpleVectorValueChecker *self, PyObject *args);
      static PyObject *t_SimpleVectorValueChecker_get__parameters_(t_SimpleVectorValueChecker *self, void *data);
      static PyGetSetDef t_SimpleVectorValueChecker__fields_[] = {
        DECLARE_GET_FIELD(t_SimpleVectorValueChecker, parameters_),
        { NULL, NULL, NULL, NULL, NULL }
      };

      static PyMethodDef t_SimpleVectorValueChecker__methods_[] = {
        DECLARE_METHOD(t_SimpleVectorValueChecker, cast_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleVectorValueChecker, instance_, METH_O | METH_CLASS),
        DECLARE_METHOD(t_SimpleVectorValueChecker, of_, METH_VARARGS),
        DECLARE_METHOD(t_SimpleVectorValueChecker, converged, METH_VARARGS),
        { NULL, NULL, 0, NULL }
      };

      static PyType_Slot PY_TYPE_SLOTS(SimpleVectorValueChecker)[] = {
        { Py_tp_methods, t_SimpleVectorValueChecker__methods_ },
        { Py_tp_init, (void *) t_SimpleVectorValueChecker_init_ },
        { Py_tp_getset, t_SimpleVectorValueChecker__fields_ },
        { 0, NULL }
      };

      static PyType_Def *PY_TYPE_BASES(SimpleVectorValueChecker)[] = {
        &PY_TYPE_DEF(::org::hipparchus::optim::AbstractConvergenceChecker),
        NULL
      };

      DEFINE_TYPE(SimpleVectorValueChecker, t_SimpleVectorValueChecker, SimpleVectorValueChecker);
      PyObject *t_SimpleVectorValueChecker::wrap_Object(const SimpleVectorValueChecker& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleVectorValueChecker::wrap_Object(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleVectorValueChecker *self = (t_SimpleVectorValueChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      PyObject *t_SimpleVectorValueChecker::wrap_jobject(const jobject& object, PyTypeObject *p0)
      {
        PyObject *obj = t_SimpleVectorValueChecker::wrap_jobject(object);
        if (obj != NULL && obj != Py_None)
        {
          t_SimpleVectorValueChecker *self = (t_SimpleVectorValueChecker *) obj;
          self->parameters[0] = p0;
        }
        return obj;
      }

      void t_SimpleVectorValueChecker::install(PyObject *module)
      {
        installType(&PY_TYPE(SimpleVectorValueChecker), &PY_TYPE_DEF(SimpleVectorValueChecker), module, "SimpleVectorValueChecker", 0);
      }

      void t_SimpleVectorValueChecker::initialize(PyObject *module)
      {
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleVectorValueChecker), "class_", make_descriptor(SimpleVectorValueChecker::initializeClass, 1));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleVectorValueChecker), "wrapfn_", make_descriptor(t_SimpleVectorValueChecker::wrap_jobject));
        PyObject_SetAttrString((PyObject *) PY_TYPE(SimpleVectorValueChecker), "boxfn_", make_descriptor(boxObject));
      }

      static PyObject *t_SimpleVectorValueChecker_cast_(PyTypeObject *type, PyObject *arg)
      {
        if (!(arg = castCheck(arg, SimpleVectorValueChecker::initializeClass, 1)))
          return NULL;
        return t_SimpleVectorValueChecker::wrap_Object(SimpleVectorValueChecker(((t_SimpleVectorValueChecker *) arg)->object.this$));
      }
      static PyObject *t_SimpleVectorValueChecker_instance_(PyTypeObject *type, PyObject *arg)
      {
        if (!castCheck(arg, SimpleVectorValueChecker::initializeClass, 0))
          Py_RETURN_FALSE;
        Py_RETURN_TRUE;
      }

      static PyObject *t_SimpleVectorValueChecker_of_(t_SimpleVectorValueChecker *self, PyObject *args)
      {
        if (!parseArg(args, "T", 1, &(self->parameters)))
          Py_RETURN_SELF;
        return PyErr_SetArgsError((PyObject *) self, "of_", args);
      }

      static int t_SimpleVectorValueChecker_init_(t_SimpleVectorValueChecker *self, PyObject *args, PyObject *kwds)
      {
        switch (PyTuple_GET_SIZE(args)) {
         case 2:
          {
            jdouble a0;
            jdouble a1;
            SimpleVectorValueChecker object((jobject) NULL);

            if (!parseArgs(args, "DD", &a0, &a1))
            {
              INT_CALL(object = SimpleVectorValueChecker(a0, a1));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointVectorValuePair);
              break;
            }
          }
          goto err;
         case 3:
          {
            jdouble a0;
            jdouble a1;
            jint a2;
            SimpleVectorValueChecker object((jobject) NULL);

            if (!parseArgs(args, "DDI", &a0, &a1, &a2))
            {
              INT_CALL(object = SimpleVectorValueChecker(a0, a1, a2));
              self->object = object;
              self->parameters[0] = ::org::hipparchus::optim::PY_TYPE(PointVectorValuePair);
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

      static PyObject *t_SimpleVectorValueChecker_converged(t_SimpleVectorValueChecker *self, PyObject *args)
      {
        jint a0;
        ::org::hipparchus::optim::PointVectorValuePair a1((jobject) NULL);
        PyTypeObject **p1;
        ::org::hipparchus::optim::PointVectorValuePair a2((jobject) NULL);
        PyTypeObject **p2;
        jboolean result;

        if (!parseArgs(args, "IKK", ::org::hipparchus::optim::PointVectorValuePair::initializeClass, ::org::hipparchus::optim::PointVectorValuePair::initializeClass, &a0, &a1, &p1, ::org::hipparchus::optim::t_PointVectorValuePair::parameters_, &a2, &p2, ::org::hipparchus::optim::t_PointVectorValuePair::parameters_))
        {
          OBJ_CALL(result = self->object.converged(a0, a1, a2));
          Py_RETURN_BOOL(result);
        }

        return callSuper(PY_TYPE(SimpleVectorValueChecker), (PyObject *) self, "converged", args, 2);
      }
      static PyObject *t_SimpleVectorValueChecker_get__parameters_(t_SimpleVectorValueChecker *self, void *data)
      {
        return typeParameters(self->parameters, sizeof(self->parameters));
      }
    }
  }
}
#include <jni.h>
#include "JCCEnv.h"
#include "org/orekit/propagation/events/handlers/FieldEventHandler.h"
#include "org/hipparchus/ode/events/Action.h"
#include "java/lang/Class.h"
#include "org/orekit/propagation/FieldSpacecraftState.h"
#include "org/orekit/time/FieldAbsoluteDate.h"
#include "org/orekit/propagation/events/FieldEventDetector.h"
#include "JArray.h"

namespace org {
  namespace orekit {
    namespace propagation {
      namespace events {
        namespace handlers {

          ::java::lang::Class *FieldEventHandler::class$ = NULL;
          jmethodID *FieldEventHandler::mids$ = NULL;
          bool FieldEventHandler::live$ = false;

          jclass FieldEventHandler::initializeClass(bool getOnly)
          {
            if (getOnly)
              return (jclass) (live$ ? class$->this$ : NULL);
            if (class$ == NULL)
            {
              jclass cls = (jclass) env->findClass("org/orekit/propagation/events/handlers/FieldEventHandler");

              mids$ = new jmethodID[max_mid];
              mids$[mid_eventOccurred_fc49a7ff6cb062a2] = env->getMethodID(cls, "eventOccurred", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/propagation/events/FieldEventDetector;Z)Lorg/hipparchus/ode/events/Action;");
              mids$[mid_init_cb6b7da7e22b633e] = env->getMethodID(cls, "init", "(Lorg/orekit/propagation/FieldSpacecraftState;Lorg/orekit/time/FieldAbsoluteDate;Lorg/orekit/propagation/events/FieldEventDetector;)V");
              mids$[mid_resetState_be16adf9d9d445bf] = env->getMethodID(cls, "resetState", "(Lorg/orekit/propagation/events/FieldEventDetector;Lorg/orekit/propagation/FieldSpacecraftState;)Lorg/orekit/propagation/FieldSpacecraftState;");

              class$ = new ::java::lang::Class(cls);
              live$ = true;
            }
            return (jclass) class$->this$;
          }

          ::org::hipparchus::ode::events::Action FieldEventHandler::eventOccurred(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::propagation::events::FieldEventDetector & a1, jboolean a2) const
          {
            return ::org::hipparchus::ode::events::Action(env->callObjectMethod(this$, mids$[mid_eventOccurred_fc49a7ff6cb062a2], a0.this$, a1.this$, a2));
          }

          void FieldEventHandler::init(const ::org::orekit::propagation::FieldSpacecraftState & a0, const ::org::orekit::time::FieldAbsoluteDate & a1, const ::org::orekit::propagation::events::FieldEventDetector & a2) const
          {
            env->callVoidMethod(this$, mids$[mid_init_cb6b7da7e22b633e], a0.this$, a1.this$, a2.this$);
          }

          ::org::orekit::propagation::FieldSpacecraftState FieldEventHandler::resetState(const ::org::orekit::propagation::events::FieldEventDetector & a0, const ::org::orekit::propagation::FieldSpacecraftState & a1) const
          {
            return ::org::orekit::propagation::FieldSpacecraftState(env->callObjectMethod(this$, mids$[mid_resetState_be16adf9d9d445bf], a0.this$, a1.this$));
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
          static PyObject *t_FieldEventHandler_cast_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldEventHandler_instance_(PyTypeObject *type, PyObject *arg);
          static PyObject *t_FieldEventHandler_of_(t_FieldEventHandler *self, PyObject *args);
          static PyObject *t_FieldEventHandler_eventOccurred(t_FieldEventHandler *self, PyObject *args);
          static PyObject *t_FieldEventHandler_init(t_FieldEventHandler *self, PyObject *args);
          static PyObject *t_FieldEventHandler_resetState(t_FieldEventHandler *self, PyObject *args);
          static PyObject *t_FieldEventHandler_get__parameters_(t_FieldEventHandler *self, void *data);
          static PyGetSetDef t_FieldEventHandler__fields_[] = {
            DECLARE_GET_FIELD(t_FieldEventHandler, parameters_),
            { NULL, NULL, NULL, NULL, NULL }
          };

          static PyMethodDef t_FieldEventHandler__methods_[] = {
            DECLARE_METHOD(t_FieldEventHandler, cast_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldEventHandler, instance_, METH_O | METH_CLASS),
            DECLARE_METHOD(t_FieldEventHandler, of_, METH_VARARGS),
            DECLARE_METHOD(t_FieldEventHandler, eventOccurred, METH_VARARGS),
            DECLARE_METHOD(t_FieldEventHandler, init, METH_VARARGS),
            DECLARE_METHOD(t_FieldEventHandler, resetState, METH_VARARGS),
            { NULL, NULL, 0, NULL }
          };

          static PyType_Slot PY_TYPE_SLOTS(FieldEventHandler)[] = {
            { Py_tp_methods, t_FieldEventHandler__methods_ },
            { Py_tp_init, (void *) abstract_init },
            { Py_tp_getset, t_FieldEventHandler__fields_ },
            { 0, NULL }
          };

          static PyType_Def *PY_TYPE_BASES(FieldEventHandler)[] = {
            &PY_TYPE_DEF(::java::lang::Object),
            NULL
          };

          DEFINE_TYPE(FieldEventHandler, t_FieldEventHandler, FieldEventHandler);
          PyObject *t_FieldEventHandler::wrap_Object(const FieldEventHandler& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldEventHandler::wrap_Object(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldEventHandler *self = (t_FieldEventHandler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          PyObject *t_FieldEventHandler::wrap_jobject(const jobject& object, PyTypeObject *p0)
          {
            PyObject *obj = t_FieldEventHandler::wrap_jobject(object);
            if (obj != NULL && obj != Py_None)
            {
              t_FieldEventHandler *self = (t_FieldEventHandler *) obj;
              self->parameters[0] = p0;
            }
            return obj;
          }

          void t_FieldEventHandler::install(PyObject *module)
          {
            installType(&PY_TYPE(FieldEventHandler), &PY_TYPE_DEF(FieldEventHandler), module, "FieldEventHandler", 0);
          }

          void t_FieldEventHandler::initialize(PyObject *module)
          {
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventHandler), "class_", make_descriptor(FieldEventHandler::initializeClass, 1));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventHandler), "wrapfn_", make_descriptor(t_FieldEventHandler::wrap_jobject));
            PyObject_SetAttrString((PyObject *) PY_TYPE(FieldEventHandler), "boxfn_", make_descriptor(boxObject));
          }

          static PyObject *t_FieldEventHandler_cast_(PyTypeObject *type, PyObject *arg)
          {
            if (!(arg = castCheck(arg, FieldEventHandler::initializeClass, 1)))
              return NULL;
            return t_FieldEventHandler::wrap_Object(FieldEventHandler(((t_FieldEventHandler *) arg)->object.this$));
          }
          static PyObject *t_FieldEventHandler_instance_(PyTypeObject *type, PyObject *arg)
          {
            if (!castCheck(arg, FieldEventHandler::initializeClass, 0))
              Py_RETURN_FALSE;
            Py_RETURN_TRUE;
          }

          static PyObject *t_FieldEventHandler_of_(t_FieldEventHandler *self, PyObject *args)
          {
            if (!parseArg(args, "T", 1, &(self->parameters)))
              Py_RETURN_SELF;
            return PyErr_SetArgsError((PyObject *) self, "of_", args);
          }

          static PyObject *t_FieldEventHandler_eventOccurred(t_FieldEventHandler *self, PyObject *args)
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

          static PyObject *t_FieldEventHandler_init(t_FieldEventHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::FieldSpacecraftState a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::time::FieldAbsoluteDate a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::propagation::events::FieldEventDetector a2((jobject) NULL);
            PyTypeObject **p2;

            if (!parseArgs(args, "KKK", ::org::orekit::propagation::FieldSpacecraftState::initializeClass, ::org::orekit::time::FieldAbsoluteDate::initializeClass, ::org::orekit::propagation::events::FieldEventDetector::initializeClass, &a0, &p0, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_, &a1, &p1, ::org::orekit::time::t_FieldAbsoluteDate::parameters_, &a2, &p2, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_))
            {
              OBJ_CALL(self->object.init(a0, a1, a2));
              Py_RETURN_NONE;
            }

            PyErr_SetArgsError((PyObject *) self, "init", args);
            return NULL;
          }

          static PyObject *t_FieldEventHandler_resetState(t_FieldEventHandler *self, PyObject *args)
          {
            ::org::orekit::propagation::events::FieldEventDetector a0((jobject) NULL);
            PyTypeObject **p0;
            ::org::orekit::propagation::FieldSpacecraftState a1((jobject) NULL);
            PyTypeObject **p1;
            ::org::orekit::propagation::FieldSpacecraftState result((jobject) NULL);

            if (!parseArgs(args, "KK", ::org::orekit::propagation::events::FieldEventDetector::initializeClass, ::org::orekit::propagation::FieldSpacecraftState::initializeClass, &a0, &p0, ::org::orekit::propagation::events::t_FieldEventDetector::parameters_, &a1, &p1, ::org::orekit::propagation::t_FieldSpacecraftState::parameters_))
            {
              OBJ_CALL(result = self->object.resetState(a0, a1));
              return ::org::orekit::propagation::t_FieldSpacecraftState::wrap_Object(result, self->parameters[0]);
            }

            PyErr_SetArgsError((PyObject *) self, "resetState", args);
            return NULL;
          }
          static PyObject *t_FieldEventHandler_get__parameters_(t_FieldEventHandler *self, void *data)
          {
            return typeParameters(self->parameters, sizeof(self->parameters));
          }
        }
      }
    }
  }
}
